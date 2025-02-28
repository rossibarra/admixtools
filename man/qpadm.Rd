% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/qpadm.R
\name{qpadm}
\alias{qpadm}
\title{Estimate admixture weights}
\usage{
qpadm(
  data,
  left,
  right,
  target,
  f4blocks = NULL,
  fudge = 1e-04,
  fudge_twice = FALSE,
  boot = FALSE,
  getcov = TRUE,
  constrained = FALSE,
  cpp = TRUE,
  verbose = TRUE,
  ...
)
}
\arguments{
\item{data}{The input data in the form of:
\itemize{
\item A 3d array of blocked f2 statistics, output of \code{\link{f2_from_precomp}} or \code{\link{extract_f2}}
\item A directory with f2 statistics
\item The prefix of a genotype file
}}

\item{left}{Left populations (sources)}

\item{right}{Right populations (outgroups)}

\item{target}{Target population}

\item{f4blocks}{Instead of f2 blocks, f4 blocks can be supplied. This is used by \code{\link{qpadm_multi}}}

\item{fudge}{Value added to diagonal matrix elements before inverting}

\item{fudge_twice}{Setting this to \code{TRUE} should result in p-values that better match those in the original qpAdm program}

\item{boot}{If \code{FALSE} (the default), block-jackknife resampling will be used to compute standard errors.
Otherwise, block-bootstrap resampling will be used to compute standard errors. If \code{boot} is an integer, that number
will specify the number of bootstrap resamplings. If \code{boot = TRUE}, the number of bootstrap resamplings will be
equal to the number of SNP blocks.}

\item{getcov}{Compute weights covariance. Setting \code{getcov = FALSE} will speed up the computation.}

\item{constrained}{Constrain admixture weights to be non-negative}

\item{cpp}{Use C++ functions. Setting this to \code{FALSE} will be slower but can help with debugging.}

\item{verbose}{Print progress updates}

\item{...}{If \code{data} is the prefix of genotype files, additional arguments will be passed to \code{\link{f4blockdat_from_geno}}}
}
\value{
\code{qpadm} returns a list with up to four data frames describing the model fit:
\enumerate{
\item \code{weights}: A data frame with estimated admixture proportions where each row is a left population.
\item \code{f4}: A data frame with estimated and fitted f4-statistics
\item \code{rankdrop}: A data frame describing model fits with different ranks, including \emph{p}-values for the overall fit
and for nested models (comparing two models with rank difference of one). A model with \code{L} left populations and \code{R} right populations has an f4-matrix of dimensions \code{(L-1)*(R-1)}. If no two left population form a clade with respect to all right populations, this model will have rank \code{(L-1)*(R-1)}.
\itemize{
\item \code{f4rank}: Tested rank
\item \code{dof}: Degrees of freedom of the chi-squared null distribution: \code{(L-1-f4rank)*(R-1-f4rank)}
\item \code{chisq}: Chi-sqaured statistic, obtained as \verb{E'QE}, where \code{E} is the difference between estimated and fitted f4-statistics, and \code{Q} is the f4-statistic covariance matrix.
\item \code{p}: p-value obtained from \code{chisq} as \code{pchisq(chisq, df = dof, lower.tail = FALSE)}
\item \code{dofdiff}: Difference in degrees of freedom between this model and the model with one less rank
\item \code{chisqdiff}: Difference in chi-squared statistics
\item \code{p_nested}: \emph{p}-value testing whether the difference between two models of rank difference 1 is significant
}
\item \code{popdrop}: A data frame describing model fits with different populations. Note that all models with fewer populations use the same set of SNPs as the first model.
\itemize{
\item \code{pat}: A binary code indicating which populations are present in this model. A \code{1} represents dropped populations. The full model is all zeros.
\item \code{wt}: Number of populations dropped
\item \code{dof}: Degrees of freedom of the chi-squared null distribution: \code{(L-1-f4rank)*(R-1-f4rank)}
\item \code{chisq}: Chi-sqaured statistic, obtained as \verb{E'QE}, where \code{E} is the difference between estimated and fitted f4-statistics, and \code{Q} is the f4-statistic covariance matrix.
\item \code{p}: \emph{p}-value obtained from \code{chisq} as \code{pchisq(chisq, df = dof, lower.tail = FALSE)}
\item \code{f4rank}: Tested rank
\item \code{feasible}: A model is feasible if all weights fall between 0 and 1
\item \verb{<population name>}: The weights for each population in this model
}
}
}
\description{
\code{qpadm} models a target population as a mixture of left (source) populations, given a set of right (outgroup) populations.
It can be used to estimate whether the left populations explain all genetic variation in the target population, relative to the right populations, and to estimate admixture proportions of the left populations to the target population.
}
\examples{
left = c('Altai_Neanderthal.DG', 'Vindija.DG')
right = c('Chimp.REF', 'Mbuti.DG', 'Russia_Ust_Ishim.DG', 'Switzerland_Bichon.SG')
target = 'Denisova.DG'
qpadm(example_f2_blocks, left, right, target)
\dontrun{
# The original ADMIXTOOLS qpAadm program has an option called "allsnps"
# that selects different SNPs for each f4-statistic, which is
# useful when working with sparse genotype data.
# To get the same behavior in ADMIXTOOLS 2, supply the genotype data prefix
# and set `allsnps = TRUE`
qpadm("/my/geno/prefix", left, right, target, allsnps = TRUE)
}
}
\references{
Haak, W. et al. (2015) \emph{Massive migration from the steppe was a source for Indo-European
languages in Europe.} Nature (SI 10)
}
\seealso{
\code{\link{qpwave}}, \code{\link{lazadm}}
}
