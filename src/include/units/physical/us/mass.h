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

#include <units/physical/si/mass.h>

namespace units::us {

// https://en.wikipedia.org/wiki/United_States_customary_units#Units_of_weight_and_mass
// https://www.nist.gov/pml/special-publication-811/nist-guide-si-appendix-b-conversion-factors#B6
//struct grain : named_scaled_unit<grain, "gr(us)", no_prefix, ratio<1'200, 3'937>, si::metre> {};
struct dram : named_scaled_unit<dram, "dr(us)", no_prefix, ratio<17'718'451'953'125, 10'000'000'000'000>, si::gram> {};
struct ounce : named_scaled_unit<ounce, "oz(us)", no_prefix, ratio<16>, dram> {};
struct pound : named_scaled_unit<pound, "lb(us)", no_prefix, ratio<16>, ounce> {};
struct hundredweight : named_scaled_unit<hundredweight, "cwt(us)", no_prefix, ratio<100>, pound> {};
struct long_hundredweight : named_scaled_unit<long_hundredweight, "long_cwt(us)", no_prefix, ratio<112>, pound> {};
struct short_ton : named_scaled_unit<short_ton, "short_ton(us)", no_prefix, ratio<20>, hundredweight> {};
struct long_ton : named_scaled_unit<long_ton, "long_ton(us)", no_prefix, ratio<20>, long_hundredweight> {};

inline namespace literals {

// oz
constexpr auto operator"" oz_us(unsigned long long l) { return si::mass<units::us::ounce, std::int64_t>(l); }
constexpr auto operator"" oz_us(long double l) { return si::mass<units::us::ounce, long double>(l); }

// lb
constexpr auto operator"" pound_us(unsigned long long l) { return si::mass<units::us::pound, std::int64_t>(l); }
constexpr auto operator"" pound_us(long double l) { return si::mass<units::us::pound, long double>(l); }

// short ton
constexpr auto operator"" ton_us(unsigned long long l) { return si::mass<units::us::short_ton, std::int64_t>(l); }
constexpr auto operator"" ton_us(long double l) { return si::mass<units::us::short_ton, long double>(l); }

}  // namespace literals

}  // namespace units::us
