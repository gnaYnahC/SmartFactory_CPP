#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

#define width 1000
#define height 300

struct Position {
  int x;
  int y;
};

// 충돌
bool isCollision(const Position& dinoPos, const Position& treePos,
                 const Texture& dinoTexture, const Texture& treeTexture) {
  const int dinoWidth = dinoTexture.getSize().x;
  const int dinoHeight = dinoTexture.getSize().y;
  const int treeWidth = treeTexture.getSize().x;
  const int treeHeight = treeTexture.getSize().y;

  const int dinoLeft = dinoPos.x;
  const int dinoRight = dinoPos.x + dinoWidth;
  const int dinoTop = dinoPos.y;
  const int dinoBottom = dinoPos.y + dinoHeight;

  const int treeLeft = treePos.x;
  const int treeRight = treePos.x + treeWidth;
  const int treeTop = treePos.y;
  const int treeBottom = treePos.y + treeHeight;

  return (dinoRight > treeLeft) && (dinoLeft < treeRight) &&
         (dinoBottom > treeTop) && (dinoTop < treeBottom);
}

int main() {
  int score = 0;
  // SFML 윈도우을 열어고 title을 설정
  RenderWindow window(VideoMode(width, height), "DinoSaur Game!!");
  // 프레임 설정
  window.setFramerateLimit(60);

  // 이미지 불러오기
  Texture t1, t2, t3, t4, t5;
  t1.loadFromFile("Dino_images/dino1.png");  // 공
  t2.loadFromFile("Dino_images/dino2.png");  // 룡
  t3.loadFromFile("Dino_images/tree.png");   // 나무
  t4.loadFromFile("Dino_images/cloud.png");   // 구름

  // 캐릭터 또는 배경 이미지를 읽어서 화면에 출력하는 Sprite클래스
  // 배열에 공룡 저장 선언, 나무 선언
  Sprite DinoArr[2], Tree(t3), Cloud(t4);
  DinoArr[0] = Sprite(t1);
  DinoArr[1] = Sprite(t2);

  // 공룡 바닥 설정
  static const int DINO_Y_BOTTOM = height - t1.getSize().y;
  Position DinoPos;
  DinoPos.x = 30;
  DinoPos.y = DINO_Y_BOTTOM;

  // 나무 바닥 설정
  static const int TREE_Y_BOTTOM = height - t3.getSize().y;
  Position TreePos;
  TreePos.x = width - 20;
  TreePos.y = TREE_Y_BOTTOM;

  // 구름 위치 설정
  static const int CLOUD_Y_TOP = height - 280;
  Position CloudPos;
  CloudPos.x = width;
  CloudPos.y = CLOUD_Y_TOP;

  // 프레임에 따라 왼발||오른발 해주기 위한 변수 네개
  int index = 0;  // 왼발 오른발 인덱스
  float frame = 0.f;
  float frameSpeed = 0.4f;
  const int changeCount = 5;  // 몇 프레임에 체인지 할지

  // 공룡 점프
  const int gravity = 7;   // 점프시 중력
  bool isJumping = false;  // 점프중
  bool isBottom = true;    // 걷는중

  // 나무 속도
  const int TreeSpeed = 5;

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
    if (Keyboard::isKeyPressed(Keyboard::Space)) {  // Space 클릭 시
      if (isBottom && !isJumping) {  // 공룡 걷고있고, 점프 안하고 있을 때
        isJumping = true;
        isBottom = false;  // 상태 변경
      }
    }
    // 점프
    if (isJumping) {
      DinoPos.y -= gravity;  // 점프중엔 y위치에서 gravity를 뺌 (그럼 올라감)
    } else {
      DinoPos.y += gravity;  // 고점에서 중력을 더하여 아래로
    }
    // 공룡의 위치 한계점 지정
    if (DinoPos.y >= DINO_Y_BOTTOM)  // 바닥에서 지하로 가지 않도록 설정
    {
      DinoPos.y = DINO_Y_BOTTOM;
      isBottom = true;
    }
    if (DinoPos.y <= DINO_Y_BOTTOM - 100)  // 점프해서 하늘에 부딪히지 않게 설정
    {
      isJumping = false;
    }

    //  공룡 아장아장
    frame += frameSpeed;
    if (frame > changeCount) {
      frame -= changeCount;
      ++index;
      if (index >= 2) {
        index = 0;
      }
    }

    // 나무 이동
    if (TreePos.x <= 0) {
      TreePos.x = width;
      score += 1;
    } else {
      TreePos.x -= TreeSpeed;
    }

    // 구름 이동
    if (CloudPos.x <= -800) {
      CloudPos.x = width;
    } else {
      CloudPos.x -= CloudSpeed;
    }

    // 공룡 위치
    DinoArr[index].setPosition(DinoPos.x, DinoPos.y);

    // 나무 위치
    Tree.setPosition(TreePos.x, TreePos.y);

    // 구름 위치
    Cloud.setPosition(CloudPos.x, CloudPos.y);

    // 충돌 시 게임 오버 처리
    if (isCollision(DinoPos, TreePos, t1, t3)) {
      std::cout << "Game Over\n";
      std::cout << "SCORE: " << score;
      window.close();
    }

    // 윈도우
    window.clear(Color::Cyan);    // 배경
    window.draw(DinoArr[index]);  // 공룡
    window.draw(Tree);            // 나무
    window.draw(Cloud);           // 구름

    // 윈도우 디스플레이 출력
    window.display();
  }

  return 0;
}
