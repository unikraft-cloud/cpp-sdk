#include <iostream>
#include <memory>
#include <boost/optional.hpp>
#include <pplx/pplxtasks.h>

#include "UnikraftCloudV1APIClient/ApiClient.h"
#include "UnikraftCloudV1APIClient/api/InstancesApi.h"
#include "UnikraftCloudV1APIClient/model/Instance.h"
#include "UnikraftCloudV1APIClient/model/Get_instances_request_inner.h"
#include "UnikraftCloudV1APIClient/model/Get_instances_200_response.h"

#define UKC_TOKEN "..." // Replace with your actual token

int main() {
    // Create API client configuration
    auto apiClient = std::make_shared<cloud::unikraft::v1::api::ApiClient>();
    auto apiConfig = std::make_shared<cloud::unikraft::v1::api::ApiConfiguration>();

    // Set base URL for the Unikraft Cloud API.
    apiConfig->setBaseUrl("https://api.fra0.kraft.cloud/v1");

    // Set Bearer Token for Authorization.
    apiConfig->setApiKey("Authorization", std::string("Bearer ") + UKC_TOKEN);

    // Ensure the configuration is set.
    apiClient->setConfiguration(apiConfig);

    auto instancesApi = std::make_shared<cloud::unikraft::v1::api::InstancesApi>(apiClient);

    // Now you can call API methods
    try {
        std::vector<std::shared_ptr<cloud::unikraft::v1::model::Get_instances_request_inner>> reqs = {
            std::make_shared<cloud::unikraft::v1::model::Get_instances_request_inner>(),
            std::make_shared<cloud::unikraft::v1::model::Get_instances_request_inner>()
        };

        boost::optional<std::vector<std::shared_ptr<cloud::unikraft::v1::model::Get_instances_request_inner>>> getInstancesRequestInner = reqs;

        // Call getInstances and handle the task asynchronously
        auto task = instancesApi->getInstances(true, false, getInstancesRequestInner);

        task.then([](std::shared_ptr<cloud::unikraft::v1::model::Get_instances_200_response> response) {
            auto data = response->getData(); // Get the response data
            if (data) {
                auto instances = data->getInstances(); // Get the instances

                // Output the name and state of each instance
                for (const auto& instance : instances) {
                    if (instance) { // Check for null pointers
                        std::cout << "Instance Name: " << instance->getName() 
                                  << ", State: " << instance->getState() << std::endl;
                    }
                }
            } else {
                std::cout << "No data found." << std::endl;
            }
        }).wait();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
