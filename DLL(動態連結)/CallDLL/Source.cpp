#include <iostream>
//���F�ϥ�LoadLibrary�MFreeLibrary���禡�H��LPCWSTR�MLPCSTR���O�[�J�����Y�ɮ�
#include <Windows.h>
using namespace std;
//�w�q�n���J���U�ب禡����,�q�Ldumpbin�˵�dll�禡���禡ñ�W�q�ӱo���A�Ϊ��˵�API
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
	HMODULE hDll = LoadLibrary(dllName);//���Jdll
	if (hDll != NULL) {
		pMin fp1 = (pMin)(GetProcAddress(hDll, funName1));//���J�禡
		if (fp1 != NULL) {
			cout << "min value of 5 and 6:" << fp1(5, 6) << endl;
		}
		else {
			cout << "�禡min���J����" << endl;
		}
		pMax fp2 = (pMax)(GetProcAddress(hDll, funName2));
		if (fp2 != NULL) {
			cout << "max value of 5 and 6:" << fp2(5, 6) << endl;
		}
		else {
			cout << "�禡max���J����" << endl;
		}
		pAdd fp3 = (pAdd)(GetProcAddress(hDll, funName3));
		if (fp3 != NULL) {
			cout << "sum value of 5 and 6:" << fp3(5, 6) << endl;
		}
		else {
			cout << "�禡add���J����" << endl;
		}
		pSub fp4 = (pSub)(GetProcAddress(hDll, funName4));
		if (fp2 != NULL) {
			cout << "difference of 5 and 6:" << fp4(5, 6) << endl;
		}
		else {
			cout << "�禡sub���J����" << endl;
		}
		FreeLibrary(hDll);//�Ѱ��w��dll�A�@��Χ��N�Ѱ��w�ˡA�קK���ΰO����
	}
	else {
		cout << "���Jdll�ɮץ���" << endl;
	}
	system("pause");
	return 0;
}