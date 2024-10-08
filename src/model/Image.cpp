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



#include "UnikraftCloudV1APIClient/model/Image.h"

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



Image::Image()
{
    m_Digest = utility::conversions::to_string_t("");
    m_DigestIsSet = false;
    m_TagsIsSet = false;
    m_Initrd = false;
    m_InitrdIsSet = false;
    m_Size_in_bytes = 0;
    m_Size_in_bytesIsSet = false;
    m_Args = utility::conversions::to_string_t("");
    m_ArgsIsSet = false;
    m_Kernel_args = utility::conversions::to_string_t("");
    m_Kernel_argsIsSet = false;
    m_LabelsIsSet = false;
}

Image::~Image()
{
}

void Image::validate()
{
    // TODO: implement validation
}

web::json::value Image::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DigestIsSet)
    {
        val[utility::conversions::to_string_t(U("digest"))] = ModelBase::toJson(m_Digest);
    }
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t(U("tags"))] = ModelBase::toJson(m_Tags);
    }
    if(m_InitrdIsSet)
    {
        val[utility::conversions::to_string_t(U("initrd"))] = ModelBase::toJson(m_Initrd);
    }
    if(m_Size_in_bytesIsSet)
    {
        val[utility::conversions::to_string_t(U("size_in_bytes"))] = ModelBase::toJson(m_Size_in_bytes);
    }
    if(m_ArgsIsSet)
    {
        val[utility::conversions::to_string_t(U("args"))] = ModelBase::toJson(m_Args);
    }
    if(m_Kernel_argsIsSet)
    {
        val[utility::conversions::to_string_t(U("kernel_args"))] = ModelBase::toJson(m_Kernel_args);
    }
    if(m_LabelsIsSet)
    {
        val[utility::conversions::to_string_t(U("labels"))] = ModelBase::toJson(m_Labels);
    }

    return val;
}

bool Image::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("digest"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("digest")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setDigest;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDigest);
            setDigest(refVal_setDigest);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tags"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tags")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setTags;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTags);
            setTags(refVal_setTags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("initrd"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("initrd")));
        if(!fieldValue.is_null())
        {
            bool refVal_setInitrd;
            ok &= ModelBase::fromJson(fieldValue, refVal_setInitrd);
            setInitrd(refVal_setInitrd);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("size_in_bytes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("size_in_bytes")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setSizeInBytes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSizeInBytes);
            setSizeInBytes(refVal_setSizeInBytes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("args"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("args")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setArgs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setArgs);
            setArgs(refVal_setArgs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("kernel_args"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("kernel_args")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setKernelArgs;
            ok &= ModelBase::fromJson(fieldValue, refVal_setKernelArgs);
            setKernelArgs(refVal_setKernelArgs);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("labels"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("labels")));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_setLabels;
            ok &= ModelBase::fromJson(fieldValue, refVal_setLabels);
            setLabels(refVal_setLabels);
        }
    }
    return ok;
}

void Image::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_DigestIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("digest")), m_Digest));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tags")), m_Tags));
    }
    if(m_InitrdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("initrd")), m_Initrd));
    }
    if(m_Size_in_bytesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("size_in_bytes")), m_Size_in_bytes));
    }
    if(m_ArgsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("args")), m_Args));
    }
    if(m_Kernel_argsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("kernel_args")), m_Kernel_args));
    }
    if(m_LabelsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("labels")), m_Labels));
    }
}

bool Image::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("digest"))))
    {
        utility::string_t refVal_setDigest;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("digest"))), refVal_setDigest );
        setDigest(refVal_setDigest);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tags"))))
    {
        std::vector<utility::string_t> refVal_setTags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tags"))), refVal_setTags );
        setTags(refVal_setTags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("initrd"))))
    {
        bool refVal_setInitrd;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("initrd"))), refVal_setInitrd );
        setInitrd(refVal_setInitrd);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("size_in_bytes"))))
    {
        int32_t refVal_setSizeInBytes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("size_in_bytes"))), refVal_setSizeInBytes );
        setSizeInBytes(refVal_setSizeInBytes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("args"))))
    {
        utility::string_t refVal_setArgs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("args"))), refVal_setArgs );
        setArgs(refVal_setArgs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("kernel_args"))))
    {
        utility::string_t refVal_setKernelArgs;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("kernel_args"))), refVal_setKernelArgs );
        setKernelArgs(refVal_setKernelArgs);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("labels"))))
    {
        std::map<utility::string_t, utility::string_t> refVal_setLabels;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("labels"))), refVal_setLabels );
        setLabels(refVal_setLabels);
    }
    return ok;
}

utility::string_t Image::getDigest() const
{
    return m_Digest;
}

void Image::setDigest(const utility::string_t& value)
{
    m_Digest = value;
    m_DigestIsSet = true;
}

bool Image::digestIsSet() const
{
    return m_DigestIsSet;
}

void Image::unsetDigest()
{
    m_DigestIsSet = false;
}
std::vector<utility::string_t>& Image::getTags()
{
    return m_Tags;
}

void Image::setTags(const std::vector<utility::string_t>& value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool Image::tagsIsSet() const
{
    return m_TagsIsSet;
}

void Image::unsetTags()
{
    m_TagsIsSet = false;
}
bool Image::isInitrd() const
{
    return m_Initrd;
}

void Image::setInitrd(bool value)
{
    m_Initrd = value;
    m_InitrdIsSet = true;
}

bool Image::initrdIsSet() const
{
    return m_InitrdIsSet;
}

void Image::unsetInitrd()
{
    m_InitrdIsSet = false;
}
int32_t Image::getSizeInBytes() const
{
    return m_Size_in_bytes;
}

void Image::setSizeInBytes(int32_t value)
{
    m_Size_in_bytes = value;
    m_Size_in_bytesIsSet = true;
}

bool Image::sizeInBytesIsSet() const
{
    return m_Size_in_bytesIsSet;
}

void Image::unsetSize_in_bytes()
{
    m_Size_in_bytesIsSet = false;
}
utility::string_t Image::getArgs() const
{
    return m_Args;
}

void Image::setArgs(const utility::string_t& value)
{
    m_Args = value;
    m_ArgsIsSet = true;
}

bool Image::argsIsSet() const
{
    return m_ArgsIsSet;
}

void Image::unsetArgs()
{
    m_ArgsIsSet = false;
}
utility::string_t Image::getKernelArgs() const
{
    return m_Kernel_args;
}

void Image::setKernelArgs(const utility::string_t& value)
{
    m_Kernel_args = value;
    m_Kernel_argsIsSet = true;
}

bool Image::kernelArgsIsSet() const
{
    return m_Kernel_argsIsSet;
}

void Image::unsetKernel_args()
{
    m_Kernel_argsIsSet = false;
}
std::map<utility::string_t, utility::string_t>& Image::getLabels()
{
    return m_Labels;
}

void Image::setLabels(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Labels = value;
    m_LabelsIsSet = true;
}

bool Image::labelsIsSet() const
{
    return m_LabelsIsSet;
}

void Image::unsetLabels()
{
    m_LabelsIsSet = false;
}
}
}
}
}


