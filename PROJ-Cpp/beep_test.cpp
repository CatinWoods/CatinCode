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
    system("title ������էѧ���ӧ֧ߧߧ��� �ԧڧާ� ��������");
     
    Sleep(1000);
    show("������էѧ���ӧ֧ߧߧ��� �ԧڧާ� ��������","�β����Ƶ�����");
    Beep(do1, 2 * pai);
//-------------��һ����-------------------------
    Sleep(1000);
    show("������ �ߧ֧���ڧާ��� ��֧���ҧݧڧ� ��ӧ�ҧ�էߧ���","�β����Ƶ����ɹ��͹�����");
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
     
    show("����ݧ��ڧݧ� �ߧѧӧ֧ܧ� ���֧ݧڧܧѧ� ������","ΰ��Ķ���˹��Զ�Ž���һ��");
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
    show("���� �٧է�ѧӧ��ӧ�֧� ���٧էѧߧߧ��� �ӧ�ݧ֧� �ߧѧ��է��","���꣬��������־��������");
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
     
    show("���էڧߧ���, �ާ�ԧ��ڧ� ����ӧ֧��ܧڧ� ������","ͳһ�ģ�ǿ�����ά������");
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
    show("���ݧѧӧ���, ����֧�֧��ӧ� �ߧѧ�� ��ӧ�ҧ�էߧ��","���ٰ����������ɵ����");
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
    show("�����اҧ� �ߧѧ��է�� �ߧѧէ֧اߧ��� ���ݧ��","���������ǿɿ��ı���");
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
    show("���ѧ��ڧ� ���֧ߧڧߧ� - ��ڧݧ� �ߧѧ��էߧѧ�","�����ĵ������������");
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
    show("���ѧ� �� ����ا֧��ӧ� �ܧ�ާާ�ߧڧ٧ާ� �ӧ֧է֧�","�����������򹲲�����ʤ��");
    Beep(do1, pai);
    Beep(si, ban);
    Beep(la, ban);
    Beep(so, pai);
    Beep(do1, pai);
    Beep(do1, pai);
    Beep(si, ban);
    Beep(la, ban);
    Beep(so, pai);
     
//-------------�ڶ�����-------------------------
    Sleep(500);
    show("���ܧӧ�٧� �ԧ��٧� ��ڧ�ݧ� �ߧѧ� ���ݧߧ�� ��ӧ�ҧ�է�","�������⴩���籩��ҫ����");
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
     
    show("�� ���֧ߧڧ� �ӧ֧ݧڧܧڧ� �ߧѧ� ����� ��٧ѧ�ڧ�","ΰ�������ָ����δ��ǰ��");
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
    show("���� ���ѧӧ�� �է֧ݧ� ��� ���էߧ�� �ߧѧ��է�","����������ҵ���쵼����");
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
     
    show("���� ����� �� �ߧ� ���էӧڧԧ� �ߧѧ� �ӧէ��ߧ�ӧڧ�","�������������Ͷ�ȥ������ѫ");
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
    show("���ݧѧӧ���, ����֧�֧��ӧ� �ߧѧ�� ��ӧ�ҧ�էߧ��","���ٰ����������ɵ����");
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
    show("�����اҧ� �ߧѧ��է�� �ߧѧէ֧اߧ��� ���ݧ��","���������ǿɿ��ı���");
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
    show("���ѧ��ڧ� ���֧ߧڧߧ� - ��ڧݧ� �ߧѧ��էߧѧ�","�����ĵ������������");
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
    show("���ѧ� �� ����ا֧��ӧ� �ܧ�ާާ�ߧڧ٧ާ� �ӧ֧է֧�","�����������򹲲�����ʤ��");
    Beep(do1, pai);
    Beep(si, ban);
    Beep(la, ban);
    Beep(so, pai);
    Beep(do1, pai);
    Beep(do1, pai);
    Beep(si, ban);
    Beep(la, ban);
    Beep(so, pai);
//-------------��������-------------------------
    Sleep(500);
    show("�� ���ҧ֧է� �ҧ֧��ާ֧��ߧ��� �ڧէ֧� �ܧ�ާާ�ߧڧ٧ާ�","�ڲ���Ĺ����������뵱��");
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
     
    show("���� �ӧڧէڧ� �ԧ��է��֧� �ߧѧ�֧� ����ѧߧ�","���ǿ������������δ��");
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
    show("�� ����ѧ�ߧ�ާ� �٧ߧѧާ֧ߧ� ��ݧѧӧߧ�� �����ڧ٧ߧ�","����������ٵĺ�ɫ����");
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
     
    show("���� �ҧ�է֧� �ӧ�֧ԧէ� �ҧ֧٧٧ѧӧ֧�ߧ� �ӧ֧�ߧ�","���ǽ���Զ������˽���ҳ�");
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
    show("���ݧѧӧ���, ����֧�֧��ӧ� �ߧѧ�� ��ӧ�ҧ�էߧ��","���ٰ����������ɵ����");
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
    show("�����اҧ� �ߧѧ��է�� �ߧѧէ֧اߧ��� ���ݧ��","���������ǿɿ��ı���");
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
    show("���ѧ��ڧ� ���֧ߧڧߧ� - ��ڧݧ� �ߧѧ��էߧѧ�","�����ĵ������������");
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
    show("���ѧ� �� ����ا֧��ӧ� �ܧ�ާާ�ߧڧ٧ާ� �ӧ֧է֧�","�����������򹲲�����ʤ��");
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
