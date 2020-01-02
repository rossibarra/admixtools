// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// read_plink_afs_cpp
List read_plink_afs_cpp(String bedfile, const NumericVector indvec, const NumericVector indvec2, bool verbose);
RcppExport SEXP _admixtools_read_plink_afs_cpp(SEXP bedfileSEXP, SEXP indvecSEXP, SEXP indvec2SEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type bedfile(bedfileSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type indvec(indvecSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type indvec2(indvec2SEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(read_plink_afs_cpp(bedfile, indvec, indvec2, verbose));
    return rcpp_result_gen;
END_RCPP
}
// cpp_opt_A
arma::mat cpp_opt_A(const arma::mat& B, const arma::mat& xvec, const arma::mat& qinv, int nr, double fudge);
RcppExport SEXP _admixtools_cpp_opt_A(SEXP BSEXP, SEXP xvecSEXP, SEXP qinvSEXP, SEXP nrSEXP, SEXP fudgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type xvec(xvecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qinv(qinvSEXP);
    Rcpp::traits::input_parameter< int >::type nr(nrSEXP);
    Rcpp::traits::input_parameter< double >::type fudge(fudgeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_opt_A(B, xvec, qinv, nr, fudge));
    return rcpp_result_gen;
END_RCPP
}
// cpp_opt_B
arma::mat cpp_opt_B(const arma::mat& A, const arma::vec& xvec, const arma::mat& qinv, int nc, double fudge);
RcppExport SEXP _admixtools_cpp_opt_B(SEXP ASEXP, SEXP xvecSEXP, SEXP qinvSEXP, SEXP ncSEXP, SEXP fudgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type xvec(xvecSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qinv(qinvSEXP);
    Rcpp::traits::input_parameter< int >::type nc(ncSEXP);
    Rcpp::traits::input_parameter< double >::type fudge(fudgeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_opt_B(A, xvec, qinv, nc, fudge));
    return rcpp_result_gen;
END_RCPP
}
// cpp_qpadm_weights
arma::vec cpp_qpadm_weights(const arma::mat& xmat, const arma::mat& qinv, int rnk, double fudge, int iterations);
RcppExport SEXP _admixtools_cpp_qpadm_weights(SEXP xmatSEXP, SEXP qinvSEXP, SEXP rnkSEXP, SEXP fudgeSEXP, SEXP iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type xmat(xmatSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qinv(qinvSEXP);
    Rcpp::traits::input_parameter< int >::type rnk(rnkSEXP);
    Rcpp::traits::input_parameter< double >::type fudge(fudgeSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_qpadm_weights(xmat, qinv, rnk, fudge, iterations));
    return rcpp_result_gen;
END_RCPP
}
// cpp_get_weights_covariance
arma::mat cpp_get_weights_covariance(arma::cube f4_blocks, arma::mat qinv, double fudge);
RcppExport SEXP _admixtools_cpp_get_weights_covariance(SEXP f4_blocksSEXP, SEXP qinvSEXP, SEXP fudgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type f4_blocks(f4_blocksSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type qinv(qinvSEXP);
    Rcpp::traits::input_parameter< double >::type fudge(fudgeSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_get_weights_covariance(f4_blocks, qinv, fudge));
    return rcpp_result_gen;
END_RCPP
}
// cpp_opt_edge_lengths
arma::vec cpp_opt_edge_lengths(const arma::mat& ppwts_2d, const arma::mat& ppinv, const arma::vec& f3_jest, Function qpsolve);
RcppExport SEXP _admixtools_cpp_opt_edge_lengths(SEXP ppwts_2dSEXP, SEXP ppinvSEXP, SEXP f3_jestSEXP, SEXP qpsolveSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type ppwts_2d(ppwts_2dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type ppinv(ppinvSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type f3_jest(f3_jestSEXP);
    Rcpp::traits::input_parameter< Function >::type qpsolve(qpsolveSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_opt_edge_lengths(ppwts_2d, ppinv, f3_jest, qpsolve));
    return rcpp_result_gen;
END_RCPP
}
// cpp_fill_pwts
arma::mat cpp_fill_pwts(arma::mat& pwts, const arma::vec& weights, const arma::mat& path_edge_table, const arma::mat& path_admixedge_table, int numpaths);
RcppExport SEXP _admixtools_cpp_fill_pwts(SEXP pwtsSEXP, SEXP weightsSEXP, SEXP path_edge_tableSEXP, SEXP path_admixedge_tableSEXP, SEXP numpathsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type pwts(pwtsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type path_edge_table(path_edge_tableSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type path_admixedge_table(path_admixedge_tableSEXP);
    Rcpp::traits::input_parameter< int >::type numpaths(numpathsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_fill_pwts(pwts, weights, path_edge_table, path_admixedge_table, numpaths));
    return rcpp_result_gen;
END_RCPP
}
// cpp_optimweightsfun
double cpp_optimweightsfun(arma::vec weights, List args);
RcppExport SEXP _admixtools_cpp_optimweightsfun(SEXP weightsSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_optimweightsfun(weights, args));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_admixtools_read_plink_afs_cpp", (DL_FUNC) &_admixtools_read_plink_afs_cpp, 4},
    {"_admixtools_cpp_opt_A", (DL_FUNC) &_admixtools_cpp_opt_A, 5},
    {"_admixtools_cpp_opt_B", (DL_FUNC) &_admixtools_cpp_opt_B, 5},
    {"_admixtools_cpp_qpadm_weights", (DL_FUNC) &_admixtools_cpp_qpadm_weights, 5},
    {"_admixtools_cpp_get_weights_covariance", (DL_FUNC) &_admixtools_cpp_get_weights_covariance, 3},
    {"_admixtools_cpp_opt_edge_lengths", (DL_FUNC) &_admixtools_cpp_opt_edge_lengths, 4},
    {"_admixtools_cpp_fill_pwts", (DL_FUNC) &_admixtools_cpp_fill_pwts, 5},
    {"_admixtools_cpp_optimweightsfun", (DL_FUNC) &_admixtools_cpp_optimweightsfun, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_admixtools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
