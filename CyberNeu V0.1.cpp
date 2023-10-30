#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
#include<sstream>
#include<fstream>
#include<stdlib.h>
#include<cstdio>
#include<stdio.h>
#include<windows.h>
#include<bits/fstream.tcc>
#include<algorithm>
#include<string>
#include<ctime>
#include<conio.h>
#include<time.h>
#include<cmath>
#include<queue>
#include<stack>
#define random(x)(rand()%x)
using namespace std;
struct User{
	int level;		//等级
	int pp;			//体力
	int money;		//金钱
	int exp;		//经验
	int grade;		//学分
	string name;	//姓名
}user;
void cls(){system("cls");}
void eout(string s,int p=10){
	int i=0;
	while(i<(int)s.size()){
		if(s[i]=='}'){
			if(s[i-1]>0)cout<<' ';
			cout<<endl;
		} else {
			cout<<"|";
			if(!kbhit()) Sleep(p);
			cout<<"┃";
			if(!kbhit()) Sleep(p);
			cout<<"\b\b";cout<<"▊";
			if(!kbhit()) Sleep(p);
			if(kbhit()&&i%3==0)getch();
			if(s[i]<0){
				cout<<"\b"<<s[i]<<s[i+1];
				i++;
			} else {
				cout<<"\b"<<s[i];
			}
		}if(s[i]>=0&&s[i]<=255);else cout<<' '; 
		i++;
		if(!kbhit())Sleep(p);
		Sleep(p);
	}cout<<" \b";
}
void saveGame(){
    ofstream file("saver.dat",ios::out|ios::binary);	//打开文件
    file.write((char*)&user,sizeof(user));				//写入
    file.close();                                       //关闭
}
void Save(){
	ofstream fout("saver.txt");
	cout<<"正在为你存档……"<<endl;
	fout<<user.name<<endl;
	system("cls"); 
	fout.close();
	//saveGame();
}
void readGame(){
	ifstream file("saver.dat",ios::in|ios::binary);		//打开
	if(!file){											//判断文件是否不存在
		cout<<"error"<<endl;							//不存在就报错
		return ;
	}
	file.read((char*)&user,sizeof(user));				//读入
	file.close();										//关闭文件
}
void Read(){
	ifstream fin("saver.txt");
	cout<<"正在为你读档……"<<endl;
	getline(fin,user.name);
	Sleep(1000);
	system("cls");
	fin.close();
	//readGame();
}
void undone(){
	system("cls");
	eout("该模块未开启");
	getch(); system("cls");
}
void update(){
	system("cls");
	eout("CyberNeu 更新简介： }");
	eout("CyberNeu 以原NHOI 水友团开发的OIbox 为基础进行重构和改进 }"); 
	eout("V1.0 基本结构的构建 }");
	getch(); system("cls");
}
void HTML(){bool t=0;string s="https://";
	while(!t){
		system("cls");
		cout<<"1.东大官网 \n2.数学题库 \n3.慕课MOOC \n4.数学工具箱 \n5.数学绘图 \n6.IP控制网关 \n其他请输入网站(已加https://)\n0退出\n"<<endl;
		eout("请输入网址编号： }");
		string in;char input[10001];
		cin>>in;
		switch(in[0]){
		    case '1':ShellExecute(NULL, "open", "http://neu.edu.cn", NULL, NULL, SW_SHOWNORMAL);return;break;
		    case '2':ShellExecute(NULL, "open", "http://mathe.neu.edu.cn/", NULL, NULL, SW_SHOWNORMAL);return;break;
		    case '3':ShellExecute(NULL, "open", "https://www.icourse163.org/", NULL, NULL, SW_SHOWNORMAL);return;break;
		    case '4':ShellExecute(NULL, "open", "https://zh.numberempire.com/", NULL, NULL, SW_SHOWNORMAL);return;break;
		    case '5':ShellExecute(NULL, "open", "https://www.geogebra.org/calculator", NULL, NULL, SW_SHOWNORMAL);return;break;
		    case '6':ShellExecute(NULL, "open", "https://ipgw.neu.edu.cn/", NULL, NULL, SW_SHOWNORMAL);return;break;
		    case '0':{t=1;break;}
		    default:{in=s+in;
				for(int i=0;i<(int)in.size();i++)input[i]=in[i];
				ShellExecute(NULL, "open", input, NULL, NULL, SW_SHOWNORMAL);return;break;
			}
		}
	}
}
void CMD(){
	undone();
}
void TIME(){
	undone();
}
void Modifyfile(){
	string name;
	eout("请修改档案(若不修改可直接回车) }");
	cout<<"姓名："<<endl;getline(cin,name);
	if(!name.size())cout<<"no";else user.name=name;
	Save();
}
void Sleeptime(){
	undone();
}
void Talk(){
	undone();
}
void Mygoods(){
	undone();
}
void Living(){
	system("cls");
	eout("要做什么 }");
	cout<<"1.睡觉 \n2.和舍友交谈 \n3.使用物品 \n输入其他退出";
	char c=getch();
	if(c=='1'){
		Sleeptime();
	} else 
	if(c=='2'){
		Talk();
	} else 
	if(c=='3'){
		Mygoods();
	}
}
void Teaching(){
	undone();
}
void Dining(){
	undone();
}
void PlayGound(){
	undone();
}
void Lake(){
	undone();
}
void Move(){
	eout("行进中………… }",30);
	cls();
}
void Map(){
	//undone();
	system("cls");
	eout("可以前往的地点： }");
	cout<<"1.宿舍 \n2.教学楼 \n3.饭堂 \n4.操场 \n5.小南湖 \n";
	char c=getch();Move();
	if(c=='1') {
		Living();
	} else 
	if(c=='2'){
		Teaching();
	} else 
	if(c=='3'){
		Dining();
	} else 
	if(c=='4'){
		PlayGound();
	} else 
	if(c=='5'){
		Lake();
	}
}
void Queryfile(){
	cout<<"姓名："<<user.name<<endl;
	getch();
	system("cls");
}
void School(){
//	undone();return ;
	Read();
	while(1){
		system("cls");
		//Read();
		eout("1.修改档案 }2.地图 }3.查看人物 }4.退出 }");
		char c=getch();
		if(c=='1') {
			Modifyfile();
		} else 
		if(c=='2') {
			Map();
		} else 
		if(c=='3') {
			Queryfile();
		} else 
		break;
	}
}
void logo(){
	cout<<"                          ....................... .,]OOO[[[[[[[[[[/OO]]. ......................."<<endl;
	cout<<"                          ....................,]O/`... .]`......... ..../O/` ..................."<<endl;
	cout<<"                          .................,O/`.......@北O].......,大......,/O`................."<<endl;
	cout<<"                          .............../OO`.........O` ...   .... /^ ........//`.............."<<endl;
	cout<<"                          .............//..=@东]`......****....****........OO@学@/O`............"<<endl;
	cout<<"                          ...........=O....=O@@`..**..]O@@@@@@@@@@@]`.**...=@@,@...//..........."<<endl;
	cout<<"                          ..........O^.......,.**.]@@@@@@@@@@@@@@@@@@@@/.*,O`,`.....,O`........."<<endl;
	cout<<"                          ........,O`........**,@@@@@@@@@@@@@@@@@@@@@@@@@@`.*........./^........"<<endl;
	cout<<"                          .......,O....... .*,@@@@@@@@@@@@@@`./@@@@@@@@@@@@@`.*....... // ......"<<endl;
	cout<<"                          ......,O`.......*./@@@@@@@`,@@@@@..../@@@@`./@@@@@@@.*... ..../^......"<<endl;
	cout<<"                          ....../^.]/@O..*./@@@@@@/....,@/......=@^....=@@@@@@@.*..=O@O.,O`....."<<endl;
	cout<<"                          .... =O ,O@O. ../@@@@@@^ .....................,@@@@@@@.*..[....=^....."<<endl;
	cout<<"                          .... O^.O/]O..*=@@@@@@`........................./@@@@@^.. =@OO..O....."<<endl;
	cout<<"                          .....O../OO` ..=@@@@/............................=@@@@@.*...  . O^ ..."<<endl;
	cout<<"                          .....O.=OOO` *.@@@@^..............................,@@@@`*../OO^ /^ ..."<<endl;
	cout<<"                          .....O.,OO@^ *.@@@................................../@@`*...... /^ ..."<<endl;
	cout<<"                          .....O..,]]`...//..  .]]]]]]]]]. ....................=@.* .OOOO O^ ..."<<endl;
	cout<<"                          .... O^.*//...*..]@@@@@@@@@@@@@@@@@]. ...............].*...`.,..O....."<<endl;
	cout<<"                          .... =O *OOO` ../@@[`]/@@@@@@@@/`,/@@@@@@O]]]]]O@@@@@@.*..OoO[.=^....."<<endl;
	cout<<"                          ....../^.O,`` .*.,@@@@@@[[[[[[[@@@@@]`.[[/O@@@@/[[....*..,.,[`,O`....."<<endl;
	cout<<"                          ......,O`.[@O`..*.[[.]/@@@@@@@@@/],@@@@@@@@@@@@@@@@/.*..=OO/^./^ ....."<<endl;
	cout<<"                          .......,O.,`,OO` .*,@@@/[[....,[[@@@@/`..[[[[[[[`..**../` ,[./^ ......"<<endl;
	cout<<"                          ........,O`,OO^=/..**.=@@@@@@@@@@@].@@@@@@@@@@@@[.*. .OOO/../^........"<<endl;
	cout<<"                          ..........O^../O[/]...*.[@@@@@@@@@@@@@@]]]]`...**.  =O`  .,O`........."<<endl;
	cout<<"                          ...........,O. ./@O[]. ..*..[/@@@@@@@@@@/[`.**....=/..[`.//..........."<<endl;
	cout<<"                          .............//.,O,@///]. ...****....****......O`OOOO..//............."<<endl;
	cout<<"                          .............../O`..o/OOO^......   .  .,.....=O,O`..,//..............."<<endl;
	cout<<"                          .................,/O`..[[ ....O^O1923O*/O`.....[../O`................."<<endl;
	cout<<"                          ................... .[O/].  ..[.=O^=@/.//.  .,]O/` ..................."<<endl;
	cout<<"                          ....................... .,[OOO/]]]]]]]]/OOO/`.........................";
	Sleep(2000);system("cls");
}
void init(){
	system("color 17");
	logo();
	eout("欢迎来到赛博东大 }");Sleep(1000);
	eout("正在入侵： ▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅ }");
	eout("按任意键进入");getch();
	system("cls");
}
void menu(){
	while(1){
		system("cls");
		cout<<"CyberNeu V1.0[MainMenu] "<<endl;
		cout<<"0.更新说明 1.进入赛博校园 2.打开网页"<<endl;
		char c=getch();
		if(c=='0')update();
		if(c=='1')School();
		if(c=='2')HTML();
		if(c=='3')TIME();
	}
}
int main(){
	fstream _file;
    _file.open("saver.txt", ios::in);
    if(!_file){printf("no\n");return 0;}
	init();
	menu();
	update();
	return 0;
}
