//#include<iostream>
//using namespace std;
//
//class CTest {
//public:
//	int m_a;
//	//ת�����캯��:���Է�����ʽ����ת���Ĺ��캯��
//	//explicit:��ֹ������ʽ����ת��
//	//explicit cTest(int a):m_a(a){}
//
//
//	//���ܷ�����ʽ����ת��
//	//CTest(int a,int b):m_a(a){}
//
//	//���Է�����ʽ����ת��
//	CTest(int a, int b = 3) :m_a(a) {
//
//	}
//};
//
//int main() {
//	CTest tst1(10);
//	cout << tst1.m_a << endl;
//
//	//CTest tst2 = 20;       //explicit ��ֹ�ˣ�ֻ����ʽ���ݲ���
//	//cout << tst2.m_a << endl;
//
//	CTest tst3 = 2;
//	cout << tst3.m_a << endl;
//
//	return 0;
//}