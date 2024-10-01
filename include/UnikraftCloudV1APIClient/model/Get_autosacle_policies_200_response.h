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
 * Get_autosacle_policies_200_response.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Get_autosacle_policies_200_response_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Get_autosacle_policies_200_response_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include "UnikraftCloudV1APIClient/model/Get_autosacle_policies_200_response_data.h"
#include <cpprest/details/basic_types.h>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {

class Get_autosacle_policies_200_response_data;


/// <summary>
/// 
/// </summary>
class  Get_autosacle_policies_200_response
    : public ModelBase
{
public:
    Get_autosacle_policies_200_response();
    virtual ~Get_autosacle_policies_200_response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Get_autosacle_policies_200_response members

    /// <summary>
    /// The status of the response. 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Get_autosacle_policies_200_response_data> getData() const;
    bool dataIsSet() const;
    void unsetData();

    void setData(const std::shared_ptr<Get_autosacle_policies_200_response_data>& value);


protected:
    utility::string_t m_Status;
    bool m_StatusIsSet;
    std::shared_ptr<Get_autosacle_policies_200_response_data> m_Data;
    bool m_DataIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Get_autosacle_policies_200_response_H_ */
