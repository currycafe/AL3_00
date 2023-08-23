#pragma once
#include "Model.h"
#include "Vector3.h"
#include "ViewProjection.h"
#include "WorldTransform.h"
class EnemyBullet
{
public:
	void Initialize(Model* model, const Vector3& position, const Vector3& velocity);
	void Update();
	void Draw(ViewProjection& viewProjection);
	bool IsDead()const { return isDead_; }
	void OnCollision();
	Vector3 GetWorldPosition();
	float GetRadius() { return radius_; }



private:

	WorldTransform worldTransform_;
	Model* model_;
	uint32_t texturehandle_;
	Vector3 velocity_;
	static const int32_t kLifeTime = 60 * 5;
	int32_t deathTimer_ = kLifeTime;
	bool isDead_ = false;
	float radius_ = 1.0f;

};
