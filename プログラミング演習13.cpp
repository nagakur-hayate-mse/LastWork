
// プログラミング演習13.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//


#include <iostream>
#include <string>
#include <fstream> 
#include <vector>
#include <numeric>
#include <map>
using namespace std;

struct Person { //Personというクラスを定義、プライベート
public:
	string name; // 文字列の名前、データメンバ
	int japanese = 0; //intの得点、データメンバ、初期値を0
	int math = 0;
	int english = 0;
	int science = 0;
	int socialstudies = 0;
public: 
	void setName(const string& newName) { name = newName; } //メンバ関数、set,getで外部からアクセス可能
	string getName() { return name; }
	void setJapanese(int newJapanese) { japanese = newJapanese; }
	int getJapanese() { return japanese; }
	void setMath(int newMath) { math = newMath; }
	int getMath() { return math; }
	void setEnglish(int newEnglish) { english = newEnglish; }
	int getEnglish() { return english; }
	void setScience(int newScience) { science = newScience; }
	int getScience() { return science; }
	void setSocialstudies(int newSocialstudies) { socialstudies = newSocialstudies; }
	int getSocialstudies() { return socialstudies; }
};

int main() {
	cout << "名前" << " : " << "国語" << " " << "数学" << " " << "英語" << " " << "理科" << " " << "社会" << endl;
	ifstream datafile("person.txt"); //person.txtを読み込む
	string name;
	int japanese;
	int math;
	int english;
	int science;
	int socialstudies;
	static int i = 0; //vectorの要素
	vector<Person> vec; // Personのオブジェクトをvectorに格納
	while (datafile >> name >> japanese >> math >> english >> science >> socialstudies) { // ファイルから読み込む
		vec.emplace_back(); //要素を追加する
		vec[i].setName(name); //setの関数に代入する
		vec[i].setJapanese(japanese);
		vec[i].setMath(math);
		vec[i].setEnglish(english);
		vec[i].setScience(science);
		vec[i].setSocialstudies(socialstudies);
		cout<<vec[i].getName()<<":"<<vec[i].getJapanese()<<" "<<vec[i].getMath()<<" "<<vec[i].getEnglish()<<" "<<vec[i].getScience()<<" "<<vec[i].getSocialstudies()<<" "<<endl;
		++i; // 表示したらiに+1する
	}
	datafile.close();  //ファイルを閉じる

	cout << "\n" << endl;
	cout << "点数が小さい順に表示" << endl;
	cout << "\n" << endl;

	cout << "国語" << endl;
	map<int, int> list1; //mapを設定、list1の作成
	list1[90] = 0; //keyとvalueの設定
	list1[50] = 1;
	list1[46] = 2;
	list1[98] = 3;
	for (const auto& v1 : list1) {
	    cout << vec[v1.second].getName() << endl; 
	}

	cout << "\n" << endl;

	cout << "数学" << endl;
	map<int, int> list2; //mapを設定、list2の作成
	list2[76] = 0; //keyとvalueの設定
	list2[92] = 1;
	list2[57] = 2;
	list2[65] = 3;
	for (const auto& v2 : list2) {
		cout << vec[v2.second].getName() << endl;
	}
	cout << "\n" << endl;

	cout << "英語" << endl;
	map<int, int> list3; //mapを設定、list3の作成
	list3[94] = 0; //keyとvalueの設定
	list3[78] = 1;
	list3[82] = 2;
	list3[93] = 3;
	for (const auto& v3 : list3) {
		cout << vec[v3.second].getName() << endl;
	}

	cout << "\n" << endl;

	cout << "理科" << endl;
	map<int, int> list4; //mapを設定、list4の作成
	list4[89] = 0; //keyとvalueの設定
	list4[64] = 1;
	list4[72] = 2;
	list4[54] = 3;
	for (const auto& v4 : list4) {
		cout << vec[v4.second].getName() << endl;
	}

	cout << "\n" << endl;

	cout << "社会" << endl;
	map<int, int> list5; //mapを設定、list5の作成
	list5[98] = 0; //keyとvalueの設定
	list5[82] = 1;
	list5[88] = 2;
	list5[57] = 3;
	for (const auto& v5 : list5) {
		cout << vec[v5.second].getName() << endl;
	}

}	

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します