#pragma once
#ifndef EQUIPMENT_H_INCLUDED
#define EQUIPMENT_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;

class equipment {
public:
	void setequipment(double a = 0, double b = 0, double c = 0) {  //初始化装备属性
		ATK = a, TDF = b, CR = c;
	}
	void setname(string name) { this->name = name; };  //确定装备名
	string getname() { return name; };  //返回装备名
	double getATK() { return ATK; };  //返回装备攻击力
	double getTDF() { return TDF; };  //返回装备防御力
	double getCR() { return CR; };    //返回装备暴击率
	virtual void Information() = 0;  //虚函数
private:
	string name;
	double ATK = 0;//攻击力
	double TDF = 0;//防御力
	double CR = 0;//暴击率
};


class eagle_eye :public equipment {   //装备的派生类——鹰眼
public:
	eagle_eye(string a) { setname(a); };  //确定装备名
	void Information() {                                     //装备详细资料
		cout << "\t\t\t\t\t\****************************************************" << endl;
		cout << "\t\t\t\t\t\*                   鹰眼（一次性使用）             *" << endl;
		cout << "\t\t\t\t\t\*               进入某一区域之前使用该装           *" << endl;
		cout << "\t\t\t\t\t\*               备可提前探查该区域的情况           *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\****************************************************" << endl;

	}
};

class drug :public equipment {   //装备的派生类——药品
public:
	drug(string a) { setname(a); }; //确定装备名
	void Information() {                                         //装备详细资料
		cout << "\t\t\t\t\t\****************************************************" << endl;
		cout << "\t\t\t\t\t\*                   药品（一次性使用）             *" << endl;
		cout << "\t\t\t\t\t\*               恢复已损失生命值的60%的            *" << endl;
		cout << "\t\t\t\t\t\*               生命值                             *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\****************************************************" << endl;

	}
};


class bug :public equipment {             //装备的派生类——背包
public:
	bug(string a = " ") {            //确定装备名且初始化指针
		setname(a);
		for (int n = 0; n < 6; n++)
			p[n] = NULL;
	};
	void setequipment(equipment* a) {
		if (num == 6) cout << "背包已满，请立刻使用或出售装备" << endl;
		else {
			for (int n = 0; n < 6; n++)
				if (p[n] == NULL) {
					p[n] = a, num++;
					break;
				}
		}
	}
	void checkbug() {
		int choice, k = 0;
		equipment* a[6];
		if (num == 0) cout << "背包为空，无任何装备" << endl;
		else {
			cout << "共有" << num << "件装备" << endl;
			for (int n = 0; n < 6; n++)
				if (p[n] != NULL) {
					cout << n + 1 << ": " << p[n]->getname() << endl;
					a[k++] = p[n];
				}
		}
		for (;;)
		{
			cin >> choice;
			if (choice > num || choice <= 0) break;
			else a[choice - 1]->Information();
		}

	}
	void Information() {
		cout << "\t\t\t\t\t\****************************************************" << endl;
		cout << "\t\t\t\t\t\*                   药品（一次性使用）             *" << endl;
		cout << "\t\t\t\t\t\*               恢复已损失生命值的60%的            *" << endl;
		cout << "\t\t\t\t\t\*               生命值                             *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\****************************************************" << endl;

	}

private:
	equipment* p[6];
	int num = 0;  //放入背包中的装备总数
};
#endif