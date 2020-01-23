#pragma once
#include <string>

class Vec2 {
public:
	Vec2();
	Vec2(const float x, const float y);
	Vec2(const int x, const int y);
	Vec2(const double x, const double y);

	Vec2 operator*(const Vec2& v)const;

	Vec2 operator*(const float scalar)const;
	void operator*=(const float scalar);

	Vec2 operator*(const int scalar)const;
	void operator*=(const int scalar);

	Vec2 operator*(const double scalar)const;
	void operator*=(const double scalar);

	Vec2 operator/(const float scalar)const;
	void operator/=(const float scalar);

	Vec2 operator/(const int scalar)const;
	void operator/=(const int scalar);

	Vec2 operator/(const double scalar)const;
	void operator/=(const double scalar);

	Vec2 operator+(const Vec2& v)const;
	void operator+=(const Vec2& v);

	Vec2 operator-() const;

	Vec2 operator+() const;

	Vec2 operator-(const Vec2& v)const;
	void operator-=(const Vec2& v);

	bool operator==(const Vec2& v) const;
	bool operator!=(const Vec2& v) const;

	float operator[](const unsigned int index)const;

	float magnitude()const;
	float sqrMagnitude()const;
	Vec2 normalize()const;

	Vec2 rotate(const float degrees)const;

	Vec2 perpendicular() const;
	std::string toString() const;

	union {
		float xy[2];
		struct {
			float x, y;
		};
	};
	
	static float angle(const Vec2& v1, const Vec2& v2);
	static Vec2 UP;
	static Vec2 LEFT;


};