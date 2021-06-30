#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(500, 500), "WINDOW");

	RectangleShape rs;

	//Vector2f = float 자료형 두 개짜리
	rs.setFillColor(Color::Green);
	rs.setSize(Vector2f(100.f, 100.f));
	rs.setPosition(Vector2f(250.f, 250.f));
	rs.setOrigin(rs.getSize() / 2.f);

	while (window.isOpen()) {

		window.clear();
		//rs.setPosition(rs.getPosition().x + 0.5f, rs.getPosition().y);


		window.draw(rs);	//그리기
		window.display();	//출력하기
	}




}