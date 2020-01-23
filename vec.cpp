#include "vec.h"
#include <cmath>

Vec2 Vec2::LEFT(-1, 0);
Vec2 Vec2::UP(0, 1);

Vec2::Vec2() : x(0.0f), y(0.0f)
{
}

Vec2::Vec2(const float x, const float y) : x(x), y(y)
{
}

Vec2::Vec2(const int x, const int y) : x((float)x), y((float)y)
{
}

Vec2::Vec2(const double x, const double y) : x((float)x), y((float)y)
{
}

Vec2 Vec2::operator*(const Vec2& v)const
{
	return Vec2();
}

Vec2 Vec2::operator*(const float scale)const
{
	return Vec2(x * scale, y * scale);
}

void Vec2::operator*=(const float scale)
{
	x *= scale;
	y *= scale;
}

Vec2 Vec2::operator*(const int scale)const
{
	return Vec2(x * (float)scale, y * (float)scale);
}

void Vec2::operator*=(const int scale)
{
	x *= (float)scale;
	y *= (float)scale;
}

Vec2 Vec2::operator*(const double scale)const
{
	return Vec2(x * (float)scale, y * (float)scale);
}

void Vec2::operator*=(const double scale)
{
	x *= (float)scale;
	y *= (float)scale;
}

Vec2 Vec2::operator/(const float scalar) const
{
	return Vec2(x/scalar,y/scalar);
}

void Vec2::operator/=(const float scalar)
{
	x /= scalar;
	y /= scalar;
}

Vec2 Vec2::operator/(const int scalar) const
{
	return Vec2(x/ (float)scalar,y/ (float)scalar);
}

void Vec2::operator/=(const int scalar)
{
	x /= (float)scalar;
	y /= (float)scalar;
}

Vec2 Vec2::operator/(const double scalar) const
{
	return Vec2(x/ (float)scalar,y/ (float)scalar);
}

void Vec2::operator/=(const double scalar)
{
	x /= (float)scalar;
	y /= (float)scalar;
}

Vec2 Vec2::operator+(const Vec2& v)const
{
	return Vec2(x+v.x, y+v.y);
}

void Vec2::operator+=(const Vec2& v)
{
	x += v.x;
	y += v.y;
}

Vec2 Vec2::operator-()const
{
	return Vec2(-x,-y);
}

Vec2 Vec2::operator+()const
{
	return Vec2(abs(x), abs(y));
}

Vec2 Vec2::operator-(const Vec2& v)const
{
	return Vec2(x-v.x, y-v.y);
}

void Vec2::operator-=(const Vec2& v)
{
	x -= v.x;
	y -= v.y;
}

bool Vec2::operator==(const Vec2& v)const
{
	return x==v.x && y==v.y;
}

bool Vec2::operator!=(const Vec2& v)const
{
	return y != v.y || x != v.x;
}

float Vec2::operator[](const unsigned int index) const
{
	return xy[index];
}

float Vec2::magnitude() const
{
	return sqrtf(x*x+y*y);
}

float Vec2::sqrMagnitude() const
{
	return x*x+y*y;
}

Vec2 Vec2::normalize() const
{
	float magnitude = this->magnitude();
	return Vec2(x/ magnitude, y / magnitude);
}

Vec2 Vec2::rotate(const float degrees) const
{
	const double PI = 3.14159265358979323846;
	const double degToRad = PI / 180;
	const float xCos = (float)cos(degToRad * (double)degrees);
	const float ySin = (float)sin(degToRad * (double)degrees);

	return Vec2(xCos * x - ySin * y, ySin * x + xCos * y);
}

Vec2 Vec2::perpendicular() const
{
	return this->rotate(90);
}

std::string Vec2::toString() const
{
	return std::string("x: " + std::to_string(x) + " y: " + std::to_string(y));
}

float Vec2::angle(const Vec2& v1, const Vec2& v2)
{
	return atan2f(v1.x * v2.y - v1.y*v2.x, v1.x*v2.x + v1.y*v2.y);
}
