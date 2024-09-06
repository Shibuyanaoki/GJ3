#pragma once

#include "Audio.h"
#include "DirectXCommon.h"
#include "Input.h"
#include "TextureManager.h"
#include "ViewProjection.h"
#include "Model.h"
#include "Sprite.h"

class Player
{

public:
	
	void Initialize();

	void Update();

	void Draw();

private:
	DirectXCommon* dxCommon_ = nullptr;
	Input* input_ = nullptr;
	Audio* audio_ = nullptr;

	Vector2 pos;

	const float g = 0.8;

	Sprite* playerSprite = nullptr;

};

