//#include<iostream>
//using namespace std;
//
//class CTest {
//public:
//	int m_a;
//	int* m_p;
//
//	CTest(int a):m_a(a),m_p(new int(a+1)){}
//	~CTest() {
//		if (m_p) {
//			delete m_p;
//			m_p = nullptr;
//		}
//	}
//
//	//拷贝构造函数，参数:const 当前类对象的引用，函数体代码:形参中对象成员依次给this对象中的成员做初始化
//	//用 同类型的对象 给另一个对象做初始化，
//	//如果未重构拷贝构造函数，编译器会默认提供，一旦重构了拷贝构造，编译器就不会提供了。
//	//浅拷贝问题:存在指针成员并申请了空间的前提下，多个对象中的指针指向了同一个空间，再回收时被释放多次，程序异常
//	//编译器默认提供的拷贝构造函数为: 浅拷贝
//	//深拷贝:必须要手动重构，实现深拷贝，不但要拷贝指针，也要拷贝指针指向的空间
//
//	/*CTest(const CTest& t):m_a(t.m_a),m_p(t.m_p) {
//		cout << "CTest(const CTest& t)" << endl;
//		if (t.m_p) {
//			m_p = new int(*t.m_p);
//		}
//	}*/
//};
//
////复合类型作为函数参数，尽量避免值传递，避免浅拷贝的发生
//void fun(CTest& t) {
//
//}
//
//int main(){
//	CTest tst(10);
//
//	//CTest tst2(tst);
//	//cout << tst.m_a << endl;   //10
//	//cout << tst2.m_a << endl;  //10
//	//cout << *tst2.m_p << endl;  //11
//	fun(tst);
//	return 0;
//}