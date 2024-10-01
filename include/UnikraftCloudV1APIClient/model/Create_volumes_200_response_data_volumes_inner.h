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
 * Create_volumes_200_response_data_volumes_inner.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Create_volumes_200_response_data_volumes_inner_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Create_volumes_200_response_data_volumes_inner_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



/// <summary>
/// 
/// </summary>
class  Create_volumes_200_response_data_volumes_inner
    : public ModelBase
{
public:
    Create_volumes_200_response_data_volumes_inner();
    virtual ~Create_volumes_200_response_data_volumes_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Create_volumes_200_response_data_volumes_inner members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// The UUID of the volume. 
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();

    void setUuid(const utility::string_t& value);

    /// <summary>
    /// The name of the volume. 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);


protected:
    utility::string_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Create_volumes_200_response_data_volumes_inner_H_ */
