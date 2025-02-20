//////////////////////////////////////////////////////////////////////////////
//
// This file is part of the Corona game engine.
// For overview and more information on licensing please refer to README.md 
// Home page: https://github.com/coronalabs/corona
// Contact: support@coronalabs.com
//
//////////////////////////////////////////////////////////////////////////////

#ifndef _SimulatorPluginLibrary_H__
#define _SimulatorPluginLibrary_H__

#include <CoronaLua.h>
#include <CoronaMacros.h>

// ----------------------------------------------------------------------------

// This corresponds to the name of the library, e.g. [Lua] require "plugin.library"
// where the '.' is replaced with '_'
CORONA_EXPORT int luaopen_plugin_AblySolar( lua_State *L );

// ----------------------------------------------------------------------------

#endif // _SimulatorPluginLibrary_H__
