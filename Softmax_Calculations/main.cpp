#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
const int x0 = -490;
const int self_const = 30;
const int b = 1913;
const int c = 1394358;
const int m = 1614886140;
const int e = 66;

int main() {
    // The inputs are all numbers from -14700 to 0.
    // The goal is to map all 14700 numbers to 16-bit numbers.
    vector<int> inputs;
    for (int i = 0; i >= -14700; i--) {
        inputs.push_back(i);
    }

    vector<pair<int, int>> results;

    for (int num : inputs) {
        int q = num / x0;
        int r = num - x0 * q;
        long long temp = ((r + b) * r + c);
        temp = temp << (self_const - q);
        long long intermediate_result = (temp < 0) ? 0 : temp;
        double read1 = (double)intermediate_result * (double)m;
        double read2 = read1 / pow(2, e);
        int resulting_val = (int) read2;
        results.emplace_back(num, resulting_val);
    }

    for (auto p : results) {
       //cout<<p.first<<"   "<<p.second<<endl;
    }

    // Everything equal or below -7350 is 0
    // -6860 to -7349: 1
    // -6574 to -6859: 2
    // The rest: look up from the memory block.
    for (int i = 0; i < 14700; i++) {
        cout<<results[i].second<<", "<<endl;

    }
    return 0;
}