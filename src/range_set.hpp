/*
 * Copyright (c) 2017 Andrew Kelley
 *
 * This file is part of zig, which is MIT licensed.
 * See http://opensource.org/licenses/MIT
 */

#ifndef ZIG_RANGE_SET_HPP
#define ZIG_RANGE_SET_HPP

#include "all_types.hpp"

struct Range {
    BigNum first;
    BigNum last;
};

struct RangeWithSrc {
    Range range;
    AstNode *source_node;
};

struct RangeSet {
    ZigList<RangeWithSrc> src_range_list;
};

AstNode *rangeset_add_range(RangeSet *rs, BigNum *first, BigNum *last, AstNode *source_node);
bool rangeset_spans(RangeSet *rs, BigNum *first, BigNum *last);

#endif
