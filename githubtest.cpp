#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
  int a;
  while(1)
  {
    int raw[1000][7];//rww data 임시코드. 이것을 포함한 모든 변수는class 정해지면 삭제 또는 수정 예정
    printf("모드 입력:");
    scanf("%d",&a);
    int temp1[45];//(보너스 포함)숫자가 나온 횟수
    vector <pair<int, float> >temp3;//편차 sort
    
    switch(a)
    {
      case 1:
        for(int i=0;i<45;i++)
        {
          temp1[i]=std::count(*raw,*(raw+700),i+1);
          printf("%d",temp1[i]);
        }
       
        for(int i=0;i<45;i++)
        {
          temp3.push_back(pair<float, int>(temp1[i],i+1));
        }
        sort(temp3.begin(),temp3.end());
        
        printf("추천 로또 번호는 ");
        for(int i=44;i>=38;i--)
        {
          cout << temp3[i].second <<endl;
        }
        printf("입니다.");
        break;
      case 2:
          break;

      case 3:
        break;

      case 4:
        break;

      default:
        printf("잘못된 명령어입니다.\n");
        break;

    }
  }
}
