#include "concrete_patagonia_engine.h"

#include <patagonia/core/patagonia_common.h>

namespace Patagonia
{
	ConcretePatagoniaEngine* ConcretePatagoniaEngine::m_concretePatagoniaEngineInstance = nullptr;

	PatagoniaEngine* createPatagoniaEngine()
	{
		return ConcretePatagoniaEngine::create();
	}

	void ConcretePatagoniaEngine::release()
	{
		ConcretePatagoniaEngine::destroy();
	}

	ConcretePatagoniaEngine* ConcretePatagoniaEngine::create()
	{
		PATAGONIA_ASSERT(!m_concretePatagoniaEngineInstance);

		m_concretePatagoniaEngineInstance = new ConcretePatagoniaEngine();

		return m_concretePatagoniaEngineInstance;
	}

	ConcretePatagoniaEngine::ConcretePatagoniaEngine()
	{

	}

	ConcretePatagoniaEngine::~ConcretePatagoniaEngine()
	{

	}

	void ConcretePatagoniaEngine::destroy()
	{
		PATAGONIA_ASSERT(m_concretePatagoniaEngineInstance);

		delete m_concretePatagoniaEngineInstance;

		m_concretePatagoniaEngineInstance = nullptr;
	}
}