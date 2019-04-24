#include <stdio.h>
#include <map>
#include <string>
//
#include "mymonero.h"
#include "serial_bridge_index.hpp"
#include "serial_bridge_utils.hpp"
//
//

using namespace std;

/*
string send_funds(const string &args_string)
{
    try {
        emscr_async_bridge::send_funds(args_string);
        return string("{}");
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string send_cb_I__got_unspent_outs(const string &args_string)
{
    try {
        emscr_async_bridge::send_cb_I__got_unspent_outs(args_string);
        return string("{}");
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string send_cb_II__got_random_outs(const string &args_string)
{
    try {
        emscr_async_bridge::send_cb_II__got_random_outs(args_string);
        return string("{}");
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string send_cb_III__submitted_tx(const string &args_string)
{
    try {
        emscr_async_bridge::send_cb_III__submitted_tx(args_string);
        return string("{}");
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
*/
string send_step2__try_create_transaction(const string &args_string)
{
    try {
        return serial_bridge::send_step2__try_create_transaction(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
//
string decode_address(const string &args_string)
{
    try {
        return serial_bridge::decode_address(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string is_subaddress(const string &args_string)
{
    try {
        return serial_bridge::is_subaddress(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string is_integrated_address(const string &args_string)
{
    try {
        return serial_bridge::is_integrated_address(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
//
string new_integrated_address(const string &args_string)
{
    try {
        return serial_bridge::new_integrated_address(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string new_payment_id(const string &args_string)
{
    try {
        return serial_bridge::new_payment_id(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
//
string newly_created_wallet(const string &args_string)
{
    try {
        return serial_bridge::newly_created_wallet(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string are_equal_mnemonics(const string &args_string)
{
    try {
        return serial_bridge::are_equal_mnemonics(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string address_and_keys_from_seed(const string &args_string)
{
    try {
        return serial_bridge::address_and_keys_from_seed(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string mnemonic_from_seed(const string &args_string)
{
    try {
        return serial_bridge::mnemonic_from_seed(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string seed_and_keys_from_mnemonic(const string &args_string)
{
    try {
        return serial_bridge::seed_and_keys_from_mnemonic(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string validate_components_for_login(const string &args_string)
{
    try {
        return serial_bridge::validate_components_for_login(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
//
string estimated_tx_network_fee(const string &args_string)
{
    try {
        return serial_bridge::estimated_tx_network_fee(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
//
string estimate_fee(const string &args_string)
{
    try {
        return serial_bridge::estimate_fee(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
//
string estimate_tx_weight(const string &args_string)
{
    try {
        return serial_bridge::estimate_tx_weight(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
//
string estimate_rct_tx_size(const string &args_string)
{
    try {
        return serial_bridge::estimate_rct_tx_size(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
//
string generate_key_image(const string &args_string)
{
    try {
        return serial_bridge::generate_key_image(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
//
string generate_key_derivation(const string &args_string)
{
    try {
        return serial_bridge::generate_key_derivation(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string derive_public_key(const string &args_string)
{
    try {
        return serial_bridge::derive_public_key(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string derive_subaddress_public_key(const string &args_string)
{
    try {
        return serial_bridge::derive_subaddress_public_key(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string derivation_to_scalar(const string &args_string)
{
    try {
        return serial_bridge::derivation_to_scalar(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string decodeRct(const string &args_string)
{
    try {
        return serial_bridge::decodeRct(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string decodeRctSimple(const string &args_string)
{
    try {
        return serial_bridge::decodeRctSimple(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}
string encrypt_payment_id(const string &args_string)
{
    try {
        return serial_bridge::encrypt_payment_id(args_string);
    } catch (std::exception &e) {
        return serial_bridge_utils::error_ret_json_from_message(e.what());
    }
}

const char* call_func(const char *fn_name, const char *args_string)
{
    typedef string (*PTRFUNC)(const string &);

    const map<string, PTRFUNC> cbFn {
        {"generate_key_image", &generate_key_image},
        {"generate_key_derivation", &generate_key_derivation},
    };

    string ret_str="{\"err_msg\":\"func not found\"}";
    auto it = cbFn.find(fn_name);
    if (it != cbFn.end()) {
        ret_str = it->second(args_string);
    }
    char* cstr = (char*)malloc(ret_str.size() + 1);
    std::strcpy (cstr, ret_str.c_str());
    return cstr;
}

