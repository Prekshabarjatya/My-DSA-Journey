#include <bits/stdc++.h>
using namespace std;

void averageEngagementPerWeek(vector<int>& engagement, int k) {
    double sum = 0;
    for(int i = 0; i < k; i++) {
        sum += engagement[i];
    }
    vector<double> weeklyAverages;
    weeklyAverages.push_back(sum / k);
    for(int i = 1; i <= engagement.size() - k; i++) {
        sum -= engagement[i - 1];  // Subtract the engagement value that is sliding out of the window
        sum += engagement[i + k - 1];  // Add the engagement value that is sliding into the window
        weeklyAverages.push_back(sum / k);  // Store the new average
    }
    cout << "Weekly Engagement Averages: ";
    for(int i = 0; i < weeklyAverages.size(); i++) {
        cout << weeklyAverages[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> engagement = {10, 12, 8, 15, 20, 18, 25, 22, 27, 30, 32, 28, 29, 30, 35, 40, 45, 50, 38, 36, 42, 47, 52, 53, 55, 60, 58, 61, 62, 64};
    int k = 7;
    averageEngagementPerWeek(engagement, k);
    
    return 0;
}
