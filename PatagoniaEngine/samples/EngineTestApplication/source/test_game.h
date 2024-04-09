#ifndef TEST_GAME_H
#define TEST_GAME_H

#include <patagonia-engine/application/patagonia_application.h>

namespace TestGameApplication
{
	class TestGame : public PatagoniaEngine::PatagoniaApplication
	{
	public:
		TestGame();
		~TestGame();
			
		virtual void onEngineInit() override;

		virtual void onEngineInput() override;

		virtual void onEngineUpdate() override;

		virtual void onEngineDraw() override;

		virtual void onEngineQuit() override;

	private:

	};
}

#endif