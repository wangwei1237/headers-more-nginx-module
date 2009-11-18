#ifndef NGX_HTTP_HEADERS_MORE_UTIL_H
#define NGX_HTTP_HEADERS_MORE_UTIL_H

#include "ngx_http_headers_more_filter_module.h"

ngx_int_t
ngx_http_headers_more_parse_header(ngx_conf_t *cf, ngx_str_t *cmd_name,
        ngx_str_t *raw_header, ngx_array_t *headers,
        ngx_http_headers_more_opcode_t opcode,
        ngx_http_headers_more_set_header_t *handlers);

ngx_int_t ngx_http_headers_more_parse_statuses(ngx_log_t *log,
        ngx_str_t *cmd_name, ngx_str_t *value, ngx_array_t *statuses);

ngx_int_t ngx_http_headers_more_parse_types(ngx_log_t *log,
        ngx_str_t *cmd_name, ngx_str_t *value, ngx_array_t *types);

#endif /* NGX_HTTP_HEADERS_MORE_UTIL_H */

