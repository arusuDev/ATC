// C++のテンプレート
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Box{
    public:
    int h,w;
    Box(int height,int width){
        h = height;
        w = width;
    }
    bool operator< (const Box &another) const{
        return h < another.h;
    }
};
int main(void){
    int N;
    cin >> N;
    vector<Box> boxs;
    int h,w;
    for(int i=0;i<N;i++){
        cin >> h >> w;
        boxs.push_back(Box(h,w));
    }
    // for(int i=0;i<N;i++)
    //     cout << boxs[i].h << boxs[i].w << endl;
    sort(boxs.begin(),boxs.end());
    // cout << "----end sort ---" << endl;
    // for (int i = 0; i < N; i++)
    //     cout << boxs[i].h << boxs[i].w << endl;
    vector<int> width_min;
    int temp_min = boxs[0].w;
    for (int i=1;i<N;i++){
        if(boxs[i-1].h == boxs[i].h){
            //一個前と同じなら最小を更新していく。
            if(temp_min > boxs[i].w){
                temp_min = boxs[i].w;
            }
        }else{
            //一個前と異なるなら、最小をpushする。
            width_min.push_back(temp_min);
            temp_min = boxs[i].w;
        }
        if(i == N-1){
            width_min.push_back(temp_min);
        }
    }

    // for(int i=0;i<width_min.size();i++){
    //     cout << width_min[i] << " " ;
    // }
    // cout << endl;
    int max_count = 0;
    int temp=-1;
    for(int loop=0;loop<width_min.size();loop++){
        if(width_min[temp]<width_min[loop]&&temp!=-1){
            continue;
        }else{
            temp = loop;
        }
        int count = 1;
        int idx = loop;
        for (int i = loop+1; i < width_min.size(); i++)
        {
            if (width_min[idx] < width_min[i])
            {
                count++;
                idx = i;
            }
        }
        if(max_count < count){
            max_count = count;
        }
    }
    cout << max_count << endl;
}