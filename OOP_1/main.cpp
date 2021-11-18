#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;
//
int main() {
    // 01. Ввести 𝑛 рядків з консолі, знайти найкоротший рядок. Вивести цей рядок і його довжину.
//    const int n = 5;
//    string arr[n];
//    for (int i = 0; i < n; i++) {
//        cout << "Enter line: ";
//        getline(cin, arr[i]);
//    }
//    auto min = arr[0].length();
//    string minimum = arr[0];
//    for (int i = 0; i < n; i++) {
//        if (arr[i].length() < min) {
//            min = arr[i].length();
//            minimum = arr[i];
//        }
//    }
//    cout << "String: " << minimum << " Length: " << min << endl;
////////////////////
//   02. Ввести 𝑛 рядків з консолі. Упорядкувати і вивести рядки в порядку зростання їх довжин.
//    const int n = 5;
//    string arr[n];
//    for (int i = 0; i < n; i++) {
//        cout << "Enter line: ";
//        getline(cin, arr[i]);
//    }
//    for (int i = 0; i < n - 1; ++i) {
//        int min = i;
//        for (int j = i + 1; j < n; ++j) {
//            if (arr[j].length() < arr[min].length())
//                min = j;
//        }swap(arr[i], arr[min]);
//    }
//    for (int i = 0; i < n; i++) {
//        cout<<arr[i]<<"\n";
//    }
////////////////////
//03. Ввести 𝑛 рядків з консолі. Вивести на консоль ті рядки, довжина яких менша за середню, а також їх довжини.
//    const int n = 5;
//    string arr[n];
//    for (int i = 0; i < n; i++) {
//        cout << "Enter line: ";
//        getline(cin, arr[i]);
//    }
//    int medium_length = 0;
//    for (int i = 0; i < n; i++) {
//        medium_length += arr[i].length();
//    }
//    medium_length /=n;
//
//    for (int i = 0; i < n; i++) {
//        if(arr[i].length()<medium_length){
//            cout<<arr[i]<<"\t"<< arr[i].length()<<"\n";
//        }
//
//    }

    /////////////////
   //04. У кожному слові тексту 𝑘-у букву замінити заданим символом. Якщо 𝑘 більше довжини слова, коригування не виконувати.
//   const int k = 12;
//    string src = "У кожному слові тексту k-у букву замінити заданим символом. Якщо k більше довжини слова, коригування не виконувати.";
//    stringstream ss(src);
//    while (!ss.eof()) {
//        string s;
//        ss >> s;
//        if(s.length()>k)
//        {
//            s[k+1] = '%';
//            cout << s <<" ";
//        }else
//            cout << s <<" ";
//
//    }
/////////////
//05
//    ifstream text;
//    string name = "text.txt";
//    string line = "";
//    string alltext;
//    string newtext;
//    string newnumbers;
//    text.open(name);
//    int count = 0;
//    if (text.is_open())
//    {
//        while (text.good())
//        {
//            getline(text, line);
//            alltext += line;
//        }
//
//    }
//    text.close();
//
//    cout << "text\n";
//    int prev = 0;
//    for (int i = 0; i < alltext.size(); i++)
//    {
//        int A = alltext[i];
//
//        if (A > 64 && A < 91)
//        {
//            int t = A - 64;
//            if (t < 10)
//            {
//                newnumbers += " " + to_string(t);
//            }
//            else
//            {
//                newnumbers += to_string(t);
//            }
//
//            // new text
//            if ((prev > 64 && prev < 91) || (prev > 96 && prev < 123))
//            {
//                newtext += "  ";
//                newnumbers += " ";
//            }
//            newtext += alltext[i];
//            prev = A;
//        }
//        else if (A > 96 && A < 123)
//        {
//            int t = A - 96;
//            if (t < 10)
//            {
//                newnumbers += " " + to_string(t);
//            }
//            else
//            {
//                newnumbers += to_string(t);
//            }
//            if ((prev > 64 && prev < 91) || (prev > 96 && prev < 123))
//            {
//                newtext += "  ";
//                newnumbers += " ";
//            }
//            newtext += alltext[i];
//            prev = A;
//        }
//        else
//        {
//            newnumbers += alltext[i];
//            newtext += alltext[i];
//        }
//    }
//    cout << newtext << endl;
//    cout << newnumbers << endl;
/////////////
//06
//    ifstream text;
//    string name = "text.txt";
//    string line = "";
//    string alltext;
//    text.open(name);
//    if (text.is_open())
//    {
//        while (text.good())
//        {
//            getline(text, line);
//            alltext += line;
//        }
//    };
//    text.close();
//    cout << alltext << endl;
//    for (int i = 0; i < alltext.size(); i++)
//    {
//        if (alltext[i] >= 65 && alltext[i] <= 90 || alltext[i] >= 97 && alltext[i] <= 122 || alltext[i] == 32)
//        {
//        }
//        else
//        {
//            alltext[i] = ' ';
//        }
//    }
//    cout << alltext;
/////////////
//07. З тексту видалити всі слова заданої довжини, що починаються на задану букву.
//    string src = "У кожному У oлові тексту k-у букву oамінити заданим символом. Якщо k більше довжини слова, коригування не виконувати.";
//    stringstream ss(src);
//    int length= 9;
//    char k = 'o';
//    while (!ss.eof()) {
//        string s;
//        ss >> s;
//        auto a = s.size();
//      if(s.size() == length && s[0] =='o')
//          s = "";
//      cout<<s<<" ";
//    }
///////////////
    //08.Знайти і вивести, скільки разів повторюється в тексті кожне слово.
//    string src = "У кожному слові тексту k-у букву замінити заданим символом . Якщо k більше довжини слові , коригування не виконувати .";
//    stringstream ss(src);
//    int count = 1;
//    while (!ss.eof()) {
//       string s;
//        ss >> s;
//        count++;
//    }
//    stringstream ss1(src);
//    int i = 0;
//    string arr[count];
//    while(!ss1.eof()){
//        string tmp;
//       ss1>> tmp;
//        arr[i] = tmp;
//       i++;
//    }
//
// int counter = 0;
//        for (int i = 0; i < count - 1; ++i) {
//        for (int j = 0; j < count; ++j) {
//            if (arr[i] == arr[j])
//                counter++;
//        }
//        cout<<arr[i]<<" "<<counter<<"\n";
//        counter = 0;
//    }
/////////////////
//09. Знайти, яких букв, голосних або приголосних, більше в кожному реченні тексту.
//    string src = "AAAAAAAAAAAAAAAAAAAAAAAA, business began to pick up. Not dramatically, but bit by bit. A sack of potatoes here.";
//    stringstream ss(src);
//    int count_a = 0;
//    int count_b = 0;
//    while (!ss.eof()) {
//        string s;
//        ss >> s;
//        for (int i = 0; i < s.size(); ++i) {
//if(s[i] == 'a' || s[i] == 'A' || s[i] == 'E' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'U' || s[i] == 'u' || s[i] == 'y' || s[i] == 'Y'){
//    count_a++;
//}else if(s[i] == 'B' || s[i] == 'b' || s[i] == 'C' || s[i] == 'c'||
//s[i] == 'D' || s[i] == 'd' || s[i] == 'F' || s[i] == 'f' || s[i] == 'g' ||
//s[i] == 'G' || s[i] == 'H' || s[i] == 'h'|| s[i] == 'J' || s[i] == 'j'|| s[i] == 'K' || s[i] == 'k'||
//s[i] == 'L' || s[i] == 'l'|| s[i] == 'M' || s[i] == 'm'|| s[i] == 'N' || s[i] == 'n'|| s[i] == 'p' || s[i] == 'P'||
//s[i] == 'Q' || s[i] == 'q'|| s[i] == 'R' || s[i] == 'r'|| s[i] == 's' || s[i] == 'S'|| s[i] == 'T' || s[i] == 't'||
//s[i] == 'V' || s[i] == 'v'|| s[i] == 'W' || s[i] == 'w'|| s[i] == 'X' || s[i] == 'x'|| s[i] == 'z' || s[i] == 'Z'
//){
//    count_b++;
//}
//        }
//        if(s[s.size()-1]=='.'){
//            if(count_a>count_b){
//                cout<<"Голосних більше\n";
//        }else{
//            cout<<"Приголосних більше\n";
//        }
//            count_a = 0;
//            count_b = 0;
//        }
//    }


    return 0;
}
