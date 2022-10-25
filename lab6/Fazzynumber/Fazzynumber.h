#pragma once
#ifdef FAZZYNUMBER_EXPORTS
#define FAZZYNUMBER_API _declspec(dllexport)
#else
#define FAZZYNUMBER_API _declspec(dllimport)
#endif 

class Fazzynumber
{
private:
	double A, ai, ar;
public:
	static FAZZYNUMBER_API Fazzynumber Init(double X, double xi, double xr);
	static FAZZYNUMBER_API Fazzynumber Read();
	static FAZZYNUMBER_API void Display(Fazzynumber Z);
	static FAZZYNUMBER_API void Display_error1(Fazzynumber Z, Fazzynumber D);
	static FAZZYNUMBER_API void Display_error2(Fazzynumber Z, Fazzynumber D);
	static FAZZYNUMBER_API Fazzynumber toString(Fazzynumber Z);
	static FAZZYNUMBER_API Fazzynumber Sum(Fazzynumber Z, Fazzynumber D);
	static FAZZYNUMBER_API Fazzynumber subtract(Fazzynumber Z, Fazzynumber D);
	static FAZZYNUMBER_API Fazzynumber multiplication(Fazzynumber Z, Fazzynumber D);
	static FAZZYNUMBER_API Fazzynumber inverse(Fazzynumber Z);
	static FAZZYNUMBER_API Fazzynumber division(Fazzynumber Z, Fazzynumber D);
};
