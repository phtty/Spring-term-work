#include <iostream>
#include <string.h>
#include <Windows.h>
#define qdo 262 
#define sqdo 277
#define qre 294
#define sqre 311
#define qmi 330
#define qfa 349
#define sqfa 370
#define qso 392
#define sqso 415
#define qla 440
#define sqla 466
#define qsi 494
#define do 523
#define sdo 554
#define re 578
#define sre 622
#define mi 659
#define fa 698
#define sfa 740
#define so 784
#define sso 831
#define la 880
#define sla 932
#define si 988
#define do1 1046
#define sdo1 1046
#define re1 1175
#define sre1 1245
#define mi1 1318
#define fa1 1480
#define sfa1 1480
#define so1 1568
#define sso1 1661
#define la1 1760
#define sla1 1865
#define si1 1976
using namespace std;

void show(string str1,string str2){
	system("cls");
	cout<<"                             *                      "<<endl;
	cout<<"               *******        **                    "<<endl;
	cout<<"             ********           **                  "<<endl;
	cout<<"           *********             ***                "<<endl;
	cout<<"         **********               ***               "<<endl;
	cout<<"        **********                 ****             "<<endl;
	cout<<"         ***********               ****             "<<endl;
	cout<<"          ****   ****              ****             "<<endl;
	cout<<"                   ****            ****             "<<endl;
	cout<<"                     ****         *****             "<<endl;
	cout<<"                       ****      *****              "<<endl;
	cout<<"      ******             ****   *****               "<<endl;
	cout<<"    **********             *********                "<<endl;
	cout<<"   *****   ************************                 "<<endl;
	cout<<"    **      ***********************                 "<<endl;
	cout<<"               ****************  ****               "<<endl;
	cout<<"                                   ****             "<<endl;
	cout<<"                                     ****           "<<endl;
	cout<<"                                                    "<<endl;
	cout<<"                                                    "<<endl;
	cout<<"                                                    "<<endl;
	cout<<"                                                    "<<endl;
	cout<<"                                                    "<<endl;
	cout<<str1<<endl;
	cout<<str2<<endl;
}

