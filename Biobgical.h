#pragma once
#ifndef BIOBGICAL_H_INCLUDED
#define BIOBGICAL_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Biobgical {
public:
	Biobgical(double a = 0, double b = 0, double c = 0, string d = " ") {  //各个属性初始化
		Hp = a;
		TDF = b;
		ATK = c;
		name = d;
	};
	virtual void Information() = 0;          //输出对象的相关信息
	double getHp() { return Hp; };//得到生命值
	double getTDF() { return TDF; };//得到防御力
	double getATK() { return ATK; };//得到攻击力
	string getname() { return name; };//得到名字
private:
	double Hp;//生命值
	double TDF;//防御力
	double ATK;//攻击力
	string  name;//名字
};
#endif