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
	int level;		//�ȼ�
	int pp;			//����
	int money;		//��Ǯ
	int exp;		//����
	int grade;		//ѧ��
	string name;	//����
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
			cout<<"��";
			if(!kbhit()) Sleep(p);
			cout<<"\b\b";cout<<"��";
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
    ofstream file("saver.dat",ios::out|ios::binary);	//���ļ�
    file.write((char*)&user,sizeof(user));				//д��
    file.close();                                       //�ر�
}
void Save(){
	ofstream fout("saver.txt");
	cout<<"����Ϊ��浵����"<<endl;
	fout<<user.name<<endl;
	system("cls"); 
	fout.close();
	//saveGame();
}
void readGame(){
	ifstream file("saver.dat",ios::in|ios::binary);		//��
	if(!file){											//�ж��ļ��Ƿ񲻴���
		cout<<"error"<<endl;							//�����ھͱ���
		return ;
	}
	file.read((char*)&user,sizeof(user));				//����
	file.close();										//�ر��ļ�
}
void Read(){
	ifstream fin("saver.txt");
	cout<<"����Ϊ���������"<<endl;
	getline(fin,user.name);
	Sleep(1000);
	system("cls");
	fin.close();
	//readGame();
}
void undone(){
	system("cls");
	eout("��ģ��δ����");
	getch(); system("cls");
}
void update(){
	system("cls");
	eout("CyberNeu ���¼�飺 }");
	eout("CyberNeu ��ԭNHOI ˮ���ſ�����OIbox Ϊ���������ع��͸Ľ� }"); 
	eout("V1.0 �����ṹ�Ĺ��� }");
	getch(); system("cls");
}
void HTML(){bool t=0;string s="https://";
	while(!t){
		system("cls");
		cout<<"1.������� \n2.��ѧ��� \n3.Ľ��MOOC \n4.��ѧ������ \n5.��ѧ��ͼ \n6.IP�������� \n������������վ(�Ѽ�https://)\n0�˳�\n"<<endl;
		eout("��������ַ��ţ� }");
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
	eout("���޸ĵ���(�����޸Ŀ�ֱ�ӻس�) }");
	cout<<"������"<<endl;getline(cin,name);
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
	eout("Ҫ��ʲô }");
	cout<<"1.˯�� \n2.�����ѽ�̸ \n3.ʹ����Ʒ \n���������˳�";
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
	eout("�н��С������� }",30);
	cls();
}
void Map(){
	//undone();
	system("cls");
	eout("����ǰ���ĵص㣺 }");
	cout<<"1.���� \n2.��ѧ¥ \n3.���� \n4.�ٳ� \n5.С�Ϻ� \n";
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
	cout<<"������"<<user.name<<endl;
	getch();
	system("cls");
}
void School(){
//	undone();return ;
	Read();
	while(1){
		system("cls");
		//Read();
		eout("1.�޸ĵ��� }2.��ͼ }3.�鿴���� }4.�˳� }");
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
	cout<<"                          .................,O/`.......@��O].......,��......,/O`................."<<endl;
	cout<<"                          .............../OO`.........O` ...   .... /^ ........//`.............."<<endl;
	cout<<"                          .............//..=@��]`......****....****........OO@ѧ@/O`............"<<endl;
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
	eout("��ӭ������������ }");Sleep(1000);
	eout("�������֣� �|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�|�| }");
	eout("�����������");getch();
	system("cls");
}
void menu(){
	while(1){
		system("cls");
		cout<<"CyberNeu V1.0[MainMenu] "<<endl;
		cout<<"0.����˵�� 1.��������У԰ 2.����ҳ"<<endl;
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
