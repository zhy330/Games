#pragma once
#ifndef EQUIPMENT_H_INCLUDED
#define EQUIPMENT_H_INCLUDED
#include<iostream>
#include<string>
using namespace std;

class equipment {
public:
	void setequipment(double a = 0, double b = 0, double c = 0) {  //��ʼ��װ������
		ATK = a, TDF = b, CR = c;
	}
	void setname(string name) { this->name = name; };  //ȷ��װ����
	string getname() { return name; };  //����װ����
	double getATK() { return ATK; };  //����װ��������
	double getTDF() { return TDF; };  //����װ��������
	double getCR() { return CR; };    //����װ��������
	virtual void Information() = 0;  //�麯��
private:
	string name;
	double ATK = 0;//������
	double TDF = 0;//������
	double CR = 0;//������
};


class eagle_eye :public equipment {   //װ���������ࡪ��ӥ��
public:
	eagle_eye(string a) { setname(a); };  //ȷ��װ����
	void Information() {                                     //װ����ϸ����
		cout << "\t\t\t\t\t\****************************************************" << endl;
		cout << "\t\t\t\t\t\*                   ӥ�ۣ�һ����ʹ�ã�             *" << endl;
		cout << "\t\t\t\t\t\*               ����ĳһ����֮ǰʹ�ø�װ           *" << endl;
		cout << "\t\t\t\t\t\*               ������ǰ̽�����������           *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\****************************************************" << endl;

	}
};

class drug :public equipment {   //װ���������ࡪ��ҩƷ
public:
	drug(string a) { setname(a); }; //ȷ��װ����
	void Information() {                                         //װ����ϸ����
		cout << "\t\t\t\t\t\****************************************************" << endl;
		cout << "\t\t\t\t\t\*                   ҩƷ��һ����ʹ�ã�             *" << endl;
		cout << "\t\t\t\t\t\*               �ָ�����ʧ����ֵ��60%��            *" << endl;
		cout << "\t\t\t\t\t\*               ����ֵ                             *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\****************************************************" << endl;

	}
};


class bug :public equipment {             //װ���������ࡪ������
public:
	bug(string a = " ") {            //ȷ��װ�����ҳ�ʼ��ָ��
		setname(a);
		for (int n = 0; n < 6; n++)
			p[n] = NULL;
	};
	void setequipment(equipment* a) {
		if (num == 6) cout << "����������������ʹ�û����װ��" << endl;
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
		if (num == 0) cout << "����Ϊ�գ����κ�װ��" << endl;
		else {
			cout << "����" << num << "��װ��" << endl;
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
		cout << "\t\t\t\t\t\*                   ҩƷ��һ����ʹ�ã�             *" << endl;
		cout << "\t\t\t\t\t\*               �ָ�����ʧ����ֵ��60%��            *" << endl;
		cout << "\t\t\t\t\t\*               ����ֵ                             *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\*                                                  *" << endl;
		cout << "\t\t\t\t\t\****************************************************" << endl;

	}

private:
	equipment* p[6];
	int num = 0;  //���뱳���е�װ������
};
#endif