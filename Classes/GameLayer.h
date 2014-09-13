#ifndef GAMELAYER_H
#define GAMELAYER_H

#include "cocos2d.h"

class GameLayer : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();
	
	virtual bool init();

	CREATE_FUNC(GameLayer);

};
#endif //end of GameLayer