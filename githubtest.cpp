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
    switch(a)
    {
      case 1:
        int temp1[45];//(보너스 포함)숫자가 나온 횟수
        for(int i=0;i<45;i++)
        {
          temp1[i]=std::count(*raw,*(raw+700),i+1);
        }
        int temp2[45];//편차
        for(int i=0;i<45;i++)
        {
            temp2[i]=temp1[i]- 910*7/45;
        }
      case 2:

      case 3:

      case 4:

      default:
        printf("잘못된 명령어입니다.");

    }
  }
}
