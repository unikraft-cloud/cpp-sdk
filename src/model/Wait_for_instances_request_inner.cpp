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



#include "UnikraftCloudV1APIClient/model/Wait_for_instances_request_inner.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Wait_for_instances_request_inner::Wait_for_instances_request_inner()
{
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
    m_Timeout_ms = 0;
    m_Timeout_msIsSet = false;
}

Wait_for_instances_request_inner::~Wait_for_instances_request_inner()
{
}

void Wait_for_instances_request_inner::validate()
{
    // TODO: implement validation
}

web::json::value Wait_for_instances_request_inner::toJson() const
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
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t(U("state"))] = ModelBase::toJson(m_State);
    }
    if(m_Timeout_msIsSet)
    {
        val[utility::conversions::to_string_t(U("timeout_ms"))] = ModelBase::toJson(m_Timeout_ms);
    }

    return val;
}

bool Wait_for_instances_request_inner::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("state"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("state")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setState;
            ok &= ModelBase::fromJson(fieldValue, refVal_setState);
            setState(refVal_setState);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("timeout_ms"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("timeout_ms")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTimeoutMs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimeoutMs);
            setTimeoutMs(refVal_setTimeoutMs);
        }
    }
    return ok;
}

void Wait_for_instances_request_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("state")), m_State));
    }
    if(m_Timeout_msIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("timeout_ms")), m_Timeout_ms));
    }
}

bool Wait_for_instances_request_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("state"))))
    {
        utility::string_t refVal_setState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("state"))), refVal_setState );
        setState(refVal_setState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("timeout_ms"))))
    {
        int32_t refVal_setTimeoutMs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("timeout_ms"))), refVal_setTimeoutMs );
        setTimeoutMs(refVal_setTimeoutMs);
    }
    return ok;
}

utility::string_t Wait_for_instances_request_inner::getUuid() const
{
    return m_Uuid;
}

void Wait_for_instances_request_inner::setUuid(const utility::string_t& value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}

bool Wait_for_instances_request_inner::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Wait_for_instances_request_inner::unsetUuid()
{
    m_UuidIsSet = false;
}
utility::string_t Wait_for_instances_request_inner::getName() const
{
    return m_Name;
}

void Wait_for_instances_request_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Wait_for_instances_request_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void Wait_for_instances_request_inner::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Wait_for_instances_request_inner::getState() const
{
    return m_State;
}

void Wait_for_instances_request_inner::setState(const utility::string_t& value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool Wait_for_instances_request_inner::stateIsSet() const
{
    return m_StateIsSet;
}

void Wait_for_instances_request_inner::unsetState()
{
    m_StateIsSet = false;
}
int32_t Wait_for_instances_request_inner::getTimeoutMs() const
{
    return m_Timeout_ms;
}

void Wait_for_instances_request_inner::setTimeoutMs(int32_t value)
{
    m_Timeout_ms = value;
    m_Timeout_msIsSet = true;
}

bool Wait_for_instances_request_inner::timeoutMsIsSet() const
{
    return m_Timeout_msIsSet;
}

void Wait_for_instances_request_inner::unsetTimeout_ms()
{
    m_Timeout_msIsSet = false;
}
}
}
}
}


