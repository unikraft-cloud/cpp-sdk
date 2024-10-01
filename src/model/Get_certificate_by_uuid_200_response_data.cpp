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



#include "UnikraftCloudV1APIClient/model/Get_certificate_by_uuid_200_response_data.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Get_certificate_by_uuid_200_response_data::Get_certificate_by_uuid_200_response_data()
{
    m_CertificatesIsSet = false;
}

Get_certificate_by_uuid_200_response_data::~Get_certificate_by_uuid_200_response_data()
{
}

void Get_certificate_by_uuid_200_response_data::validate()
{
    // TODO: implement validation
}

web::json::value Get_certificate_by_uuid_200_response_data::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CertificatesIsSet)
    {
        val[utility::conversions::to_string_t(U("certificates"))] = ModelBase::toJson(m_Certificates);
    }

    return val;
}

bool Get_certificate_by_uuid_200_response_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("certificates"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("certificates")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Certificate>> refVal_setCertificates;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCertificates);
            setCertificates(refVal_setCertificates);
        }
    }
    return ok;
}

void Get_certificate_by_uuid_200_response_data::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_CertificatesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("certificates")), m_Certificates));
    }
}

bool Get_certificate_by_uuid_200_response_data::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("certificates"))))
    {
        std::vector<std::shared_ptr<Certificate>> refVal_setCertificates;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("certificates"))), refVal_setCertificates );
        setCertificates(refVal_setCertificates);
    }
    return ok;
}

std::vector<std::shared_ptr<Certificate>>& Get_certificate_by_uuid_200_response_data::getCertificates()
{
    return m_Certificates;
}

void Get_certificate_by_uuid_200_response_data::setCertificates(const std::vector<std::shared_ptr<Certificate>>& value)
{
    m_Certificates = value;
    m_CertificatesIsSet = true;
}

bool Get_certificate_by_uuid_200_response_data::certificatesIsSet() const
{
    return m_CertificatesIsSet;
}

void Get_certificate_by_uuid_200_response_data::unsetCertificates()
{
    m_CertificatesIsSet = false;
}
}
}
}
}


