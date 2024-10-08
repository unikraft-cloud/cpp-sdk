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
 * Instance_restart.h
 *
 * Information about [auto-restarts](https://unikraft.cloud/docs/api/v1/instances/#restart). 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Instance_restart_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Instance_restart_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



/// <summary>
/// Information about [auto-restarts](https://unikraft.cloud/docs/api/v1/instances/#restart). 
/// </summary>
class  Instance_restart
    : public ModelBase
{
public:
    Instance_restart();
    virtual ~Instance_restart();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Instance_restart members

    /// <summary>
    /// Number of restarts performed in the current restart sequence. 
    /// </summary>
    int32_t getAttempt() const;
    bool attemptIsSet() const;
    void unsetAttempt();

    void setAttempt(int32_t value);

    /// <summary>
    /// Date and time of next restart attempt in ISO8601. 
    /// </summary>
    utility::datetime getNextAt() const;
    bool nextAtIsSet() const;
    void unsetNext_at();

    void setNextAt(const utility::datetime& value);


protected:
    int32_t m_Attempt;
    bool m_AttemptIsSet;
    utility::datetime m_Next_at;
    bool m_Next_atIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Instance_restart_H_ */
