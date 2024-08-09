//#include<iostream>
//using namespace std;
//
//class CTest {
//public:
//	int m_a;
//	//转换构造函数:可以发生隐式类型转换的构造函数
//	//explicit:禁止发生隐式类型转换
//	//explicit cTest(int a):m_a(a){}
//
//
//	//不能发生隐式类型转换
//	//CTest(int a,int b):m_a(a){}
//
//	//可以发生隐式类型转换
//	CTest(int a, int b = 3) :m_a(a) {
//
//	}
//};
//
//int main() {
//	CTest tst1(10);
//	cout << tst1.m_a << endl;
//
//	//CTest tst2 = 20;       //explicit 禁止了，只能显式传递参数
//	//cout << tst2.m_a << endl;
//
//	CTest tst3 = 2;
//	cout << tst3.m_a << endl;
//
//	return 0;
//}