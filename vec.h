#pragma once
#include <string>

class Vec2;

class Vec3 {
public:
	Vec3();
	Vec3(const float x, const float y, const float z);
	Vec3(const int x, const int y, const int z);
	Vec3(const double x, const double y, const double z);
	Vec3(const Vec2& v);
	Vec3(const Vec2& v, const float z);
	Vec3(const Vec2& v, const int z);
	Vec3(const Vec2& v, const double z);

	Vec3 operator*(const Vec3& v)const;

	Vec3 operator*(const float scalar)const;
	void operator*=(const float scalar);

	Vec3 operator*(const int scalar)const;
	void operator*=(const int scalar);

	Vec3 operator*(const double scalar)const;
	void operator*=(const double scalar);

	Vec3 operator/(const float scalar)const;
	void operator/=(const float scalar);

	Vec3 operator/(const int scalar)const;
	void operator/=(const int scalar);

	Vec3 operator/(const double scalar)const;
	void operator/=(const double scalar);

	Vec3 operator+(const Vec3& v)const;
	void operator+=(const Vec3& v);

	Vec3 operator-() const;

	Vec3 operator+() const;

	Vec3 operator-(const Vec3& v)const;
	void operator-=(const Vec3& v);

	bool operator==(const Vec3& v) const;
	bool operator!=(const Vec3& v) const;

	float operator[](const unsigned int index)const;

	float magnitude()const;
	float sqrMagnitude()const;
	Vec3 normalize()const;

	Vec3 rotate(const float degrees)const;

	Vec3 cross() const;
	std::string toString() const;

	union {
		float xyz[3];
		struct {
			float x, y,z;
		};
	};

	static float angle(const Vec3& v1, const Vec3& v2);
	static Vec3 UP;
	static Vec3 LEFT;
};

class Vec2 {
public:
	Vec2();
	Vec2(const float x, const float y);
	Vec2(const int x, const int y);
	Vec2(const double x, const double y);
	Vec2(const Vec3& v);

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

