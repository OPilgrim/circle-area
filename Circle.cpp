#include"CIRCEL.H"

Circel::Circel()
{
	this->r=0;     //初始化r，this-> 可以调用自身变量
}
//我一开始没有赋初值，好像会出现错误提示
Circel::circel(double R)
{
	this->r=R;    //赋值，令r=R
}

double Circel::Area()
{
	return 3.14*r*r;    //计算面积。
}
//虽然这里可以直接用R来算，但这样private就没用了。虽然只是一个小程序，但该有的练习还是要有的
