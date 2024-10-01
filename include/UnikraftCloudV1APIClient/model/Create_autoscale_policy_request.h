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
 * Create_autoscale_policy_request.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Create_autoscale_policy_request_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Create_autoscale_policy_request_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "UnikraftCloudV1APIClient/model/Autoscale_policy_step.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {

class Autoscale_policy_step;


/// <summary>
/// 
/// </summary>
class  Create_autoscale_policy_request
    : public ModelBase
{
public:
    Create_autoscale_policy_request();
    virtual ~Create_autoscale_policy_request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Create_autoscale_policy_request members

    /// <summary>
    /// The name of the policy. 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Type of autoscale policy. 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// Metric to monitor. 
    /// </summary>
    utility::string_t getMetric() const;
    bool metricIsSet() const;
    void unsetMetric();

    void setMetric(const utility::string_t& value);

    /// <summary>
    /// Type of adjustment. 
    /// </summary>
    utility::string_t getAdjustmentType() const;
    bool adjustmentTypeIsSet() const;
    void unsetAdjustment_type();

    void setAdjustmentType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Autoscale_policy_step> getSteps() const;
    bool stepsIsSet() const;
    void unsetSteps();

    void setSteps(const std::shared_ptr<Autoscale_policy_step>& value);


protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Metric;
    bool m_MetricIsSet;
    utility::string_t m_Adjustment_type;
    bool m_Adjustment_typeIsSet;
    std::shared_ptr<Autoscale_policy_step> m_Steps;
    bool m_StepsIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Create_autoscale_policy_request_H_ */
