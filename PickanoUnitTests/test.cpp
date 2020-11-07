#include <iostream>
#include "pch.h"
#include "pickano.h"

using namespace std;
TEST(UserTests, Play) {
	ostringstream out;
	istringstream in("21 23 22");

	Pickano::play(in, out, 22);

	EXPECT_EQ(out.str(), "Too low\nToo high\nCorrect!\n");
}