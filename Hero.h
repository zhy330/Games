#pragma once
#ifndef HERO_H_INCLUDED
#define HERO_H_INCLUDED
#include"Biobgical.h"
#include<iostream>
using namespace std;

class Hero :public Biobgical {   //Biobgical（生物）派生出Hero（英雄）
public:
	Hero(double a = 0, double b = 0, double c = 0, string d = " ") :Biobgical(a, b, c, d) {       //属性初始化
	}
	virtual void Information() = 0;
};


class tank :public Hero {        //Hero（英雄）派生出tank（坦克）
public:
	tank(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {        //属性初始化
	}
	void Information() {
		cout << "\t\t\t\t" << "坦克" << endl;
		cout << "\t\t\t\t" << "攻击：" << getATK() << "  防御：" << getTDF() << "  生命：" << getHp() << endl;
		cout << "\t\t\t\t" << "主推防御装" << endl;
	}
};

class thud : public Hero {   //Hero（英雄）派生出thud（刺客）
public:
	thud(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {          //属性初始化
	};
};

class soldier :public Hero {  //Hero（英雄）派生出soldier（战士）
public:
	soldier(double a = 0, double b = 0, double c = 0, string d = " ") :Hero(a, b, c, d) {   //属性初始化
	};

};
#endif
