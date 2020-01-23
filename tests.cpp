#include "vec.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace Catch;

TEST_CASE("Vec2", "[Vec2]")
{
	Vec2 v(10, 12);
	REQUIRE(v.x == 10.0f);
	REQUIRE(v.y == 12.0f);

	v = Vec2(12.0f, 10.0f);
	REQUIRE(v.x == 12.0f);
	REQUIRE(v.y == 10.0f);


	v = Vec2(10.0f, 12.0f);
	REQUIRE(v.x == 10.0f);
	REQUIRE(v.y == 12.0f);

	double x = 10.00;
	double y = 12.00;
	v = Vec2(x, y);
	REQUIRE(v.x == 10.0f);
	REQUIRE(v.y == 12.0f);

	Vec2 v2(20,30);
	REQUIRE(v + v2 == Vec2(30.0f, 42.0f));
	v += v2;
	REQUIRE(v == Vec2(30.0f, 42.0f));
	v -= v2;
	REQUIRE(v == Vec2(10.0f, 12.0f));

	REQUIRE(-v == Vec2(-10.0f, -12.0f));

	v = Vec2(-1,-10);
	REQUIRE(+v == Vec2(1.0f, 10.0f));
	v = Vec2(-1,-1);
	std::cout << Vec2::angle(Vec2(-1,-1), Vec2(1,1));
	REQUIRE(v.rotate(180) == Vec2(1.0f, 1.0f));





}




