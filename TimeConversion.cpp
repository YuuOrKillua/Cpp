#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hora = s.substr();

    int horaInt = stoi(hora);

    size_t periodo = s.find("PM");

    if (periodo != string::npos){
        if (horaInt + 12 < 24){
            hora = to_string(horaInt + 12);
        }
    }
    else {
        if (horaInt == 12){
                hora = "00";
        }
    }
    
    s.replace(0, 2, hora);
    s.erase(s.size() - 2);

    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
