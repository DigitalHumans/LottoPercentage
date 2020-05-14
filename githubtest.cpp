#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
  int a;
  while(1)
  {
    int raw[1000][7];//rww data 임시코드. 이것을 포함한 모든 변수는class 정해지면 삭제 또는 수정 예정
    printf("모드 입력:");
    scanf("%d",&a);
    int temp1[45];//(보너스 포함)숫자가 나온 횟수
    float temp2[45];//편차
    float temp3[45];//편차 sort
    float temp4[45];//많이 나오는 빈도수
    switch(a)
    {
      case 1:
        for(int i=0;i<45;i++)
        {
          temp1[i]=std::count(*raw,*(raw+700),i+1);
        }
        for(int i=0;i<45;i++)
        {
            temp2[i]=temp1[i]- 910*7/45;
        }
        for(int i=0;i<45;i++)
        {
            temp3[i]=temp2[i];
        }
        sort(temp3.begin(),temp3.end());
        for(int i=0;i<45;i++)
        {
            for(int k=0;k<45;k++)
            {
              if(temp3[i]==temp2[k])
              {
                temp4[i]==k+1;
              }
            }
        }
        printf("추천 로또 번호는 ");
        for(int i=0;i<7;i++)
        {
          printf("%lf",temp4[i]);
        }
        printf("입니다.")
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
