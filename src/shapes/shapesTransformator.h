//
//  shapesTransformator.h
//  karmaMapper
//
//  Created by Daan on 07/09/15.
//
//
#ifdef KM_EDITOR_APP

#pragma once
#include "ofMain.h"
#include "shapes/basicPoint.h"
#include "basicShape.h"

// utility class for transforming shape groups
class shapesTransformator {
public:
	shapesTransformator(list<basicShape*>& _shapes);
	~shapesTransformator();
	
	void setShapes( list<basicShape*>& _shapes );
	void onShapeSelectionUpdated( list<basicShape *>& _shapes );
	void drawHandles();
	
	void calculateMultiShapesContainer();
	void syncMultiSelectionHandlers();
	list<basicPoint> multiShapeHandlers;
	
	bool interceptMousePress( ofMouseEventArgs& e );
	
private:
	list<basicShape*>& shapesSelection;
	ofRectangle container, containerCached;
	list<basicPoint> containerHandles;
	basicPoint centerHandle;
};

class callBackPoint : public basicPoint {
public:
	callBackPoint();
	~callBackPoint();
	
	
};

#endif // KM_EDITOR_APP
