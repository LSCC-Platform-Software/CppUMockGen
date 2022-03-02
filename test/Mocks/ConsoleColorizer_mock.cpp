/*
 * This file has been auto-generated by CppUMockGen v0.5.
 *
 * Contents will NOT be preserved if it is regenerated!!!
 */

#include "ConsoleColorizer.hpp"

#include <CppUTestExt/MockSupport.h>

ConsoleColorizer cerrColorizer( ConsoleColorizer::ConsoleType::STD_ERROR );

ConsoleColorizer::ConsoleColorizer( ConsoleType consoleType ) noexcept
#ifdef WIN32
    : m_handle( NULL ), m_origConsoleAttrs( 0 )
#endif
{
}

ConsoleColorizer::~ConsoleColorizer() noexcept
{
}

void ConsoleColorizer::SetColor(ConsoleColorizer::Color color) noexcept
{
    mock().actualCall("ConsoleColorizer::SetColor").onObject(this).withIntParameter("color", static_cast<int>(color));
}

