
/**
 *    Copyright (c) 2018 Nest Labs, Inc.
 *    All rights reserved.
 *
 *    THIS FILE IS GENERATED. DO NOT MODIFY.
 *
 *    SOURCE TEMPLATE: trait.cpp
 *    SOURCE PROTO: nest/test/trait/test_c_trait.proto
 *
 */

#include <nest/test/trait/TestCTrait.h>

namespace Schema {
namespace Nest {
namespace Test {
namespace Trait {
namespace TestCTrait {

using namespace ::nl::Weave::Profiles::DataManagement;

//
// Property Table
//

const TraitSchemaEngine::PropertyInfo PropertyMap[] = {
    { kPropertyHandle_Root, 1 }, // tc_a
    { kPropertyHandle_Root, 2 }, // tc_b
    { kPropertyHandle_Root, 3 }, // tc_c
    { kPropertyHandle_TcC, 1 }, // sc_a
    { kPropertyHandle_TcC, 2 }, // sc_b
    { kPropertyHandle_Root, 4 }, // tc_d
};

//
// Supported version
//
const SchemaVersionRange traitVersion(2, 1);

//
// Schema
//

const TraitSchemaEngine TraitSchema = {
    {
        kWeaveProfileId,
        PropertyMap,
        sizeof(PropertyMap) / sizeof(PropertyMap[0]),
        2,
#if (TDM_EXTENSION_SUPPORT) || (TDM_VERSIONING_SUPPORT)
        2,
#endif
        NULL,
        NULL,
        NULL,
        NULL,
        NULL,
#if (TDM_EXTENSION_SUPPORT)
        NULL,
#endif
#if (TDM_VERSIONING_SUPPORT)
        &traitVersion,
#endif
    }
};

//
// Event Structs
//

const nl::FieldDescriptor StructCFieldDescriptors[] =
{
    {
        NULL, offsetof(StructC, scA), SET_TYPE_AND_FLAGS(nl::SerializedFieldTypeUInt32, 0), 1
    },

    {
        NULL, offsetof(StructC, scB), SET_TYPE_AND_FLAGS(nl::SerializedFieldTypeBoolean, 0), 2
    },

};

const nl::SchemaFieldDescriptor StructC::FieldSchema =
{
    .mNumFieldDescriptorElements = sizeof(StructCFieldDescriptors)/sizeof(StructCFieldDescriptors[0]),
    .mFields = StructCFieldDescriptors,
    .mSize = sizeof(StructC)
};

} // namespace TestCTrait
} // namespace Trait
} // namespace Test
} // namespace Nest
} // namespace Schema
