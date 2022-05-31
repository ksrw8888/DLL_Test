#ifdef TESTDLL_EXPORTS
#define TESTDLL_API __declspec(dllexport)//注意decl前面是兩個下劃線
#else
#define TESTDLL_API __declspec(dllimport)
#endif

namespace TestDllSpace
{
	//匯出類
	class TestDllClass
	{
	private:
		double a;
	public:
		//匯出的函式
		TESTDLL_API TestDllClass();
		TESTDLL_API TestDllClass(double a_);
		TESTDLL_API double multiply(double b);
		TESTDLL_API void display();
		TESTDLL_API static void conbine(TestDllClass m1, TestDllClass m2);
	};
}
