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
//	//int operator=(int a){} //Ĭ�ϲ����ṩ
//};
//
//int main() {
//	CTest tst(10);
//	cout << tst.m_a << ",  " << *tst.m_p << endl;
//
//	//tst = 20;  //ƥ��������Ĺ��캯�������е���ʽת��,tst = CTest(20);
//
//	tst = CTest(20);//explicit ��ֹ���������ʽת��(��ʽ��������)�������׷���ǳ���������⣬�ų�Ǳ�ڵ�Σ��
//
//	cout << tst.m_a << ",  " << *tst.m_p << endl;
//
//
//	return 0;
//}	
//
///*
//  1.Ĭ���޲ι���
//  2 .��������
//  3.�������캯��
//  4.Ĭ�ϵ�operator=
//
//*/