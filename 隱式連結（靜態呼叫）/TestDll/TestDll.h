#ifdef TESTDLL_EXPORTS
#define TESTDLL_API __declspec(dllexport)//�`�Ndecl�e���O��ӤU���u
#else
#define TESTDLL_API __declspec(dllimport)
#endif

namespace TestDllSpace
{
	//�ץX��
	class TestDllClass
	{
	private:
		double a;
	public:
		//�ץX���禡
		TESTDLL_API TestDllClass();
		TESTDLL_API TestDllClass(double a_);
		TESTDLL_API double multiply(double b);
		TESTDLL_API void display();
		TESTDLL_API static void conbine(TestDllClass m1, TestDllClass m2);
	};
}
