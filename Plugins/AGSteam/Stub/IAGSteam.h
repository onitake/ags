// AGSteamStub
// Plugin stub for the Steam plugin for AGS
//
// This stub is a non-functional replacement for the AGSteam plugin. The
// full plugin cannot be made open-source due to restrictions enforced
// by Valve's strict licensing on the Steamworks API. If you are a
// developer who has signed an NDA with Valve and have access to
// Steamworks, access can be granted to the full plugin source. For more
// information you may contact monkey_05_06 on the AGS forums at:
// <http://www.adventuregamestudio.co.uk/forums/index.php?action=profile&u=2015>
//
// Copyright � 2014-2015 MonkeyMoto Productions, Inc.
// This work is free. You can redistribute it and/or modify it under the
// terms of the Do What The Fuck You Want To Public License, Version 2,
// as published by Sam Hocevar. See the LICENSE file for more details.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//                    Version 2, December 2004
//
// Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>
//
// Everyone is permitted to copy and distribute verbatim or modified
// copies of this license document, and changing it is allowed as long
// as the name is changed.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
//
//  0. You just DO WHAT THE FUCK YOU WANT TO.
//
#ifndef AGSTEAM_IAGSTEAM_H
#define AGSTEAM_IAGSTEAM_H

namespace AGSteam
{
class IAGSteam
{
public:
    virtual bool IsInitialized() = 0;
    virtual void ResetStatsAndAchievements() = 0;
    virtual char const* GetCurrentGameLanguage() = 0;
    virtual char const* GetUserName() = 0;
    virtual void Shutdown() = 0;
    virtual void Update() = 0;
    virtual char const* GetAGSScriptHeader() = 0;
    virtual char const* GetAGSPluginName() = 0;
    virtual char const* GetAGSPluginDesc() = 0;
    virtual ~IAGSteam() = 0;
};

IAGSteam* GetAGSteam();
int AGSteam_IsSteamInitialized();
void AGSteam_ResetStatsAndAchievements();
char const* AGSteam_GetCurrentGameLanguage();
char const* AGSteam_GetUserName();

} // namespace AGSteam

#endif // AGSTEAM_IAGSTEAM_H
