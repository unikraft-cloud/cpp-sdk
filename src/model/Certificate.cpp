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



#include "UnikraftCloudV1APIClient/model/Certificate.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Certificate::Certificate()
{
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Created_at = utility::datetime();
    m_Created_atIsSet = false;
    m_Common_name = utility::conversions::to_string_t("");
    m_Common_nameIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
    m_ValidationIsSet = false;
    m_Subject = utility::conversions::to_string_t("");
    m_SubjectIsSet = false;
    m_Issuer = utility::conversions::to_string_t("");
    m_IssuerIsSet = false;
    m_Serial_number = utility::conversions::to_string_t("");
    m_Serial_numberIsSet = false;
    m_Not_before = utility::datetime();
    m_Not_beforeIsSet = false;
    m_Not_after = utility::datetime();
    m_Not_afterIsSet = false;
    m_Service_groupsIsSet = false;
}

Certificate::~Certificate()
{
}

void Certificate::validate()
{
    // TODO: implement validation
}

web::json::value Certificate::toJson() const
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
    if(m_Created_atIsSet)
    {
        val[utility::conversions::to_string_t(U("created_at"))] = ModelBase::toJson(m_Created_at);
    }
    if(m_Common_nameIsSet)
    {
        val[utility::conversions::to_string_t(U("common_name"))] = ModelBase::toJson(m_Common_name);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t(U("state"))] = ModelBase::toJson(m_State);
    }
    if(m_ValidationIsSet)
    {
        val[utility::conversions::to_string_t(U("validation"))] = ModelBase::toJson(m_Validation);
    }
    if(m_SubjectIsSet)
    {
        val[utility::conversions::to_string_t(U("subject"))] = ModelBase::toJson(m_Subject);
    }
    if(m_IssuerIsSet)
    {
        val[utility::conversions::to_string_t(U("issuer"))] = ModelBase::toJson(m_Issuer);
    }
    if(m_Serial_numberIsSet)
    {
        val[utility::conversions::to_string_t(U("serial_number"))] = ModelBase::toJson(m_Serial_number);
    }
    if(m_Not_beforeIsSet)
    {
        val[utility::conversions::to_string_t(U("not_before"))] = ModelBase::toJson(m_Not_before);
    }
    if(m_Not_afterIsSet)
    {
        val[utility::conversions::to_string_t(U("not_after"))] = ModelBase::toJson(m_Not_after);
    }
    if(m_Service_groupsIsSet)
    {
        val[utility::conversions::to_string_t(U("service_groups"))] = ModelBase::toJson(m_Service_groups);
    }

    return val;
}

bool Certificate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t(U("created_at"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("created_at")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setCreatedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCreatedAt);
            setCreatedAt(refVal_setCreatedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("common_name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("common_name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCommonName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCommonName);
            setCommonName(refVal_setCommonName);
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
    if(val.has_field(utility::conversions::to_string_t(U("validation"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("validation")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Certificate_validation> refVal_setValidation;
            ok &= ModelBase::fromJson(fieldValue, refVal_setValidation);
            setValidation(refVal_setValidation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("subject"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("subject")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSubject;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSubject);
            setSubject(refVal_setSubject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("issuer"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("issuer")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setIssuer;
            ok &= ModelBase::fromJson(fieldValue, refVal_setIssuer);
            setIssuer(refVal_setIssuer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("serial_number"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("serial_number")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setSerialNumber;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSerialNumber);
            setSerialNumber(refVal_setSerialNumber);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("not_before"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("not_before")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setNotBefore;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNotBefore);
            setNotBefore(refVal_setNotBefore);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("not_after"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("not_after")));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_setNotAfter;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNotAfter);
            setNotAfter(refVal_setNotAfter);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("service_groups"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("service_groups")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Certificate_service_groups_inner>> refVal_setServiceGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_setServiceGroups);
            setServiceGroups(refVal_setServiceGroups);
        }
    }
    return ok;
}

void Certificate::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("created_at")), m_Created_at));
    }
    if(m_Common_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("common_name")), m_Common_name));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("state")), m_State));
    }
    if(m_ValidationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("validation")), m_Validation));
    }
    if(m_SubjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("subject")), m_Subject));
    }
    if(m_IssuerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("issuer")), m_Issuer));
    }
    if(m_Serial_numberIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("serial_number")), m_Serial_number));
    }
    if(m_Not_beforeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("not_before")), m_Not_before));
    }
    if(m_Not_afterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("not_after")), m_Not_after));
    }
    if(m_Service_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("service_groups")), m_Service_groups));
    }
}

bool Certificate::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t(U("created_at"))))
    {
        utility::datetime refVal_setCreatedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("created_at"))), refVal_setCreatedAt );
        setCreatedAt(refVal_setCreatedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("common_name"))))
    {
        utility::string_t refVal_setCommonName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("common_name"))), refVal_setCommonName );
        setCommonName(refVal_setCommonName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("state"))))
    {
        utility::string_t refVal_setState;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("state"))), refVal_setState );
        setState(refVal_setState);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("validation"))))
    {
        std::shared_ptr<Certificate_validation> refVal_setValidation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("validation"))), refVal_setValidation );
        setValidation(refVal_setValidation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("subject"))))
    {
        utility::string_t refVal_setSubject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("subject"))), refVal_setSubject );
        setSubject(refVal_setSubject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("issuer"))))
    {
        utility::string_t refVal_setIssuer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("issuer"))), refVal_setIssuer );
        setIssuer(refVal_setIssuer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("serial_number"))))
    {
        utility::string_t refVal_setSerialNumber;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("serial_number"))), refVal_setSerialNumber );
        setSerialNumber(refVal_setSerialNumber);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("not_before"))))
    {
        utility::datetime refVal_setNotBefore;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("not_before"))), refVal_setNotBefore );
        setNotBefore(refVal_setNotBefore);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("not_after"))))
    {
        utility::datetime refVal_setNotAfter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("not_after"))), refVal_setNotAfter );
        setNotAfter(refVal_setNotAfter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("service_groups"))))
    {
        std::vector<std::shared_ptr<Certificate_service_groups_inner>> refVal_setServiceGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("service_groups"))), refVal_setServiceGroups );
        setServiceGroups(refVal_setServiceGroups);
    }
    return ok;
}

