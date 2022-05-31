//FuncOnlyDll.h
#ifdef FUNCONLYDLL_EXPORTS
#define FUNCONLYDLL_API //�o�˨ϥη|�����ܳs�����~,���i�H�����ýX
#else
#define FUNCONLYDLL_API __declspec(dllimport)
#endif

namespace Funcs
{
	FUNCONLYDLL_API double minValue(double a, double b);
	FUNCONLYDLL_API double maxValue(double a, double b);
	FUNCONLYDLL_API double add(double a, double b);
	FUNCONLYDLL_API double subtract(double a, double b);
}
