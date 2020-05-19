#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
//data types
class lottoData_t
{
private:
    vector<vector<int>> rawData;

public:
    auto normal_predict(int startRange, int endRange)//범위에 따라 단순 예상
    {
	//기범이 파이팅
    }
    auto pattern_predict(int startRange, int endRange)//패턴인식 예상
    {
	//성우 파이팅
    }
    lottoData_t()
    {
	//쩨 파이팅
    }
    lottoData_t(string path)
    {
	//쩨 파이팅
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
    int temp1[45];//(보너스 포함)숫자가 나온 횟수
    vector <pair<int, float> >temp3;//편차 sort
    
    switch(a)
    {
      case 1:
	  lottoData.normal_predict(/*하핫.*/);
        for(int i=0;i<45;i++)
        {
          temp1[i]=std::count(*raw,*(raw+700),i+1);
          printf("%d",temp1[i]);
        }
       
        for(int i=0;i<45;i++)
          temp3.push_back(pair<float, int>(temp1[i],i+1));
        
        sort(temp3.begin(),temp3.end());
        
        cout << "추천 로또 번호는 ";
        for(int i=44;i>=38;i--)
          cout << temp3[i].second <<endl;
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
