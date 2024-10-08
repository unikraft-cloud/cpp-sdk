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



#include "UnikraftCloudV1APIClient/model/User_quota_used.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



User_quota_used::User_quota_used()
{
    m_Instances = 0;
    m_InstancesIsSet = false;
    m_Live_instances = 0;
    m_Live_instancesIsSet = false;
    m_Live_memory_mb = 0;
    m_Live_memory_mbIsSet = false;
    m_Service_groups = 0;
    m_Service_groupsIsSet = false;
    m_Services = 0;
    m_ServicesIsSet = false;
    m_Volumes = 0;
    m_VolumesIsSet = false;
    m_Total_volume_mb = 0;
    m_Total_volume_mbIsSet = false;
}

User_quota_used::~User_quota_used()
{
}

void User_quota_used::validate()
{
    // TODO: implement validation
}

web::json::value User_quota_used::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InstancesIsSet)
    {
        val[utility::conversions::to_string_t(U("instances"))] = ModelBase::toJson(m_Instances);
    }
    if(m_Live_instancesIsSet)
    {
        val[utility::conversions::to_string_t(U("live_instances"))] = ModelBase::toJson(m_Live_instances);
    }
    if(m_Live_memory_mbIsSet)
    {
        val[utility::conversions::to_string_t(U("live_memory_mb"))] = ModelBase::toJson(m_Live_memory_mb);
    }
    if(m_Service_groupsIsSet)
    {
        val[utility::conversions::to_string_t(U("service_groups"))] = ModelBase::toJson(m_Service_groups);
    }
    if(m_ServicesIsSet)
    {
        val[utility::conversions::to_string_t(U("services"))] = ModelBase::toJson(m_Services);
    }
    if(m_VolumesIsSet)
    {
        val[utility::conversions::to_string_t(U("volumes"))] = ModelBase::toJson(m_Volumes);
    }
    if(m_Total_volume_mbIsSet)
    {
        val[utility::conversions::to_string_t(U("total_volume_mb"))] = ModelBase::toJson(m_Total_volume_mb);
    }

    return val;
}

bool User_quota_used::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("instances"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("instances")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setInstances;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInstances);
            setInstances(refVal_setInstances);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("live_instances"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("live_instances")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setLiveInstances;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLiveInstances);
            setLiveInstances(refVal_setLiveInstances);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("live_memory_mb"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("live_memory_mb")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setLiveMemoryMb;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLiveMemoryMb);
            setLiveMemoryMb(refVal_setLiveMemoryMb);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("service_groups"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("service_groups")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setServiceGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_setServiceGroups);
            setServiceGroups(refVal_setServiceGroups);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("services"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("services")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setServices;
            ok &= ModelBase::fromJson(fieldValue, refVal_setServices);
            setServices(refVal_setServices);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("volumes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("volumes")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setVolumes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setVolumes);
            setVolumes(refVal_setVolumes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("total_volume_mb"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("total_volume_mb")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setTotalVolumeMb;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTotalVolumeMb);
            setTotalVolumeMb(refVal_setTotalVolumeMb);
        }
    }
    return ok;
}

void User_quota_used::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_InstancesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("instances")), m_Instances));
    }
    if(m_Live_instancesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("live_instances")), m_Live_instances));
    }
    if(m_Live_memory_mbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("live_memory_mb")), m_Live_memory_mb));
    }
    if(m_Service_groupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("service_groups")), m_Service_groups));
    }
    if(m_ServicesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("services")), m_Services));
    }
    if(m_VolumesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("volumes")), m_Volumes));
    }
    if(m_Total_volume_mbIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("total_volume_mb")), m_Total_volume_mb));
    }
}

