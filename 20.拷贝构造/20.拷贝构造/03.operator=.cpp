#include<iostream>
using namespace std;

class CTest {
public:
	int m_a;
	int* m_p;
		
	CTest(int a) :m_a(a),m_p(new int(a+1)) {

	}
	~CTest() {
		if (m_p) {
			delete m_p;
			m_p = nullptr;
		}
	}

	//函数名:operator=,参数 const 当前类对象的引用，返回值:当前类对象的引用
	//同类型的一个对象给另一个对象，赋值
	//空类编译器默认也会提供operator= 函数,默认也是一个浅拷贝函数
	//深拷贝: 手动实现
	CTest& operator=(const CTest& t) {
		if (this != &t) {  //判断地址是否相等
			m_a = t.m_a;
			if (t.m_p) {
				if (m_p) {
					*m_p = *t.m_p;  //将整型值拷贝
				}
				else {
					m_p = new int(*t.m_p);
				}
			}
			else{
				if (m_p) {
					delete m_p;
					m_p = nullptr;
				}
			}
		}
		return *this;
	}


	//int operator=(int a)经//不会提供
};

int main() {
	CTest tst1(1);
	CTest tst2(2);
	
	tst1 = tst2;  //赋值
	cout << tst1.m_a << endl;  //2

	tst1 = tst1;

	delete tst2.m_p;
	tst2.m_p = nullptr;

	tst1 = tst2;




	return 0;
}