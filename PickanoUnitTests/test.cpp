#include <iostream>
#include "pch.h"
#include "pickano.h"

using namespace std;

TEST(TestCaseName, TestName) {
	ostringstream *out = new ostringstream();
	istringstream *in = new istringstream();

	Pickano::play(*in, *out);

	string output = out->str();

	EXPECT_TRUE(output == "buh");
}