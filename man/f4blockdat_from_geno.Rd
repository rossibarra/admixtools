% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/io.R
\name{f4blockdat_from_geno}
\alias{f4blockdat_from_geno}
\title{f4 from genotype data}
\usage{
f4blockdat_from_geno(
  pref,
  popcombs = NULL,
  left = NULL,
  right = NULL,
  auto_only = TRUE,
  blgsize = 0.05,
  block_lengths = NULL,
  f4mode = TRUE,
  allsnps = FALSE,
  poly_only = FALSE,
  verbose = TRUE,
  snpwt = NULL,
  ...
)
}
\arguments{
\item{pref}{Prefix of genotype files}

\item{popcombs}{A data frame with one population combination per row, and columns \code{pop1}, \code{pop2}, \code{pop3}, \code{pop4}. If there is an additional integer column named \code{model} and \code{allsnps = FALSE}, only SNPs present in every population in any given model will be used to compute f4-statistics for that model.}

\item{left}{Populations on the left side of f4 (\code{pop1} and \code{pop2}). Can be provided together with \code{right} in place of \code{popcombs}.}

\item{right}{Populations on the right side of f4 (\code{pop3} and \code{pop4}). Can be provided together with \code{left} in place of \code{popcombs}.}

\item{auto_only}{Use only chromosomes 1 to 22.}

\item{blgsize}{SNP block size in Morgan. Default is 0.05 (50 cM). If \code{blgsize} is 100 or greater, if will be interpreted as base pair distance rather than centimorgan distance.}

\item{block_lengths}{An optional vector with block lengths. If \code{NULL}, block lengths will be computed.}

\item{f4mode}{If \code{TRUE}: f4 is computed from allele frequencies \code{a}, \code{b}, \code{c}, and \code{d} as \code{(a-b)*(c-d)}. if \code{FALSE}, D-statistics are computed instead, defined as \code{(a-b)*(c-d) / ((a + b - 2*a*b) * (c + d - 2*c*d))}, which is the same as \code{(P(ABBA) - P(BABA)) / (P(ABBA) + P(BABA))}.}

\item{allsnps}{Use all SNPs with allele frequency estimates in every population of any given population quadruple. If \code{FALSE} (the default) only SNPs which are present in all populations in \code{popcombs} (or any given model in it) will be used. Setting \code{allsnps = TRUE} in the presence of large amounts of missing data might lead to false positive results.}

\item{verbose}{Print progress updates}
}
\value{
A data frame with per-block f4-statistics for each population quadruple.
}
\description{
Compute per-block f4-statistics directly from genotype data
}
