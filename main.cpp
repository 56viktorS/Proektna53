#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

    struct Profil
    {
        int idBroj = 0;
        string nickname;
        float nivo = 0;

    };
        void sortString(string &str)
    {
        sort(str.begin(), str.end());
    }

int main()
{
    int br = 0;
    string name;
    float lvl = 0;

    vector<int> broj;
    vector<string> ime;
    vector<float> nivo;

    vector<int>::iterator broj2;
    vector<string>::iterator ime2;
    vector<float>::iterator nivo2;

    struct Profil p1;
    struct Profil p2;
    struct Profil p3;
    struct Profil p4;
    struct Profil p5;

    for(int i = 1; i < 6; i++){
        cout<<"Vnesete za profil "<<i<<":"<<endl;
        cout<<"Broj: ";
        cin>>br;
        cout<<"Ime: ";
        cin>>name;
        cout<<"Nivo: ";
        cin>>lvl;
        switch (i){
            case 1: p1.idBroj = br; p1.nickname = name; p1.nivo = lvl; break;
            case 2: p2.idBroj = br; p2.nickname = name; p2.nivo = lvl; break;
            case 3: p3.idBroj = br; p3.nickname = name; p3.nivo = lvl; break;
            case 4: p4.idBroj = br; p4.nickname = name; p4.nivo = lvl; break;
            case 5: p5.idBroj = br; p5.nickname = name; p5.nivo = lvl; break;
        }
        broj.push_back(br);
        ime.push_back(name);
        nivo.push_back(lvl);
    }
    cout<<"\nBroevi: "<<endl;
    for(broj2 = broj.begin(); broj2 < broj.end(); broj2++){
        cout<<*broj2<<endl;
    }

    cout<<"\nNicknames: "<<endl;
    for(ime2 = ime.begin(); ime2 < ime.end(); ime2++){
        cout<<*ime2<<endl;
    }

    cout<<"\nNivoa: "<<endl;
    for(nivo2 = nivo.begin(); nivo2 < nivo.end(); nivo2++){
        cout<<*nivo2<<endl;
    }
    for(int i = 0; i < 5; i++){
    sortString(ime.at(i));
    }

    cout<<"\n\nNicknames: "<<endl;
    for(ime2 = ime.begin(); ime2 < ime.end(); ime2++){
        cout<<*ime2<<endl;
    }

    ofstream outFile("INKI868.Viktor.txt"); //Otvoranje nov file INKI868.Viktor.txt
	for (const auto &e : broj) outFile << e << "\n"; //Pecatenje na vektorot vo file
	for (const auto &e : ime) outFile << e << "\n";
	for (const auto &e : nivo) outFile << e << "\n";
}
