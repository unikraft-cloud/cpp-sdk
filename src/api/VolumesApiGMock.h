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

#ifndef CLOUD_UNIKRAFT_V1_API_VolumesApiGMock_H_
#define CLOUD_UNIKRAFT_V1_API_VolumesApiGMock_H_

#include <gmock/gmock.h>

#include "VolumesApi.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace api {

using namespace cloud::unikraft::v1::model;


class  VolumesApiMock : public IVolumesApi
{
public:
    using Base = IVolumesApi;

    VolumesApiMock() = default;
    explicit VolumesApiMock( std::shared_ptr<ApiClient> apiClient ) { };
    ~VolumesApiMock() override = default;

    MOCK_METHOD1( createVolumes, pplx::task<std::shared_ptr<Create_volumes_200_response>> (
        std::vector<std::shared_ptr<Create_volumes_request_inner>> createVolumesRequestInner
    ) );
    MOCK_METHOD1( deleteVolumes, pplx::task<std::shared_ptr<Delete_volumes_200_response>> (
        boost::optional<std::vector<std::shared_ptr<Delete_volumes_request_inner>>> deleteVolumesRequestInner
    ) );
    MOCK_METHOD2( getVolumes, pplx::task<std::shared_ptr<Get_volumes_200_response>> (
        boost::optional<bool> details,
        boost::optional<std::vector<std::shared_ptr<Get_volumes_request_inner>>> getVolumesRequestInner
    ) );
};

}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_API_VolumesApiGMock_H_ */

