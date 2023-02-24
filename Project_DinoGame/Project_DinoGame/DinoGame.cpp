// SFML 라이브러리를 이용
// 시스템, 윈도우, 그래픽, 오디오 및 네트워크의 5개 모듈로 구성
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

// #define 지시문을 사용하여 게임 창의 너비와 높이를 정의
#define width 1000
#define height 300

// 구조체, Position 정의
struct Position {
  int x, y;
};

// 충돌 판정
// Position과 Texture 객체를 참조자로 선언, 함수 호출 시 해당 객체를 직접 참조
bool isCollision(const Position& DinoPos, const Position& TreePos,
                 const Texture& DinoTexture, const Texture& TreeTexture) {
  // Dino와 Tree의 너비와 높이를 텍스처의 크기 구함.
  // DinoWidth, DinoHeight, TreeWidth,TreeHeight 변수에 저장
  const int DinoWidth = DinoTexture.getSize().x;
  const int DinoHeight = DinoTexture.getSize().y;
  const int TreeWidth = TreeTexture.getSize().x;
  const int TreeHeight = TreeTexture.getSize().y;

  // Dino와 Tree의 왼쪽, 오른쪽, 위, 아래 좌표
  // DinoLeft는 Dino의 왼쪽 좌표(DinoPos.x)
  // DinoRight는 Dino의 오른쪽 좌표(DinoPos.x + DinoWidth)
  // DinoTop은 Dino의 위쪽 좌표(DinoPos.y)
  // DinoBottom은 Dino의 아래쪽 좌표(DinoPos.y + DinoHeight)
  const int DinoLeft = DinoPos.x;
  const int DinoRight = DinoPos.x + DinoWidth;
  const int DinoTop = DinoPos.y;
  const int DinoBottom = DinoPos.y + DinoHeight;

  // 위와 같은 방식으로 변수에 저장
  const int TreeLeft = TreePos.x;
  const int TreeRight = TreePos.x + TreeWidth;
  const int TreeTop = TreePos.y;
  const int TreeBottom = TreePos.y + TreeHeight;

  // DinoRight가 TreeLeft보다 크고, DinoLeft가 TreeRight보다 작으며,
  // DinoBottom이 TreeTop보다 크고, DinoTop이 TreeBottom보다 작은 경우
  // true반환
  return (DinoRight > TreeLeft) && (DinoLeft < TreeRight) &&
         (DinoBottom > TreeTop) && (DinoTop < TreeBottom);
}



