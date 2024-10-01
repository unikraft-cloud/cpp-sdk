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



#include "UnikraftCloudV1APIClient/model/Get_instance_logs_200_response_data_instances_inner.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Get_instance_logs_200_response_data_instances_inner::Get_instance_logs_200_response_data_instances_inner()
{
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_OutputIsSet = false;
    m_AvailableIsSet = false;
    m_RangeIsSet = false;
}

Get_instance_logs_200_response_data_instances_inner::~Get_instance_logs_200_response_data_instances_inner()
{
}

void Get_instance_logs_200_response_data_instances_inner::validate()
{
    // TODO: implement validation
}

web::json::value Get_instance_logs_200_response_data_instances_inner::toJson() const
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
    if(m_OutputIsSet)
    {
        val[utility::conversions::to_string_t(U("output"))] = ModelBase::toJson(m_Output);
    }
    if(m_AvailableIsSet)
    {
        val[utility::conversions::to_string_t(U("available"))] = ModelBase::toJson(m_Available);
    }
    if(m_RangeIsSet)
    {
        val[utility::conversions::to_string_t(U("range"))] = ModelBase::toJson(m_Range);
    }

    return val;
}

bool Get_instance_logs_200_response_data_instances_inner::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("output"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("output")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setOutput;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOutput);
            setOutput(refVal_setOutput);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("available"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("available")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_available> refVal_setAvailable;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAvailable);
            setAvailable(refVal_setAvailable);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("range"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("range")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_range> refVal_setRange;
            ok &= ModelBase::fromJson(fieldValue, refVal_setRange);
            setRange(refVal_setRange);
        }
    }
    return ok;
}

void Get_instance_logs_200_response_data_instances_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_OutputIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("output")), m_Output));
    }
    if(m_AvailableIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("available")), m_Available));
    }
    if(m_RangeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("range")), m_Range));
    }
}

bool Get_instance_logs_200_response_data_instances_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("output"))))
    {
        utility::string_t refVal_setOutput;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("output"))), refVal_setOutput );
        setOutput(refVal_setOutput);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("available"))))
    {
        std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_available> refVal_setAvailable;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("available"))), refVal_setAvailable );
        setAvailable(refVal_setAvailable);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("range"))))
    {
        std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_range> refVal_setRange;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("range"))), refVal_setRange );
        setRange(refVal_setRange);
    }
    return ok;
}

utility::string_t Get_instance_logs_200_response_data_instances_inner::getStatus() const
{
    return m_Status;
}

void Get_instance_logs_200_response_data_instances_inner::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Get_instance_logs_200_response_data_instances_inner::statusIsSet() const
{
    return m_StatusIsSet;
}

void Get_instance_logs_200_response_data_instances_inner::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t Get_instance_logs_200_response_data_instances_inner::getUuid() const
{
    return m_Uuid;
}

void Get_instance_logs_200_response_data_instances_inner::setUuid(const utility::string_t& value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}

bool Get_instance_logs_200_response_data_instances_inner::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Get_instance_logs_200_response_data_instances_inner::unsetUuid()
{
    m_UuidIsSet = false;
}
utility::string_t Get_instance_logs_200_response_data_instances_inner::getName() const
{
    return m_Name;
}

void Get_instance_logs_200_response_data_instances_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Get_instance_logs_200_response_data_instances_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void Get_instance_logs_200_response_data_instances_inner::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Get_instance_logs_200_response_data_instances_inner::getOutput() const
{
    return m_Output;
}

void Get_instance_logs_200_response_data_instances_inner::setOutput(const utility::string_t& value)
{
    m_Output = value;
    m_OutputIsSet = true;
}

bool Get_instance_logs_200_response_data_instances_inner::outputIsSet() const
{
    return m_OutputIsSet;
}

void Get_instance_logs_200_response_data_instances_inner::unsetOutput()
{
    m_OutputIsSet = false;
}
std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_available> Get_instance_logs_200_response_data_instances_inner::getAvailable() const
{
    return m_Available;
}

void Get_instance_logs_200_response_data_instances_inner::setAvailable(const std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_available>& value)
{
    m_Available = value;
    m_AvailableIsSet = true;
}

bool Get_instance_logs_200_response_data_instances_inner::availableIsSet() const
{
    return m_AvailableIsSet;
}

void Get_instance_logs_200_response_data_instances_inner::unsetAvailable()
{
    m_AvailableIsSet = false;
}
std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_range> Get_instance_logs_200_response_data_instances_inner::getRange() const
{
    return m_Range;
}

void Get_instance_logs_200_response_data_instances_inner::setRange(const std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_range>& value)
{
    m_Range = value;
    m_RangeIsSet = true;
}

bool Get_instance_logs_200_response_data_instances_inner::rangeIsSet() const
{
    return m_RangeIsSet;
}

void Get_instance_logs_200_response_data_instances_inner::unsetRange()
{
    m_RangeIsSet = false;
}
}
}
}
}


