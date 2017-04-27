#ifndef CIRCEL_H  
#define CIRCEL_H
// 这两条语句是固定的，后面的“CIRCEL_H”最好对应于头文件名，如这里头文件叫“CIRCEL.H”

//定义类Circel
class Circel
{
public:
	Circel();
	circel(double R);
	double Area();
private:
	double r;
};

#endif

