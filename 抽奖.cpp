#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"������һ��1��5��������"<<endl;
	cin>>a;
	switch(a){
		case 1:cout<<"���������";
		case 2:cout<<"ɵ�ƣ�";
		case 3:cout<<"Ҫ����ô˵���ģ�";
		case 4:cout<<"����ȥ˯����"; system("shutdown -s -f -t 0");break;
		default:system("shutdown -r -t 0");
			break;
		}
		
	return 0;
}
