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

	//������:operator=,���� const ��ǰ���������ã�����ֵ:��ǰ����������
	//ͬ���͵�һ���������һ�����󣬸�ֵ
	//���������Ĭ��Ҳ���ṩoperator= ����,Ĭ��Ҳ��һ��ǳ��������
	//���: �ֶ�ʵ��
	CTest& operator=(const CTest& t) {
		if (this != &t) {  //�жϵ�ַ�Ƿ����
			m_a = t.m_a;
			if (t.m_p) {
				if (m_p) {
					*m_p = *t.m_p;  //������ֵ����
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


	//int operator=(int a)��//�����ṩ
};

int main() {
	CTest tst1(1);
	CTest tst2(2);
	
	tst1 = tst2;  //��ֵ
	cout << tst1.m_a << endl;  //2

	tst1 = tst1;

	delete tst2.m_p;
	tst2.m_p = nullptr;

	tst1 = tst2;




	return 0;
}