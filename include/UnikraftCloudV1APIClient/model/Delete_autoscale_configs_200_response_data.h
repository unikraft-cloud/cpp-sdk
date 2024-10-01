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
 * Delete_autoscale_configs_200_response_data.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Delete_autoscale_configs_200_response_data_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Delete_autoscale_configs_200_response_data_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include "UnikraftCloudV1APIClient/model/Delete_autoscale_configs_200_response_data_service_groups_inner.h"
#include <vector>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {

class Delete_autoscale_configs_200_response_data_service_groups_inner;


/// <summary>
/// 
/// </summary>
class  Delete_autoscale_configs_200_response_data
    : public ModelBase
{
public:
    Delete_autoscale_configs_200_response_data();
    virtual ~Delete_autoscale_configs_200_response_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Delete_autoscale_configs_200_response_data members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Delete_autoscale_configs_200_response_data_service_groups_inner>>& getServiceGroups();
    bool serviceGroupsIsSet() const;
    void unsetService_groups();

    void setServiceGroups(const std::vector<std::shared_ptr<Delete_autoscale_configs_200_response_data_service_groups_inner>>& value);


protected:
    std::vector<std::shared_ptr<Delete_autoscale_configs_200_response_data_service_groups_inner>> m_Service_groups;
    bool m_Service_groupsIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Delete_autoscale_configs_200_response_data_H_ */
