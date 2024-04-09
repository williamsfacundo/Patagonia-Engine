#ifndef PATAGONIA_APPLICATION_H
#define PATAGONIA_APPLICATION_H

#include "patagonia-engine/core/patagonia_common.h"

namespace PatagoniaEngine
{
	class PATAGONIA_API PatagoniaApplication
	{
	public:
		PatagoniaApplication();
		virtual ~PatagoniaApplication();

		static PatagoniaApplication* getEngineApplication();
		
		virtual void onEngineInit() = 0;
		virtual void onEngineQuit() = 0;

		void startEngineApplication();
		void finishEngineApplication();

	private:
		const char* DoubleIntanceCreationRuntimeErrorMessage = "The engine application was already created, there can not be two intances at the same time!";

		static PatagoniaApplication* m_engineApplicationInstance;
	};	
}

#endif