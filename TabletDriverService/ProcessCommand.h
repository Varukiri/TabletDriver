#pragma once
#include "CommandLine.h"

bool ProcessCommand(CommandLine *cmd);
bool ReadCommandFile(string filename);
void LogTabletArea(string text);
void LogInformation();
void LogStatus();
bool CheckTablet();