/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2017 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/bioerr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA BIO_str_functs[] = {
    {ERR_PACK(ERR_LIB_BIO, BIO_F_ACPT_STATE, 0), "acpt_state"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_ADDR_STRINGS, 0), "addr_strings"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_ACCEPT, 0), "BIO_accept"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_ACCEPT_EX, 0), "BIO_accept_ex"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_ADDR_NEW, 0), "BIO_ADDR_new"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_CALLBACK_CTRL, 0), "BIO_callback_ctrl"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_CONNECT, 0), "BIO_connect"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_CTRL, 0), "BIO_ctrl"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_GETS, 0), "BIO_gets"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_GET_HOST_IP, 0), "BIO_get_host_ip"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_GET_NEW_INDEX, 0), "BIO_get_new_index"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_GET_PORT, 0), "BIO_get_port"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_LISTEN, 0), "BIO_listen"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_LOOKUP, 0), "BIO_lookup"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_LOOKUP_EX, 0), "BIO_lookup_ex"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_MAKE_PAIR, 0), "bio_make_pair"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_NEW, 0), "BIO_new"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_NEW_DGRAM_SCTP, 0), "BIO_new_dgram_sctp"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_NEW_FILE, 0), "BIO_new_file"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_NEW_MEM_BUF, 0), "BIO_new_mem_buf"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_NREAD, 0), "BIO_nread"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_NREAD0, 0), "BIO_nread0"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_NWRITE, 0), "BIO_nwrite"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_NWRITE0, 0), "BIO_nwrite0"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_PARSE_HOSTSERV, 0), "BIO_parse_hostserv"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_PUTS, 0), "BIO_puts"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_READ, 0), "BIO_read"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_READ_EX, 0), "BIO_read_ex"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_READ_INTERN, 0), "bio_read_intern"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_SOCKET, 0), "BIO_socket"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_SOCKET_NBIO, 0), "BIO_socket_nbio"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_SOCK_INFO, 0), "BIO_sock_info"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_SOCK_INIT, 0), "BIO_sock_init"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_WRITE, 0), "BIO_write"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_WRITE_EX, 0), "BIO_write_ex"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BIO_WRITE_INTERN, 0), "bio_write_intern"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_BUFFER_CTRL, 0), "buffer_ctrl"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_CONN_CTRL, 0), "conn_ctrl"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_CONN_STATE, 0), "conn_state"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_DGRAM_SCTP_READ, 0), "dgram_sctp_read"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_DGRAM_SCTP_WRITE, 0), "dgram_sctp_write"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_FILE_CTRL, 0), "file_ctrl"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_FILE_READ, 0), "file_read"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_LINEBUFFER_CTRL, 0), "linebuffer_ctrl"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_MEM_WRITE, 0), "mem_write"},
    {ERR_PACK(ERR_LIB_BIO, BIO_F_SSL_NEW, 0), "SSL_new"},
    {0, NULL}
};

static const ERR_STRING_DATA BIO_str_reasons[] = {
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_ACCEPT_ERROR), "accept error"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_ADDRINFO_ADDR_IS_NOT_AF_INET),
    "addrinfo addr is not af inet"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_AMBIGUOUS_HOST_OR_SERVICE),
    "ambiguous host or service"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_BAD_FOPEN_MODE), "bad fopen mode"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_BROKEN_PIPE), "broken pipe"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_CONNECT_ERROR), "connect error"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_GETHOSTBYNAME_ADDR_IS_NOT_AF_INET),
    "gethostbyname addr is not af inet"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_GETSOCKNAME_ERROR), "getsockname error"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_GETSOCKNAME_TRUNCATED_ADDRESS),
    "getsockname truncated address"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_GETTING_SOCKTYPE), "getting socktype"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_INVALID_ARGUMENT), "invalid argument"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_INVALID_SOCKET), "invalid socket"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_IN_USE), "in use"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_LENGTH_TOO_LONG), "length too long"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_LISTEN_V6_ONLY), "listen v6 only"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_LOOKUP_RETURNED_NOTHING),
    "lookup returned nothing"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_MALFORMED_HOST_OR_SERVICE),
    "malformed host or service"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_NBIO_CONNECT_ERROR), "nbio connect error"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_NO_ACCEPT_ADDR_OR_SERVICE_SPECIFIED),
    "no accept addr or service specified"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_NO_HOSTNAME_OR_SERVICE_SPECIFIED),
    "no hostname or service specified"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_NO_PORT_DEFINED), "no port defined"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_NO_SUCH_FILE), "no such file"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_NULL_PARAMETER), "null parameter"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNABLE_TO_BIND_SOCKET),
    "unable to bind socket"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNABLE_TO_CREATE_SOCKET),
    "unable to create socket"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNABLE_TO_KEEPALIVE),
    "unable to keepalive"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNABLE_TO_LISTEN_SOCKET),
    "unable to listen socket"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNABLE_TO_NODELAY), "unable to nodelay"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNABLE_TO_REUSEADDR),
    "unable to reuseaddr"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNAVAILABLE_IP_FAMILY),
    "unavailable ip family"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNINITIALIZED), "uninitialized"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNKNOWN_INFO_TYPE), "unknown info type"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNSUPPORTED_IP_FAMILY),
    "unsupported ip family"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNSUPPORTED_METHOD), "unsupported method"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_UNSUPPORTED_PROTOCOL_FAMILY),
    "unsupported protocol family"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_WRITE_TO_READ_ONLY_BIO),
    "write to read only BIO"},
    {ERR_PACK(ERR_LIB_BIO, 0, BIO_R_WSASTARTUP), "WSAStartup"},
    {0, NULL}
};

#endif

int ERR_load_BIO_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(BIO_str_functs[0].error) == NULL) {
        ERR_load_strings_const(BIO_str_functs);
        ERR_load_strings_const(BIO_str_reasons);
    }
#endif
    return 1;
}
