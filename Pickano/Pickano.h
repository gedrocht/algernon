#pragma once

#pragma warning( push, 0 )
#include <iostream>
#include <sstream>
using namespace std;
#pragma warning( pop ) 

#pragma once
/// <summary>
/// A number-guessing game
/// </summary>
class Pickano
{
public:
	/// <summary>
	/// Starts the game
	/// </summary>
	/// <param name="in">Input stream to guess with</param>
	/// <param name="out">Output stream to receive feedback from</param>
	/// <param name="answer">Correct number that must be guessed</param>
	static void play(istream &in, ostream &out, int answer);
};

