
// The MIT License (MIT)
//
// Copyright (c) 2018 Mateusz Pusz
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include <units/physical/si/length.h>

namespace units::iau {

// https://en.wikipedia.org/wiki/Light-year
struct light_year : named_scaled_unit<light_year, "ly", no_prefix, ratio<9460730472580800>, si::metre> {};

// https://en.wikipedia.org/wiki/Parsec
struct parsec : named_scaled_unit<parsec, "pc", si::prefix, ratio<30'856'775'814'913'673>, si::metre> {};

// https://en.wikipedia.org/wiki/Angstrom
struct angstrom : named_scaled_unit<angstrom, "angstrom", no_prefix, ratio<1, 1, -10>, si::metre> {};

inline namespace literals {

constexpr auto operator"" ly(unsigned long long l) { return si::length<light_year, std::int64_t>(l); }
constexpr auto operator"" ly(long double l) { return si::length<light_year, long double>(l); }

constexpr auto operator"" pc(unsigned long long l) { return si::length<parsec, std::int64_t>(l); }
constexpr auto operator"" pc(long double l) { return si::length<parsec, long double>(l); }

constexpr auto operator"" angstrom(unsigned long long l) { return si::length<angstrom, std::int64_t>(l); }
constexpr auto operator"" angstrom(long double l) { return si::length<angstrom, long double>(l); }

}  // namespace literals

}  // namespace units::iau
