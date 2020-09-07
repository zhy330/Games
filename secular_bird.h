#pragma once
#ifndef SECULAR_BIRD_H_INCLUDED
#define SECULAR_BIRD_H_INCLUDED
#include<iostream>
#include"equipment.h"
#include"Hero.h"
#include<string>
using namespace std;

class secular_bird :public equipment {
public:
	secular_bird(int a, string b) {
		grade = a;
		setname(b);
	}
	void setHp(Hero* hero) { Hp = hero->getHp(); }

	void change() {
		switch (grade)
		{
		case 1:setequipment(0, 1, 0); break;
		case 2:setequipment(0, 2, 0); break;
		case 3:setequipment(Hp * 0.02, 4, 0); break;
		case 4:setequipment(0, 6 + Hp * 0.03, 0); break;
		case 5:setequipment(Hp * 0.04, 10 + Hp * 0.04, 0); break;
		default:cout << "你的装备等级已满级，无法再进行属性强化" << endl;
		}

	}
	void Information() {
		cout << "\t\t\t\t\t\********************************************************" << endl;
		cout << "\t\t\t\t\t\*             不死鸟重装(防御装)  " << grade << "级        *" << endl;
		cout << "\t\t\t\t\t\*   等级 1    防御：1                烫伤：0           *" << endl;
		cout << "\t\t\t\t\t\*   等级 2    防御：2                烫伤：0           *" << endl;
		cout << "\t\t\t\t\t\*   等级 3    防御：4                烫伤：最大生命*2% *" << endl;
		cout << "\t\t\t\t\t\*   等级 4    防御：6+最大生命*3%    烫伤：0           *" << endl;
		cout << "\t\t\t\t\t\*   等级 5    防御：10+最大生命*4%   烫伤：最大生命*4% *" << endl;
		cout << "\t\t\t\t\t\*                                                      *" << endl;
		cout << "\t\t\t\t\t\********************************************************" << endl;
	}

private:
	double ATK = 0;//攻击力
	double TDF = 0;//防御力
	double CR = 0;//暴击率
	int grade;//等级
	double Hp = 0;   //参与冒险英雄的血量值
};


#endif
