#include "patagonia-engine/application/patagonia_application.h"

#include <stdexcept>

namespace PatagoniaEngine
{
	PatagoniaApplication* PatagoniaApplication::m_engineApplicationInstance = nullptr;

	PatagoniaApplication::PatagoniaApplication()
	{
		PATAGONIA_ASSERT(!m_engineApplicationInstance);
		
		m_engineApplicationInstance = this;
		
		m_isRunning = true;
	}

	PatagoniaApplication::~PatagoniaApplication()
	{

	}

	PatagoniaApplication* PatagoniaApplication::getEngineApplication()
	{
		PATAGONIA_ASSERT(m_engineApplicationInstance);

		return m_engineApplicationInstance;
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