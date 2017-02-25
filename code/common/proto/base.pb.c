/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.8-dev at Sat Feb 25 03:26:04 2017. */

#include "base.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

const uint32_t BaseHeader_cmd_default = 0u;


const pb_field_t BaseHeader_fields[3] = {
    PB_FIELD(  1, STRING  , REQUIRED, STATIC  , FIRST, BaseHeader, magic, magic, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, BaseHeader, cmd, magic, &BaseHeader_cmd_default),
    PB_LAST_FIELD
};

const pb_field_t BaseRequest_fields[2] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, BaseRequest, header, header, &BaseHeader_fields),
    PB_LAST_FIELD
};

const pb_field_t BaseResponse_fields[4] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, BaseResponse, header, header, &BaseHeader_fields),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, BaseResponse, code, header, 0),
    PB_FIELD(  3, BYTES   , REQUIRED, STATIC  , OTHER, BaseResponse, data, code, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(BaseRequest, header) < 65536 && pb_membersize(BaseResponse, header) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_BaseHeader_BaseRequest_BaseResponse)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(BaseRequest, header) < 256 && pb_membersize(BaseResponse, header) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_BaseHeader_BaseRequest_BaseResponse)
#endif


/* @@protoc_insertion_point(eof) */