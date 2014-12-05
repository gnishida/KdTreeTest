#include "RoadEdge.h"

RoadEdge::RoadEdge(unsigned int type, unsigned int lanes, bool oneWay, bool link, bool roundabout) {
	this->type = type;
	this->lanes = lanes;
	this->oneWay = oneWay;
	this->link = link;
	this->roundabout = roundabout;

	// initialize other members
	this->valid = true;
}

RoadEdge::~RoadEdge() {
}

float RoadEdge::getLength() {
	float length = 0.0f;
	for (int i = 0; i < polyline.size() - 1; i++) {
		length += (polyline[i + 1] - polyline[i]).length();
	}

	return length;
}
