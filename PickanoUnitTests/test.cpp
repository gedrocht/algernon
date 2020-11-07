#include <iostream>
#include "pch.h"
#include "pickano.h"

using namespace std;

TEST(PickanoTest, InitialOutputCorrect) {
	ostringstream *out = new ostringstream();
	istringstream *in = new istringstream("yes");

	Pickano::play(*in, *out);

	string output = out->str();

	EXPECT_EQ(output, "yes");
}