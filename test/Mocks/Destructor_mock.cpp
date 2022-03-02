/*
 * This file has been auto-generated by CppUMockGen v0.5.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -t "#const CXCursor &=ConstPointer~&$" -t "@std::string=String" -t "#const std::string &=String~$.c_str()"
 */

#include "Destructor.hpp"

#include <CppUTestExt/MockSupport.h>

Destructor::Destructor() noexcept
{
    mock().actualCall("Destructor::Destructor");
}

bool Destructor::IsMockable(const CXCursor & cursor) const noexcept
{
    return mock().actualCall("Destructor::IsMockable").onObject(this).withConstPointerParameter("cursor", &cursor).returnBoolValue();
}

std::string Destructor::GetExpectationFunctionName(const std::string & functionName) const noexcept
{
    return mock().actualCall("Destructor::GetExpectationFunctionName").onObject(this).withStringParameter("functionName", functionName.c_str()).returnStringValue();
}

