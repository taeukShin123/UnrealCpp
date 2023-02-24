#include <iostream>

int main()
{
	/*
	const int SecondsPerMinutes{ 60 };
	// int total_seconds_played; // Snake case
	// int totalSecondsPlayed; // Camel case
	// Pascal case : Unreal Engine Coding Standard
	int TotalSecondsPlayed{ 100 }; // { } braced initializer : 에러를 바로 보여준다.

	int MinutesPlayed = TotalSecondsPlayed / SecondsPerMinutes;
	int SecondsPlayed = TotalSecondsPlayed % SecondsPerMinutes;
	std::cout << "Minuites Played: " << MinutesPlayed << "\n";
	std::cout << "Seconds Played: " << SecondsPlayed << "\n";
	*/

	float Angle{ 45 };

	std::cout << "Enter angle in degrees: ";
	std::cin >> Angle;
	// convert angle to radians - 360 degree = 2pi radians -> 180 degree = pi radians -> radian = pi / 180
	const double PI = std::acos(-1);
	Angle = Angle * PI / 180;

	float Cosine = cosf(Angle);
	std::cout << "Cosine of " << &Angle << " degrees: " << Cosine << "\n";
}
