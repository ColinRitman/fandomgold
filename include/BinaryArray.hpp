// Copyright (c) 2012-2018 The CryptoNote developers
// Copyright (c) 2016-2019 The Karbowanec developers
// Copyright (c) 2018-2019 Conceal Network & Conceal Devs
// Copyright (c) 2018-2021 Fandom Gold Society
//
// This file is part of Fango.
//
// Fango is open-source software: you can redistribute and/or
// modify it under the terms of the MIT/X11 software license.
// Fango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// You should've received a copy of MIT/X11 software license
// along with Fango. See LICENSE file for more details.
// Or use http://www.opensource.org/licenses/mit-license.php

#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>
#include <CryptoNote.h>

using namespace CryptoNote;

namespace Common {

template<class It>
inline BinaryArray::iterator append(BinaryArray &ba, It be, It en) {
	return ba.insert(ba.end(), be, en);
}
inline BinaryArray::iterator append(BinaryArray &ba, size_t add, BinaryArray::value_type va) {
	return ba.insert(ba.end(), add, va);
}
inline BinaryArray::iterator append(BinaryArray &ba, const BinaryArray &other) {
	return ba.insert(ba.end(), other.begin(), other.end());
}

} // namespace Common
