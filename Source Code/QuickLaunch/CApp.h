#include <shellapi.h>

class CApp
{
private:
	WCHAR Name[MAX_PATH];
	WCHAR path[MAX_PATH];
	int seq;
public:
	CApp();
	CApp(WCHAR*, WCHAR*, int);
	WCHAR* GetName();
	WCHAR* GetPath();
	int GetSeq();
	void SetSeq(int);
	void IncreaseSeq();
	void Execute();
	~CApp();
};

