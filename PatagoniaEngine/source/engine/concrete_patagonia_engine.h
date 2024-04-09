#ifndef CONCRETE_PATAGONIA_ENGINE_H
#define CONCRETE_PATAGONIA_ENGINE_H

#include <patagonia/engine/patagonia_engine.h>

namespace Patagonia
{
	class ConcretePatagoniaEngine : public PatagoniaEngine
	{
	public:
		virtual void release() override;

		static ConcretePatagoniaEngine* create();

	private:
		ConcretePatagoniaEngine();
		~ConcretePatagoniaEngine();

		static void destroy();

		static ConcretePatagoniaEngine* m_concretePatagoniaEngineInstance;
	};
}

#endif