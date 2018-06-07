#pragma once

#include "last_getopt_support.h"

#include <util/string/split.h>
#include <util/system/compiler.h>

namespace NLastGetopt {
    /// Handler to split option value by delimiter into a target container.
    template <class Container>
    struct TOptSplitHandler;

    /// Handler to split option value by delimiter into a target container and allow ranges.
    template <class Container>
    struct TOptRangeSplitHandler;

    /// Handler to parse key-value pairs (default delimiter is '=') and apply user-supplied handler to each pair
    template <class TpFunc>
    struct TOptKVHandler;

    Y_NO_RETURN void PrintUsageAndExit(const TOptsParser* parser);
    Y_NO_RETURN void PrintVersionAndExit(const TOptsParser* parser);
}
