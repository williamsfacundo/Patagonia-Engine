#include "patagonia-engine/application/patagonia_application.h"

#include <stdexcept>

namespace PatagoniaEngine
{
	PatagoniaApplication* PatagoniaApplication::m_engineApplicationInstance = nullptr;

	PatagoniaApplication::PatagoniaApplication()
	{
		if(!m_engineApplicationInstance)
		{
			m_engineApplicationInstance = this;
		}
		else
		{
			throw std::runtime_error(DoubleIntanceCreationRuntimeErrorMessage);
		}

		m_isRunning = true;
	}

	PatagoniaApplication::~PatagoniaApplication()
	{

	}

	PatagoniaApplication* PatagoniaApplication::getEngineApplication()
	{
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