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
 * Create_services_200_response_data_service_groups_inner.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Create_services_200_response_data_service_groups_inner_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Create_services_200_response_data_service_groups_inner_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include "UnikraftCloudV1APIClient/model/Create_services_200_response_data_service_groups_inner_domains_inner.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {

class Create_services_200_response_data_service_groups_inner_domains_inner;


/// <summary>
/// 
/// </summary>
class  Create_services_200_response_data_service_groups_inner
    : public ModelBase
{
public:
    Create_services_200_response_data_service_groups_inner();
    virtual ~Create_services_200_response_data_service_groups_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Create_services_200_response_data_service_groups_inner members

    /// <summary>
    /// The status of the response. 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// The UUID of the newly created service. 
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();

    void setUuid(const utility::string_t& value);

    /// <summary>
    /// The name of the newly created service. 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Per-instance connection [soft limit](https://unikraft.cloud/docs/api/v1/services/#limits). 
    /// </summary>
    int32_t getSoftLimit() const;
    bool softLimitIsSet() const;
    void unsetSoft_limit();

    void setSoftLimit(int32_t value);

    /// <summary>
    /// Per-instance connection [hard limit](https://unikraft.cloud/docs/api/v1/services/#limits). 
    /// </summary>
    int32_t getHardLimit() const;
    bool hardLimitIsSet() const;
    void unsetHard_limit();

    void setHardLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Create_services_200_response_data_service_groups_inner_domains_inner>>& getDomains();
    bool domainsIsSet() const;
    void unsetDomains();

    void setDomains(const std::vector<std::shared_ptr<Create_services_200_response_data_service_groups_inner_domains_inner>>& value);


protected:
    utility::string_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    int32_t m_Soft_limit;
    bool m_Soft_limitIsSet;
    int32_t m_Hard_limit;
    bool m_Hard_limitIsSet;
    std::vector<std::shared_ptr<Create_services_200_response_data_service_groups_inner_domains_inner>> m_Domains;
    bool m_DomainsIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Create_services_200_response_data_service_groups_inner_H_ */
