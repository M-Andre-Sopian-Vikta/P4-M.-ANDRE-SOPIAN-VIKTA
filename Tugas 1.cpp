#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang :
	cout<<"                           =============================================\n";
	cout<<"                          |                SELAMAT DATANG               |\n";
	cout<<"                          |               DI KUIS COVID-19              |\n";
	cout<<"                           =============================================\n";
	cout<<"                                            Silahkan Login!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t  Username : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t  Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "M_ANDRE_SOPIAN_VIKTA" && pass == "F1B019086")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Username dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Cobalagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"=========================================================================\n";
	cout<<"1.Provinsi di Indoneisa yang paling banyak terinfeksi virus corona adalah... ??\n";
	string pilgan1[50]={"a. DKI Jakarta   ","b. Jawa Barat","c. Jawa Tengah","d. Jawa Timur"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
cout<<"2. Negara dengan jumlah kasus virus corona terbanyak adalah...??\n";
    string pilgan2[50]={"a. Amerika Serikat ","b. Italia","c. Spanyol"," d. Inggris"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";        
	cout<<"3.Untuk mencegah penyebaran COVID-19, saat seseorang sampai di rumahnya setelah bepergian, maka dia perlu mencuci tangan....\n";
	string pilgan3[225]={"a. Sebelum menyentuh anggota keluarganya ","b. Sebelum menyentuh anggota keluarga dan barang-barang yang ada di rumahnya  ","c. Sebelum mandi dan mencuci pakaiannya","d. Sebelum dan sesudah makan dan minum"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";				
	cout<<"4. Berdasarkan hasil penelitian dari National Institute of Allergy and Infectious Diseases,  ukuran COVID-19 adalah....??\n";
	string pilgan4[50]={"a. 120 hingga 160 nanometer   ","b. 140 hingga 180 nanometer     ","c. 160 hingga 200 nanometer","d. 180 hingga 220 nanometer"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'a' || jawab == 'A')
        {benar++;}
else{
        salah++;}
    cout<<"==========================================================================\n";       
cout<<"5.  Kota yang merupakan awal dari penyebaran covid-19 adalah??...??\n";
    string pilgan5[50]={"a. Shanghai","b. Guangzou","c. Beijing","d. Wuhan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. Virus Corona (COVID-19) yang menyerang manusia muncul di negara ... pada awal tahun 2020??\n";
	string pilgan6[50]={"a. Nigeria ","b. Uganda","c. Kenya","d. China"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Jika sebuah daerah pada awalnya termasuk zona hijau COVID-19, lalu menjadi merah karena ada yang tertular dari tempat lain, maka hal yang perlu dilakukan oleh masyarakat adalah....??\n";
	string pilgan7[50]={"a. Memarahi orang yang telah membawa penyakit dari kota ke kampung.","b. Menjauhi korban karena khawatir tertular, lalu meminta dia mengisolasi di rumahnya.","c. Meminta pemeirntah membangun puskesmas darurat di kampung tersebut ","d. Memberikan semangat dan menghubungi petugas kesehatan setempat untuk diperiksa ditangani lebih lanjut."};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. Cuci tangan yang paling baik dilakukan dengan menggunakan sabun pada......???\n";
	string pilgan8[50]={"a. Air hangat ","b. Air panas ","c.  Air mengalir ","d. Air dalam wadah   "};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'c' || jawab == 'C')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9.Suhu tubuh yang bisa diindikasikan sedang terjangkit penyakit termasuk COVID-19 yaitu...??\n";
	string pilgan9[50]={"a. 35 derajat celcius","b. 36 derajat celcius ","c. 37 derajat celcius","d. 38 derajat celcius"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'd' || jawab == 'D')
        {benar++;}
else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. Masa inkubasi COVID-19 selama...??\n";
	string pilgan10[50]={"a. 7 hari","b. 14 hari","c. 21 hari","d. 28 hari"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"JawabanAnda : ";
cin>>jawab;
if(jawab == 'b' || jawab == 'B')
        {benar++;}
else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"PerolehanNilai :"<<endl;
		nilai = benar*10;
		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai :
			cout<<"=================================="<<endl;
			cout<<"|Terima Kasih Telah Berpartisipasi|\n";
			cout<<"=================================="<<endl;
	
}
