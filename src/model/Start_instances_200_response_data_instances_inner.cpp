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



#include "UnikraftCloudV1APIClient/model/Start_instances_200_response_data_instances_inner.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Start_instances_200_response_data_instances_inner::Start_instances_200_response_data_instances_inner()
{
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
    m_Previous_state = utility::conversions::to_string_t("");
    m_Previous_stateIsSet = false;
}

Start_instances_200_response_data_instances_inner::~Start_instances_200_response_data_instances_inner()
{
}

void Start_instances_200_response_data_instances_inner::validate()
{
    // TODO: implement validation
}

web::json::value Start_instances_200_response_data_instances_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t(U("status"))] = ModelBase::toJson(m_Status);
    }
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
    if(m_Previous_stateIsSet)
    {
        val[utility::conversions::to_string_t(U("previous_state"))] = ModelBase::toJson(m_Previous_state);
    }

    return val;
}

bool Start_instances_200_response_data_instances_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("status"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("status")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setStatus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setStatus);
            setStatus(refVal_setStatus);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t(U("previous_state"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("previous_state")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPreviousState;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPreviousState);
            setPreviousState(refVal_setPreviousState);
        }
    }
    return ok;
}

void Start_instances_200_response_data_instances_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("status")), m_Status));
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
    if(m_Previous_stateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("previous_state")), m_Previous_state));
    }
}

bool Start_instances_200_response_data_instances_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("status"))))
    {
        utility::string_t refVal_setStatus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("status"))), refVal_setStatus );
        setStatus(refVal_setStatus);
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("previous_state"))))
    {
        utility::string_t refVal_setPreviousState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("previous_state"))), refVal_setPreviousState );
        setPreviousState(refVal_setPreviousState);
    }
    return ok;
}

utility::string_t Start_instances_200_response_data_instances_inner::getStatus() const
{
    return m_Status;
}

void Start_instances_200_response_data_instances_inner::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Start_instances_200_response_data_instances_inner::statusIsSet() const
{
    return m_StatusIsSet;
}

void Start_instances_200_response_data_instances_inner::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t Start_instances_200_response_data_instances_inner::getUuid() const
{
    return m_Uuid;
}

void Start_instances_200_response_data_instances_inner::setUuid(const utility::string_t& value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}

bool Start_instances_200_response_data_instances_inner::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Start_instances_200_response_data_instances_inner::unsetUuid()
{
    m_UuidIsSet = false;
}
utility::string_t Start_instances_200_response_data_instances_inner::getName() const
{
    return m_Name;
}

void Start_instances_200_response_data_instances_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Start_instances_200_response_data_instances_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void Start_instances_200_response_data_instances_inner::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Start_instances_200_response_data_instances_inner::getState() const
{
    return m_State;
}

void Start_instances_200_response_data_instances_inner::setState(const utility::string_t& value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool Start_instances_200_response_data_instances_inner::stateIsSet() const
{
    return m_StateIsSet;
}

void Start_instances_200_response_data_instances_inner::unsetState()
{
    m_StateIsSet = false;
}
utility::string_t Start_instances_200_response_data_instances_inner::getPreviousState() const
{
    return m_Previous_state;
}

void Start_instances_200_response_data_instances_inner::setPreviousState(const utility::string_t& value)
{
    m_Previous_state = value;
    m_Previous_stateIsSet = true;
}

bool Start_instances_200_response_data_instances_inner::previousStateIsSet() const
{
    return m_Previous_stateIsSet;
}

void Start_instances_200_response_data_instances_inner::unsetPrevious_state()
{
    m_Previous_stateIsSet = false;
}
}
}
}
}


