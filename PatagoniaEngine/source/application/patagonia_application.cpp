#include <patagonia/application/patagonia_application.h>

#include <patagonia/core/patagonia_common.h>
#include <patagonia/engine/patagonia_engine.h>

#include <stdexcept>

namespace Patagonia
{
	PatagoniaApplication* PatagoniaApplication::m_instance = nullptr;

	PatagoniaApplication::PatagoniaApplication()
	{
		PATAGONIA_ASSERT(!m_instance);
		
		m_instance = this;
		
		m_engine = createPatagoniaEngine();

		m_isRunning = true;
	}

	PatagoniaApplication::~PatagoniaApplication()
	{
		m_engine->release();
	}

	PatagoniaApplication* PatagoniaApplication::getEngineApplication()
	{
		PATAGONIA_ASSERT(m_instance);

		return m_instance;
	}
	
	void PatagoniaApplication::startEngineApplication()
	{
		onEngineInit();

		while (m_isRunning)
		{
			m_isRunning = false;
		}

		onEngineQuit();
	}
	
	void PatagoniaApplication::finishEngineApplication()
	{
		m_isRunning = false;
	}
}