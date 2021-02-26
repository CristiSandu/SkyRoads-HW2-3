#include "Ornament.h"

using namespace std;

Ornament::Ornament() {
	{
		piramida = new Mesh("piramida");
		vector<VertexFormat> vertices
		{
			VertexFormat(glm::vec3(0, 0, 0),
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(0,0)),//0
			VertexFormat(glm::vec3(4, 0, 0),
						glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						GREY,
						glm::vec2(1,0)),//1
			VertexFormat(glm::vec3(4, 0, 4),
						glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(0,0)),//2
			VertexFormat(glm::vec3(0, 0, 4),
						glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(0,0)),//3
			VertexFormat(glm::vec3(2, 4, 2),
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(0.5,1)),//4


			VertexFormat(glm::vec3(0, 0, 0),
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(0,0)),//5
			VertexFormat(glm::vec3(4, 0, 0),
						glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						GREY,
						glm::vec2(1,0)),//6
			VertexFormat(glm::vec3(4, 0, 4),
						glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(1,0)),//7
			VertexFormat(glm::vec3(0, 0, 4),
						glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(1,0)),//8
			VertexFormat(glm::vec3(2, 4, 2),
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(0.5,1)),//9

			VertexFormat(glm::vec3(2, 4, 2),
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(0.5,1)),//10

			VertexFormat(glm::vec3(2, 4, 2),
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 GREY,
						 glm::vec2(0.5,1)),//11
		};


		vector<unsigned short> indices =
		{
			4, 3, 0,	// indices for first triangle

			5, 9, 1,

			6,11, 7,
			2, 10,8
		};


		piramida->InitFromData(vertices, indices);
	}

	//some trys of objects 
	{
		tetraedru = new Mesh("tetraedru");
		vector<VertexFormat> vertices
		{
			VertexFormat(glm::vec3(0, 0, 0),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(0,0)),//0

			VertexFormat(glm::vec3(1, 0, 0),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(1,0)),//1

			VertexFormat(glm::vec3(0, 0, 1),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(0,1)),//2

			VertexFormat(glm::vec3(0, 1, 0),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(0,1)),//3

			VertexFormat(glm::vec3(0, 0, 0),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(0,0)),//4

			VertexFormat(glm::vec3(1, 0, 0),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(1,0)),//5

			VertexFormat(glm::vec3(0, 0, 1),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(1,0)),//6

			VertexFormat(glm::vec3(0, 1, 0),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(0,1)),//7

			VertexFormat(glm::vec3(0, 0, 0),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(0,0)),//8


			VertexFormat(glm::vec3(1, 0, 0),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(1,1)),//9

			VertexFormat(glm::vec3(0, 0, 1),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(0,0)),//10

			VertexFormat(glm::vec3(0, 1, 0),
						 GREY,
						 glm::vec3((rand() % 100) / 100.0, (rand() % 100) / 100.0, (rand() % 100) / 100.0),
						 glm::vec2(0.5,1)),//11
		};


		vector<unsigned short> indices =
		{
			0,1,2,
			3,4,5,
			7,8,6,
			11,9,10
		};


		tetraedru->InitFromData(vertices, indices);
	}

	{
		stylishPiramide = new Mesh("stylishPiramide");
		vector<VertexFormat> vertices
		{
			VertexFormat(glm::vec3(0, 0, 4)),//0
			VertexFormat(glm::vec3(4, 0, 4)),//1
			VertexFormat(glm::vec3(0, 4, 4)),//2
			VertexFormat(glm::vec3(4, 4, 4)),//3
			VertexFormat(glm::vec3(0, 0, 0)),//4
			VertexFormat(glm::vec3(4, 0, 0)),//5
			VertexFormat(glm::vec3(0, 4, 0)),//6
			VertexFormat(glm::vec3(4, 4, 0)),//7

			VertexFormat(glm::vec3(2, -2, 2)),//8
			VertexFormat(glm::vec3(6, 2, 2)),//9
			VertexFormat(glm::vec3(2, 2, 6)),//10
			VertexFormat(glm::vec3(-2, 2, 2)),//11
			VertexFormat(glm::vec3(2, 2, -2)),//12
			VertexFormat(glm::vec3(2, 6, 2)),//13
		};

		vector<unsigned short> indices =
		{

			0,1,2,
			1,3,2,
			2,3,7,
			2,7,6,
			1,7,3,
			1,5,7,
			6,7,4,
			7,5,4,
			0,4,1,
			1,4,5,
			2,6,4,
			0,2,4,
			4,11,6,
			6,11,2,
			2,11,0,
			0,11,4,
			4,12,5,
			5,12,7,
			7,12,6,
			6,12,4,
			4,8,5,
			5,8,1,
			1,8,0,
			0,8,4,
			4,5,1,
			1,9,5,
			5,9,7,
			7,9,3,
			3,9,1,
			1,10,0,
			0,10,2,
			2,10,3,
			3,10,1,
			1,3,2,
			2,13,6,
			6,13,7,
			7,13,3,
			3,13,2
		};
		

		stylishPiramide->InitFromData(vertices, indices);
	}
	// --

	{
		skull = new Mesh("skull");
		skull->LoadMesh(RESOURCE_PATH::MODELS + "Primitives", "skull.obj");
	}
}


Ornament::~Ornament() {
	delete piramida;
	delete stylishPiramide;
}

Mesh* Ornament::GetPiramide() {
	return piramida;
}

Mesh* Ornament::GetPiramideStyle() {
	return skull;
}