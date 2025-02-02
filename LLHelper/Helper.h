#pragma once
#include "pch.h"
#include <mc/mass.h>
#include "Logger1.h"
#pragma warning(disable:4996)

extern std::unordered_map<string, string> CMDMAP, CMDSCHEDULE;
extern int FAKE_SEED, MAX_CHAT_LEN;
extern std::unordered_set<short> logItems, banItems;
extern bool LOG_CMD, LOG_CHAT, regABILITY, NO_EXPLOSION, EXP_PLAY, penderman, pfarm;
extern Minecraft* mc;
extern Logger1 LOG1;
extern playerMap<string> ORIG_NAME;
extern std::unordered_map<string, string> CNAME;
void loadCfg();