utility::string_t Certificate::getStatus() const
{
    return m_Status;
}

void Certificate::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Certificate::statusIsSet() const
{
    return m_StatusIsSet;
}

void Certificate::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t Certificate::getUuid() const
{
    return m_Uuid;
}

void Certificate::setUuid(const utility::string_t& value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}

bool Certificate::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Certificate::unsetUuid()
{
    m_UuidIsSet = false;
}
utility::string_t Certificate::getName() const
{
    return m_Name;
}

void Certificate::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Certificate::nameIsSet() const
{
    return m_NameIsSet;
}

void Certificate::unsetName()
{
    m_NameIsSet = false;
}
utility::datetime Certificate::getCreatedAt() const
{
    return m_Created_at;
}

void Certificate::setCreatedAt(const utility::datetime& value)
{
    m_Created_at = value;
    m_Created_atIsSet = true;
}

bool Certificate::createdAtIsSet() const
{
    return m_Created_atIsSet;
}

void Certificate::unsetCreated_at()
{
    m_Created_atIsSet = false;
}
utility::string_t Certificate::getCommonName() const
{
    return m_Common_name;
}

void Certificate::setCommonName(const utility::string_t& value)
{
    m_Common_name = value;
    m_Common_nameIsSet = true;
}

bool Certificate::commonNameIsSet() const
{
    return m_Common_nameIsSet;
}

void Certificate::unsetCommon_name()
{
    m_Common_nameIsSet = false;
}
utility::string_t Certificate::getState() const
{
    return m_State;
}

void Certificate::setState(const utility::string_t& value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool Certificate::stateIsSet() const
{
    return m_StateIsSet;
}

void Certificate::unsetState()
{
    m_StateIsSet = false;
}
std::shared_ptr<Certificate_validation> Certificate::getValidation() const
{
    return m_Validation;
}

void Certificate::setValidation(const std::shared_ptr<Certificate_validation>& value)
{
    m_Validation = value;
    m_ValidationIsSet = true;
}

bool Certificate::validationIsSet() const
{
    return m_ValidationIsSet;
}

void Certificate::unsetValidation()
{
    m_ValidationIsSet = false;
}
utility::string_t Certificate::getSubject() const
{
    return m_Subject;
}

void Certificate::setSubject(const utility::string_t& value)
{
    m_Subject = value;
    m_SubjectIsSet = true;
}

bool Certificate::subjectIsSet() const
{
    return m_SubjectIsSet;
}

void Certificate::unsetSubject()
{
    m_SubjectIsSet = false;
}
utility::string_t Certificate::getIssuer() const
{
    return m_Issuer;
}

void Certificate::setIssuer(const utility::string_t& value)
{
    m_Issuer = value;
    m_IssuerIsSet = true;
}

bool Certificate::issuerIsSet() const
{
    return m_IssuerIsSet;
}

void Certificate::unsetIssuer()
{
    m_IssuerIsSet = false;
}
utility::string_t Certificate::getSerialNumber() const
{
    return m_Serial_number;
}

void Certificate::setSerialNumber(const utility::string_t& value)
{
    m_Serial_number = value;
    m_Serial_numberIsSet = true;
}

bool Certificate::serialNumberIsSet() const
{
    return m_Serial_numberIsSet;
}

void Certificate::unsetSerial_number()
{
    m_Serial_numberIsSet = false;
}
utility::datetime Certificate::getNotBefore() const
{
    return m_Not_before;
}

void Certificate::setNotBefore(const utility::datetime& value)
{
    m_Not_before = value;
    m_Not_beforeIsSet = true;
}

bool Certificate::notBeforeIsSet() const
{
    return m_Not_beforeIsSet;
}

void Certificate::unsetNot_before()
{
    m_Not_beforeIsSet = false;
}
utility::datetime Certificate::getNotAfter() const
{
    return m_Not_after;
}

void Certificate::setNotAfter(const utility::datetime& value)
{
    m_Not_after = value;
    m_Not_afterIsSet = true;
}

bool Certificate::notAfterIsSet() const
{
    return m_Not_afterIsSet;
}

void Certificate::unsetNot_after()
{
    m_Not_afterIsSet = false;
}
std::vector<std::shared_ptr<Certificate_service_groups_inner>>& Certificate::getServiceGroups()
{
    return m_Service_groups;
}

void Certificate::setServiceGroups(const std::vector<std::shared_ptr<Certificate_service_groups_inner>>& value)
{
    m_Service_groups = value;
    m_Service_groupsIsSet = true;
}

bool Certificate::serviceGroupsIsSet() const
{
    return m_Service_groupsIsSet;
}

void Certificate::unsetService_groups()
{
    m_Service_groupsIsSet = false;
}
}
}
}
}


