#include <bits/stdc++.h>
#include <cmath>
#include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

double meal_cost = 12;
int tip_percent = 20;
int tax_perent = 8;

void solve(double meal_cost, int tip_percent, int tax_percent) {
    
    double tip = (meal_cost * tip_percent) / 100;
    double tax = (meal_cost * tax_percent) / 100;
    
    double total_cost = meal_cost + tip + tax;
    
    int rounded_total_cost = round(total_cost);
    
    cout << rounded_total_cost << endl;
}

int main()
{
    string meal_cost_temp;
    getline(cin, meal_cost_temp);

    double meal_cost = stod(ltrim(rtrim(meal_cost_temp)));

    string tip_percent_temp;
    getline(cin, tip_percent_temp);

    int tip_percent = stoi(ltrim(rtrim(tip_percent_temp)));

    string tax_percent_temp;
    getline(cin, tax_percent_temp);

    int tax_percent = stoi(ltrim(rtrim(tax_percent_temp)));

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
