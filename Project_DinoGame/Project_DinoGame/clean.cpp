// SFML ���̺귯���� �̿�
// �ý���, ������, �׷���, ����� �� ��Ʈ��ũ�� 5�� ���� ����
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

// #define ���ù��� ����Ͽ� ���� â�� �ʺ�� ���̸� ����
const int width = 1000;
const int height = 300;

// ����ü, Position ����
struct Position {
  int x, y;
};

int main() {
  int score = 0;
  // SFML �������� ���� title�� ����
  RenderWindow window(VideoMode(width, height), "DinoSaur Game!!");

  // ������ ���� - ������ ���� �ӵ� == �ʴ� 60������
  window.setFramerateLimit(60);

  // ĳ���� �Ǵ� ��� �̹����� �о ȭ�鿡 ����ϴ� TextureŬ����
  Texture t1, t2, t3, t4, t5;                 // �̹��� �ε�
  t1.loadFromFile("Dino_images/dino1.png");   // ��
  t2.loadFromFile("Dino_images/dino2.png");   // ��
  t3.loadFromFile("Dino_images/tree.png");    // ����
  t4.loadFromFile("Dino_images/cloud1.png");  // ����1
  t5.loadFromFile("Dino_images/cloud2.png");  // ����2

  // Sprite ����
  // Sprite - �̹����� window�� �׸� �� �ִ� ��ü
  Sprite DinoArr[2], Tree(t3), Cloud1(t4), Cloud2(t5);
  DinoArr[0] = Sprite(t1);
  DinoArr[1] = Sprite(t2);

  // ���� �ٴ� ����
  // static - ���� ������ �����ϱ� ���� Ű���� (���α׷� ���� �� �޸� ����
  // �Ҵ�, ����Ǳ� ������ ����) const - ��� ������ ���� Ű���� (�ش� ������ ��
  // ���� �Ұ���)
  static const int DINO_BOTTOM = height - t1.getSize().y;
  Position DinoPos;
  DinoPos.x = 30;
  DinoPos.y = DINO_BOTTOM;

  // ���� �ٴ� ����
  static const int TREE_BOTTOM = height - t3.getSize().y;
  Position TreePos;
  TreePos.x = width - 20;
  TreePos.y = TREE_BOTTOM;

  // ���� ��ġ ����
  // cloud1�� cloud2�� �̾������� ��ġ ����
  static const int CLOUD_TOP = height - t4.getSize().y * 3;
  Position CloudPos1;
  CloudPos1.x = 0;
  CloudPos1.y = CLOUD_TOP;

  Position CloudPos2;
  CloudPos2.x = t4.getSize().x;
  CloudPos2.y = CLOUD_TOP;

  // ĳ���� �ִϸ��̼��� ���� ����
  int footShapeIndex = 0;     // ĳ���� �� ����� ����
  float currentFrame = 0.0f;  // ���� ������ �� ����
  float frameDelay =
      0.4f;  // �� �����Ӵ� ��� �ð�
             // �Ǽ������� ����Ǿ� ���� ������ �Ҽ��� ������ ���� �������� ��
  const int totalFrames = 5;  // �� ����� ������ �� ������ ��

  // ���� ����
  const int JumpPower = 7;  // ������
  bool isJumping = false;   // ������
  bool isBottom = true;     // �ȴ���

  // ���� �ӵ�
  const int TreeSpeed = 9;

  // ���� �ӵ�
  const int CloudSpeed = 3;

  // SFML ���� ���� - �����찡 ������ ���� �ݺ�
  while (window.isOpen()) {
    Event e;
    while (window.pollEvent(e)) {
      if (e.type == Event::Closed) {
        window.close();
      }
    }
    // ���� ���������ֱ�
    if (Keyboard::isKeyPressed(Keyboard::Space)) {  // Space Ŭ��
      if (isBottom && !isJumping) {  // ���� �Ȱ��ְ�, ���� ���ϰ� ���� ��
        isJumping = true;
        isBottom = false;  // ���� ����
      }
    }
    // ����
    if (isJumping) {
      DinoPos.y -=
          JumpPower;  // �����߿� y��ġ���� JumpPower�� �� (�׷� �ö�)
    } else {
      DinoPos.y += JumpPower;  // �������� �����Ŀ��� ���Ͽ� �Ʒ���
    }
    // ������ ��ġ �Ѱ��� ����
    if (DinoPos.y >= DINO_BOTTOM)  // �ٴڿ��� ���Ϸ� ���� �ʵ��� ����
    {
      DinoPos.y = DINO_BOTTOM;
      isBottom = true;
    }
    if (DinoPos.y <= DINO_BOTTOM - 100)  // �����ؼ� �ϴÿ� �ε����� �ʰ� ����
    {
      isJumping = false;
    }

    //  ���� �������
    currentFrame +=
        frameDelay;  // ���� �ð����� ������ ������Ʈ�� �ð��� ���� ��
    if (currentFrame > totalFrames) {  // �� ���� �ִϸ��̼��� �Ϸ�
      currentFrame -= totalFrames;  // ���� �������� �ٽ� 0���� ����
      ++footShapeIndex;             // 1�� ����
      if (footShapeIndex >= 2) {  // 2 �̻��� ��� �ٽ� 0���� �ʱ�ȭ
        footShapeIndex = 0;
      }
    }

    // ���� �̵�
    if (TreePos.x <= 0) {
      TreePos.x = width;
      score += 1;
    } else {
      TreePos.x -= TreeSpeed;
    }

    // ������ �̵��ϰ� ȭ�� ������ ������ �ٽ� ó������ ����
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

    // ���� ��ġ
    DinoArr[footShapeIndex].setPosition(DinoPos.x, DinoPos.y);

    // ���� ��ġ
    Tree.setPosition(TreePos.x, TreePos.y);

    // ���� ��ġ
    Cloud1.setPosition(CloudPos1.x, CloudPos1.y);
    Cloud2.setPosition(CloudPos2.x, CloudPos2.y);

    // ������
    window.clear(Color::Cyan);             // ���
    window.draw(DinoArr[footShapeIndex]);  // ����
    window.draw(Tree);                     // ����
    window.draw(Cloud1);                   // ����1
    window.draw(Cloud2);                   // ����2

    // �������� ��ũ���� ���
    window.display();
  }
  return 0;
}