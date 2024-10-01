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



#include "UnikraftCloudV1APIClient/model/Autoscale_policy.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Autoscale_policy::Autoscale_policy()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Metric = utility::conversions::to_string_t("");
    m_MetricIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Adjustment_type = utility::conversions::to_string_t("");
    m_Adjustment_typeIsSet = false;
    m_StepsIsSet = false;
}

Autoscale_policy::~Autoscale_policy()
{
}

void Autoscale_policy::validate()
{
    // TODO: implement validation
}

web::json::value Autoscale_policy::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_MetricIsSet)
    {
        val[utility::conversions::to_string_t(U("metric"))] = ModelBase::toJson(m_Metric);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t(U("type"))] = ModelBase::toJson(m_Type);
    }
    if(m_Adjustment_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("adjustment_type"))] = ModelBase::toJson(m_Adjustment_type);
    }
    if(m_StepsIsSet)
    {
        val[utility::conversions::to_string_t(U("steps"))] = ModelBase::toJson(m_Steps);
    }

    return val;
}

bool Autoscale_policy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("metric"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("metric")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setMetric;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMetric);
            setMetric(refVal_setMetric);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setType);
            setType(refVal_setType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("adjustment_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("adjustment_type")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAdjustmentType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAdjustmentType);
            setAdjustmentType(refVal_setAdjustmentType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("steps"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("steps")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Autoscale_policy_step>> refVal_setSteps;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSteps);
            setSteps(refVal_setSteps);
        }
    }
    return ok;
}

void Autoscale_policy::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_MetricIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("metric")), m_Metric));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("type")), m_Type));
    }
    if(m_Adjustment_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("adjustment_type")), m_Adjustment_type));
    }
    if(m_StepsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("steps")), m_Steps));
    }
}

bool Autoscale_policy::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("metric"))))
    {
        utility::string_t refVal_setMetric;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("metric"))), refVal_setMetric );
        setMetric(refVal_setMetric);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("type"))))
    {
        utility::string_t refVal_setType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("type"))), refVal_setType );
        setType(refVal_setType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("adjustment_type"))))
    {
        utility::string_t refVal_setAdjustmentType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("adjustment_type"))), refVal_setAdjustmentType );
        setAdjustmentType(refVal_setAdjustmentType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("steps"))))
    {
        std::vector<std::shared_ptr<Autoscale_policy_step>> refVal_setSteps;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("steps"))), refVal_setSteps );
        setSteps(refVal_setSteps);
    }
    return ok;
}

utility::string_t Autoscale_policy::getName() const
{
    return m_Name;
}

void Autoscale_policy::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Autoscale_policy::nameIsSet() const
{
    return m_NameIsSet;
}

void Autoscale_policy::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Autoscale_policy::getMetric() const
{
    return m_Metric;
}

void Autoscale_policy::setMetric(const utility::string_t& value)
{
    m_Metric = value;
    m_MetricIsSet = true;
}

bool Autoscale_policy::metricIsSet() const
{
    return m_MetricIsSet;
}

void Autoscale_policy::unsetMetric()
{
    m_MetricIsSet = false;
}
utility::string_t Autoscale_policy::getType() const
{
    return m_Type;
}

void Autoscale_policy::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool Autoscale_policy::typeIsSet() const
{
    return m_TypeIsSet;
}

void Autoscale_policy::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t Autoscale_policy::getAdjustmentType() const
{
    return m_Adjustment_type;
}

void Autoscale_policy::setAdjustmentType(const utility::string_t& value)
{
    m_Adjustment_type = value;
    m_Adjustment_typeIsSet = true;
}

bool Autoscale_policy::adjustmentTypeIsSet() const
{
    return m_Adjustment_typeIsSet;
}

void Autoscale_policy::unsetAdjustment_type()
{
    m_Adjustment_typeIsSet = false;
}
std::vector<std::shared_ptr<Autoscale_policy_step>>& Autoscale_policy::getSteps()
{
    return m_Steps;
}

void Autoscale_policy::setSteps(const std::vector<std::shared_ptr<Autoscale_policy_step>>& value)
{
    m_Steps = value;
    m_StepsIsSet = true;
}

bool Autoscale_policy::stepsIsSet() const
{
    return m_StepsIsSet;
}

void Autoscale_policy::unsetSteps()
{
    m_StepsIsSet = false;
}
}
}
}
}


