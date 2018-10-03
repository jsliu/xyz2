// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// order_vector
IntegerVector order_vector(NumericVector x, bool decreasing);
RcppExport SEXP _xyz_order_vector(SEXP xSEXP, SEXP decreasingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type decreasing(decreasingSEXP);
    rcpp_result_gen = Rcpp::wrap(order_vector(x, decreasing));
    return rcpp_result_gen;
END_RCPP
}
// sort_using_order_numvec
void sort_using_order_numvec(NumericVector x, const IntegerVector& x_o);
RcppExport SEXP _xyz_sort_using_order_numvec(SEXP xSEXP, SEXP x_oSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type x_o(x_oSEXP);
    sort_using_order_numvec(x, x_o);
    return R_NilValue;
END_RCPP
}
// sort_using_order_intmat
void sort_using_order_intmat(IntegerMatrix x, const IntegerVector x_o);
RcppExport SEXP _xyz_sort_using_order_intmat(SEXP xSEXP, SEXP x_oSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type x_o(x_oSEXP);
    sort_using_order_intmat(x, x_o);
    return R_NilValue;
END_RCPP
}
// sample_uniform
IntegerVector sample_uniform(int range, int n);
RcppExport SEXP _xyz_sample_uniform(SEXP rangeSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type range(rangeSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_uniform(range, n));
    return rcpp_result_gen;
END_RCPP
}
// sample_int_replace
IntegerVector sample_int_replace(NumericVector probabilities, int n);
RcppExport SEXP _xyz_sample_int_replace(SEXP probabilitiesSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type probabilities(probabilitiesSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_int_replace(probabilities, n));
    return rcpp_result_gen;
END_RCPP
}
// prod_matrix_vector
NumericMatrix prod_matrix_vector(IntegerMatrix X, NumericVector r);
RcppExport SEXP _xyz_prod_matrix_vector(SEXP XSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(prod_matrix_vector(X, r));
    return rcpp_result_gen;
END_RCPP
}
// colsum_index
NumericVector colsum_index(NumericMatrix X, IntegerVector indexes);
RcppExport SEXP _xyz_colsum_index(SEXP XSEXP, SEXP indexesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indexes(indexesSEXP);
    rcpp_result_gen = Rcpp::wrap(colsum_index(X, indexes));
    return rcpp_result_gen;
END_RCPP
}
// absolute_covariates
NumericVector absolute_covariates(NumericMatrix X, NumericVector Y, NumericVector weights);
RcppExport SEXP _xyz_absolute_covariates(SEXP XSEXP, SEXP YSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(absolute_covariates(X, Y, weights));
    return rcpp_result_gen;
END_RCPP
}
// absolute_covariates_pairs
NumericVector absolute_covariates_pairs(IntegerMatrix pairs, NumericMatrix X, NumericVector Y, NumericVector weights);
RcppExport SEXP _xyz_absolute_covariates_pairs(SEXP pairsSEXP, SEXP XSEXP, SEXP YSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type pairs(pairsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    rcpp_result_gen = Rcpp::wrap(absolute_covariates_pairs(pairs, X, Y, weights));
    return rcpp_result_gen;
END_RCPP
}
// clean_pairs
IntegerMatrix clean_pairs(IntegerMatrix pairs);
RcppExport SEXP _xyz_clean_pairs(SEXP pairsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type pairs(pairsSEXP);
    rcpp_result_gen = Rcpp::wrap(clean_pairs(pairs));
    return rcpp_result_gen;
END_RCPP
}
// translate_to_binary
IntegerMatrix translate_to_binary(NumericMatrix X, int max_number_of_iterations);
RcppExport SEXP _xyz_translate_to_binary(SEXP XSEXP, SEXP max_number_of_iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type max_number_of_iterations(max_number_of_iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(translate_to_binary(X, max_number_of_iterations));
    return rcpp_result_gen;
END_RCPP
}
// estimate_background_interaction_frequency
NumericVector estimate_background_interaction_frequency(IntegerMatrix X, IntegerVector Y, int number_of_samples);
RcppExport SEXP _xyz_estimate_background_interaction_frequency(SEXP XSEXP, SEXP YSEXP, SEXP number_of_samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_samples(number_of_samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_background_interaction_frequency(X, Y, number_of_samples));
    return rcpp_result_gen;
END_RCPP
}
// find_strongest_pairs
List find_strongest_pairs(List pairs, NumericMatrix X, NumericVector Y, NumericVector weights, int max_number_of_pairs);
RcppExport SEXP _xyz_find_strongest_pairs(SEXP pairsSEXP, SEXP XSEXP, SEXP YSEXP, SEXP weightsSEXP, SEXP max_number_of_pairsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pairs(pairsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type max_number_of_pairs(max_number_of_pairsSEXP);
    rcpp_result_gen = Rcpp::wrap(find_strongest_pairs(pairs, X, Y, weights, max_number_of_pairs));
    return rcpp_result_gen;
END_RCPP
}
// equalpairs
IntegerMatrix equalpairs(NumericVector u, NumericVector v, IntegerVector ou, IntegerVector ov, int max_number_of_pairs);
RcppExport SEXP _xyz_equalpairs(SEXP uSEXP, SEXP vSEXP, SEXP ouSEXP, SEXP ovSEXP, SEXP max_number_of_pairsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type u(uSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ou(ouSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ov(ovSEXP);
    Rcpp::traits::input_parameter< int >::type max_number_of_pairs(max_number_of_pairsSEXP);
    rcpp_result_gen = Rcpp::wrap(equalpairs(u, v, ou, ov, max_number_of_pairs));
    return rcpp_result_gen;
END_RCPP
}
// projected_equal_pairs
List projected_equal_pairs(IntegerMatrix X, NumericVector Y, int number_of_runs, int max_number_of_collisions, bool negative);
RcppExport SEXP _xyz_projected_equal_pairs(SEXP XSEXP, SEXP YSEXP, SEXP number_of_runsSEXP, SEXP max_number_of_collisionsSEXP, SEXP negativeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_runs(number_of_runsSEXP);
    Rcpp::traits::input_parameter< int >::type max_number_of_collisions(max_number_of_collisionsSEXP);
    Rcpp::traits::input_parameter< bool >::type negative(negativeSEXP);
    rcpp_result_gen = Rcpp::wrap(projected_equal_pairs(X, Y, number_of_runs, max_number_of_collisions, negative));
    return rcpp_result_gen;
END_RCPP
}
// naive_interaction_search
List naive_interaction_search(NumericMatrix X, NumericVector Y, NumericVector weights, int max_number_of_pairs);
RcppExport SEXP _xyz_naive_interaction_search(SEXP XSEXP, SEXP YSEXP, SEXP weightsSEXP, SEXP max_number_of_pairsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type max_number_of_pairs(max_number_of_pairsSEXP);
    rcpp_result_gen = Rcpp::wrap(naive_interaction_search(X, Y, weights, max_number_of_pairs));
    return rcpp_result_gen;
END_RCPP
}
// interaction_search
List interaction_search(NumericMatrix X, NumericVector Y, NumericVector weights, int number_of_runs, int max_number_of_pairs, bool negative, bool binary);
RcppExport SEXP _xyz_interaction_search(SEXP XSEXP, SEXP YSEXP, SEXP weightsSEXP, SEXP number_of_runsSEXP, SEXP max_number_of_pairsSEXP, SEXP negativeSEXP, SEXP binarySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_runs(number_of_runsSEXP);
    Rcpp::traits::input_parameter< int >::type max_number_of_pairs(max_number_of_pairsSEXP);
    Rcpp::traits::input_parameter< bool >::type negative(negativeSEXP);
    Rcpp::traits::input_parameter< bool >::type binary(binarySEXP);
    rcpp_result_gen = Rcpp::wrap(interaction_search(X, Y, weights, number_of_runs, max_number_of_pairs, negative, binary));
    return rcpp_result_gen;
END_RCPP
}
// interaction_search_low_level
List interaction_search_low_level(IntegerMatrix X_binary, NumericMatrix X, NumericVector Y, NumericVector weights, int number_of_runs, int max_number_of_pairs);
RcppExport SEXP _xyz_interaction_search_low_level(SEXP X_binarySEXP, SEXP XSEXP, SEXP YSEXP, SEXP weightsSEXP, SEXP number_of_runsSEXP, SEXP max_number_of_pairsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type X_binary(X_binarySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_runs(number_of_runsSEXP);
    Rcpp::traits::input_parameter< int >::type max_number_of_pairs(max_number_of_pairsSEXP);
    rcpp_result_gen = Rcpp::wrap(interaction_search_low_level(X_binary, X, Y, weights, number_of_runs, max_number_of_pairs));
    return rcpp_result_gen;
END_RCPP
}
// soft_threshold
double soft_threshold(double beta_tilde, double normalization, double lambda, double alpha);
RcppExport SEXP _xyz_soft_threshold(SEXP beta_tildeSEXP, SEXP normalizationSEXP, SEXP lambdaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type beta_tilde(beta_tildeSEXP);
    Rcpp::traits::input_parameter< double >::type normalization(normalizationSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(soft_threshold(beta_tilde, normalization, lambda, alpha));
    return rcpp_result_gen;
END_RCPP
}
// create_lambda_sequence
NumericVector create_lambda_sequence(double lambda_max, int n_lambda, double factor_eps_inv);
RcppExport SEXP _xyz_create_lambda_sequence(SEXP lambda_maxSEXP, SEXP n_lambdaSEXP, SEXP factor_eps_invSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda_max(lambda_maxSEXP);
    Rcpp::traits::input_parameter< int >::type n_lambda(n_lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type factor_eps_inv(factor_eps_invSEXP);
    rcpp_result_gen = Rcpp::wrap(create_lambda_sequence(lambda_max, n_lambda, factor_eps_inv));
    return rcpp_result_gen;
END_RCPP
}
// scan_main_effects
bool scan_main_effects(const NumericMatrix& X, const NumericVector& Y, const NumericVector weights, List main_effects, List beta_main, const NumericVector& lambdas, double alpha, int r, int add_max, bool strong);
RcppExport SEXP _xyz_scan_main_effects(SEXP XSEXP, SEXP YSEXP, SEXP weightsSEXP, SEXP main_effectsSEXP, SEXP beta_mainSEXP, SEXP lambdasSEXP, SEXP alphaSEXP, SEXP rSEXP, SEXP add_maxSEXP, SEXP strongSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< List >::type main_effects(main_effectsSEXP);
    Rcpp::traits::input_parameter< List >::type beta_main(beta_mainSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type add_max(add_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type strong(strongSEXP);
    rcpp_result_gen = Rcpp::wrap(scan_main_effects(X, Y, weights, main_effects, beta_main, lambdas, alpha, r, add_max, strong));
    return rcpp_result_gen;
END_RCPP
}
// scale_intr
NumericVector scale_intr(NumericMatrix X, int pair_x, int pair_y);
RcppExport SEXP _xyz_scale_intr(SEXP XSEXP, SEXP pair_xSEXP, SEXP pair_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type pair_x(pair_xSEXP);
    Rcpp::traits::input_parameter< int >::type pair_y(pair_ySEXP);
    rcpp_result_gen = Rcpp::wrap(scale_intr(X, pair_x, pair_y));
    return rcpp_result_gen;
END_RCPP
}
// scan_intr_effects
bool scan_intr_effects(const NumericMatrix& X, const NumericVector& Y, const IntegerMatrix& X_bin, const NumericVector& weights, List intr_effects, List beta_intr, NumericMatrix& intr_vars, const NumericVector& lambdas, double alpha, int r, int projections, bool strong);
RcppExport SEXP _xyz_scan_intr_effects(SEXP XSEXP, SEXP YSEXP, SEXP X_binSEXP, SEXP weightsSEXP, SEXP intr_effectsSEXP, SEXP beta_intrSEXP, SEXP intr_varsSEXP, SEXP lambdasSEXP, SEXP alphaSEXP, SEXP rSEXP, SEXP projectionsSEXP, SEXP strongSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type X_bin(X_binSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< List >::type intr_effects(intr_effectsSEXP);
    Rcpp::traits::input_parameter< List >::type beta_intr(beta_intrSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type intr_vars(intr_varsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type projections(projectionsSEXP);
    Rcpp::traits::input_parameter< bool >::type strong(strongSEXP);
    rcpp_result_gen = Rcpp::wrap(scan_intr_effects(X, Y, X_bin, weights, intr_effects, beta_intr, intr_vars, lambdas, alpha, r, projections, strong));
    return rcpp_result_gen;
END_RCPP
}
// update_intr_final
void update_intr_final(List intr_effects, List beta_intr);
RcppExport SEXP _xyz_update_intr_final(SEXP intr_effectsSEXP, SEXP beta_intrSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type intr_effects(intr_effectsSEXP);
    Rcpp::traits::input_parameter< List >::type beta_intr(beta_intrSEXP);
    update_intr_final(intr_effects, beta_intr);
    return R_NilValue;
END_RCPP
}
// calculate_xbeta
NumericVector calculate_xbeta(const NumericMatrix& X, const NumericVector& Y, const NumericVector& intercept, const List main_effects, const List beta_main, const List intr_effects, const List beta_intr, const NumericMatrix& intr_vars, int r);
RcppExport SEXP _xyz_calculate_xbeta(SEXP XSEXP, SEXP YSEXP, SEXP interceptSEXP, SEXP main_effectsSEXP, SEXP beta_mainSEXP, SEXP intr_effectsSEXP, SEXP beta_intrSEXP, SEXP intr_varsSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const List >::type main_effects(main_effectsSEXP);
    Rcpp::traits::input_parameter< const List >::type beta_main(beta_mainSEXP);
    Rcpp::traits::input_parameter< const List >::type intr_effects(intr_effectsSEXP);
    Rcpp::traits::input_parameter< const List >::type beta_intr(beta_intrSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type intr_vars(intr_varsSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_xbeta(X, Y, intercept, main_effects, beta_main, intr_effects, beta_intr, intr_vars, r));
    return rcpp_result_gen;
END_RCPP
}
// calculate_residuals
NumericVector calculate_residuals(const NumericMatrix& X, const NumericVector& Y, const NumericVector& intercept, const List main_effects, const List beta_main, const List intr_effects, const List beta_intr, const NumericMatrix& intr_vars, int r);
RcppExport SEXP _xyz_calculate_residuals(SEXP XSEXP, SEXP YSEXP, SEXP interceptSEXP, SEXP main_effectsSEXP, SEXP beta_mainSEXP, SEXP intr_effectsSEXP, SEXP beta_intrSEXP, SEXP intr_varsSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const List >::type main_effects(main_effectsSEXP);
    Rcpp::traits::input_parameter< const List >::type beta_main(beta_mainSEXP);
    Rcpp::traits::input_parameter< const List >::type intr_effects(intr_effectsSEXP);
    Rcpp::traits::input_parameter< const List >::type beta_intr(beta_intrSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type intr_vars(intr_varsSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_residuals(X, Y, intercept, main_effects, beta_main, intr_effects, beta_intr, intr_vars, r));
    return rcpp_result_gen;
END_RCPP
}
// iterate
int iterate(const NumericMatrix& X, const NumericVector& Y, NumericVector& residuals, const NumericVector& intercept, const List main_effects, List beta_main, const List intr_effects, List beta_intr, const NumericMatrix& intr_vars, const NumericVector& weights, const NumericVector& lambdas, double alpha, int r, int maxiter_inner);
RcppExport SEXP _xyz_iterate(SEXP XSEXP, SEXP YSEXP, SEXP residualsSEXP, SEXP interceptSEXP, SEXP main_effectsSEXP, SEXP beta_mainSEXP, SEXP intr_effectsSEXP, SEXP beta_intrSEXP, SEXP intr_varsSEXP, SEXP weightsSEXP, SEXP lambdasSEXP, SEXP alphaSEXP, SEXP rSEXP, SEXP maxiter_innerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type residuals(residualsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const List >::type main_effects(main_effectsSEXP);
    Rcpp::traits::input_parameter< List >::type beta_main(beta_mainSEXP);
    Rcpp::traits::input_parameter< const List >::type intr_effects(intr_effectsSEXP);
    Rcpp::traits::input_parameter< List >::type beta_intr(beta_intrSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type intr_vars(intr_varsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter_inner(maxiter_innerSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate(X, Y, residuals, intercept, main_effects, beta_main, intr_effects, beta_intr, intr_vars, weights, lambdas, alpha, r, maxiter_inner));
    return rcpp_result_gen;
END_RCPP
}
// update_intr_vars
NumericMatrix update_intr_vars(const NumericMatrix& X, List intr_effects, int r);
RcppExport SEXP _xyz_update_intr_vars(SEXP XSEXP, SEXP intr_effectsSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< List >::type intr_effects(intr_effectsSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(update_intr_vars(X, intr_effects, r));
    return rcpp_result_gen;
END_RCPP
}
// clean_all_effects
void clean_all_effects(List main_effects, List beta_main, List intr_effects, List beta_intr, int r);
RcppExport SEXP _xyz_clean_all_effects(SEXP main_effectsSEXP, SEXP beta_mainSEXP, SEXP intr_effectsSEXP, SEXP beta_intrSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type main_effects(main_effectsSEXP);
    Rcpp::traits::input_parameter< List >::type beta_main(beta_mainSEXP);
    Rcpp::traits::input_parameter< List >::type intr_effects(intr_effectsSEXP);
    Rcpp::traits::input_parameter< List >::type beta_intr(beta_intrSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    clean_all_effects(main_effects, beta_main, intr_effects, beta_intr, r);
    return R_NilValue;
END_RCPP
}
// warm_start
void warm_start(List main_effects, List beta_main, List intr_effects, List beta_intr, int r);
RcppExport SEXP _xyz_warm_start(SEXP main_effectsSEXP, SEXP beta_mainSEXP, SEXP intr_effectsSEXP, SEXP beta_intrSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type main_effects(main_effectsSEXP);
    Rcpp::traits::input_parameter< List >::type beta_main(beta_mainSEXP);
    Rcpp::traits::input_parameter< List >::type intr_effects(intr_effectsSEXP);
    Rcpp::traits::input_parameter< List >::type beta_intr(beta_intrSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    warm_start(main_effects, beta_main, intr_effects, beta_intr, r);
    return R_NilValue;
END_RCPP
}
// gaussiglmnet
List gaussiglmnet(NumericMatrix X, NumericVector Y, NumericVector weights, NumericVector lambdas, double alpha, int max_main_effects, int max_interaction_effects, int max_outer, int number_of_nnis_runs);
RcppExport SEXP _xyz_gaussiglmnet(SEXP XSEXP, SEXP YSEXP, SEXP weightsSEXP, SEXP lambdasSEXP, SEXP alphaSEXP, SEXP max_main_effectsSEXP, SEXP max_interaction_effectsSEXP, SEXP max_outerSEXP, SEXP number_of_nnis_runsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambdas(lambdasSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type max_main_effects(max_main_effectsSEXP);
    Rcpp::traits::input_parameter< int >::type max_interaction_effects(max_interaction_effectsSEXP);
    Rcpp::traits::input_parameter< int >::type max_outer(max_outerSEXP);
    Rcpp::traits::input_parameter< int >::type number_of_nnis_runs(number_of_nnis_runsSEXP);
    rcpp_result_gen = Rcpp::wrap(gaussiglmnet(X, Y, weights, lambdas, alpha, max_main_effects, max_interaction_effects, max_outer, number_of_nnis_runs));
    return rcpp_result_gen;
END_RCPP
}
