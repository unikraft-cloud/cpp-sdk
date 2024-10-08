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
 * Get_images_request_inner.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Get_images_request_inner_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Get_images_request_inner_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



/// <summary>
/// 
/// </summary>
class  Get_images_request_inner
    : public ModelBase
{
public:
    Get_images_request_inner();
    virtual ~Get_images_request_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Get_images_request_inner members

    /// <summary>
    /// Image digest to lookup. 
    /// </summary>
    utility::string_t getDigest() const;
    bool digestIsSet() const;
    void unsetDigest();

    void setDigest(const utility::string_t& value);

    /// <summary>
    /// Image tag to lookup. 
    /// </summary>
    utility::string_t getTagged() const;
    bool taggedIsSet() const;
    void unsetTagged();

    void setTagged(const utility::string_t& value);


protected:
    utility::string_t m_Digest;
    bool m_DigestIsSet;
    utility::string_t m_Tagged;
    bool m_TaggedIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Get_images_request_inner_H_ */
