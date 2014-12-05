#pragma once

#include <boost/shared_ptr.hpp>
#include "RoadGraph.h"

class KdTreeNode {
public:
	KdTreeNode() {}
	~KdTreeNode() {}
};

typedef boost::shared_ptr<KdTreeNode> KdTreeNodePtr;

class KdTree {
public:
	KdTreeNodePtr root;

public:
	KdTree() {}
	~KdTree() {}

	void insert(RoadEdgeDesc e, std::vector<QVector2D> &polyline);
};

