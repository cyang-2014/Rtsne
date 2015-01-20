// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Rtsne_cpp
Rcpp::List Rtsne_cpp(SEXP X_in, int no_dims_in, double perplexity_in, double theta_in, bool verbose);
RcppExport SEXP Rtsne_Rtsne_cpp(SEXP X_inSEXP, SEXP no_dims_inSEXP, SEXP perplexity_inSEXP, SEXP theta_inSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type X_in(X_inSEXP );
        Rcpp::traits::input_parameter< int >::type no_dims_in(no_dims_inSEXP );
        Rcpp::traits::input_parameter< double >::type perplexity_in(perplexity_inSEXP );
        Rcpp::traits::input_parameter< double >::type theta_in(theta_inSEXP );
        Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP );
        Rcpp::List __result = Rtsne_cpp(X_in, no_dims_in, perplexity_in, theta_in, verbose);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
