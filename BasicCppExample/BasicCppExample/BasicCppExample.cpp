#include <iostream>

int main()
{
	const int SecondsPerMinutes{ 60 };
	// int total_seconds_played; // Snake case
	// int totalSecondsPlayed; // Camel case
	// Pascal case : Unreal Engine Coding Standard
	int TotalSecondsPlayed{ 100 }; // { } braced initializer : 에러를 바로 보여준다.

	int MinutesPlayed = TotalSecondsPlayed / SecondsPerMinutes;
	int SecondsPlayed = TotalSecondsPlayed % SecondsPerMinutes;
	std::cout << "Minuites Played: " << MinutesPlayed << "\n";
	std::cout << "Seconds Played: " << SecondsPlayed << "\n";
}
