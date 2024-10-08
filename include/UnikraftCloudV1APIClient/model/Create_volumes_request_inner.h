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
 * Create_volumes_request_inner.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Create_volumes_request_inner_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Create_volumes_request_inner_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



/// <summary>
/// 
/// </summary>
class  Create_volumes_request_inner
    : public ModelBase
{
public:
    Create_volumes_request_inner();
    virtual ~Create_volumes_request_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Create_volumes_request_inner members

    /// <summary>
    /// The name of the volume.  Note: If no name is specified a random name of the form &#x60;vol-X&#x60; is auto-generated, where &#x60;X&#x60; is a 5 character long random alphanumeric suffix. 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Size of the volume in megabytes. 
    /// </summary>
    int32_t getSizeMb() const;
    bool sizeMbIsSet() const;
    void unsetSize_mb();

    void setSizeMb(int32_t value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    int32_t m_Size_mb;
    bool m_Size_mbIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Create_volumes_request_inner_H_ */
