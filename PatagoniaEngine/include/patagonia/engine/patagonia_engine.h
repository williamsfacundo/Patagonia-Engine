#ifndef PATAGONIA_ENGINE_H
#define PATAGONIA_ENGINE_H

#include <patagonia/core/patagonia_common.h>

namespace Patagonia
{
	class PatagoniaEngine
	{
	private:

	public:
		PatagoniaEngine(){}
		~PatagoniaEngine(){}

		virtual void release() = 0;
	};

	PATAGONIA_API PatagoniaEngine* createPatagoniaEngine();
}

#endif