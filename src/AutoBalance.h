#ifndef MOD_AUTOBALANCE_H
#define MOD_AUTOBALANCE_H

#include "ScriptMgr.h"
#include "Creature.h"

// Manages registration, loading, and execution of scripts.
class ABScriptMgr
{
    public: /* Initialization */
        static ABScriptMgr* instance();
};

#define sABScriptMgr ABScriptMgr::instance()

/*
* Dedicated hooks for Autobalance Module
* Can be used to extend/customize this system
*/
class ABModuleScript : public ModuleScript
{
    protected:
        ABModuleScript(const char* name);
};

template class ScriptRegistry<ABModuleScript>;

#endif