int main()
{
    int pai = 800, ban = 400;
    int ting = 128;
	system("color 4e");
	system("title Государственный гимн СССР");
	
    Sleep(1000);
    show("Государственный гимн СССР","牢不可破的联盟");
    Beep(do1, 2 * pai);
//-------------第一部分-------------------------
    Sleep(1000);
    show("Союз нерушимый республик свободных","牢不可破的自由共和国联盟");
    Beep(so, ban);
    Beep(do1, pai);
    Beep(so, ban);
    Beep(la, ban);
    Beep(si, pai);
    Beep(mi, pai);
    Beep(la, pai);   
    Beep(so, ban);
    Beep(fa, ban);
    Beep(so, pai);
	
	show("Сплотила навеки Великая Русь","伟大的俄罗斯永远团结在一起");
	Beep(mi, pai);
	Beep(fa, pai);
	Beep(fa, ban);
	Beep(so, ban);
	Beep(la, pai);
	Beep(la, ban);
	Beep(sla, ban);
	Beep(si, pai);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, pai);
	
	Sleep(500);
	show("Да здравствует созданный волей народов","万岁，由人民意志所建立的");
	Beep(so, ban);
	Beep(mi1, pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(re1, pai);
	Beep(si, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(si, pai);
	
	show("Единый, могучий Советский Союз","统一的，强大的苏维埃联盟");
	Beep(mi, pai);
	Beep(la, pai);
	Beep(so, ban);
	Beep(fa, ban);
	Beep(so, pai);
	Beep(mi, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	
	Sleep(800);
	show("Славься, Отечество наше свободное","光荣啊，我们自由的祖国");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 *pai);
	Beep(mi, ban);
	Beep(mi, 1.5 * pai);
	
	Sleep(500);
	show("Дружбы народов надежный оплот","人民友谊是可靠的堡垒");
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(do1, ban);
	Beep(mi1, 1.5 * pai);
	
	Sleep(500);
	show("Партия Ленина - сила народная","列宁的党，人民的力量");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(la, ban);
	Beep(la, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 *pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);

	Sleep(500);
	show("Нас к торжеству коммунизма ведет","带领我们走向共产主义胜利");
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	Beep(do1, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	
//-------------第二部分-------------------------
	Sleep(500);
	show("Сквозь грозы сияло нам солнце свободы","自由阳光穿过风暴照耀我们");
    Beep(so, ban);
    Beep(do1, pai);
    Beep(so, ban);
    Beep(la, ban);
    Beep(si, pai);
    Beep(mi, pai);
    Beep(la, pai);   
    Beep(so, ban);
    Beep(fa, ban);
    Beep(so, pai);
	
	show("И Ленин великий нам путь озарил","伟大的列宁指明了未来前程");
	Beep(mi, pai);
	Beep(fa, pai);
	Beep(fa, ban);
	Beep(so, ban);
	Beep(la, pai);
	Beep(la, ban);
	Beep(sla, ban);
	Beep(si, pai);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, pai);
	
	Sleep(500);
	show("На правое дело он поднял народы","他因正义事业而领导人民");
	Beep(so, ban);
	Beep(mi1, pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(re1, pai);
	Beep(si, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(si, pai);
	
	show("На труд и на подвиги нас вдохновил","他鼓舞我们用劳动去建立功勋");
	Beep(mi, pai);
	Beep(la, pai);
	Beep(so, ban);
	Beep(fa, ban);
	Beep(so, pai);
	Beep(mi, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	
	Sleep(800);
	show("Славься, Отечество наше свободное","光荣啊，我们自由的祖国");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 *pai);
	Beep(mi, ban);
	Beep(mi, 1.5 * pai);
	
	Sleep(500);
	show("Дружбы народов надежный оплот","人民友谊是可靠的堡垒");
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(do1, ban);
	Beep(mi1, 1.5 * pai);
	
	Sleep(500);
	show("Партия Ленина - сила народная","列宁的党，人民的力量");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(la, ban);
	Beep(la, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 *pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);

	Sleep(500);
	show("Нас к торжеству коммунизма ведет","带领我们走向共产主义胜利");
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	Beep(do1, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
//-------------第三部分-------------------------
	Sleep(500);
	show("В победе бессмертных идей коммунизма","在不朽的共产主义理想当中");
    Beep(so, ban);
    Beep(do1, pai);
    Beep(so, ban);
    Beep(la, ban);
    Beep(si, pai);
    Beep(mi, pai);
    Beep(la, pai);   
    Beep(so, ban);
    Beep(fa, ban);
    Beep(so, pai);
	
	show("Мы видим грядущее нашей страны","我们看到祖国的美好未来");
	Beep(mi, pai);
	Beep(fa, pai);
	Beep(fa, ban);
	Beep(so, ban);
	Beep(la, pai);
	Beep(la, ban);
	Beep(sla, ban);
	Beep(si, pai);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, pai);
	
	Sleep(500);
	show("И Красному знамени славной Отчизны","向着祖国光荣的红色旗帜");
	Beep(so, ban);
	Beep(mi1, pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(re1, pai);
	Beep(si, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(si, pai);
	
	show("Мы будем всегда беззаветно верны","我们将永远保持无私的忠诚");
	Beep(mi, pai);
	Beep(la, pai);
	Beep(so, ban);
	Beep(fa, ban);
	Beep(so, pai);
	Beep(mi, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	
	Sleep(800);
	show("Славься, Отечество наше свободное","光荣啊，我们自由的祖国");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 *pai);
	Beep(mi, ban);
	Beep(mi, 1.5 * pai);
	
	Sleep(500);
	show("Дружбы народов надежный оплот","人民友谊是可靠的堡垒");
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(si, ban);
	Beep(do1, pai);
	Beep(la, ban);
	Beep(do1, ban);
	Beep(mi1, 1.5 * pai);
	
	Sleep(500);
	show("Партия Ленина - сила народная","列宁的党，人民的力量");
	Beep(mi1, 2 * pai);
	Beep(re1, ban);
	Beep(do1, ban);
	Beep(si, ban);
	Beep(do1, ban);
	Beep(re1, 1.5 * pai);
	Beep(la, ban);
	Beep(la, 1.5 * pai);
	Sleep(300);
	Beep(do1, 2 * pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, ban);
	Beep(la, ban);
	Beep(si, 1.5 *pai);
	Beep(so, ban);
	Beep(so, 1.5 * pai);

	Sleep(500);
	show("Нас к торжеству коммунизма ведет","带领我们走向共产主义胜利");
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	Beep(do1, pai);
	Beep(do1, pai);
	Beep(si, ban);
	Beep(la, ban);
	Beep(so, pai);
	Beep(si, pai);
	Beep(do1, 2 * pai);
	system("pause");
    return 0;
}
