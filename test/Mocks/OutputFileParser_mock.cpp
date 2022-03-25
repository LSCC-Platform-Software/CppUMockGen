/*
 * This file has been auto-generated by CppUMockGen v0.6.
 *
 * Only contents in the user code section will be preserved if it is regenerated!!!
 *
 * Generation options: -s c++17 -t "@std::string=String" -t "#const std::string &=String~$.c_str()" -t "#const std::filesystem::path &=String~$.generic_string().c_str()"
 */

#include "OutputFileParser.hpp"

#include <CppUTestExt/MockSupport.h>

// CPPUMOCKGEN_USER_CODE_BEGIN
// CPPUMOCKGEN_USER_CODE_END

OutputFileParser::OutputFileParser()
{
    mock().actualCall("OutputFileParser::OutputFileParser");
}

void OutputFileParser::Parse(const std::filesystem::path & filepath)
{
    mock().actualCall("OutputFileParser::Parse").onObject(this).withStringParameter("filepath", filepath.generic_string().c_str());
}

const std::string & OutputFileParser::GetUserCode() const
{
    return *static_cast<const std::string*>(mock().actualCall("OutputFileParser::GetUserCode").onObject(this).returnConstPointerValue());
}

