#include<iostream>
#include"CIRCEL.H" 
//�û��Լ���д��ͷ�ļ���vs6.0�����һ����ɲ鿴���ݣ�������ĵ���CIRCEL.H����
using namespace std;

int main()
{
	double t;
	//����t���հ뾶ֵ
	class Circel a;
	//����Circel�Ķ���a
	cin >> t;
	a.circel(t);
	//��t��ֵ��a�ڵ�circel��������������ٰ�t��ֵ���ݸ�˽�е�r
	cout << "AREA=" << a.Area() <<endl;
	//Area()�����������
	return 0;
}