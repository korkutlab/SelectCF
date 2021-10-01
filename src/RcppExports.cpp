// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// SelectCF_getuw_lasso
List SelectCF_getuw_lasso(NumericMatrix ds_, NumericVector wbounds_, int max_iter, bool init_random, bool silent, bool warm_start);
RcppExport SEXP _SelectCF_SelectCF_getuw_lasso(SEXP ds_SEXP, SEXP wbounds_SEXP, SEXP max_iterSEXP, SEXP init_randomSEXP, SEXP silentSEXP, SEXP warm_startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ds_(ds_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wbounds_(wbounds_SEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type init_random(init_randomSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    Rcpp::traits::input_parameter< bool >::type warm_start(warm_startSEXP);
    rcpp_result_gen = Rcpp::wrap(SelectCF_getuw_lasso(ds_, wbounds_, max_iter, init_random, silent, warm_start));
    return rcpp_result_gen;
END_RCPP
}
// SelectCF_getuw_lasso_lagrange
List SelectCF_getuw_lasso_lagrange(NumericMatrix ds_, NumericVector lambdas_, int max_iter, bool init_random, bool silent, bool warm_start);
RcppExport SEXP _SelectCF_SelectCF_getuw_lasso_lagrange(SEXP ds_SEXP, SEXP lambdas_SEXP, SEXP max_iterSEXP, SEXP init_randomSEXP, SEXP silentSEXP, SEXP warm_startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ds_(ds_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambdas_(lambdas_SEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type init_random(init_randomSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    Rcpp::traits::input_parameter< bool >::type warm_start(warm_startSEXP);
    rcpp_result_gen = Rcpp::wrap(SelectCF_getuw_lasso_lagrange(ds_, lambdas_, max_iter, init_random, silent, warm_start));
    return rcpp_result_gen;
END_RCPP
}
// SelectCF_getuw_fl
List SelectCF_getuw_fl(NumericMatrix ds_, NumericVector lambda1s_, NumericVector lambda2s_, int max_iter, bool init_random, bool silent);
RcppExport SEXP _SelectCF_SelectCF_getuw_fl(SEXP ds_SEXP, SEXP lambda1s_SEXP, SEXP lambda2s_SEXP, SEXP max_iterSEXP, SEXP init_randomSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ds_(ds_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda1s_(lambda1s_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda2s_(lambda2s_SEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type init_random(init_randomSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    rcpp_result_gen = Rcpp::wrap(SelectCF_getuw_fl(ds_, lambda1s_, lambda2s_, max_iter, init_random, silent));
    return rcpp_result_gen;
END_RCPP
}
// SelectCF_getuw_ssl
List SelectCF_getuw_ssl(NumericMatrix ds_, CharacterVector penalty_, double lambda1, NumericVector lambda0s_, double theta, double aa, double bb, double eps, int max_iter, bool init_random, bool silent, bool warm_start);
RcppExport SEXP _SelectCF_SelectCF_getuw_ssl(SEXP ds_SEXP, SEXP penalty_SEXP, SEXP lambda1SEXP, SEXP lambda0s_SEXP, SEXP thetaSEXP, SEXP aaSEXP, SEXP bbSEXP, SEXP epsSEXP, SEXP max_iterSEXP, SEXP init_randomSEXP, SEXP silentSEXP, SEXP warm_startSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ds_(ds_SEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type penalty_(penalty_SEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda0s_(lambda0s_SEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type aa(aaSEXP);
    Rcpp::traits::input_parameter< double >::type bb(bbSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< bool >::type init_random(init_randomSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    Rcpp::traits::input_parameter< bool >::type warm_start(warm_startSEXP);
    rcpp_result_gen = Rcpp::wrap(SelectCF_getuw_ssl(ds_, penalty_, lambda1, lambda0s_, theta, aa, bb, eps, max_iter, init_random, silent, warm_start));
    return rcpp_result_gen;
END_RCPP
}
// SelectCF_get_crit
List SelectCF_get_crit(NumericMatrix ds_, NumericVector w_);
RcppExport SEXP _SelectCF_SelectCF_get_crit(SEXP ds_SEXP, SEXP w_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ds_(ds_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w_(w_SEXP);
    rcpp_result_gen = Rcpp::wrap(SelectCF_get_crit(ds_, w_));
    return rcpp_result_gen;
END_RCPP
}
// SelectCF_get_u
List SelectCF_get_u(NumericMatrix ds_, NumericVector w_);
RcppExport SEXP _SelectCF_SelectCF_get_u(SEXP ds_SEXP, SEXP w_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ds_(ds_SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w_(w_SEXP);
    rcpp_result_gen = Rcpp::wrap(SelectCF_get_u(ds_, w_));
    return rcpp_result_gen;
END_RCPP
}
// get_outliers_from_dist
List get_outliers_from_dist(NumericMatrix dist_, int loop_k, double loop_lambda, double loop_threshold, bool outlier_on);
RcppExport SEXP _SelectCF_get_outliers_from_dist(SEXP dist_SEXP, SEXP loop_kSEXP, SEXP loop_lambdaSEXP, SEXP loop_thresholdSEXP, SEXP outlier_onSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dist_(dist_SEXP);
    Rcpp::traits::input_parameter< int >::type loop_k(loop_kSEXP);
    Rcpp::traits::input_parameter< double >::type loop_lambda(loop_lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type loop_threshold(loop_thresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type outlier_on(outlier_onSEXP);
    rcpp_result_gen = Rcpp::wrap(get_outliers_from_dist(dist_, loop_k, loop_lambda, loop_threshold, outlier_on));
    return rcpp_result_gen;
END_RCPP
}
// get_outliers_from_ds
List get_outliers_from_ds(NumericMatrix ds_, int loop_k, double loop_lambda, double loop_threshold, bool outlier_on);
RcppExport SEXP _SelectCF_get_outliers_from_ds(SEXP ds_SEXP, SEXP loop_kSEXP, SEXP loop_lambdaSEXP, SEXP loop_thresholdSEXP, SEXP outlier_onSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ds_(ds_SEXP);
    Rcpp::traits::input_parameter< int >::type loop_k(loop_kSEXP);
    Rcpp::traits::input_parameter< double >::type loop_lambda(loop_lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type loop_threshold(loop_thresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type outlier_on(outlier_onSEXP);
    rcpp_result_gen = Rcpp::wrap(get_outliers_from_ds(ds_, loop_k, loop_lambda, loop_threshold, outlier_on));
    return rcpp_result_gen;
END_RCPP
}
// multfun
IntegerMatrix multfun(IntegerMatrix x_);
RcppExport SEXP _SelectCF_multfun(SEXP x_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x_(x_SEXP);
    rcpp_result_gen = Rcpp::wrap(multfun(x_));
    return rcpp_result_gen;
END_RCPP
}
// distfun
NumericMatrix distfun(NumericMatrix x_);
RcppExport SEXP _SelectCF_distfun(SEXP x_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x_(x_SEXP);
    rcpp_result_gen = Rcpp::wrap(distfun(x_));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SelectCF_SelectCF_getuw_lasso", (DL_FUNC) &_SelectCF_SelectCF_getuw_lasso, 6},
    {"_SelectCF_SelectCF_getuw_lasso_lagrange", (DL_FUNC) &_SelectCF_SelectCF_getuw_lasso_lagrange, 6},
    {"_SelectCF_SelectCF_getuw_fl", (DL_FUNC) &_SelectCF_SelectCF_getuw_fl, 6},
    {"_SelectCF_SelectCF_getuw_ssl", (DL_FUNC) &_SelectCF_SelectCF_getuw_ssl, 12},
    {"_SelectCF_SelectCF_get_crit", (DL_FUNC) &_SelectCF_SelectCF_get_crit, 2},
    {"_SelectCF_SelectCF_get_u", (DL_FUNC) &_SelectCF_SelectCF_get_u, 2},
    {"_SelectCF_get_outliers_from_dist", (DL_FUNC) &_SelectCF_get_outliers_from_dist, 5},
    {"_SelectCF_get_outliers_from_ds", (DL_FUNC) &_SelectCF_get_outliers_from_ds, 5},
    {"_SelectCF_multfun", (DL_FUNC) &_SelectCF_multfun, 1},
    {"_SelectCF_distfun", (DL_FUNC) &_SelectCF_distfun, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_SelectCF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
