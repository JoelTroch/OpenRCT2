/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../../RideData.h"
#include "../../Track.h"

// clang-format off
constexpr const RideTypeDescriptor CompactInvertedCoasterRTD =
{
    SET_FIELD(EnabledTrackPieces, (1ULL << TRACK_STRAIGHT) | (1ULL << TRACK_STATION_END) | (1ULL << TRACK_LIFT_HILL) | (1ULL << TRACK_FLAT_ROLL_BANKING) | (1ULL << TRACK_VERTICAL_LOOP) | (1ULL << TRACK_SLOPE) | (1ULL << TRACK_SLOPE_STEEP) | (1ULL << TRACK_SLOPE_CURVE) | (1ULL << TRACK_SLOPE_CURVE_STEEP) | (1ULL << TRACK_S_BEND) | (1ULL << TRACK_CURVE_SMALL) | (1ULL << TRACK_CURVE) | (1ULL << TRACK_TWIST) | (1ULL << TRACK_HALF_LOOP) | (1ULL << TRACK_CORKSCREW) | (1ULL << TRACK_HELIX_LARGE) | (1ULL << TRACK_BRAKES) | (1ULL << TRACK_ON_RIDE_PHOTO) | (1ULL << TRACK_SLOPE_VERTICAL) | (1ULL << TRACK_BLOCK_BRAKES)),
    SET_FIELD(ExtraTrackPieces, 0),
    SET_FIELD(TrackPaintFunction, get_track_paint_function_compact_inverted_rc),
};
// clang-format on
