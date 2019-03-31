#ifndef _CPPUTIL_BASIC_MATH_EULER_YXZ_H_
#define _CPPUTIL_BASIC_MATH_EULER_YXZ_H_

#include <CppUtil/Basic/Val3.h>

namespace CppUtil {
	namespace Basic {
		template <typename T>
		class Quat;

		template <typename T>
		class EulerYXZ : public Val3<T> {
		public:
			using Val3::Val3;

		public:
			const Quat<T> ToQuat() const {
				return Quat<T>::Rotate(*this);
			}
		};

		using EulerYXZf = EulerYXZ<float>;
	}
}

#endif // !_CPPUTIL_BASIC_MATH_EULER_YXZ_H_