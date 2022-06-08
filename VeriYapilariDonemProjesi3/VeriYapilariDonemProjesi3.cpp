// VeriYapilariDonemProjesi3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "veri.h"
#include <chrono>
using namespace std;



int main()
{
	int agac;
	int aramaYontemi;
	int aranacakDeger;
	IkiliSiralamaAgaci* agac1 = new IkiliSiralamaAgaci();
	IkiliSiralamaAgaci* agac2 = new IkiliSiralamaAgaci();
	IkiliSiralamaAgaci* agac3 = new IkiliSiralamaAgaci();

	for (int i = 0; i < UZUNLUK; i++)
	{
		agac1->agacKur(dizi1[i]);
	}
	for (int i = 0; i < UZUNLUK; i++)
	{
		agac2->agacKur(dizi2[i]);
	}
	for (int i = 0; i < UZUNLUK; i++)
	{
		agac3->agacKur(dizi3[i]);
	}
	cout << "Arama Yapacaginiz agaci secin{1,2,3}:" << endl;
	cin >> agac;
	switch (agac)
	{
	case 1: {
		cout << "Agac 1 icin arama yontemini secin{DFS:1, BFS:2}:" << endl;
		cin >> aramaYontemi;
		switch (aramaYontemi)
		{
		case 1: {
			cout << "Agac 1 uzerinde DFC ile arayacaginiz degeri giriniz:" << endl;
			cin >> aranacakDeger;
			if (DFS(agac1->kok, aranacakDeger) == 1)
			{
				cout << "Sonuc => VERI BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "Sonuc => VERI BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac1->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		} 
		case 2: {
			cout << "Agac 1 uzerinde BFS ile arayacaginiz degeri giriniz:" << endl;
			cin >> aranacakDeger;
			if (BFS(agac1->kok, aranacakDeger) == 1)
			{
				cout << "Sonuc => VERI BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				BFS(agac1->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "Sonuc => VERI BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				BFS(agac1->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		default:
			break;
		}
		break;
	}
	case 2: {
		cout << "Agac 2 icin arama yontemini secin{DFS:1, BFS:2}:" << endl;
		cin >> aramaYontemi;
		switch (aramaYontemi)
		{
		case 1: {
			cout << "Agac 2 uzerinde DFC ile arayacaginiz degeri giriniz:" << endl;
			cin >> aranacakDeger;
			if (DFS(agac2->kok, aranacakDeger) == 1)
			{
				cout << "Sonuc => VERI BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac2->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "Sonuc => VERI BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac2->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		case 2: {
			cout << "Agac 2 uzerinde BFS ile arayacaginiz degeri giriniz:" << endl;
			cin >> aranacakDeger;
			if (BFS(agac2->kok, aranacakDeger) == 1)
			{
				cout << "Sonuc => VERI BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				BFS(agac2->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "Sonuc => VERI BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				BFS(agac2->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		default:
			break;
		}
		break;
	}
	case 3: {
		cout << "Agac 3 icin arama yontemini secin{DFS:1, BFS:2}:" << endl;
		cin >> aramaYontemi;
		switch (aramaYontemi)
		{
		case 1: {
			cout << "Agac 3 uzerinde DFC ile arayacaginiz degeri giriniz:" << endl;
			cin >> aranacakDeger;
			if (DFS(agac3->kok, aranacakDeger) == 1)
			{
				cout << "Sonuc => VERI BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac3->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "Sonuc => VERI BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				DFS(agac3->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		case 2: {
			cout << "Agac 3 uzerinde BFS ile arayacaginiz degeri giriniz:" << endl;
			cin >> aranacakDeger;
			if (BFS(agac3->kok, aranacakDeger) == 1)
			{
				cout << "Sonuc => VERI BULUNDU" << endl;
				auto begin = chrono::high_resolution_clock::now();
				BFS(agac3->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			else
			{
				cout << "Sonuc => VERI BULUNAMADI" << endl;
				auto begin = chrono::high_resolution_clock::now();
				BFS(agac3->kok, aranacakDeger);
				auto end = chrono::high_resolution_clock::now();
				auto elapsed = std::chrono::duration_cast<chrono::microseconds>(end - begin);
				cout << "Gecen Sure  => " << elapsed.count() << "mikro-saniye" << endl;
			}
			break;
		}
		default:
			break;
		}
		break;
	}
	default:
		break;

	}

}

