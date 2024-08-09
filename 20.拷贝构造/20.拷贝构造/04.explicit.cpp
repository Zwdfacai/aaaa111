//#include<iostream>
//using namespace std;
//
//class CTest {
//public:
//	int m_a;
//	int* m_p;
//
//	CTest(int a) :m_a(a), m_p(new int(a + 1)) {
//
//	}
//	~CTest() {
//		if (m_p) {
//			delete m_p;
//			m_p = nullptr;
//		}
//	}
//
//	//int operator=(int a){} //默认不会提供
//};
//
//int main() {
//	CTest tst(10);
//	cout << tst.m_a << ",  " << *tst.m_p << endl;
//
//	//tst = 20;  //匹配带参数的构造函数，进行的隐式转换,tst = CTest(20);
//
//	tst = CTest(20);//explicit 禁止了上面的隐式转换(隐式创建对象)，更容易发现浅拷贝的问题，排除潜在的危险
//
//	cout << tst.m_a << ",  " << *tst.m_p << endl;
//
//
//	return 0;
//}	
//
///*
//  1.默认无参构造
//  2 .析构函数
//  3.拷贝构造函数
//  4.默认的operator=
//
//*/