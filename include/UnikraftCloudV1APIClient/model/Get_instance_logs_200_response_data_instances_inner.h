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
 * Get_instance_logs_200_response_data_instances_inner.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Get_instance_logs_200_response_data_instances_inner_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Get_instance_logs_200_response_data_instances_inner_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include "UnikraftCloudV1APIClient/model/Get_instance_logs_200_response_data_instances_inner_range.h"
#include "UnikraftCloudV1APIClient/model/Get_instance_logs_200_response_data_instances_inner_available.h"
#include <cpprest/details/basic_types.h>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {

class Get_instance_logs_200_response_data_instances_inner_available;
class Get_instance_logs_200_response_data_instances_inner_range;


/// <summary>
/// 
/// </summary>
class  Get_instance_logs_200_response_data_instances_inner
    : public ModelBase
{
public:
    Get_instance_logs_200_response_data_instances_inner();
    virtual ~Get_instance_logs_200_response_data_instances_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Get_instance_logs_200_response_data_instances_inner members

    /// <summary>
    /// The status of the response. 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// The UUID of the instance. 
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();

    void setUuid(const utility::string_t& value);

    /// <summary>
    /// The name of the instance. 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// BASE64 encoded log output. 
    /// </summary>
    utility::string_t getOutput() const;
    bool outputIsSet() const;
    void unsetOutput();

    void setOutput(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_available> getAvailable() const;
    bool availableIsSet() const;
    void unsetAvailable();

    void setAvailable(const std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_available>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_range> getRange() const;
    bool rangeIsSet() const;
    void unsetRange();

    void setRange(const std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_range>& value);


protected:
    utility::string_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Output;
    bool m_OutputIsSet;
    std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_available> m_Available;
    bool m_AvailableIsSet;
    std::shared_ptr<Get_instance_logs_200_response_data_instances_inner_range> m_Range;
    bool m_RangeIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Get_instance_logs_200_response_data_instances_inner_H_ */
