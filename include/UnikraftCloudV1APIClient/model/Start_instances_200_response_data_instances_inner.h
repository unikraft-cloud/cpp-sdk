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
 * Start_instances_200_response_data_instances_inner.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Start_instances_200_response_data_instances_inner_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Start_instances_200_response_data_instances_inner_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



/// <summary>
/// 
/// </summary>
class  Start_instances_200_response_data_instances_inner
    : public ModelBase
{
public:
    Start_instances_200_response_data_instances_inner();
    virtual ~Start_instances_200_response_data_instances_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Start_instances_200_response_data_instances_inner members

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
    /// An instance can be in one of the following states:  State     | Description ----------|------------ &#x60;stopped&#x60; | The instance is not running and does not count against live resource quotas. Connections cannot be established. &#x60;starting&#x60;| The instance is booting up. This usually takes just a few milliseconds. &#x60;running&#x60; | Your application&#39;s main entry point has been reached. &#x60;draining&#x60;| The instance is draining connections before shutting down. No new connections can be established. &#x60;stopping&#x60;| The instance is shutting down. &#x60;standby&#x60; | The instance has [scale-to-zero](https://unikraft.cloud/docs/api/v1/autoscale#scaletozero) enabled. The instance is not running, but will be automatically started when there are incoming requests. 
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();

    void setState(const utility::string_t& value);

    /// <summary>
    /// An instance can be in one of the following states:  State     | Description ----------|------------ &#x60;stopped&#x60; | The instance is not running and does not count against live resource quotas. Connections cannot be established. &#x60;starting&#x60;| The instance is booting up. This usually takes just a few milliseconds. &#x60;running&#x60; | Your application&#39;s main entry point has been reached. &#x60;draining&#x60;| The instance is draining connections before shutting down. No new connections can be established. &#x60;stopping&#x60;| The instance is shutting down. &#x60;standby&#x60; | The instance has [scale-to-zero](https://unikraft.cloud/docs/api/v1/autoscale#scaletozero) enabled. The instance is not running, but will be automatically started when there are incoming requests. 
    /// </summary>
    utility::string_t getPreviousState() const;
    bool previousStateIsSet() const;
    void unsetPrevious_state();

    void setPreviousState(const utility::string_t& value);


protected:
    utility::string_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
    utility::string_t m_Previous_state;
    bool m_Previous_stateIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Start_instances_200_response_data_instances_inner_H_ */