bool User_quota_used::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("instances"))))
    {
        int32_t refVal_setInstances;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("instances"))), refVal_setInstances );
        setInstances(refVal_setInstances);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("live_instances"))))
    {
        int32_t refVal_setLiveInstances;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("live_instances"))), refVal_setLiveInstances );
        setLiveInstances(refVal_setLiveInstances);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("live_memory_mb"))))
    {
        int32_t refVal_setLiveMemoryMb;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("live_memory_mb"))), refVal_setLiveMemoryMb );
        setLiveMemoryMb(refVal_setLiveMemoryMb);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("service_groups"))))
    {
        int32_t refVal_setServiceGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("service_groups"))), refVal_setServiceGroups );
        setServiceGroups(refVal_setServiceGroups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("services"))))
    {
        int32_t refVal_setServices;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("services"))), refVal_setServices );
        setServices(refVal_setServices);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("volumes"))))
    {
        int32_t refVal_setVolumes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("volumes"))), refVal_setVolumes );
        setVolumes(refVal_setVolumes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("total_volume_mb"))))
    {
        int32_t refVal_setTotalVolumeMb;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("total_volume_mb"))), refVal_setTotalVolumeMb );
        setTotalVolumeMb(refVal_setTotalVolumeMb);
    }
    return ok;
}

int32_t User_quota_used::getInstances() const
{
    return m_Instances;
}

void User_quota_used::setInstances(int32_t value)
{
    m_Instances = value;
    m_InstancesIsSet = true;
}

bool User_quota_used::instancesIsSet() const
{
    return m_InstancesIsSet;
}

void User_quota_used::unsetInstances()
{
    m_InstancesIsSet = false;
}
int32_t User_quota_used::getLiveInstances() const
{
    return m_Live_instances;
}

void User_quota_used::setLiveInstances(int32_t value)
{
    m_Live_instances = value;
    m_Live_instancesIsSet = true;
}

bool User_quota_used::liveInstancesIsSet() const
{
    return m_Live_instancesIsSet;
}

void User_quota_used::unsetLive_instances()
{
    m_Live_instancesIsSet = false;
}
int32_t User_quota_used::getLiveMemoryMb() const
{
    return m_Live_memory_mb;
}

void User_quota_used::setLiveMemoryMb(int32_t value)
{
    m_Live_memory_mb = value;
    m_Live_memory_mbIsSet = true;
}

bool User_quota_used::liveMemoryMbIsSet() const
{
    return m_Live_memory_mbIsSet;
}

void User_quota_used::unsetLive_memory_mb()
{
    m_Live_memory_mbIsSet = false;
}
int32_t User_quota_used::getServiceGroups() const
{
    return m_Service_groups;
}

void User_quota_used::setServiceGroups(int32_t value)
{
    m_Service_groups = value;
    m_Service_groupsIsSet = true;
}

bool User_quota_used::serviceGroupsIsSet() const
{
    return m_Service_groupsIsSet;
}

void User_quota_used::unsetService_groups()
{
    m_Service_groupsIsSet = false;
}
int32_t User_quota_used::getServices() const
{
    return m_Services;
}

void User_quota_used::setServices(int32_t value)
{
    m_Services = value;
    m_ServicesIsSet = true;
}

bool User_quota_used::servicesIsSet() const
{
    return m_ServicesIsSet;
}

void User_quota_used::unsetServices()
{
    m_ServicesIsSet = false;
}
int32_t User_quota_used::getVolumes() const
{
    return m_Volumes;
}

void User_quota_used::setVolumes(int32_t value)
{
    m_Volumes = value;
    m_VolumesIsSet = true;
}

bool User_quota_used::volumesIsSet() const
{
    return m_VolumesIsSet;
}

void User_quota_used::unsetVolumes()
{
    m_VolumesIsSet = false;
}
int32_t User_quota_used::getTotalVolumeMb() const
{
    return m_Total_volume_mb;
}

void User_quota_used::setTotalVolumeMb(int32_t value)
{
    m_Total_volume_mb = value;
    m_Total_volume_mbIsSet = true;
}

bool User_quota_used::totalVolumeMbIsSet() const
{
    return m_Total_volume_mbIsSet;
}

void User_quota_used::unsetTotal_volume_mb()
{
    m_Total_volume_mbIsSet = false;
}
}
}
}
}


