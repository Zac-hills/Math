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

Vec2::Vec2(const Vec3& v) :x(v.x), y(v.y)
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

Vec3::Vec3():x(0.0f),y(0.0f),z(0.0f)
{
}

Vec3::Vec3(const float x, const float y, const float z) : x(x), y(y), z(z)
{
}

Vec3::Vec3(const int x, const int y, const int z) : x((float)x), y((float)y), z((float)z)
{
}

Vec3::Vec3(const double x, const double y, const double z): x((float)x), y((float)y), z((float)z)
{
}

Vec3::Vec3(const Vec2& v) : x(v.x), y(v.y), z(0.0f)
{
}

Vec3::Vec3(const Vec2& v, const float z) : x(v.x), y(v.y), z(z)
{
}

Vec3::Vec3(const Vec2& v, const int z) : x(v.x), y(v.y), z((float)z)
{
}

Vec3::Vec3(const Vec2& v, const double z) : x(v.x), y(v.y), z((float)z)
{
}

Vec3 Vec3::operator*(const Vec3& v) const
{
	return Vec3();
}

Vec3 Vec3::operator*(const float scalar) const
{
	return Vec3(x*scalar, y*scalar, z*scalar);
}

void Vec3::operator*=(const float scalar)
{
	x *= scalar;
	y *= scalar;
	z *= scalar;
}

Vec3 Vec3::operator*(const int scalar) const
{
	float tmp = (float)scalar;
	return Vec3(tmp*x, tmp*y, tmp*z);
}

void Vec3::operator*=(const int scalar)
{
	float tmp = (float)scalar;
	x *= tmp;
	y *= tmp;
	z *= tmp;
}

Vec3 Vec3::operator*(const double scalar) const
{
	float tmp = (float)scalar;
	return Vec3(x*tmp, y*tmp, z*tmp);
}

void Vec3::operator*=(const double scalar)
{
	const float tmp = (float)scalar;
	x *= tmp;
	y *= tmp;
	z *= tmp;
}

Vec3 Vec3::operator/(const float scalar) const
{
	return Vec3(x/scalar, y/scalar, z/scalar);
}

void Vec3::operator/=(const float scalar)
{
	x /=scalar;
	y /=scalar;
	z /=scalar;
}

Vec3 Vec3::operator/(const int scalar) const
{
	const float tmp = (float)scalar;
	return Vec3(x/tmp,y/tmp,z/tmp);
}

void Vec3::operator/=(const int scalar)
{
	const float tmp = (float)scalar;
	x /= tmp;
	y /= tmp;
	z /= tmp;
}

Vec3 Vec3::operator/(const double scalar) const
{
	float tmp = (float)scalar;
	return Vec3(x/tmp,y/tmp,z/tmp);
}

void Vec3::operator/=(const double scalar)
{
	const float tmp = (float)scalar;
	x /= tmp;
	y /= tmp;
	z /= tmp;
}

Vec3 Vec3::operator+(const Vec3& v) const
{
	return Vec3(x+v.x,y+v.y,z+v.z);
}

void Vec3::operator+=(const Vec3& v)
{
	x += v.x;
	y += v.y;
	z += v.z;
}

Vec3 Vec3::operator-() const
{
	return Vec3(-x,-y,-z);
}

Vec3 Vec3::operator+() const
{
	return Vec3(abs(x),abs(y),abs(z));
}

Vec3 Vec3::operator-(const Vec3& v) const
{
	return Vec3(x-v.x,y-v.y,z-v.z);
}

void Vec3::operator-=(const Vec3& v)
{
	x -= v.x;
	y -= v.y;
	z -= v.z;
}

bool Vec3::operator==(const Vec3& v) const
{
	return (x==v.x && y==v.y && z==v.z);
}

bool Vec3::operator!=(const Vec3& v) const
{
	return (x!=v.x || y!=v.y || z!=v.z);
}

float Vec3::operator[](const unsigned int index) const
{
	return xyz[index];
}

float Vec3::magnitude() const
{
	return sqrtf(x*x+y*y+z*z);
}

float Vec3::sqrMagnitude() const
{
	return x*x+y*y+z*z;
}

Vec3 Vec3::normalize() const
{
	const float mag = magnitude();
	return Vec3(x/mag,y/mag,z/mag);
}

Vec3 Vec3::rotate(const float degrees) const
{
	return Vec3();
}

Vec3 Vec3::cross() const
{
	return Vec3();
}

std::string Vec3::toString() const
{
	return std::string("x: " + std::to_string(x) + " y: " + std::to_string(y) + " z: " + std::to_string(z));
}

float Vec3::angle(const Vec3& v1, const Vec3& v2)
{
	return 0.0f;
}
