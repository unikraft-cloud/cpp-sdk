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



#include "UnikraftCloudV1APIClient/model/Get_autoscale_configs_200_response_data.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Get_autoscale_configs_200_response_data::Get_autoscale_configs_200_response_data()
{
    m_Service_groupsIsSet = false;
}

Get_autoscale_configs_200_response_data::~Get_autoscale_configs_200_response_data()
{
}

void Get_autoscale_configs_200_response_data::validate()
{
    // TODO: implement validation
}

web::json::value Get_autoscale_configs_200_response_data::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Service_groupsIsSet)
    {
        val[utility::conversions::to_string_t(U("service_groups"))] = ModelBase::toJson(m_Service_groups);
    }

    return val;
}

bool Get_autoscale_configs_200_response_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("service_groups"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("service_groups")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Autoscale_config>> refVal_setServiceGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_setServiceGroups);
            setServiceGroups(refVal_setServiceGroups);
        }
    }
    return ok;
}

void Get_autoscale_configs_200_response_data::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Service_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("service_groups")), m_Service_groups));
    }
}

bool Get_autoscale_configs_200_response_data::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("service_groups"))))
    {
        std::vector<std::shared_ptr<Autoscale_config>> refVal_setServiceGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("service_groups"))), refVal_setServiceGroups );
        setServiceGroups(refVal_setServiceGroups);
    }
    return ok;
}

std::vector<std::shared_ptr<Autoscale_config>>& Get_autoscale_configs_200_response_data::getServiceGroups()
{
    return m_Service_groups;
}

void Get_autoscale_configs_200_response_data::setServiceGroups(const std::vector<std::shared_ptr<Autoscale_config>>& value)
{
    m_Service_groups = value;
    m_Service_groupsIsSet = true;
}

bool Get_autoscale_configs_200_response_data::serviceGroupsIsSet() const
{
    return m_Service_groupsIsSet;
}

void Get_autoscale_configs_200_response_data::unsetService_groups()
{
    m_Service_groupsIsSet = false;
}
}
}
}
}


