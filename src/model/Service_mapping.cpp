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



#include "UnikraftCloudV1APIClient/model/Service_mapping.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Service_mapping::Service_mapping()
{
    m_Port = 0;
    m_PortIsSet = false;
    m_Destination_port = 0;
    m_Destination_portIsSet = false;
    m_HandlersIsSet = false;
}

Service_mapping::~Service_mapping()
{
}

void Service_mapping::validate()
{
    // TODO: implement validation
}

web::json::value Service_mapping::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PortIsSet)
    {
        val[utility::conversions::to_string_t(U("port"))] = ModelBase::toJson(m_Port);
    }
    if(m_Destination_portIsSet)
    {
        val[utility::conversions::to_string_t(U("destination_port"))] = ModelBase::toJson(m_Destination_port);
    }
    if(m_HandlersIsSet)
    {
        val[utility::conversions::to_string_t(U("handlers"))] = ModelBase::toJson(m_Handlers);
    }

    return val;
}

bool Service_mapping::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("port"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("port")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPort);
            setPort(refVal_setPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("destination_port"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("destination_port")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setDestinationPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDestinationPort);
            setDestinationPort(refVal_setDestinationPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("handlers"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("handlers")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setHandlers;
            ok &= ModelBase::fromJson(fieldValue, refVal_setHandlers);
            setHandlers(refVal_setHandlers);
        }
    }
    return ok;
}

void Service_mapping::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_PortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("port")), m_Port));
    }
    if(m_Destination_portIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("destination_port")), m_Destination_port));
    }
    if(m_HandlersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("handlers")), m_Handlers));
    }
}

bool Service_mapping::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("port"))))
    {
        int32_t refVal_setPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("port"))), refVal_setPort );
        setPort(refVal_setPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("destination_port"))))
    {
        int32_t refVal_setDestinationPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("destination_port"))), refVal_setDestinationPort );
        setDestinationPort(refVal_setDestinationPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("handlers"))))
    {
        std::vector<utility::string_t> refVal_setHandlers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("handlers"))), refVal_setHandlers );
        setHandlers(refVal_setHandlers);
    }
    return ok;
}

int32_t Service_mapping::getPort() const
{
    return m_Port;
}

void Service_mapping::setPort(int32_t value)
{
    m_Port = value;
    m_PortIsSet = true;
}

bool Service_mapping::portIsSet() const
{
    return m_PortIsSet;
}

void Service_mapping::unsetPort()
{
    m_PortIsSet = false;
}
int32_t Service_mapping::getDestinationPort() const
{
    return m_Destination_port;
}

void Service_mapping::setDestinationPort(int32_t value)
{
    m_Destination_port = value;
    m_Destination_portIsSet = true;
}

bool Service_mapping::destinationPortIsSet() const
{
    return m_Destination_portIsSet;
}

void Service_mapping::unsetDestination_port()
{
    m_Destination_portIsSet = false;
}
std::vector<utility::string_t>& Service_mapping::getHandlers()
{
    return m_Handlers;
}

void Service_mapping::setHandlers(const std::vector<utility::string_t>& value)
{
    m_Handlers = value;
    m_HandlersIsSet = true;
}

bool Service_mapping::handlersIsSet() const
{
    return m_HandlersIsSet;
}

void Service_mapping::unsetHandlers()
{
    m_HandlersIsSet = false;
}
}
}
}
}


