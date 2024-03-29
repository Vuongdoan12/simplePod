/**********************************************************************
 *
 * GEOS - Geometry Engine Open Source
 * http://geos.osgeo.org
 *
 * Copyright (C) 2005-2006 Refractions Research Inc.
 * Copyright (C) 2001-2002 Vivid Solutions Inc.
 *
 * This is free software; you can redistribute and/or modify it under
 * the terms of the GNU Lesser General Public Licence as published
 * by the Free Software Foundation.
 * See the COPYING file for more information.
 *
 **********************************************************************/

#pragma once

#include <export.h>
#include <geos/algorithm/PointInRing.h> // for inheritance

// Forward declarations
namespace geos {
namespace geom {
class Coordinate;
class LinearRing;
class CoordinateSequence;
}
}

namespace geos {
namespace algorithm { // geos::algorithm

class GEOS_DLL SimplePointInRing: public PointInRing {
public:
    SimplePointInRing(geom::LinearRing* ring);
    ~SimplePointInRing() override = default;
    bool isInside(const geom::Coordinate& pt) override;
private:
    const geom::CoordinateSequence* pts;
};

} // namespace geos::algorithm
} // namespace geos

