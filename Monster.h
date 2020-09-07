#pragma once
#ifndef MONSTER_H_INCLUDED
#define MONSTER_H_INCLUDED
#include<iostream>
#include"Biobgical.h"
using namespace std;

class Monster :public Biobgical {        //Biological派生出Monster（怪物）
public:
	Monster(double a = 0, double b = 0, double c = 0, string d = " ", int e = 0) :Biobgical(a, b, c, d) {   //属性初始化
		setmoney(e);
	}
	void setmoney(int money0) { money = money0; };
private:
	int money;  //击杀怪物后掉落的金币
};




//Monster的派生类
class small_monster :public Monster {  //Monster（怪物）派生出small_monster(小怪)
	small_monster(double a = 0, double b = 0, double c = 0, string d = " ", int e = 0) :Monster(a, b, c, d) {   //属性初始化
		setmoney(e);
	}
};


class mid_monster :public Monster {  //Monster（怪物）派生出mid_monster(一般怪)
	mid_monster(double a = 0, double b = 0, double c = 0, string d = " ", int e = 0) :Monster(a, b, c, d) {   //属性初始化
		setmoney(e);
	}
};

class big_monster :public Monster {  //Monster（怪物）派生big_monster(大怪)
	big_monster(double a = 0, double b = 0, double c = 0, string d = " ", int e = 0) :Monster(a, b, c, d) {   //属性初始化
		setmoney(e);
	}
};


#endif