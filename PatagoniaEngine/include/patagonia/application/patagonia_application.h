#ifndef PATAGONIA_APPLICATION_H
#define PATAGONIA_APPLICATION_H

#include <patagonia/core/patagonia_common.h>
#include <patagonia/engine/patagonia_engine.h>

namespace Patagonia
{
	class PATAGONIA_API PatagoniaApplication
	{
	public:
		PatagoniaApplication();
		virtual ~PatagoniaApplication();

		static PatagoniaApplication* getEngineApplication();
		
		virtual void onEngineInit() = 0;
		virtual void onEngineInput() = 0;
		virtual void onEngineUpdate() = 0;
		virtual void onEngineDraw() = 0;
		virtual void onEngineQuit() = 0;

		void startEngineApplication();
		void finishEngineApplication();

	private:		
		static PatagoniaApplication* m_instance;

		PatagoniaEngine* m_engine;

		bool m_isRunning;
	};	
}

#endif