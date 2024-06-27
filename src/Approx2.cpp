#include <Rcpp.h>
#include <dqrng.h>
using namespace Rcpp;
using namespace dqrng;
// [[Rcpp::interfaces(r, cpp)]]
//' Approximate pi
//'
//' Return an estimate of pi.
//' @param N is sample size for approximation
//' @export
// [[Rcpp::export]]
 double approx2_pi(const int N) {
   NumericVector x = dqrunif(N);
   NumericVector y = dqrunif(N);
   NumericVector d = sqrt(x*x + y*y);
   return 4.0 * sum(d < 1.0) / N;
 }
