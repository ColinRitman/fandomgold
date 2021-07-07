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

#include <sstream>

namespace CryptoNote {

class IStreamSerializable {
public:
  virtual void save(std::ostream& os) = 0;
  virtual void load(std::istream& in) = 0;
};

}
