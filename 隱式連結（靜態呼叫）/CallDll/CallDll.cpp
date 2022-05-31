#include <iostream>
#include "TestDll.h"//加入模組的標頭檔案

using namespace std;

int main()
{
	double a = 8;
	TestDllSpace::TestDllClass c(4);//建立模組裡的類例項
	TestDllSpace::TestDllClass c2;
	c.display();//使用例項方法
	cout << "8*4=" << c.multiply(a) << endl;
	TestDllSpace::TestDllClass::conbine(c, c2);//使用模組裡的類的靜態方法
	system("pause");//暫停以便能看到輸出
	return 0;
}