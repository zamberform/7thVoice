#include "GameLayer.h"

USING_NS_CC;

//シーン生成
Scene* GameLayer::createScene()
{
	auto scene = Scene::create();		//シーン生成
	auto layer = GameLayer::create();   //GameLayerクラスのレイヤーを生成
	scene->addChild(layer);				//シーンに対してレイヤーを追加

	return scene;
}

//初期化
bool GameLayer::init()
{
	if (!Layer::init())
		return false;
	
	return true;
}
