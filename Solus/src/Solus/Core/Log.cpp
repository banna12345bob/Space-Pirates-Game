// SPDLog: https://github.com/gabime/spdlog

#include "supch.h"
#include "Solus/Core/Log.h"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace Solus {

	Ref<spdlog::logger>Log::s_CoreLogger;
	Ref<spdlog::logger>Log::s_ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("Solus");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}

}