#include "Package.hpp"

namespace pkg {
Package::Package(std::string& name, float version, float release, std::string& description,
    std::string& arch)
{
    m_name = name;
    m_version = version;
    m_release = release;
    m_description = description;
    m_arch = arch;
}
}