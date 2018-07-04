#ifndef MENOH_IMPL_NAIVE_OPERATOR_GEMM_HPP
#define MENOH_IMPL_NAIVE_OPERATOR_GEMM_HPP

#include <menoh/node.hpp>

#include <menoh/naive/computation_node_factory.hpp>

namespace menoh_impl {
    namespace naive_backend {

        computation_node_factory_return_type
        make_gemm(node const& node,
                  std::unordered_map<std::string, array> const& variable_table);

    } // namespace naive_backend
} // namespace menoh_impl

#endif // MENOH_IMPL_NAIVE_OPERATOR_GEMM_HPP
