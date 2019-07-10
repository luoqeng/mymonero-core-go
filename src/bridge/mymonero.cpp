#include <stdio.h>
#include <map>
#include <string>
#include "mymonero.h"
#include "serial_bridge_index.hpp"
#include "serial_bridge_utils.hpp"

using namespace std;

#define GEN_FUNC(func_name) \
    string func_name(const string &args_string) { \
        try { \
            return serial_bridge::func_name(args_string); \
        } catch (std::exception &e) { \
            return serial_bridge_utils::error_ret_json_from_message(e.what()); \
        } \
    }

    GEN_FUNC(send_step1__prepare_params_for_get_decoys)
    GEN_FUNC(send_step2__try_create_transaction)
    GEN_FUNC(decode_address)
    GEN_FUNC(is_subaddress)
    GEN_FUNC(is_integrated_address)
    GEN_FUNC(new_integrated_address)
    GEN_FUNC(new_payment_id)
    GEN_FUNC(newly_created_wallet)
    GEN_FUNC(are_equal_mnemonics)
    GEN_FUNC(address_and_keys_from_seed)
    GEN_FUNC(mnemonic_from_seed)
    GEN_FUNC(seed_and_keys_from_mnemonic)
    GEN_FUNC(validate_components_for_login)
    GEN_FUNC(estimated_tx_network_fee)
    GEN_FUNC(estimate_fee)
    GEN_FUNC(estimate_tx_weight)
    GEN_FUNC(estimate_rct_tx_size)
    GEN_FUNC(generate_key_image)
    GEN_FUNC(generate_key_derivation)
    GEN_FUNC(derive_public_key)
    GEN_FUNC(derive_subaddress_public_key)
    GEN_FUNC(derivation_to_scalar)
    GEN_FUNC(decodeRct)
    GEN_FUNC(decodeRctSimple)
    GEN_FUNC(encrypt_payment_id)

#undef GEN_FUNC


const char* call_func(const char *fn_name, const char *args_string)
{
    typedef string (*PTRFUNC)(const string &);

    #define REGISTER_FUNC(fn_name) {#fn_name, &fn_name}

    const map<string, PTRFUNC> cbFn {
        REGISTER_FUNC(send_step1__prepare_params_for_get_decoys),
        REGISTER_FUNC(send_step2__try_create_transaction),
        REGISTER_FUNC(decode_address),
        REGISTER_FUNC(is_subaddress),
        REGISTER_FUNC(is_integrated_address),
        REGISTER_FUNC(new_integrated_address),
        REGISTER_FUNC(new_payment_id),
        REGISTER_FUNC(newly_created_wallet),
        REGISTER_FUNC(are_equal_mnemonics),
        REGISTER_FUNC(address_and_keys_from_seed),
        REGISTER_FUNC(mnemonic_from_seed),
        REGISTER_FUNC(seed_and_keys_from_mnemonic),
        REGISTER_FUNC(validate_components_for_login),
        REGISTER_FUNC(estimated_tx_network_fee),
        REGISTER_FUNC(estimate_fee),
        REGISTER_FUNC(estimate_tx_weight),
        REGISTER_FUNC(estimate_rct_tx_size),
        REGISTER_FUNC(generate_key_image),
        REGISTER_FUNC(generate_key_derivation),
        REGISTER_FUNC(derive_public_key),
        REGISTER_FUNC(derive_subaddress_public_key),
        REGISTER_FUNC(derivation_to_scalar),
        REGISTER_FUNC(decodeRct),
        REGISTER_FUNC(decodeRctSimple),
        REGISTER_FUNC(encrypt_payment_id),
    };

    #undef REGISTER_FUNC

    string ret_str="{\"err_msg\":\"func not found\"}";
    auto it = cbFn.find(fn_name);
    if (it != cbFn.end()) {
        ret_str = it->second(args_string);
    }
    char* cstr = (char*)malloc(ret_str.size() + 1);
    std::strcpy (cstr, ret_str.c_str());
    return cstr;
}

