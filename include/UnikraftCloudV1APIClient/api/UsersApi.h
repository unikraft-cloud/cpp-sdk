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
 * UsersApi.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_API_UsersApi_H_
#define CLOUD_UNIKRAFT_V1_API_UsersApi_H_



#include "UnikraftCloudV1APIClient/ApiClient.h"

#include "UnikraftCloudV1APIClient/model/Get_certificates_default_response.h"
#include "UnikraftCloudV1APIClient/model/Get_quota_by_uuid_200_response.h"
#include "UnikraftCloudV1APIClient/model/Get_quotas_200_response.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace api {

using namespace cloud::unikraft::v1::model;

class  IUsersApi
{
public:
    IUsersApi() = default;
    virtual ~IUsersApi() = default;

    virtual pplx::task<std::shared_ptr<Get_quota_by_uuid_200_response>> getQuotaByUuid(
        utility::string_t uuid
    ) const = 0;
    virtual pplx::task<std::shared_ptr<Get_quotas_200_response>> getQuotas(
    ) const = 0;
};

class  UsersApi  : public IUsersApi 
{
public:
    using Base = IUsersApi;

    explicit UsersApi( std::shared_ptr<const ApiClient> apiClient );

    ~UsersApi() override;

    /// <summary>
    /// Get quota information given their UUID
    /// </summary>
    /// <remarks>
    /// Lists quota usage and limits for the provided UUID. Limits are hard limits that cannot be exceeded. 
    /// </remarks>
    /// <param name="uuid">The UUID of the resource. The UUID is a 36-character string that uniquely identifies the resource. The UUID is returned by the API after creating a resource. </param>
    pplx::task<std::shared_ptr<Get_quota_by_uuid_200_response>> getQuotaByUuid(
        utility::string_t uuid
    ) const override;
    /// <summary>
    /// Get quota information for one or more users
    /// </summary>
    /// <remarks>
    /// Lists quota usage and limits of the specified user account. Limits are hard limits that cannot be exceeded. 
    /// </remarks>
    pplx::task<std::shared_ptr<Get_quotas_200_response>> getQuotas(
    ) const override;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_API_UsersApi_H_ */

