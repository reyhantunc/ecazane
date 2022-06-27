#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#define MAX 5
#define MAX2 10
//sifre : 212
using namespace std;
void menu1 ();
void menu_ecz();
void menu_must();
void sifreleme();
void menu ();
void ilac_ekle ();
class Ecz { 
public: 
int ecz_id;
string ecz_isim;
string ecz_adres;
Ecz () //default ctor
{
cout << "default ctor called" << endl;
ecz_id = 0;
ecz_isim = " eczane ";
ecz_adres = "adres";
}
Ecz (int id, string isim, string adres) //ctor with arg
{
cout << "ctor with argument called" << endl;
ecz_id = id;
ecz_isim = isim;
ecz_adres = adres;
}
Ecz (const Ecz &other) // copy ctor
{
cout << "copy ctor called" << endl;
ecz_id = other.ecz_id;
ecz_isim = other.ecz_isim;
ecz_adres = other.ecz_adres;
}
Ecz& operator = (const Ecz &other) // assignment op.
{
cout << "assignment operator called" << endl;
ecz_id = other.ecz_id;
ecz_isim = other.ecz_isim;
ecz_adres = other.ecz_adres;
return *this;
}
void set (int id, string isim, string adres)
{
ecz_id = id;
ecz_isim = isim;
ecz_adres = adres;
}
void set_id(int id)
{
ecz_id = id;
}
void set_isim (string isim)
{
ecz_isim = isim;
}
void set_adres (string adres)
{
ecz_adres = adres;
}
int get_id ()
{
return ecz_id;
}
string get_isim ()
{
return ecz_isim;
}
string get_adres ()
{
return ecz_adres;
}
void Print (){
cout << ecz_id <<" numarali, " << ecz_isim << " isimli eczane " 
<< ecz_adres << " adresindedir." << endl;
}
friend void ecz_ilac_sayfasi();
friend void ecz_olustur();
friend void ecz_goster();
friend void mesut();
friend void mahmut();
friend void nisa();
friend void gumuspinar();
friend void menu_ecz();
friend void ecz_sec();
}eczane[MAX];
class ilac { 
public: 
int ilac_id;
int ilac_sayisi;
double ilac_fiyati;
string ilac_isim;
ilac () //default ctor
{
cout << "default ctor called" << endl;
ilac_id = 0;
ilac_sayisi = 0 ;
ilac_fiyati = 0.0;
ilac_isim = "No name";
}
ilac (int id, string isim, int s, double f) //ctor with arg
{
ilac_id = id;
ilac_sayisi = s ;
ilac_fiyati = f;
ilac_isim = isim;
}
ilac (const ilac &other) // copy ctor
{
cout << "copy ctor called" << endl;
ilac_id = other.ilac_id;
ilac_sayisi = other.ilac_sayisi ;
ilac_fiyati = other.ilac_fiyati;
ilac_isim = other.ilac_isim;
}
ilac& operator = (const ilac &other) // assignment op.
{
cout << "assignment operator called" << endl;
ilac_id = other.ilac_id;
ilac_sayisi = other.ilac_sayisi ;
ilac_fiyati = other.ilac_fiyati;
ilac_isim = other.ilac_isim;
return *this;
}
void set (int id, string isim, int s, double f)
{
ilac_id = id;
ilac_sayisi = s ;
ilac_fiyati = f;
ilac_isim = isim;
}
void set_id(int id)
{
ilac_id = id;
}
void set_sayi (int s)
{
ilac_sayisi = s ;
}
void set_fiyat (double f)
{
ilac_fiyati = f;
}
void set_isim(string isim)
{
ilac_isim = isim;
}
int get_id ()
{
return ilac_id;
}
string get_isim ()
{
return ilac_isim;
}
int get_sayi ()
{
return ilac_sayisi;
}
double get_fiyat ()
{
return ilac_fiyati;
}
void Print (){
cout << ilac_id << " numarali, " << ilac_isim << " isimli ilac " << ilac_sayisi 
<< " stoklu " << ilac_fiyati << " fiyatindadir." << endl;
}
friend void mesut();
friend void mahmut();
friend void nisa();
friend void gumuspinar();
friend void ilac_ekle ();
friend void ilac_duzenle();
friend void ecz_ilac_sayfasi();
friend void ilac_ara();
}ilac_ecz[MAX2];
void yazdir(){
//ctor called
Ecz e1;
e1.Print();
e1.set(0, "Any" , "Any");
e1.set_id(0);
e1.set_isim("Any");
e1.set_adres("Any");
Ecz e2(12 , "Deneme" , "Ataturk Caddesi No: 12");
e2.Print();
Ecz e3(e2);
e3.Print();
e1=e3;
e1.Print();
//end of ctor called
}
void yazdir2(){
//ctor called
ilac i1;
i1.Print();
i1.set(0 , "Any" , 0 , 0.0);
i1.set_id(0);
i1.set_isim("Any");
i1.set_sayi(0);
i1.set_fiyat(0.0);
ilac i2(15 , "Ilacdeneme" , 23 , 65.25);
i2.Print();
ilac i3(i2);
i3.Print();
i1=i3;
i1.Print();
//end of ctor called
}
void menu1(){
cout << "\n\n\n\t\t\t\t*****************************************\n"<< endl;
cout << "\t\t\t\t--- Eczane Sistemimize Hos Geldiniz ---\n" <<endl;
cout << "\t\t\t ---- " <<endl;
cout << "\n\n\n\t\t\t\tSeciminizi yapiniz :" <<endl;
cout << "\t\t\t\t1- Eczaci girisi" <<endl;
cout << "\t\t\t\t2- Musteri girisi\n\n" <<endl;
cout << "\t\t\t\t";
}
void sifreleme(){
cout << 
"\n\n\n\t\t\t\t*************************************************************"<< 
endl;
cout << "\t\t\t\tEczaci girisinizin onaylanmasi icin gerekli sifreyi giriniz:" << endl;
cout << "\t\t\t\t**Ipucu: Ders kodu**" << endl;
cout << "\t\t\t\t";
}
void menu_ecz (){
int secim2;
void nisa();
void mahmut();
void gumuspinar();
void mesut();
void ecz_ilac_sayfasi();
void eczaneleri_goster();
void ecz_olustur();
void ecz_goster();
void ilac_duzenle();
cout << "\n\n\n\t\t\t\t*************************************"<<endl;
cout << "\t\t\t\tMenuden yapmak istediginiz islemi seciniz" << endl;
cout << "\t\t\t\t1- Eczane Listesi Olustur" << endl;
cout << "\t\t\t\t2- Eczane Ekle" << endl;
cout << "\t\t\t\t3- Ilac Ekle" << endl;
cout << "\t\t\t\t4- Ilac Duzenle" << endl;
cout << "\t\t\t\t";
cin >> secim2;
if (secim2 == 1){
eczaneleri_goster();
menu_ecz();
}
else if (secim2 == 2){
ecz_olustur();
ecz_goster();
//eczane ekle
menu_ecz();
}
else if (secim2 == 3){
// ecz_ilac_sayfasi();
ilac_ekle();
menu_ecz();
}
else if (secim2 == 4){
ilac_duzenle();
}
else {
cout << "\t\t\t\tEczaci menu sistemine yonlendiriliyorsunuz" << endl;
menu_ecz();
}
}
void eczaneleri_goster(){
int i;
eczane[0].ecz_id = 1;
eczane[0].ecz_isim = " Mahmut Eczanesi ";
eczane[0].ecz_adres = "Dere Caddesi No:22";
eczane[1].ecz_id = 2;
eczane[1].ecz_isim = " Nisa Eczanesi ";
eczane[1].ecz_adres = "Tankyolu Caddesi Bagyeri Sokak No: 8";
eczane[2].ecz_id = 3;
eczane[2].ecz_isim = " Mesut Eczanesi ";
eczane[2].ecz_adres = "Feneryolu Caddesi No:12";
eczane[3].ecz_id = 4;
eczane[3].ecz_isim = " Gumuspinar Eczanesi ";
eczane[3].ecz_adres = "Gumuspinar Mahallesi No:17";
ofstream myfile;
myfile.open ("eczane_listesi.dat");
for (i=0 ; i<MAX ; i++)
{
myfile << eczane[i].ecz_id << " " << eczane[i].ecz_isim << " " << 
eczane[i].ecz_adres << endl;
}
myfile.close();
string line;
ifstream file ("eczane_listesi.dat");
if (file.is_open())
{
 while ( getline (file,line) )
 {
 cout <<"\n\t\t\t\t";
 cout << line << '\n';
 }
 file.close();
}
}
void ecz_olustur(){
int id;
string isim, adres;
cout << "\t\t\t\tEczane olustuma ekaranina hos geldiniz\n" << endl;
cout << "\t\t\t\tOlusturmak istediginiz eczane ismini giriniz" << endl;
cout << "\t\t\t\t";
cin >> isim;
cout << "\t\t\t\tOlusturmak istediginiz eczane adresini giriniz" << endl;
cout << "\t\t\t\t";
cin >> adres;
eczane[4].ecz_id = 4;
eczane[4].ecz_isim = isim;
eczane[4].ecz_adres = adres;
}
void ecz_goster(){
cout << 
"\n\n\n\t\t\t\t*********************************************************\n\n\n"<< 
endl;
cout << "\t\t\t\tYeni eczane olusturuldu!" << endl;
cout << "\t\t\t\t" << eczane[4].ecz_id <<" numarali, " << eczane[4].ecz_isim << " isimli eczane " << eczane[4].ecz_adres << " adresindedir." << endl;
}
//eczaneler
void mahmut(){
int j;
ilac_ecz[0].ilac_isim = "Lamictal";
ilac_ecz[0].ilac_sayisi= 5;
ilac_ecz[0].ilac_fiyati = 14.56;
ilac_ecz[0].ilac_id = 1;
ilac_ecz[1].ilac_isim = "Calpol";
ilac_ecz[1].ilac_sayisi = 9;
ilac_ecz[1].ilac_fiyati = 9.95;
ilac_ecz[1].ilac_id = 2;
ilac_ecz[2].ilac_isim = "Parol";
ilac_ecz[2].ilac_sayisi = 3;
ilac_ecz[2].ilac_fiyati = 6.52;
ilac_ecz[2].ilac_id = 3;
ilac_ecz[3].ilac_isim = "Rennie";
ilac_ecz[3].ilac_sayisi = 5;
ilac_ecz[3].ilac_fiyati = 21.65;
ilac_ecz[3].ilac_id = 4;
ilac_ecz[4].ilac_isim = "Nurofen";
ilac_ecz[4].ilac_sayisi = 2;
ilac_ecz[4].ilac_fiyati = 11.38;
ilac_ecz[4].ilac_id = 5;
ilac_ecz[5].ilac_isim = "Silverdin";
ilac_ecz[5].ilac_sayisi = 12;
ilac_ecz[5].ilac_fiyati = 15.96;
ilac_ecz[5].ilac_id = 6;
ofstream myfile ;
myfile.open ("mahmut_ilac.dat");
for (j=0 ; j<MAX2 ; j++)
{
myfile << ilac_ecz[j].ilac_id << " " << ilac_ecz[j].ilac_isim << " ilaci " << 
ilac_ecz[j].ilac_fiyati << " TL tutarindadir. Ve " << ilac_ecz[j].ilac_sayisi << " stokludur." << endl;
}
myfile.close();
string line;
ifstream file ("mahmut_ilac.dat");
if (file.is_open())
{
 while ( getline (file,line) )
 {
 cout <<"\n\t\t\t\t";
 cout << line << '\n';
 }
 file.close();
}
}
void nisa(){
int j;
ilac_ecz[0].ilac_isim = "Lamictal";
ilac_ecz[0].ilac_sayisi= 8;
ilac_ecz[0].ilac_fiyati = 10.23;
ilac_ecz[0].ilac_id = 1;
ilac_ecz[1].ilac_isim = "Calpol";
ilac_ecz[1].ilac_sayisi = 4;
ilac_ecz[1].ilac_fiyati = 7.75;
ilac_ecz[1].ilac_id = 2;
ilac_ecz[2].ilac_isim = "Parol";
ilac_ecz[2].ilac_sayisi = 3;
ilac_ecz[2].ilac_fiyati = 9.82;
ilac_ecz[2].ilac_id = 3;
ilac_ecz[3].ilac_isim = "Rennie";
ilac_ecz[3].ilac_sayisi = 12;
ilac_ecz[3].ilac_fiyati = 17.60;
ilac_ecz[3].ilac_id = 4;
ilac_ecz[4].ilac_isim = "Nurofen";
ilac_ecz[4].ilac_sayisi = 7;
ilac_ecz[4].ilac_fiyati = 9.37;
ilac_ecz[4].ilac_id = 5;
ilac_ecz[5].ilac_isim = "Silverdin";
ilac_ecz[5].ilac_sayisi = 4;
ilac_ecz[5].ilac_fiyati = 17.37;
ilac_ecz[5].ilac_id = 6;
ofstream myfile ;
myfile.open ("nisa_ilac.dat");
for (j=0 ; j<MAX2 ; j++)
{
myfile << ilac_ecz[j].ilac_id << " " << ilac_ecz[j].ilac_isim << " ilaci " << 
ilac_ecz[j].ilac_fiyati << " TL tutarindadir. Ve " << ilac_ecz[j].ilac_sayisi << " stokludur." << endl;
}
myfile.close();
string line;
ifstream file ("nisa_ilac.dat");
if (file.is_open())
{
while ( getline (file,line) )
 {
 cout <<"\n\t\t\t\t";
 cout << line << '\n';
 }
 file.close();
}
}
void mesut(){
int j;
ilac_ecz[0].ilac_isim = "Lamictal";
ilac_ecz[0].ilac_sayisi= 17;
ilac_ecz[0].ilac_fiyati = 32.76;
ilac_ecz[0].ilac_id = 1;
ilac_ecz[1].ilac_isim = "Calpol";
ilac_ecz[1].ilac_sayisi = 28;
ilac_ecz[1].ilac_fiyati = 13.85;
ilac_ecz[1].ilac_id = 2;
ilac_ecz[2].ilac_isim = "Parol";
ilac_ecz[2].ilac_sayisi = 32;
ilac_ecz[2].ilac_fiyati = 11.55;
ilac_ecz[2].ilac_id = 3;
ilac_ecz[3].ilac_isim = "Rennie";
ilac_ecz[3].ilac_sayisi = 15;
ilac_ecz[3].ilac_fiyati = 32.59;
ilac_ecz[3].ilac_id = 4;
ilac_ecz[4].ilac_isim = "Nurofen";
ilac_ecz[4].ilac_sayisi = 17;
ilac_ecz[4].ilac_fiyati = 7.67;
ilac_ecz[4].ilac_id = 5;
ilac_ecz[5].ilac_isim = "Silverdin";
ilac_ecz[5].ilac_sayisi = 19;
ilac_ecz[5].ilac_fiyati = 17.84;
ilac_ecz[5].ilac_id = 6;
ofstream myfile ;
myfile.open ("mesut_ilac.dat");
for (j=0 ; j<MAX2 ; j++)
{
myfile << ilac_ecz[j].ilac_id << " " << ilac_ecz[j].ilac_isim << " ilaci " << 
ilac_ecz[j].ilac_fiyati << " TL tutarindadir. Ve " << ilac_ecz[j].ilac_sayisi << " stokludur." << endl;
}
myfile.close();
string line;
ifstream file("mesut_ilac.dat");
if (file.is_open())
{
 while ( getline (file,line) )
 {
 cout <<"\n\t\t\t\t";
 cout << line<< '\n';
 }
 file.close();
}
}
void gumuspinar(){
int j;
ilac_ecz[0].ilac_isim = "Lamictal";
ilac_ecz[0].ilac_sayisi= 7;
ilac_ecz[0].ilac_fiyati = 23.34;
ilac_ecz[0].ilac_id = 1;
ilac_ecz[1].ilac_isim = "Calpol";
ilac_ecz[1].ilac_sayisi = 16;
ilac_ecz[1].ilac_fiyati = 7.75;
ilac_ecz[1].ilac_id = 2;
ilac_ecz[2].ilac_isim = "Parol";
ilac_ecz[2].ilac_sayisi = 14;
ilac_ecz[2].ilac_fiyati = 15.65;
ilac_ecz[2].ilac_id = 3;
ilac_ecz[3].ilac_isim = "Rennie";
ilac_ecz[3].ilac_sayisi = 20;
ilac_ecz[3].ilac_fiyati = 18.87;
ilac_ecz[3].ilac_id = 4;
ilac_ecz[4].ilac_isim = "Nurofen";
ilac_ecz[4].ilac_sayisi = 8;
ilac_ecz[4].ilac_fiyati = 13.38;
ilac_ecz[4].ilac_id = 5;
ilac_ecz[5].ilac_isim = "Silverdin";
ilac_ecz[5].ilac_sayisi = 2;
ilac_ecz[5].ilac_fiyati = 23.99;
ilac_ecz[5].ilac_id = 6;
ofstream myfile ;
myfile.open ("gumuspinar_ilac.dat");
for (j=0 ; j<MAX2 ; j++)
{
myfile << ilac_ecz[j].ilac_id << " " << ilac_ecz[j].ilac_isim << " ilaci " << 
ilac_ecz[j].ilac_fiyati << " TL tutarindadir. Ve " << ilac_ecz[j].ilac_sayisi << " stokludur." << endl;
}
myfile.close();
string line;
ifstream file ("gumuspinar_ilac.dat");
if (file.is_open())
{
 while ( getline (file,line) )
 {
 cout <<"\n\t\t\t\t";
 cout << line << '\n';
 }
 file.close();
}
}
void ilac_ekle (){
void nisa();
void mahmut();
void gumuspinar();
void mesut();
void ecz_ilac_sayfasi();
int id, sayisi;
string isim;
double fiyat;
cout << "\t\t\t\tIlac eklemek istediginiz eczanenin ID numarasini giriniz:" << endl;
cout << "\t\t\t\t" ;
cin >> id;
cout << "\t\t\t\tIlacin ismini giriniz: " << endl;
cout << "\t\t\t\t";
cin >> isim;
cout << "\t\t\t\tIlacin stok sayisini giriniz: " << endl;
cout << "\t\t\t\t";
cin >> sayisi;
cout << "\t\t\t\tIlacin fiyat bilgisini giriniz: " << endl;
cout << "\t\t\t\t";
cin >> fiyat;
ilac_ecz[6].ilac_id = 7;
ilac_ecz[6].ilac_isim = isim;
ilac_ecz[6].ilac_sayisi = sayisi;
ilac_ecz[6].ilac_fiyati = fiyat;
cout << "\t\t\t\tEklenen ilac ID : " << ilac_ecz[6].ilac_id <<endl;
cout << "\t\t\t\tEklenen ilac isim : " << ilac_ecz[6].ilac_isim <<endl;
cout << "\t\t\t\tEklenen ilac stok sayisi : " << ilac_ecz[6].ilac_sayisi <<endl;
cout << "\t\t\t\tEklenen ilac fiyati : " << ilac_ecz[6].ilac_fiyati <<endl;
if (id==1){
cout << "\t\t\t\tMahmut eczanesine ekleme yaptiniz" << endl;
mahmut();
}
else if (id==2){
cout << "\t\t\t\tNisa eczanesine ekleme yaptiniz" << endl;
nisa();
}
else if (id==3){
cout << "\t\t\t\tMesut eczanesine ekleme yaptiniz" << endl;
mesut();
}
else if (id==4){
cout << "\t\t\t\tGumuspinar eczanesine ekleme yaptiniz" << endl;
gumuspinar();
}
else {
cout << "\t\t\t\tGecersiz islem!" << endl;
menu_ecz();
}
}
void ilac_ara(){
int no, num , i, j;
cout << "\t\t\t\tIlac arama ekranindasiniz\n\n\n"<< endl;
cout << "\t\t\t\tAramasini yapmak istediginiz ilacin id numarasini giriniz\n\n\n" << endl;
cout << "\t\t\t\t1- Lamictal" << endl;
cout << "\t\t\t\t2- Calpol" << endl;
cout << "\t\t\t\t3- Parol" << endl;
cout << "\t\t\t\t4- Rennie" << endl;
cout << "\t\t\t\t5- Nurofen" << endl;
cout << "\t\t\t\t6- Silverdin" << endl;
cout << "\t\t\t\t";
cin >> no;
num = no -1;
// mahmut
struct ilac_ecz{
int ilac_sayisi;
string ilac_isim;
int ilac_id;
double ilac_fiyati;
}ilac_ecz[MAX][MAX2];
ilac_ecz[0][0].ilac_isim = "Lamictal";
ilac_ecz[0][0].ilac_sayisi= 5;
ilac_ecz[0][0].ilac_fiyati = 14.56;
ilac_ecz[0][0].ilac_id = 1;
ilac_ecz[0][1].ilac_isim = "Calpol";
ilac_ecz[0][1].ilac_sayisi = 9;
ilac_ecz[0][1].ilac_fiyati = 9.95;
ilac_ecz[0][1].ilac_id = 2;
ilac_ecz[0][2].ilac_isim = "Parol";
ilac_ecz[0][2].ilac_sayisi = 3;
ilac_ecz[0][2].ilac_fiyati = 6.52;
ilac_ecz[0][2].ilac_id = 3;
ilac_ecz[0][3].ilac_isim = "Rennie";
ilac_ecz[0][3].ilac_sayisi = 5;
ilac_ecz[0][3].ilac_fiyati = 21.65;
ilac_ecz[0][3].ilac_id = 4;
ilac_ecz[0][4].ilac_isim = "Nurofen";
ilac_ecz[0][4].ilac_sayisi = 2;
ilac_ecz[0][4].ilac_fiyati = 11.38;
ilac_ecz[0][4].ilac_id = 5;
ilac_ecz[0][5].ilac_isim = "Silverdin";
ilac_ecz[0][5].ilac_sayisi = 12;
ilac_ecz[0][5].ilac_fiyati = 15.96;
ilac_ecz[0][5].ilac_id = 6;
//nisa
ilac_ecz[1][0].ilac_isim = "Lamictal";
ilac_ecz[1][0].ilac_sayisi= 8;
ilac_ecz[1][0].ilac_fiyati = 10.23;
ilac_ecz[1][0].ilac_id = 1;
ilac_ecz[1][1].ilac_isim = "Calpol";
ilac_ecz[1][1].ilac_sayisi = 4;
ilac_ecz[1][1].ilac_fiyati = 7.75;
ilac_ecz[1][1].ilac_id = 2;
ilac_ecz[1][2].ilac_isim = "Parol";
ilac_ecz[1][2].ilac_sayisi = 3;
ilac_ecz[1][2].ilac_fiyati = 9.82;
ilac_ecz[1][2].ilac_id = 3;
ilac_ecz[1][3].ilac_isim = "Rennie";
ilac_ecz[1][3].ilac_sayisi = 12;
ilac_ecz[1][3].ilac_fiyati = 17.60;
ilac_ecz[1][3].ilac_id = 4;
ilac_ecz[1][4].ilac_isim = "Nurofen";
ilac_ecz[1][4].ilac_sayisi = 7;
ilac_ecz[1][4].ilac_fiyati = 9.37;
ilac_ecz[1][4].ilac_id = 5;
ilac_ecz[1][5].ilac_isim = "Silverdin";
ilac_ecz[1][5].ilac_sayisi = 4;
ilac_ecz[1][5].ilac_fiyati = 17.37;
ilac_ecz[1][5].ilac_id = 6;
//mesut
ilac_ecz[2][0].ilac_isim = "Lamictal";
ilac_ecz[2][0].ilac_sayisi= 17;
ilac_ecz[2][0].ilac_fiyati = 32.76;
ilac_ecz[2][0].ilac_id = 1;
ilac_ecz[2][1].ilac_isim = "Calpol";
ilac_ecz[2][1].ilac_sayisi = 28;
ilac_ecz[2][1].ilac_fiyati = 13.85;
ilac_ecz[2][1].ilac_id = 2;
ilac_ecz[2][2].ilac_isim = "Parol";
ilac_ecz[2][2].ilac_sayisi = 32;
ilac_ecz[2][2].ilac_fiyati = 11.55;
ilac_ecz[2][2].ilac_id = 3;
ilac_ecz[2][3].ilac_isim = "Rennie";
ilac_ecz[2][3].ilac_sayisi = 15;
ilac_ecz[2][3].ilac_fiyati = 32.59;
ilac_ecz[2][3].ilac_id = 4;
ilac_ecz[2][4].ilac_isim = "Nurofen";
ilac_ecz[2][4].ilac_sayisi = 17;
ilac_ecz[2][4].ilac_fiyati = 7.67;
ilac_ecz[2][4].ilac_id = 5;
ilac_ecz[2][5].ilac_isim = "Silverdin";
ilac_ecz[2][5].ilac_sayisi = 19;
ilac_ecz[2][5].ilac_fiyati = 17.84;
ilac_ecz[2][5].ilac_id = 6;
//gumuspinar
ilac_ecz[3][0].ilac_isim = "Lamictal";
ilac_ecz[3][0].ilac_sayisi= 7;
ilac_ecz[3][0].ilac_fiyati = 23.34;
ilac_ecz[3][0].ilac_id = 1;
ilac_ecz[3][1].ilac_isim = "Calpol";
ilac_ecz[3][1].ilac_sayisi = 16;
ilac_ecz[3][1].ilac_fiyati = 7.75;
ilac_ecz[3][1].ilac_id = 2;
ilac_ecz[3][2].ilac_isim = "Parol";
ilac_ecz[3][2].ilac_sayisi = 14;
ilac_ecz[3][2].ilac_fiyati = 15.65;
ilac_ecz[3][2].ilac_id = 3;
ilac_ecz[3][3].ilac_isim = "Rennie";
ilac_ecz[3][3].ilac_sayisi = 20;
ilac_ecz[3][3].ilac_fiyati = 18.87;
ilac_ecz[3][3].ilac_id = 4;
ilac_ecz[3][4].ilac_isim = "Nurofen";
ilac_ecz[3][4].ilac_sayisi = 8;
ilac_ecz[3][4].ilac_fiyati = 13.38;
ilac_ecz[3][4].ilac_id = 5;
ilac_ecz[3][5].ilac_isim = "Silverdin";
ilac_ecz[3][5].ilac_sayisi = 2;
ilac_ecz[3][5].ilac_fiyati = 23.99;
ilac_ecz[3][5].ilac_id = 6;
for (i=0 ; i<MAX ; i++){
for (j=0 ; j<MAX2 ; j++){
if (ilac_ecz[i][j].ilac_id==num){
if (i == 0 ){
cout << "\t\t\t\tMahmut Eczanesinde " << 
ilac_ecz[i][j].ilac_fiyati << " tutarindadir." <<endl;
}
else if (i == 1){
cout << "\t\t\t\tNisa Eczanesinde " << 
ilac_ecz[i][j].ilac_fiyati << " tutarindadir." <<endl;
}
else if (i == 2){
cout << "\t\t\t\tMesut Eczanesinde " << 
ilac_ecz[i][j].ilac_fiyati << " tutarindadir." <<endl;
}
else {
cout << "\t\t\t\tGumuspinar Eczanesinde " << 
ilac_ecz[i][j].ilac_fiyati << " tutarindadir." <<endl;
}
}
}
}
cout << "\n\n\n\n";
}
void menu_must(){
void ecz_sec();
void ilac_list();
int secim3;
cout << "\t\t\t\t-- ** Musteri Ekranina Hos geldiniz ** --" << endl;
cout << "\t\t\t\tYapmak istediginiz islem numarasini giriniz" << endl;
cout << "\t\t\t\t1- Ilac ara" <<endl;
cout << "\t\t\t\t2- Eczane listele" << endl;
cout << "\t\t\t\t3- Herhangi bir eczaneyi goster" << endl;
cout << "\t\t\t\t4- Herhangi bir eczaneye ait ilac lsitesi" << endl;
cout << "\t\t\t\t";
cin >> secim3;
if (secim3 == 1){
ilac_ara();
menu_must();
}
else if (secim3 == 2){
eczaneleri_goster();
cout << "\n\n\n\n" << endl;
menu_must();
}
else if (secim3 == 3){
ecz_sec();
menu_must();
}
else if (secim3 == 4){
ilac_list();
menu_must();
}
else {
cout << "\n\n\n\t\t\t\tGecersiz secenek!\n\t\t\t\tAna ekrana yonlendiriliyorsunuz!\n\n\n" << endl;
menu_must();
}
}
void ilac_duzenle(){
int eid, iid, tus ,i ,ss , f;
cout << "\t\t\t\tDuzenlemek istediginiz ilacin oldugu eczanenin ID numarasini giriniz" << 
endl;
cout << "\t\t\t\t";
cin >> eid;
cout << "\t\t\t\tDuzenlemek istediginiz ilac IDsini giriniz " << endl;
cout << "\t\t\t\t";
cin >> iid;
cout << "\t\t\t\tIlac fiyati duzenlemek icin : 1\n\t\t\t\tIlac stok sayisi duzenlemek icin :2\n\t\t\t\tTuslayiniz!" << endl;
cout << "\t\t\t\t";
cin >> tus;
if (eid==1){
for (i=0 ; i < MAX2 ; i++){
if (ilac_ecz[i].ilac_id == iid){
if (tus == 1){
cout << "\t\t\t\tIlacin yeni stok sayisini giriniz :" << endl;
cout << "\t\t\t\t";
cin >> ss;
ilac_ecz[iid].ilac_sayisi= ss;
mahmut ();
menu_ecz();
}
else if (tus == 2){
cout << "\t\t\t\tIlacin yeni fiyatini giriniz : " << endl;
cout << "\t\t\t\t";
cin >> f;
ilac_ecz[iid].ilac_fiyati = f;
mahmut();
menu_ecz();
}
else {
cout << "\t\t\t\tBeklenmedik islem!" << endl;
menu_ecz();
}
}
}
}
else if (eid==2){
for (i=0 ; i < MAX2 ; i++){
if (ilac_ecz[i].ilac_id == iid){
if (tus == 1){
cout << "\t\t\t\tIlacin yeni stok sayisini giriniz :" << endl;
cout << "\t\t\t\t";
cin >> ss;
ilac_ecz[iid].ilac_sayisi= ss;
nisa();
menu_ecz();
}
else if (tus == 2){
cout << "\t\t\t\tIlacin yeni fiyatini giriniz : " << endl;
cout << "\t\t\t\t";
cin >> f;
ilac_ecz[iid].ilac_fiyati = f;
nisa();
menu_ecz();
}
else {
cout << "\t\t\t\tBeklenmedik islem!" << endl;
menu_ecz();
}
}
}
}
else if (eid==3){
for (i=0 ; i < MAX2 ; i++){
if (ilac_ecz[i].ilac_id == iid){
if (tus == 1){
cout << "\t\t\t\tIlacin yeni stok sayisini giriniz :" << endl;
cout << "\t\t\t\t";
cin >> ss;
ilac_ecz[iid].ilac_sayisi= ss;
mesut();
menu_ecz();
}
else if (tus == 2){
cout << "\t\t\t\tIlacin yeni fiyatini giriniz : " << endl;
cout << "\t\t\t\t";
cin >> f;
ilac_ecz[iid].ilac_fiyati = f;
mesut();
menu_ecz();
}
else {
cout << "\t\t\t\tBeklenmedik islem!" << endl;
menu_ecz();
}
}
}
}
else if (eid==4){
for (i=0 ; i < MAX2 ; i++){
if (ilac_ecz[i].ilac_id == iid){
if (tus == 1){
cout << "\t\t\t\tIlacin yeni stok sayisini giriniz :" << endl;
cout << "\t\t\t\t";
cin >> ss;
ilac_ecz[iid].ilac_sayisi= ss;
gumuspinar();
menu_ecz();
}
else if (tus == 2){
cout << "\t\t\t\tIlacin yeni fiyatini giriniz : " << endl;
cout << "\t\t\t\t";
cin >> f;
ilac_ecz[iid].ilac_fiyati = f;
gumuspinar();
menu_ecz();
}
else {
cout << "\t\t\t\tBeklenmedik islem!" << endl;
menu_ecz();
}
}
}
}
else{
cout << "\n\n\t\t\t\tBeklenmedik islem"<< endl;
menu_ecz();
}
}
void ecz_ilac_sayfasi(){
mahmut();
nisa();
mesut();
gumuspinar();
}
void ecz_sec (){
string isim;
eczane[0].ecz_id = 1;
eczane[0].ecz_isim = "Mahmut";
eczane[0].ecz_adres = "Dere Caddesi No:22";
eczane[1].ecz_id = 2;
eczane[1].ecz_isim = "Nisa";
eczane[1].ecz_adres = "Tankyolu Caddesi Bagyeri Sokak No: 8";
eczane[2].ecz_id = 3;
eczane[2].ecz_isim = "Mesut";
eczane[2].ecz_adres = "Feneryolu Caddesi No:12";
eczane[3].ecz_id = 4;
eczane[3].ecz_isim = "Gumuspinar";
eczane[3].ecz_adres = "Gumuspinar Mahallesi No:17";
cout << "\t\t\t\tGormek istediginiz eczanenenin adini giriniz :" << endl;
cout << "\t\t\t\t";
cin >> isim;
int i;
for (i=0 ; i<MAX ; i++){
if (eczane[i].ecz_isim == isim){
cout << "\t\t\t\t" << eczane[i].ecz_id << " numaralidir. Ve " << 
eczane[i].ecz_adres << "adresindedir." << endl;
}
}
}
void ilac_list(){
string isim;
eczane[0].ecz_id = 1;
eczane[0].ecz_isim = "Mahmut";
eczane[0].ecz_adres = "Dere Caddesi No:22";
eczane[1].ecz_id = 2;
eczane[1].ecz_isim = "Nisa";
eczane[1].ecz_adres = "Tankyolu Caddesi Bagyeri Sokak No: 8";
eczane[2].ecz_id = 3;
eczane[2].ecz_isim = "Mesut";
eczane[2].ecz_adres = "Feneryolu Caddesi No:12";
eczane[3].ecz_id = 4;
eczane[3].ecz_isim = "Gumuspinar";
eczane[3].ecz_adres = "Gumuspinar Mahallesi No:17";
cout << "\t\t\t\tIlaclarni gormek istediginiz eczanenenin adini giriniz :" << endl;
cout << "\t\t\t\t";
cin >> isim;
int i;
if (isim == "Mahmut")
mahmut();
else if (isim == "Nisa")
nisa();
else if (isim == "Mesut")
mesut();
else if (isim == "Gumuspinar")
gumuspinar();
else 
cout << "Boyle bir eczane bulunamadi" << endl;
}
int main (){
int secim1, secim2,secim3;
string sifre;
yazdir();
yazdir2();
menu1();
cin >> secim1;
if (secim1 == 1){
sifreleme();
cin >> sifre;
if (sifre == "212"){
cout << 
"\n\n\n\t\t\t\t*************************************\n\n\n"<<endl;
cout << "\t\t\t\tSifreniz dogrulandi" << endl;
cout << 
"\n\n\n\t\t\t\t*************************************\n\n\n"<<endl;
cout << "\t\t\t\tDevam edebilirsiniz" << endl;
cout << 
"\n\n\n\t\t\t\t*************************************\n\n\n"<<endl;
menu_ecz();
}
else {
cout << "\t\t\t\tSifre yanlis girildi" << endl;
cout << "\t\t\t\tMustreri ekranina yonlendiriliyorsunuz\n\n\n\n\n\n\n\n" << endl;
menu_must();
}
}
else if (secim1 == 2){
menu_must();
}
return 0;
}
