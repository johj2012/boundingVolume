
#include "Precompiled.h"

Circle::Circle(const std::vector<Vector2> InVertices)
{
	// ��ġ ������ �޾� �߽ɰ� �������� ���� ���ϴ� ���� ( ���� ������ �� )
// 	Center = Vector2((InVertices.begin()->X - InVertices.at(InVertices.size() / 2).X)/2, (InVertices.begin()->Y - InVertices.at(InVertices.size() / 2).Y) / 2);
// 	Radius = (Center - InVertices.front()).Size();

	Vector2 temp = Vector2::Zero;

	for (auto iter : InVertices)
	{
		temp += iter;
	}

	Center = temp / InVertices.size();

	Radius = (Center - InVertices.front()).Size();
}
