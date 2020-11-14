#include <algorithm>
#include <xlnt/xlnt.hpp>
#include <iostream>
#include <vector>
using namespace std;
//data types
class lottoData_t
{
private:
    vector<vector<int>> rawData;//rawData[n][6] : 보너스번호, rawData[n][0] ~ rawData[n][5] : 당첨번호
public:
    auto normal_predict(int startRange, int endRange)//범위에 따라 단순 예상
    {
        //기범이 파이팅
        vector<pair<float, int> >temp3;//편차 sort
        for(int i=0;i<45;i++)
        {
        // temp1[i]=std::count(*raw,*(raw+700),i+1);
        // printf("%d",temp1[i]);
        }
        for(int i=0;i<45;i++)
            temp3.push_back(make_pair(temp1[i],i+1));
        sort(temp3.begin(),temp3.end());
        reverse(temp3.begin(), temp3.end());
        vector<int> retval;
        for (auto i = 0; i < 6; i++)
            retval.push_back(temp3[i].second);
        sort(retval.begin(), retval.end());
        return retval;
    }
    auto pattern_predict(int startRange, int endRange)//패턴인식 예상
    {
        /*
        당첨번호에 n번이 있을때, 가장 많이 나온 번호 출력
        출력형식: n번 -> a번, k% (n = 1~45)
        만약 동일한 확률이 있을 경우엔 같이 출력.
        출력형식: n번 -> a,b,c번 k% (n = 1~45)

        */
        int arr[46][46];
        for(int Range = startRange; Range <= endRange; Range++){
            for(int Cp_num = 1; Cp_num <= 45; Cp_num++)
                for(int Co_num = 0; Co_num <= 6; Co_num++)
                    if (rawData[RangeR][Co_num] == Cp_num)
                        for(int Wr_num = 0; Wr_num <= 6; Wr_num++)
                            if (rawData[RangeR][Wr_num] != i)
                                arr[Cp_num][rawData[RangeR][Wr_num] - 1] += 1;
        }

        for(int Ma_num = 1; Ma_num<= 45; Ma_num++){
            cout<<Ma_num<<"번이 나왔을때"<<endl;
            for(int Sl_num = 1; Sl_num<= 45; Sl_num++)
                cout<<Sl_num<<"이 나온 횟수 : "<< arr[Ma_num][Sl_num] <<endl;
        }

        //성우 파이팅
        //사랑해
    }
    lottoData_t(string path = "./data.xlsx")
    {
        xlnt::workbook wb;
        wb.load(path);
        auto ws = wb.active_sheet();
        for (auto row : ws.rows())
        {
            vector<int> temp;
            for (auto cell : row)
                temp.push_back(stoi(cell.to_string()));
            rawData.push_back(temp);
        }
    }
};

int main(void)
{
    int a;
    while(1)
    {
        lottoData_t lottoData;
        cout << "모드 입력 : ";
        cin >> a;
        vector<int>temp;
        switch(a)
        {
        case 1:
            temp = lottoData.normal_predict(1, 911);
            cout << "추천 로또 번호는 ";
            for(auto i : temp)
              cout << i << " ";
            cout << "입니다." << endl;
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        default:
            cout << "잘못된 명령어입니다." << endl;
            break;
        }
    }
}
