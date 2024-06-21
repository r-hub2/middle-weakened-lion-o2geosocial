// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_o2geosocial_RCPPEXPORTS_H_GEN_
#define RCPP_o2geosocial_RCPPEXPORTS_H_GEN_

#include <Rcpp.h>

namespace o2geosocial {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("o2geosocial", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("o2geosocial", "_o2geosocial_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in o2geosocial");
            }
        }
    }

    inline std::vector<int> cpp_are_possible_ancestors(Rcpp::IntegerVector t_inf, Rcpp::IntegerVector alpha, Rcpp::StringVector genotype, Rcpp::StringVector gen_tree, Rcpp::IntegerVector cluster, int delta, size_t i) {
        typedef SEXP(*Ptr_cpp_are_possible_ancestors)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_are_possible_ancestors p_cpp_are_possible_ancestors = NULL;
        if (p_cpp_are_possible_ancestors == NULL) {
            validateSignature("std::vector<int>(*cpp_are_possible_ancestors)(Rcpp::IntegerVector,Rcpp::IntegerVector,Rcpp::StringVector,Rcpp::StringVector,Rcpp::IntegerVector,int,size_t)");
            p_cpp_are_possible_ancestors = (Ptr_cpp_are_possible_ancestors)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_are_possible_ancestors");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_are_possible_ancestors(Shield<SEXP>(Rcpp::wrap(t_inf)), Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(genotype)), Shield<SEXP>(Rcpp::wrap(gen_tree)), Shield<SEXP>(Rcpp::wrap(cluster)), Shield<SEXP>(Rcpp::wrap(delta)), Shield<SEXP>(Rcpp::wrap(i)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<int> >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_log_like_s(Rcpp::NumericVector population, Rcpp::NumericMatrix distance, double a, double b, Rcpp::String spatial) {
        typedef SEXP(*Ptr_cpp_log_like_s)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_log_like_s p_cpp_log_like_s = NULL;
        if (p_cpp_log_like_s == NULL) {
            validateSignature("Rcpp::List(*cpp_log_like_s)(Rcpp::NumericVector,Rcpp::NumericMatrix,double,double,Rcpp::String)");
            p_cpp_log_like_s = (Ptr_cpp_log_like_s)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_log_like_s");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_log_like_s(Shield<SEXP>(Rcpp::wrap(population)), Shield<SEXP>(Rcpp::wrap(distance)), Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)), Shield<SEXP>(Rcpp::wrap(spatial)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_log_like(Rcpp::NumericVector population, Rcpp::NumericMatrix distance, Rcpp::NumericMatrix ances, double a, double b, int max_kappa, double gamma, Rcpp::String spatial, int nb_cases) {
        typedef SEXP(*Ptr_cpp_log_like)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_log_like p_cpp_log_like = NULL;
        if (p_cpp_log_like == NULL) {
            validateSignature("Rcpp::List(*cpp_log_like)(Rcpp::NumericVector,Rcpp::NumericMatrix,Rcpp::NumericMatrix,double,double,int,double,Rcpp::String,int)");
            p_cpp_log_like = (Ptr_cpp_log_like)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_log_like");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_log_like(Shield<SEXP>(Rcpp::wrap(population)), Shield<SEXP>(Rcpp::wrap(distance)), Shield<SEXP>(Rcpp::wrap(ances)), Shield<SEXP>(Rcpp::wrap(a)), Shield<SEXP>(Rcpp::wrap(b)), Shield<SEXP>(Rcpp::wrap(max_kappa)), Shield<SEXP>(Rcpp::wrap(gamma)), Shield<SEXP>(Rcpp::wrap(spatial)), Shield<SEXP>(Rcpp::wrap(nb_cases)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::IntegerVector cpp_find_descendents(Rcpp::IntegerVector alpha, Rcpp::IntegerVector cluster, int i) {
        typedef SEXP(*Ptr_cpp_find_descendents)(SEXP,SEXP,SEXP);
        static Ptr_cpp_find_descendents p_cpp_find_descendents = NULL;
        if (p_cpp_find_descendents == NULL) {
            validateSignature("Rcpp::IntegerVector(*cpp_find_descendents)(Rcpp::IntegerVector,Rcpp::IntegerVector,int)");
            p_cpp_find_descendents = (Ptr_cpp_find_descendents)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_find_descendents");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_find_descendents(Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(cluster)), Shield<SEXP>(Rcpp::wrap(i)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::IntegerVector >(rcpp_result_gen);
    }

    inline std::vector<int> cpp_find_all_descendents(Rcpp::IntegerVector alpha, Rcpp::IntegerVector t_inf, Rcpp::IntegerVector cluster, int i) {
        typedef SEXP(*Ptr_cpp_find_all_descendents)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_find_all_descendents p_cpp_find_all_descendents = NULL;
        if (p_cpp_find_all_descendents == NULL) {
            validateSignature("std::vector<int>(*cpp_find_all_descendents)(Rcpp::IntegerVector,Rcpp::IntegerVector,Rcpp::IntegerVector,int)");
            p_cpp_find_all_descendents = (Ptr_cpp_find_all_descendents)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_find_all_descendents");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_find_all_descendents(Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(t_inf)), Shield<SEXP>(Rcpp::wrap(cluster)), Shield<SEXP>(Rcpp::wrap(i)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<int> >(rcpp_result_gen);
    }

    inline Rcpp::IntegerVector cpp_find_all_tree(Rcpp::IntegerVector alpha, Rcpp::IntegerVector t_inf, Rcpp::IntegerVector cluster, size_t i) {
        typedef SEXP(*Ptr_cpp_find_all_tree)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_find_all_tree p_cpp_find_all_tree = NULL;
        if (p_cpp_find_all_tree == NULL) {
            validateSignature("Rcpp::IntegerVector(*cpp_find_all_tree)(Rcpp::IntegerVector,Rcpp::IntegerVector,Rcpp::IntegerVector,size_t)");
            p_cpp_find_all_tree = (Ptr_cpp_find_all_tree)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_find_all_tree");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_find_all_tree(Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(t_inf)), Shield<SEXP>(Rcpp::wrap(cluster)), Shield<SEXP>(Rcpp::wrap(i)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::IntegerVector >(rcpp_result_gen);
    }

    inline Rcpp::String cpp_gen_tree(Rcpp::IntegerVector tree, Rcpp::IntegerVector cluster, Rcpp::StringVector genotype, size_t i) {
        typedef SEXP(*Ptr_cpp_gen_tree)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_gen_tree p_cpp_gen_tree = NULL;
        if (p_cpp_gen_tree == NULL) {
            validateSignature("Rcpp::String(*cpp_gen_tree)(Rcpp::IntegerVector,Rcpp::IntegerVector,Rcpp::StringVector,size_t)");
            p_cpp_gen_tree = (Ptr_cpp_gen_tree)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_gen_tree");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_gen_tree(Shield<SEXP>(Rcpp::wrap(tree)), Shield<SEXP>(Rcpp::wrap(cluster)), Shield<SEXP>(Rcpp::wrap(genotype)), Shield<SEXP>(Rcpp::wrap(i)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::String >(rcpp_result_gen);
    }

    inline Rcpp::IntegerVector cpp_find_local_cases(Rcpp::IntegerVector alpha, Rcpp::IntegerVector cluster, int i) {
        typedef SEXP(*Ptr_cpp_find_local_cases)(SEXP,SEXP,SEXP);
        static Ptr_cpp_find_local_cases p_cpp_find_local_cases = NULL;
        if (p_cpp_find_local_cases == NULL) {
            validateSignature("Rcpp::IntegerVector(*cpp_find_local_cases)(Rcpp::IntegerVector,Rcpp::IntegerVector,int)");
            p_cpp_find_local_cases = (Ptr_cpp_find_local_cases)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_find_local_cases");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_find_local_cases(Shield<SEXP>(Rcpp::wrap(alpha)), Shield<SEXP>(Rcpp::wrap(cluster)), Shield<SEXP>(Rcpp::wrap(i)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::IntegerVector >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_swap_cases(Rcpp::List param, Rcpp::IntegerVector cluster, Rcpp::IntegerVector move_alpha, int i) {
        typedef SEXP(*Ptr_cpp_swap_cases)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_swap_cases p_cpp_swap_cases = NULL;
        if (p_cpp_swap_cases == NULL) {
            validateSignature("Rcpp::List(*cpp_swap_cases)(Rcpp::List,Rcpp::IntegerVector,Rcpp::IntegerVector,int)");
            p_cpp_swap_cases = (Ptr_cpp_swap_cases)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_swap_cases");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_swap_cases(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(cluster)), Shield<SEXP>(Rcpp::wrap(move_alpha)), Shield<SEXP>(Rcpp::wrap(i)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline double cpp_ll_timing_infections(Rcpp::List data, Rcpp::List param, SEXP i = R_NilValue, Rcpp::RObject custom_function = R_NilValue) {
        typedef SEXP(*Ptr_cpp_ll_timing_infections)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_ll_timing_infections p_cpp_ll_timing_infections = NULL;
        if (p_cpp_ll_timing_infections == NULL) {
            validateSignature("double(*cpp_ll_timing_infections)(Rcpp::List,Rcpp::List,SEXP,Rcpp::RObject)");
            p_cpp_ll_timing_infections = (Ptr_cpp_ll_timing_infections)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_ll_timing_infections");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_ll_timing_infections(Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(i)), Shield<SEXP>(Rcpp::wrap(custom_function)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double cpp_ll_timing_sampling(Rcpp::List data, Rcpp::List param, SEXP i = R_NilValue, Rcpp::RObject custom_function = R_NilValue) {
        typedef SEXP(*Ptr_cpp_ll_timing_sampling)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_ll_timing_sampling p_cpp_ll_timing_sampling = NULL;
        if (p_cpp_ll_timing_sampling == NULL) {
            validateSignature("double(*cpp_ll_timing_sampling)(Rcpp::List,Rcpp::List,SEXP,Rcpp::RObject)");
            p_cpp_ll_timing_sampling = (Ptr_cpp_ll_timing_sampling)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_ll_timing_sampling");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_ll_timing_sampling(Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(i)), Shield<SEXP>(Rcpp::wrap(custom_function)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double cpp_ll_space(Rcpp::List data, Rcpp::List config, Rcpp::List param, SEXP i = R_NilValue, Rcpp::RObject custom_function = R_NilValue) {
        typedef SEXP(*Ptr_cpp_ll_space)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_ll_space p_cpp_ll_space = NULL;
        if (p_cpp_ll_space == NULL) {
            validateSignature("double(*cpp_ll_space)(Rcpp::List,Rcpp::List,Rcpp::List,SEXP,Rcpp::RObject)");
            p_cpp_ll_space = (Ptr_cpp_ll_space)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_ll_space");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_ll_space(Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(i)), Shield<SEXP>(Rcpp::wrap(custom_function)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double cpp_ll_age(Rcpp::List data, Rcpp::List param, SEXP i = R_NilValue, Rcpp::RObject custom_function = R_NilValue) {
        typedef SEXP(*Ptr_cpp_ll_age)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_ll_age p_cpp_ll_age = NULL;
        if (p_cpp_ll_age == NULL) {
            validateSignature("double(*cpp_ll_age)(Rcpp::List,Rcpp::List,SEXP,Rcpp::RObject)");
            p_cpp_ll_age = (Ptr_cpp_ll_age)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_ll_age");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_ll_age(Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(i)), Shield<SEXP>(Rcpp::wrap(custom_function)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double cpp_ll_reporting(Rcpp::List data, Rcpp::List param, SEXP i = R_NilValue, Rcpp::RObject custom_function = R_NilValue) {
        typedef SEXP(*Ptr_cpp_ll_reporting)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_ll_reporting p_cpp_ll_reporting = NULL;
        if (p_cpp_ll_reporting == NULL) {
            validateSignature("double(*cpp_ll_reporting)(Rcpp::List,Rcpp::List,SEXP,Rcpp::RObject)");
            p_cpp_ll_reporting = (Ptr_cpp_ll_reporting)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_ll_reporting");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_ll_reporting(Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(i)), Shield<SEXP>(Rcpp::wrap(custom_function)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double cpp_ll_timing(Rcpp::List data, Rcpp::List param, SEXP i = R_NilValue, Rcpp::RObject custom_functions = R_NilValue) {
        typedef SEXP(*Ptr_cpp_ll_timing)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_ll_timing p_cpp_ll_timing = NULL;
        if (p_cpp_ll_timing == NULL) {
            validateSignature("double(*cpp_ll_timing)(Rcpp::List,Rcpp::List,SEXP,Rcpp::RObject)");
            p_cpp_ll_timing = (Ptr_cpp_ll_timing)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_ll_timing");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_ll_timing(Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(i)), Shield<SEXP>(Rcpp::wrap(custom_functions)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double cpp_ll_all(Rcpp::List data, Rcpp::List config, Rcpp::List param, SEXP i = R_NilValue, Rcpp::RObject custom_functions = R_NilValue) {
        typedef SEXP(*Ptr_cpp_ll_all)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_ll_all p_cpp_ll_all = NULL;
        if (p_cpp_ll_all == NULL) {
            validateSignature("double(*cpp_ll_all)(Rcpp::List,Rcpp::List,Rcpp::List,SEXP,Rcpp::RObject)");
            p_cpp_ll_all = (Ptr_cpp_ll_all)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_ll_all");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_ll_all(Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(i)), Shield<SEXP>(Rcpp::wrap(custom_functions)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_move_a(Rcpp::List param, Rcpp::List data, Rcpp::List config, Rcpp::RObject custom_ll = R_NilValue, Rcpp::RObject custom_prior = R_NilValue) {
        typedef SEXP(*Ptr_cpp_move_a)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_move_a p_cpp_move_a = NULL;
        if (p_cpp_move_a == NULL) {
            validateSignature("Rcpp::List(*cpp_move_a)(Rcpp::List,Rcpp::List,Rcpp::List,Rcpp::RObject,Rcpp::RObject)");
            p_cpp_move_a = (Ptr_cpp_move_a)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_move_a");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_move_a(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(custom_ll)), Shield<SEXP>(Rcpp::wrap(custom_prior)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_move_b(Rcpp::List param, Rcpp::List data, Rcpp::List config, Rcpp::RObject custom_ll = R_NilValue, Rcpp::RObject custom_prior = R_NilValue) {
        typedef SEXP(*Ptr_cpp_move_b)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_move_b p_cpp_move_b = NULL;
        if (p_cpp_move_b == NULL) {
            validateSignature("Rcpp::List(*cpp_move_b)(Rcpp::List,Rcpp::List,Rcpp::List,Rcpp::RObject,Rcpp::RObject)");
            p_cpp_move_b = (Ptr_cpp_move_b)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_move_b");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_move_b(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(custom_ll)), Shield<SEXP>(Rcpp::wrap(custom_prior)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_move_pi(Rcpp::List param, Rcpp::List data, Rcpp::List config, Rcpp::RObject custom_ll = R_NilValue, Rcpp::RObject custom_prior = R_NilValue) {
        typedef SEXP(*Ptr_cpp_move_pi)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_move_pi p_cpp_move_pi = NULL;
        if (p_cpp_move_pi == NULL) {
            validateSignature("Rcpp::List(*cpp_move_pi)(Rcpp::List,Rcpp::List,Rcpp::List,Rcpp::RObject,Rcpp::RObject)");
            p_cpp_move_pi = (Ptr_cpp_move_pi)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_move_pi");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_move_pi(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(custom_ll)), Shield<SEXP>(Rcpp::wrap(custom_prior)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_move_t_inf(Rcpp::List param, Rcpp::List data, Rcpp::RObject list_custom_ll = R_NilValue) {
        typedef SEXP(*Ptr_cpp_move_t_inf)(SEXP,SEXP,SEXP);
        static Ptr_cpp_move_t_inf p_cpp_move_t_inf = NULL;
        if (p_cpp_move_t_inf == NULL) {
            validateSignature("Rcpp::List(*cpp_move_t_inf)(Rcpp::List,Rcpp::List,Rcpp::RObject)");
            p_cpp_move_t_inf = (Ptr_cpp_move_t_inf)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_move_t_inf");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_move_t_inf(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(list_custom_ll)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_move_alpha(Rcpp::List param, Rcpp::List data, Rcpp::List config, Rcpp::RObject list_custom_ll = R_NilValue) {
        typedef SEXP(*Ptr_cpp_move_alpha)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_move_alpha p_cpp_move_alpha = NULL;
        if (p_cpp_move_alpha == NULL) {
            validateSignature("Rcpp::List(*cpp_move_alpha)(Rcpp::List,Rcpp::List,Rcpp::List,Rcpp::RObject)");
            p_cpp_move_alpha = (Ptr_cpp_move_alpha)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_move_alpha");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_move_alpha(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(list_custom_ll)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_move_ancestors(Rcpp::List param, Rcpp::List data, Rcpp::List config, Rcpp::RObject list_custom_ll = R_NilValue) {
        typedef SEXP(*Ptr_cpp_move_ancestors)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_move_ancestors p_cpp_move_ancestors = NULL;
        if (p_cpp_move_ancestors == NULL) {
            validateSignature("Rcpp::List(*cpp_move_ancestors)(Rcpp::List,Rcpp::List,Rcpp::List,Rcpp::RObject)");
            p_cpp_move_ancestors = (Ptr_cpp_move_ancestors)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_move_ancestors");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_move_ancestors(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(list_custom_ll)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_move_swap_cases(Rcpp::List param, Rcpp::List data, Rcpp::List config, Rcpp::RObject list_custom_ll = R_NilValue) {
        typedef SEXP(*Ptr_cpp_move_swap_cases)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_move_swap_cases p_cpp_move_swap_cases = NULL;
        if (p_cpp_move_swap_cases == NULL) {
            validateSignature("Rcpp::List(*cpp_move_swap_cases)(Rcpp::List,Rcpp::List,Rcpp::List,Rcpp::RObject)");
            p_cpp_move_swap_cases = (Ptr_cpp_move_swap_cases)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_move_swap_cases");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_move_swap_cases(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(list_custom_ll)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline Rcpp::List cpp_move_kappa(Rcpp::List param, Rcpp::List data, Rcpp::List config, Rcpp::RObject list_custom_ll = R_NilValue) {
        typedef SEXP(*Ptr_cpp_move_kappa)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_cpp_move_kappa p_cpp_move_kappa = NULL;
        if (p_cpp_move_kappa == NULL) {
            validateSignature("Rcpp::List(*cpp_move_kappa)(Rcpp::List,Rcpp::List,Rcpp::List,Rcpp::RObject)");
            p_cpp_move_kappa = (Ptr_cpp_move_kappa)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_move_kappa");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_cpp_move_kappa(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(data)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(list_custom_ll)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

    inline double cpp_prior_pi(Rcpp::List param, Rcpp::List config, Rcpp::RObject custom_function = R_NilValue) {
        typedef SEXP(*Ptr_cpp_prior_pi)(SEXP,SEXP,SEXP);
        static Ptr_cpp_prior_pi p_cpp_prior_pi = NULL;
        if (p_cpp_prior_pi == NULL) {
            validateSignature("double(*cpp_prior_pi)(Rcpp::List,Rcpp::List,Rcpp::RObject)");
            p_cpp_prior_pi = (Ptr_cpp_prior_pi)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_prior_pi");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_prior_pi(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(custom_function)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double cpp_prior_a(Rcpp::List param, Rcpp::List config, Rcpp::RObject custom_function = R_NilValue) {
        typedef SEXP(*Ptr_cpp_prior_a)(SEXP,SEXP,SEXP);
        static Ptr_cpp_prior_a p_cpp_prior_a = NULL;
        if (p_cpp_prior_a == NULL) {
            validateSignature("double(*cpp_prior_a)(Rcpp::List,Rcpp::List,Rcpp::RObject)");
            p_cpp_prior_a = (Ptr_cpp_prior_a)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_prior_a");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_prior_a(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(custom_function)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double cpp_prior_b(Rcpp::List param, Rcpp::List config, Rcpp::RObject custom_function = R_NilValue) {
        typedef SEXP(*Ptr_cpp_prior_b)(SEXP,SEXP,SEXP);
        static Ptr_cpp_prior_b p_cpp_prior_b = NULL;
        if (p_cpp_prior_b == NULL) {
            validateSignature("double(*cpp_prior_b)(Rcpp::List,Rcpp::List,Rcpp::RObject)");
            p_cpp_prior_b = (Ptr_cpp_prior_b)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_prior_b");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_prior_b(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(custom_function)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double cpp_prior_all(Rcpp::List param, Rcpp::List config, Rcpp::RObject custom_functions = R_NilValue) {
        typedef SEXP(*Ptr_cpp_prior_all)(SEXP,SEXP,SEXP);
        static Ptr_cpp_prior_all p_cpp_prior_all = NULL;
        if (p_cpp_prior_all == NULL) {
            validateSignature("double(*cpp_prior_all)(Rcpp::List,Rcpp::List,Rcpp::RObject)");
            p_cpp_prior_all = (Ptr_cpp_prior_all)R_GetCCallable("o2geosocial", "_o2geosocial_cpp_prior_all");
        }
        RObject rcpp_result_gen;
        {
            rcpp_result_gen = p_cpp_prior_all(Shield<SEXP>(Rcpp::wrap(param)), Shield<SEXP>(Rcpp::wrap(config)), Shield<SEXP>(Rcpp::wrap(custom_functions)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (Rcpp::internal::isLongjumpSentinel(rcpp_result_gen))
            throw Rcpp::LongjumpException(rcpp_result_gen);
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(Rcpp::as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

}

#endif // RCPP_o2geosocial_RCPPEXPORTS_H_GEN_
