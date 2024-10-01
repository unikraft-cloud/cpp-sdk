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

/*
 * Get_certificates_request_inner.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Get_certificates_request_inner_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Get_certificates_request_inner_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



/// <summary>
/// 
/// </summary>
class  Get_certificates_request_inner
    : public ModelBase
{
public:
    Get_certificates_request_inner();
    virtual ~Get_certificates_request_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Get_certificates_request_inner members

    /// <summary>
    /// The UUID of the certificate to retrieve.  Note: This property is mutually exclusive with &#x60;name&#x60; and either &#x60;uuid&#x60; or &#x60;name&#x60; are required. 
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();

    void setUuid(const utility::string_t& value);

    /// <summary>
    /// The name of the certificate to retrieve.  Note: This property is mutually exclusive with &#x60;uuid&#x60; and either &#x60;uuid&#x60; or &#x60;name&#x60; are required. 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);


protected:
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Get_certificates_request_inner_H_ */
