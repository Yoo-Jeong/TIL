동적할당 : 플레이어, 몬스터


INFO구조체
{
  char 플레이어 닉네임[32]
  char 직업[32]
  int 체력
  int 최대체력
  int 레벨
  int 경험치
  int 최대경험치
}INFO;

enum STATE // 전투 결과 상태 열거체
{
  승리  WIN,
  패배  LOSE = 1,
  도망  RUN = 1,
  끝    END
};


// INFO* 플레이어 직업 선택 함수
// void 오브젝트 생성 함수
// void 사냥터 입장 함수 (사냥터/종료)
// void 사냥터 선택 함수
// void 맵 생성 및 이동 함수
// STATE 전투 함수
// void 메인게임 함수 void Main_Game(); 

// void 플레이어 정보 저장 함수 fwrite()
// void 플레이어 정보 불러오기 함수 fread()

// int 난수 생성후 반환 함수
// void 배열에 값 넣는 함수
// void 배열 섞기 함수
// void 5 * 5 출력 함수

void main(void)
{
  Main_Game();
}


// INFO 플레이어 직업 선택 함수
{
  INFO* pPlayer = new INFO;

  cout << "닉네임을 입력해주세요 : ";
  닉네임 입력받기
  
  직업 선택
  case 1:
    전사
  
  case 2: 
    마법사
  
  case3 : 
    도적
  
  return pPlayer;
}


void Main_Game()
{
  // 플레이어 직업 선택 함수
  
}

