#include<iostream>
#include"addE.h"
#include"addV.h"
#include"del.h"
#include"print.h"
#include"read.h"
#define N 100

int main() {
	int length = 9, chart[N][N];//lengthΪ���鳤�ȣ�chartΪ����ͼת���Ķ�ά����
	int a;
	cout << "		���Ʋ˵�" << endl;
	cout << "����1���·�ɱ�			����2����" << endl;
	cout << "����3ɾ��			����4����" << endl;
	cout << "�������֣�";
	ReadFile(chart, length);
	while (cin >> a) {
		int b, c;
		switch (a) {
		case (1): {
			PrintRoute(chart, length);
			break;
		}
		case (2): {
			cout << "����ָ��������1     	����ָ��������2	       ������һ������3" << endl;
			cout << "���Ӻ����������֣�";
			cin >> b;
			if (b == 1) {
				AddEdag(chart);
				PrintRoute(chart, length);
			}
			else if (b == 2) {
				length = AddVertex(chart, length);
				PrintRoute(chart, length);
			}
			else if (b == 3) {
				break;
			}
			break;

		}
		case (3): {
			cout << "ɾ��ָ��������1	    ɾ��ָ��������2       ������һ������3" << endl;
			cout << "ɾ�������������֣�";
			cin >> c;
			if (c == 1) {
				DeleteEdge(chart);
				PrintRoute(chart, length);
			}
			else if (c == 2) {
				cout << chart[0][8] << endl;
				length = DeleteVertex(chart, length);
				PrintRoute(chart, length);
			}
			else if (c == 3) {
				break;
			}
			break;
		}
		case (4): {
			cout << "��лʹ��" << endl;
			return 0;
		}
		}
		cout << endl << "�������֣�";
	}
	cout << "��лʹ��1" << endl;
	cout << endl;
	system("pause");
	cout << endl;
	return 0;
}
