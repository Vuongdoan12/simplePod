/**********************************************************************
 *
 * GEOS - Geometry Engine Open Source
 * http://geos.osgeo.org
 *
 * Copyright (C) 2006 Refractions Research Inc.
 *
 * This is free software; you can redistribute and/or modify it under
 * the terms of the GNU Lesser General Public Licence as published
 * by the Free Software Foundation.
 * See the COPYING file for more information.
 *
 **********************************************************************
 *
 * Last port: operation/relate/EdgeEndBundleStar.java rev. 1.13 (JTS-1.10)
 *
 **********************************************************************/

#pragma once

#include <export.h>

#include <geos/geomgraph/EdgeEndStar.h> // for EdgeEndBundleStar inheritance

// Forward declarations
namespace geos {
namespace geom {
class IntersectionMatrix;
}
namespace geomgraph {
class EdgeEnd;
}
}


namespace geos {
namespace operation { // geos::operation
namespace relate { // geos::operation::relate

/** \brief
 * An ordered list of EdgeEndBundle objects around a RelateNode.
 *
 * They are maintained in CCW order (starting with the positive x-axis)
 * around the node
 * for efficient lookup and topology building.
 */
class GEOS_DLL EdgeEndBundleStar: public geomgraph::EdgeEndStar {
public:

    /// Creates a new empty EdgeEndBundleStar
    EdgeEndBundleStar() {}

    ~EdgeEndBundleStar() override;
    void insert(geomgraph::EdgeEnd* e) override;

    /**
     * Update the IM with the contribution for the EdgeStubs around the node.
     */
    void updateIM(geom::IntersectionMatrix& im);
};


} // namespace geos:operation:relate
} // namespace geos:operation
} // namespace geos
