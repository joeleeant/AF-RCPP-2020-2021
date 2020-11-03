// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getArithmeticAsianCallPrice
double getArithmeticAsianCallPrice(int nInt, double Strike, double Spot, double Vol, double Rfr, double Expiry, int nReps);
RcppExport SEXP _optionPricer2_getArithmeticAsianCallPrice(SEXP nIntSEXP, SEXP StrikeSEXP, SEXP SpotSEXP, SEXP VolSEXP, SEXP RfrSEXP, SEXP ExpirySEXP, SEXP nRepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nInt(nIntSEXP);
    Rcpp::traits::input_parameter< double >::type Strike(StrikeSEXP);
    Rcpp::traits::input_parameter< double >::type Spot(SpotSEXP);
    Rcpp::traits::input_parameter< double >::type Vol(VolSEXP);
    Rcpp::traits::input_parameter< double >::type Rfr(RfrSEXP);
    Rcpp::traits::input_parameter< double >::type Expiry(ExpirySEXP);
    Rcpp::traits::input_parameter< int >::type nReps(nRepsSEXP);
    rcpp_result_gen = Rcpp::wrap(getArithmeticAsianCallPrice(nInt, Strike, Spot, Vol, Rfr, Expiry, nReps));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _optionPricer2_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_optionPricer2_getArithmeticAsianCallPrice", (DL_FUNC) &_optionPricer2_getArithmeticAsianCallPrice, 7},
    {"_optionPricer2_rcpp_hello_world", (DL_FUNC) &_optionPricer2_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_optionPricer2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
