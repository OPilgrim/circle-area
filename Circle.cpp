#include"CIRCEL.H"

Circel::Circel()
{
	this->r=0;     //��ʼ��r��this-> ���Ե����������
}
//��һ��ʼû�и���ֵ���������ִ�����ʾ
Circel::circel(double R)
{
	this->r=R;    //��ֵ����r=R
}

double Circel::Area()
{
	return 3.14*r*r;    //���������
}
//��Ȼ�������ֱ����R���㣬������private��û���ˡ���Ȼֻ��һ��С���򣬵����е���ϰ����Ҫ�е�
