#include <iostream>
//為了使用LoadLibrary和FreeLibrary等函式以及LPCWSTR和LPCSTR型別加入的標頭檔案
#include <Windows.h>
using namespace std;
//定義要載入的各種函式指標,通過dumpbin檢視dll函式中函式簽名從而得知，或者檢視API
typedef double(*pMin)(double, double);
typedef double(*pMax)(double, double);
typedef double(*pAdd)(double, double);
typedef double(*pSub)(double, double);
int main()
{
	LPCWSTR dllName = TEXT("FuncOnlyDll.dll");
	LPCSTR funName1 = "double_minValue_double_double";
	LPCSTR funName2 = "double_maxValue_double_double";
	LPCSTR funName3 = "double_add_double_double";
	LPCSTR funName4 = "double_subtract_double_double";
	HMODULE hDll = LoadLibrary(dllName);//載入dll
	if (hDll != NULL) {
		pMin fp1 = (pMin)(GetProcAddress(hDll, funName1));//載入函式
		if (fp1 != NULL) {
			cout << "min value of 5 and 6:" << fp1(5, 6) << endl;
		}
		else {
			cout << "函式min載入失敗" << endl;
		}
		pMax fp2 = (pMax)(GetProcAddress(hDll, funName2));
		if (fp2 != NULL) {
			cout << "max value of 5 and 6:" << fp2(5, 6) << endl;
		}
		else {
			cout << "函式max載入失敗" << endl;
		}
		pAdd fp3 = (pAdd)(GetProcAddress(hDll, funName3));
		if (fp3 != NULL) {
			cout << "sum value of 5 and 6:" << fp3(5, 6) << endl;
		}
		else {
			cout << "函式add載入失敗" << endl;
		}
		pSub fp4 = (pSub)(GetProcAddress(hDll, funName4));
		if (fp2 != NULL) {
			cout << "difference of 5 and 6:" << fp4(5, 6) << endl;
		}
		else {
			cout << "函式sub載入失敗" << endl;
		}
		FreeLibrary(hDll);//解除安裝dll，一般用完就解除安裝，避免佔用記憶體
	}
	else {
		cout << "載入dll檔案失敗" << endl;
	}
	system("pause");
	return 0;
}