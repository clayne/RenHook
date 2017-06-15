#pragma once

#include <algorithm>
#include <codecvt>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

#include <Windows.h>
#include <TlHelp32.h>

#ifdef CUSTOM_LOGGER
#include CUSTOM_LOGGER
#endif

#ifdef _DEBUG
#ifndef LOG_DEBUG
#define LOG_DEBUG std::wcout << L"[DEBUG] "
#endif
#endif

#ifndef LOG_INFO
#define LOG_INFO std::wcout << L"[INFO] "
#endif

#ifndef LOG_WARNING
#define LOG_WARNING std::wcout << L"[WARNING] "
#endif

#ifndef LOG_ERROR
#define LOG_ERROR std::wcout << L"[ERROR] "
#endif

#ifndef LOG_LINE_SEPARATOR
#define LOG_LINE_SEPARATOR std::endl
#endif

#include <capstone.h>
#include <RenHook/Hooks/Hooks.hpp>