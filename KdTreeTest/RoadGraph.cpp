#include "RoadGraph.h"

RoadGraph::RoadGraph() {
}

RoadGraph::~RoadGraph() {
}

void RoadGraph::clear() {
	graph.clear();
}

RoadVertexDesc RoadGraph::addVertex(RoadVertexPtr v) {
	RoadVertexDesc desc = boost::add_vertex(graph);
	graph[desc] = v;

	return desc;
}

RoadEdgeDesc RoadGraph::addEdge(RoadVertexDesc src, RoadVertexDesc tgt, RoadEdgePtr e) {
	std::pair<RoadEdgeDesc, bool> edge_pair = boost::add_edge(src, tgt, graph);
	graph[edge_pair.first] = e;

	kdTree.insert(edge_pair.first, e->polyline);

	return edge_pair.first;
}