int main() {
  int score = 0;
  // SFML 윈도우을 열고 title을 설정
  RenderWindow window(VideoMode(width, height), "DinoSaur Game!!");

  // 프레임 설정 - 프레임 제한 속도 == 초당 60프레임
  window.setFramerateLimit(60);

  // 캐릭터 또는 배경 이미지를 읽어서 화면에 출력하는 Texture클래스
  Texture t1, t2, t3, t4, t5;                 // 이미지 로드
  t1.loadFromFile("Dino_images/dino1.png");   // 공
  t2.loadFromFile("Dino_images/dino2.png");   // 룡
  t3.loadFromFile("Dino_images/tree.png");    // 나무
  t4.loadFromFile("Dino_images/cloud1.png");  // 구름1
  t5.loadFromFile("Dino_images/cloud2.png");  // 구름2

  // Sprite 생성
  // Sprite - 이미지를 window에 그릴 수 있는 개체
  Sprite DinoArr[2], Tree(t3), Cloud1(t4), Cloud2(t5);
  DinoArr[0] = Sprite(t1);
  DinoArr[1] = Sprite(t2);

  // 공룡 바닥 설정
  // static - 정적 변수를 선언하기 위한 키워드 (프로그램 실행 시 메모리 공간 할당, 종료되기 전까지 유지) 
  // const - 상수 선언을 위한 키워드 (해당 변수는 값 변경 불가능)
  static const int DINO_BOTTOM = height - t1.getSize().y;
  Position DinoPos;
  DinoPos.x = 30;
  DinoPos.y = DINO_BOTTOM;

  // 나무 바닥 설정
  static const int TREE_BOTTOM = height - t3.getSize().y;
  Position TreePos;
  TreePos.x = width - 20;
  TreePos.y = TREE_BOTTOM;

  // 구름 위치 설정
  // cloud1과 cloud2가 이어지도록 위치 설정
  static const int CLOUD_TOP = height - t4.getSize().y * 3;
  Position CloudPos1;
  CloudPos1.x = 0;
  CloudPos1.y = CLOUD_TOP;

  Position CloudPos2;
  CloudPos2.x = t4.getSize().x;
  CloudPos2.y = CLOUD_TOP;

  // 캐릭터 애니메이션을 위한 변수
  int footShapeIndex = 0;  // 캐릭터 발 모양을 결정
  float currentFrame = 0.0f;    // 현재 프레임 수 저장
  float frameDelay = 0.4f;  // 한 프레임당 대기 시간
             // 실수형으로 선언되어 있지 않으면 소수점 이하의 값이 버려지게 됨
  const int totalFrames = 5;  // 발 모양을 변경할 총 프레임 수

  // 공룡 점프
  const int JumpPower = 7;  // 점프력
  bool isJumping = false;   // 점프중
  bool isBottom = true;     // 걷는중

  // 나무 속도
  const int TreeSpeed = 9;

  // 구름 속도
  const int CloudSpeed = 3;

  // SFML 메인 루프 - 윈도우가 닫힐때 까지 반복
  while (window.isOpen()) {
    Event e;
    while (window.pollEvent(e)) {
      if (e.type == Event::Closed) {
        window.close();
      }
    }
    // 공룡 점프시켜주기
    if (Keyboard::isKeyPressed(Keyboard::Space)) {  // Space 클릭
      if (isBottom && !isJumping) {  // 공룡 걷고있고, 점프 안하고 있을 때
        isJumping = true;
        isBottom = false;  // 상태 변경
      }
    }
    // 점프
    if (isJumping) {
      DinoPos.y -=
          JumpPower;  // 점프중엔 y위치에서 JumpPower를 뺌 (그럼 올라감)
    } else {
      DinoPos.y += JumpPower;  // 고점에서 점프파워를 더하여 아래로
    }
    // 공룡의 위치 한계점 지정
    if (DinoPos.y >= DINO_BOTTOM)  // 바닥에서 지하로 가지 않도록 설정
    {
      DinoPos.y = DINO_BOTTOM;
      isBottom = true;
    }
    if (DinoPos.y <= DINO_BOTTOM - 100)  // 점프해서 하늘에 부딪히지 않게 설정
    {
      isJumping = false;
    }

    //  공룡 아장아장
    currentFrame += frameDelay;  // 현재 시간에서 마지막 업데이트된 시간을 더한 값
    if (currentFrame > totalFrames) {  // 한 번의 애니메이션이 완료
      currentFrame -= totalFrames;  // 현재 프레임을 다시 0부터 시작
      ++footShapeIndex;             // 1씩 증가
      if (footShapeIndex >= 2) {  // 2 이상인 경우 다시 0으로 초기화
        footShapeIndex = 0;
      }
    }

    // 나무 이동
    if (TreePos.x <= 0) {
      TreePos.x = width;
      score += 1;
    } else {
      TreePos.x -= TreeSpeed;
    }

    // 구름을 이동하고 화면 밖으로 나가면 다시 처음으로 돌림
    if (CloudPos1.x <= -1000) {
      CloudPos1.x = width;
    } else {
      CloudPos1.x -= CloudSpeed;
    }

    if (CloudPos2.x <= -1000) {
      CloudPos2.x = width + CloudPos1.x;
    } else {
      CloudPos2.x -= CloudSpeed;
    }

    // 공룡 위치
    DinoArr[footShapeIndex].setPosition(DinoPos.x, DinoPos.y);

    // 나무 위치
    Tree.setPosition(TreePos.x, TreePos.y);

    // 구름 위치
    Cloud1.setPosition(CloudPos1.x, CloudPos1.y);
    Cloud2.setPosition(CloudPos2.x, CloudPos2.y);

    // 충돌 시 게임 오버 처리
    if (isCollision(DinoPos, TreePos, t1, t3)) {
      std::cout << "Game Over\n";
      std::cout << "SCORE: " << score;
      window.close();
    }

    // 윈도우
    window.clear(Color::Cyan);             // 배경
    window.draw(DinoArr[footShapeIndex]);  // 공룡
    window.draw(Tree);                     // 나무
    window.draw(Cloud1);                   // 구름1
    window.draw(Cloud2);                   // 구름2

    // 프레임을 스크린에 출력
    window.display();
  }
  return 0;
}
