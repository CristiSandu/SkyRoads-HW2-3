#pragma once

/*#include <vector>
#include <iostream>
#include <Component/SimpleScene.h>
#include <Laboratoare\Tema3\LabCamera.h>
#include <Laboratoare\Tema3\Transform3D.h>
#include <vector>
#include <cstdio>
#include <ctime>
#include "Player.h"
#include <cmath>
#include "Platform.h"
#include <Component/SimpleScene.h>
#include <Core/GPU/Mesh.h>
#include <string>*/
#include <Laboratoare/Tema2/Tema2.h>
#include "Ornament.h"

#define Z_FAR		(200.f)
#define Z_NEAR		(.01f)
#define ANGLE_SPEEDUP		(100.f)


class Tema3 : public SimpleScene
{
public:
	Tema3();
	~Tema3();
	void Init();
	std::vector<glm::vec4> platformCoord;
	std::vector<glm::vec4> ornamentCoord;
	std::vector<glm::vec3> platformColors;
	std::vector<glm::vec3> platformsColors;
	std::vector<glm::vec4> powerUps;
	std::vector<glm::vec4> obsacolsVect;

	std::vector<int> indexPowerUp;
	std::vector<float> rotationPowerUp;


	

	glm::vec3 RED = glm::vec3(0.9, .04, .29); //red
	glm::vec3 YELLOW = glm::vec3(.9, .9, .5); //yellow
	glm::vec3 ORANGE = glm::vec3(1, .56, .3); //orange
	glm::vec3 GREEN = glm::vec3(.4, .9, .10); //green
	glm::vec3 BLUE = glm::vec3(0, 0, .9); //blue
	glm::vec3 VIOLET = glm::vec3(.25, .01, .5); //violet 
	glm::vec3 GREY = glm::vec3(.5, .5, .5); //grey
	
	glm::vec4 combustibilPos = glm::vec4(1.15, 3.4, 2.1, 15);


	int powerBarAngel = 15;
	///glm::vec4(1.05, 3, 2.1,15)
	//glm::vec4(.01, .01, 2.1,15)
	GLfloat xCameraCoord = 0, yCameraCoord = 0;
	glm::vec4 playerCoord = glm::vec4(2, 2.5, 0, 0);
	GLfloat speed = .01f;
	int blockOrange = 0;
	int firstLook = 1;
	int start = 0;
	int sendIndex = 1;
	int nr = 0;
	int onlySpot = 0;
	int onlyPunct = 0;

	int isBack = 1;
	int isColide = 0, isColidePowerUp = 0, isColideObstacle = 0;
	int ENDGAME = 0;
	int colorposition = -5, onRedPort = 0;
	GLfloat gasVall = 37.5;
	float rotateAngle = .00f;
	double duration = 0, score = 0;
	std::clock_t startL, startM, startR, startPowerUp;
	float spinVar = 1;
	int idexPowerUp = 0,indexObsatcoles = 0;
	float endSocre = 0;
	int controlDeformationVar = 0;
	int prinScore = 0;


private:
	void FrameStart();
	void Update(float deltaTimeSeconds);
	GLfloat max_min(GLfloat a, GLfloat b, int c);
	bool IntersectionCheck();
	void RanderOrnament(float deltaTimeSeconds);
	void RanderScene(float deltaTimeSeconds);
	void RanderPlayer(float deltaTimeSeconds);
	void FrameEnd();
	Mesh* CreateMesh(const char* name, const std::vector<VertexFormat>& vertices, const std::vector<unsigned short>& indices);
	void RenderMesh(Mesh* mesh, int name_mesh, Shader* shader, const glm::mat4& modelMatrix, const glm::vec3& color);
	void RenderSimpleMesh(Mesh* mesh, Shader* shader, const glm::mat4& modelMatrix, Texture2D* texture1, Texture2D* texture2);
	//void RenderMesh(Mesh* mesh, string name_mesh, Shader* shader, const glm::mat4& modelMatrix, const glm::vec3& color);
	//void RenderMesh(Mesh* mesh, Shader* shader, const glm::mat4& modelMatrix, const glm::vec3& color);
	void OnInputUpdate(float deltaTime, int mods);
	void OnKeyPress(int key, int mods);
	void OnKeyRelease(int key, int mods);
	void OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY);
	void OnMouseBtnPress(int mouseX, int mouseY, int button, int mods);
	void OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods);
	void OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY);
	void OnWindowResize(int width, int height);
	std::unordered_map<std::string, Texture2D*> mapTextures;
	void RanderPowerUp(float deltaTimeSeconds);
	void RenderMesh(Mesh* mesh, Shader* shader, const glm::mat4& modelMatrix, const glm::vec3& color, Texture2D* texture1, Texture2D* texture2);
	void RanderBackground(float deltaTimeSeconds);

	glm::vec3 lightPosition, lightPosition_spot;
	glm::vec3 lightDirection, lightDirection_spot;
	glm::vec3 lightdirection_spot_1, lightposition_spot_1;
	glm::vec3 lightdirection_spot_2, lightposition_spot_2;
	glm::vec3 lightdirection_spot_3, lightposition_spot_3;
	glm::vec3 lightdirection_spot_4, lightposition_spot_4;

	unsigned int materialShininess;
	float materialKd;
	float materialKs;
	GLfloat cutoffAngle;

	GLfloat angleOX, angleOY;
protected:
	CameraTema::Camera* camera;
	bool renderCameraTarget;
	glm::mat4 projectionMatrix;
	glm::mat4 modelMatrix;
	glm::mat4 modelMatrixObs;

	bool projectionType;
	GLfloat right;
	GLfloat left;
	GLfloat bottom;
	GLfloat top;
	GLfloat fov;
	GLenum polygonMode;
	Player* player;
	Platform* platform;
	CombustibilBar* combustibilBar;
	Ornament* ornament;
};
