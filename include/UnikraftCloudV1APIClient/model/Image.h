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
 * Image.h
 *
 * 
 */

#ifndef CLOUD_UNIKRAFT_V1_MODEL_Image_H_
#define CLOUD_UNIKRAFT_V1_MODEL_Image_H_


#include "UnikraftCloudV1APIClient/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace cloud {
namespace unikraft {
namespace v1 {
namespace model {



/// <summary>
/// 
/// </summary>
class  Image
    : public ModelBase
{
public:
    Image();
    virtual ~Image();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Image members

    /// <summary>
    /// Image digest to uniquely identify this image. 
    /// </summary>
    utility::string_t getDigest() const;
    bool digestIsSet() const;
    void unsetDigest();

    void setDigest(const utility::string_t& value);

    /// <summary>
    /// Tags referencing this image.
    /// </summary>
    std::vector<utility::string_t>& getTags();
    bool tagsIsSet() const;
    void unsetTags();

    void setTags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Indicates if the image comes with an init ramdisk. 
    /// </summary>
    bool isInitrd() const;
    bool initrdIsSet() const;
    void unsetInitrd();

    void setInitrd(bool value);

    /// <summary>
    /// Total size of the image on disk in bytes including the initrd, if any. 
    /// </summary>
    int32_t getSizeInBytes() const;
    bool sizeInBytesIsSet() const;
    void unsetSize_in_bytes();

    void setSizeInBytes(int32_t value);

    /// <summary>
    /// Default application arguments of the image. Dismissed if the instance specifies application arguments. 
    /// </summary>
    utility::string_t getArgs() const;
    bool argsIsSet() const;
    void unsetArgs();

    void setArgs(const utility::string_t& value);

    /// <summary>
    /// Unikraft kernel arguments hardcoded into the image. Prepended to the kernel arguments set by Unikraft Cloud. 
    /// </summary>
    utility::string_t getKernelArgs() const;
    bool kernelArgsIsSet() const;
    void unsetKernel_args();

    void setKernelArgs(const utility::string_t& value);

    /// <summary>
    /// Key value pairs of image labels (e.g., used as defaults for instance configuration). 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getLabels();
    bool labelsIsSet() const;
    void unsetLabels();

    void setLabels(const std::map<utility::string_t, utility::string_t>& value);


protected:
    utility::string_t m_Digest;
    bool m_DigestIsSet;
    std::vector<utility::string_t> m_Tags;
    bool m_TagsIsSet;
    bool m_Initrd;
    bool m_InitrdIsSet;
    int32_t m_Size_in_bytes;
    bool m_Size_in_bytesIsSet;
    utility::string_t m_Args;
    bool m_ArgsIsSet;
    utility::string_t m_Kernel_args;
    bool m_Kernel_argsIsSet;
    std::map<utility::string_t, utility::string_t> m_Labels;
    bool m_LabelsIsSet;
};


}
}
}
}

#endif /* CLOUD_UNIKRAFT_V1_MODEL_Image_H_ */
