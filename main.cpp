#include <iostream>
#include <cassert>

float travelTime (float distance, float speed)
{
	assert(speed > 0 && distance >0);

	return distance/speed;
}

int main() {
	float distance, speed;

  std::cout << "Enter the distance: ";
	std::cin >> distance;
	std::cout << std::endl;
	std::cout << "Enter the speed: ";
	std::cin >> speed;
	std::cout << std::endl;

	std::cout << "Travel time equal: " << travelTime(distance, speed) << std::endl;

	return 0;
}