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



#include "UnikraftCloudV1APIClient/model/Create_services_200_response_data_service_groups_inner.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Create_services_200_response_data_service_groups_inner::Create_services_200_response_data_service_groups_inner()
{
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Soft_limit = 0;
    m_Soft_limitIsSet = false;
    m_Hard_limit = 0;
    m_Hard_limitIsSet = false;
    m_DomainsIsSet = false;
}

Create_services_200_response_data_service_groups_inner::~Create_services_200_response_data_service_groups_inner()
{
}

void Create_services_200_response_data_service_groups_inner::validate()
{
    // TODO: implement validation
}

web::json::value Create_services_200_response_data_service_groups_inner::toJson() const
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
    if(m_Soft_limitIsSet)
    {
        val[utility::conversions::to_string_t(U("soft_limit"))] = ModelBase::toJson(m_Soft_limit);
    }
    if(m_Hard_limitIsSet)
    {
        val[utility::conversions::to_string_t(U("hard_limit"))] = ModelBase::toJson(m_Hard_limit);
    }
    if(m_DomainsIsSet)
    {
        val[utility::conversions::to_string_t(U("domains"))] = ModelBase::toJson(m_Domains);
    }

    return val;
}

bool Create_services_200_response_data_service_groups_inner::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("soft_limit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("soft_limit")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSoftLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSoftLimit);
            setSoftLimit(refVal_setSoftLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("hard_limit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("hard_limit")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setHardLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHardLimit);
            setHardLimit(refVal_setHardLimit);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("domains"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("domains")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Create_services_200_response_data_service_groups_inner_domains_inner>> refVal_setDomains;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDomains);
            setDomains(refVal_setDomains);
        }
    }
    return ok;
}

void Create_services_200_response_data_service_groups_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Soft_limitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("soft_limit")), m_Soft_limit));
    }
    if(m_Hard_limitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("hard_limit")), m_Hard_limit));
    }
    if(m_DomainsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("domains")), m_Domains));
    }
}

bool Create_services_200_response_data_service_groups_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("soft_limit"))))
    {
        int32_t refVal_setSoftLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("soft_limit"))), refVal_setSoftLimit );
        setSoftLimit(refVal_setSoftLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("hard_limit"))))
    {
        int32_t refVal_setHardLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("hard_limit"))), refVal_setHardLimit );
        setHardLimit(refVal_setHardLimit);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("domains"))))
    {
        std::vector<std::shared_ptr<Create_services_200_response_data_service_groups_inner_domains_inner>> refVal_setDomains;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("domains"))), refVal_setDomains );
        setDomains(refVal_setDomains);
    }
    return ok;
}

utility::string_t Create_services_200_response_data_service_groups_inner::getStatus() const
{
    return m_Status;
}

void Create_services_200_response_data_service_groups_inner::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Create_services_200_response_data_service_groups_inner::statusIsSet() const
{
    return m_StatusIsSet;
}

void Create_services_200_response_data_service_groups_inner::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t Create_services_200_response_data_service_groups_inner::getUuid() const
{
    return m_Uuid;
}

void Create_services_200_response_data_service_groups_inner::setUuid(const utility::string_t& value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}

bool Create_services_200_response_data_service_groups_inner::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Create_services_200_response_data_service_groups_inner::unsetUuid()
{
    m_UuidIsSet = false;
}
utility::string_t Create_services_200_response_data_service_groups_inner::getName() const
{
    return m_Name;
}

void Create_services_200_response_data_service_groups_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Create_services_200_response_data_service_groups_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void Create_services_200_response_data_service_groups_inner::unsetName()
{
    m_NameIsSet = false;
}
int32_t Create_services_200_response_data_service_groups_inner::getSoftLimit() const
{
    return m_Soft_limit;
}

void Create_services_200_response_data_service_groups_inner::setSoftLimit(int32_t value)
{
    m_Soft_limit = value;
    m_Soft_limitIsSet = true;
}

bool Create_services_200_response_data_service_groups_inner::softLimitIsSet() const
{
    return m_Soft_limitIsSet;
}

void Create_services_200_response_data_service_groups_inner::unsetSoft_limit()
{
    m_Soft_limitIsSet = false;
}
int32_t Create_services_200_response_data_service_groups_inner::getHardLimit() const
{
    return m_Hard_limit;
}

void Create_services_200_response_data_service_groups_inner::setHardLimit(int32_t value)
{
    m_Hard_limit = value;
    m_Hard_limitIsSet = true;
}

bool Create_services_200_response_data_service_groups_inner::hardLimitIsSet() const
{
    return m_Hard_limitIsSet;
}

void Create_services_200_response_data_service_groups_inner::unsetHard_limit()
{
    m_Hard_limitIsSet = false;
}
std::vector<std::shared_ptr<Create_services_200_response_data_service_groups_inner_domains_inner>>& Create_services_200_response_data_service_groups_inner::getDomains()
{
    return m_Domains;
}

void Create_services_200_response_data_service_groups_inner::setDomains(const std::vector<std::shared_ptr<Create_services_200_response_data_service_groups_inner_domains_inner>>& value)
{
    m_Domains = value;
    m_DomainsIsSet = true;
}

bool Create_services_200_response_data_service_groups_inner::domainsIsSet() const
{
    return m_DomainsIsSet;
}

void Create_services_200_response_data_service_groups_inner::unsetDomains()
{
    m_DomainsIsSet = false;
}
}
}
}
}


