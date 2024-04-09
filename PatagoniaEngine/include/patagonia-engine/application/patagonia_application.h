#ifndef PATAGONIA_APPLICATION_H
#define PATAGONIA_APPLICATION_H

namespace PatagoniaEngine
{
	class PatagoniaApplication
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