/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: c:\Users\Olli\Documents\GitHub\ardupilot\modules\uavcan\dsdl\uavcan\olliw\storm32\28303.CommandAck.uavcan
 */

#ifndef UAVCAN_OLLIW_STORM32_COMMANDACK_HPP_INCLUDED
#define UAVCAN_OLLIW_STORM32_COMMANDACK_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Command Ack
#

uint8 gimbal_id                 #it cannot be zero, it must by a unique id of the gimbal

uint8[<=128] payload
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.olliw.storm32.CommandAck
saturated uint8 gimbal_id
saturated uint8[<=128] payload
******************************************************************************/

#undef gimbal_id
#undef payload

namespace uavcan
{
namespace olliw
{
namespace storm32
{

template <int _tmpl>
struct UAVCAN_EXPORT CommandAck_
{
    typedef const CommandAck_<_tmpl>& ParameterType;
    typedef CommandAck_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
    };

    struct FieldTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > gimbal_id;
        typedef ::uavcan::Array< ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate >, ::uavcan::ArrayModeDynamic, 128 > payload;
    };

    enum
    {
        MinBitLen
            = FieldTypes::gimbal_id::MinBitLen
            + FieldTypes::payload::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::gimbal_id::MaxBitLen
            + FieldTypes::payload::MaxBitLen
    };

    // Constants

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::gimbal_id >::Type gimbal_id;
    typename ::uavcan::StorageType< typename FieldTypes::payload >::Type payload;

    CommandAck_()
        : gimbal_id()
        , payload()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<1040 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 28303 };

    static const char* getDataTypeFullName()
    {
        return "uavcan.olliw.storm32.CommandAck";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool CommandAck_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        gimbal_id == rhs.gimbal_id &&
        payload == rhs.payload;
}

template <int _tmpl>
bool CommandAck_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(gimbal_id, rhs.gimbal_id) &&
        ::uavcan::areClose(payload, rhs.payload);
}

template <int _tmpl>
int CommandAck_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::gimbal_id::encode(self.gimbal_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::payload::encode(self.payload, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int CommandAck_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::gimbal_id::decode(self.gimbal_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::payload::decode(self.payload, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature CommandAck_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x883EA85F57ACBBBDULL);

    FieldTypes::gimbal_id::extendDataTypeSignature(signature);
    FieldTypes::payload::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

/*
 * Final typedef
 */
typedef CommandAck_<0> CommandAck;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::uavcan::olliw::storm32::CommandAck > _uavcan_gdtr_registrator_CommandAck;

}

} // Namespace storm32
} // Namespace olliw
} // Namespace uavcan

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::uavcan::olliw::storm32::CommandAck >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::uavcan::olliw::storm32::CommandAck::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::uavcan::olliw::storm32::CommandAck >::stream(Stream& s, ::uavcan::olliw::storm32::CommandAck::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "gimbal_id: ";
    YamlStreamer< ::uavcan::olliw::storm32::CommandAck::FieldTypes::gimbal_id >::stream(s, obj.gimbal_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "payload: ";
    YamlStreamer< ::uavcan::olliw::storm32::CommandAck::FieldTypes::payload >::stream(s, obj.payload, level + 1);
}

}

namespace uavcan
{
namespace olliw
{
namespace storm32
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::uavcan::olliw::storm32::CommandAck::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::uavcan::olliw::storm32::CommandAck >::stream(s, obj, 0);
    return s;
}

} // Namespace storm32
} // Namespace olliw
} // Namespace uavcan

#endif // UAVCAN_OLLIW_STORM32_COMMANDACK_HPP_INCLUDED