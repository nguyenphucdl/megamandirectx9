#ifndef TIMER_H_
#define TIMER_H_

#include <Windows.h>
#include <tchar.h>
class CTimer
{
private:
	__int64 m_coutPerSec; // how many tick per Second
	float m_timeScale;
	int m_countFrame;
	int m_frameRate;
	float m_deltaTime;
	float t_deltaTime;
	float m_lockFps;
public:
	__int64 m_timeStart;
	__int64 m_timeEnd;
	CTimer(void);
	~CTimer(void);
	void GetSecondPerTick();
	void StartCount();
	void EndCount();
	void StopWatch();
	void SetMaxFps(float);
	float GetDeltaTime();
	float GetTime();
	unsigned short GetNumDeltaTime(LPSTR lpstrFrameRate = NULL);

};

#endif

