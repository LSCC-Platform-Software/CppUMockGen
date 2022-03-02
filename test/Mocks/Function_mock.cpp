/*
 * This file has been auto-generated by CppUMockGen v0.5.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 *
 * Generation options: -t "#const CXCursor &=ConstPointer~&$" -t "#const Config &=ConstPointer~&$" -t @std::string=String
 */

#include "Function.hpp"

#include <CppUTestExt/MockSupport.h>

class Function::Argument
{};

class Function::Return
{};

Function::Function() noexcept
: m_isConstMethod( false ), m_isNonStaticMethod( false ), m_exceptionSpec( Function::EExceptionSpec::Any )
{}

Function::~Function() noexcept
{}

bool Function::Parse(const CXCursor & cursor, const Config & config)
{
    return mock().actualCall("Function::Parse").onObject(this).withConstPointerParameter("cursor", &cursor).withConstPointerParameter("config", &config).returnBoolValue();
}

std::string Function::GenerateMock() const noexcept
{
    return mock().actualCall("Function::GenerateMock").onObject(this).returnStringValue();
}

std::string Function::GenerateExpectation(bool proto) const noexcept
{
    return mock().actualCall("Function::GenerateExpectation").onObject(this).withBoolParameter("proto", proto).returnStringValue();
}

bool Function::IsMockable(const CXCursor & cursor) const noexcept
{
    return mock().actualCall("Function::IsMockable").onObject(this).withConstPointerParameter("cursor", &cursor).returnBoolValue();
}

