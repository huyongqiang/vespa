// Copyright 2017 Yahoo Holdings. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
#include <vespa/searchlib/queryeval/isourceselector.h>

namespace search {
namespace queryeval {

ISourceSelector::ISourceSelector(Source defaultSource) :
    _baseId(0),
    _defaultSource(defaultSource)
{
    assert(defaultSource < SOURCE_LIMIT);
}

}

}
