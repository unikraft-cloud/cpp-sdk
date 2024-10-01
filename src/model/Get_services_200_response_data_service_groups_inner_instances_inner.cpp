/**
 * Unikraft Cloud Platform
 * This is the API of the Unikraft Cloud Platform. 
 *
 * The version of the OpenAPI document: 0.6.0
 * Contact: info@unikraft.cloud
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.9.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "UnikraftCloudV1APIClient/model/Get_services_200_response_data_service_groups_inner_instances_inner.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Get_services_200_response_data_service_groups_inner_instances_inner::Get_services_200_response_data_service_groups_inner_instances_inner()
{
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
}

Get_services_200_response_data_service_groups_inner_instances_inner::~Get_services_200_response_data_service_groups_inner_instances_inner()
{
}

void Get_services_200_response_data_service_groups_inner_instances_inner::validate()
{
    // TODO: implement validation
}

web::json::value Get_services_200_response_data_service_groups_inner_instances_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UuidIsSet)
    {
        val[utility::conversions::to_string_t(U("uuid"))] = ModelBase::toJson(m_Uuid);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }

    return val;
}

bool Get_services_200_response_data_service_groups_inner_instances_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("uuid"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("uuid")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setUuid;
            ok &= ModelBase::fromJson(fieldValue, refVal_setUuid);
            setUuid(refVal_setUuid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    return ok;
}

void Get_services_200_response_data_service_groups_inner_instances_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_UuidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("uuid")), m_Uuid));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
}

bool Get_services_200_response_data_service_groups_inner_instances_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("uuid"))))
    {
        utility::string_t refVal_setUuid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("uuid"))), refVal_setUuid );
        setUuid(refVal_setUuid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    return ok;
}

utility::string_t Get_services_200_response_data_service_groups_inner_instances_inner::getUuid() const
{
    return m_Uuid;
}

void Get_services_200_response_data_service_groups_inner_instances_inner::setUuid(const utility::string_t& value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}

bool Get_services_200_response_data_service_groups_inner_instances_inner::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Get_services_200_response_data_service_groups_inner_instances_inner::unsetUuid()
{
    m_UuidIsSet = false;
}
utility::string_t Get_services_200_response_data_service_groups_inner_instances_inner::getName() const
{
    return m_Name;
}

void Get_services_200_response_data_service_groups_inner_instances_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Get_services_200_response_data_service_groups_inner_instances_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void Get_services_200_response_data_service_groups_inner_instances_inner::unsetName()
{
    m_NameIsSet = false;
}
}
}
}
}


