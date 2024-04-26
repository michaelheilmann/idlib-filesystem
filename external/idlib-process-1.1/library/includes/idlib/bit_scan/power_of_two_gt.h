/*
  IdLib Bit Scan
  Copyright (C) 2024 Michael Heilmann. All rights reserved.

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#if !defined(IDLIB_BIT_SCAN_POWER_OF_TWO_GT_H_INCLUDED)
#define IDLIB_BIT_SCAN_POWER_OF_TWO_GT_H_INCLUDED

#include "idlib/bit_scan/configure.h"
#include <inttypes.h>

/// @brief Get the power of two greater than a value.
/// @return
/// #IDLIB_SUCCESS on success.
/// #IDLIB_OUT_OF_RANGE if that power of two is not representable by the specified type.
/// @success
/// <code>*RETURN</code> was assigned the least power of two greater than @a x.
int
idlib_power_of_two_gt_u8
  (
    uint8_t* RETURN,
    uint8_t x
  );

int
idlib_power_of_two_gt_u16
  (
    uint8_t* RETURN,
    uint8_t x
  );

int
idlib_next_power_of_two_gt_u32
  (
    uint32_t* RETURN,
    uint32_t x
  );

int
idlib_next_power_of_two_gt_u64
  (
    uint64_t* RETURN,
    uint64_t x
  );

#endif // IDLIB_BIT_SCAN_POWER_OF_TWO_GT_H_INCLUDED
