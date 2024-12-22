#pragma once

namespace geometry {
	enum AXES {
		X = 0u,
		Y = 1u,
		Z = 2u
	};

	enum class SHAPE_TYPE {
		NONE,
		RECTANGLE,
		CIRCLE,
		TRIANGLE,
		SPHERE,
		PYRAMID
	};


	template<std::size_t Dim>
	class vector {
	public:
		vector(float x = 0u, float y = 0u) {
			m_v[0] = x;
			m_v[1] = y;
		}
		inline float get_x() const { return m_v[0]; }
		inline float get_y() const { return m_v[1]; }
		inline float& operator[](const AXES a) { return m_v[a]; }
	private:
		float m_v[Dim];
	};

	class shape {};

	class rectangle : public shape {
	public:
		rectangle(const float x, const float y, const float w, const float h) :
			m_x(x), m_y(y), m_w(w), m_h(h) {};

		// setter
		inline void set_x(const float x) { m_x = x; };
		inline void set_y(const float y) { m_y = y; };
		inline void set_w(const float w) { m_w = w; };
		inline void set_h(const float h) { m_h = h; };
		// getters
		inline float get_x() { return m_x; };
		inline float get_y() { return m_y; };
		inline float get_w() { return m_w; };
		inline float get_h() { return m_h; };
	private:
		float m_x{};
		float m_y{};
		float m_w{};
		float m_h{};
	};

	class circle : public shape {
	public:
		circle(const float x, const float y) : m_x(x), m_y(y) {}
	private:
		float m_x;
		float m_y;
	};
}
