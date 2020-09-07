#pragma once
#ifndef STORM_SWORD_H_INCLUDED
#define STORM_SWORD_H_INCLUDED
#include<iostream>
#include"equipment.h"
#include<string>
using namespace std;

class storm_sword :public equipment {
public:
	storm_sword(int a = 1, string b = " ") {
		grade = a;
		setname(b);
		change();
	};
	void Information() {
		cout << "\t\t\t\t\t\****************************************************" << endl;
		cout << "\t\t\t\t\t\*              风暴巨剑(攻击装)  " << grade << "级     *" << endl;
		cout << "\t\t\t\t\t\*        等级 1    攻击：1      暴击率：0          *" << endl;
		cout << "\t\t\t\t\t\*        等级 2    攻击：2      暴击率：0          *" << endl;
		cout << "\t\t\t\t\t\*        等级 3    攻击：4      暴击率：20%        *" << endl;
		cout << "\t\t\t\t\t\*        等级 4    攻击：6      暴击率：40%        *" << endl;
		cout << "\t\t\t\t\t\*        等级 5    攻击：10     暴击率：60%        *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\****************************************************" << endl;
	}

	void change() {
		switch (grade)
		{
		case 1:setequipment(1, 0, 0); break;
		case 2:setequipment(2, 0, 0); break;
		case 3:setequipment(4, 0, 0.2); break;
		case 4:setequipment(6, 0, 0.4); break;
		case 5:setequipment(10, 0, 0.6); break;
		default:cout << "你的装备等级已满级，无法再进行属性强化" << endl;
		}
	};
private:
	int grade;//等级
};

#endif
