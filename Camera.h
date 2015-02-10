/*
* From: https://classes.soe.ucsc.edu/cmps160/Spring13/projects/mesajaco/CMPS160_Final/code/Voxelish/Voxelish/Camera.h
*/

#ifndef CAMERA_H
#define CAMERA_H

#include <SFML/Window.hpp>
#include "Display.h"

#define M_E         2.71828182845904523536028747135266250   /* e */
#define M_LOG2E     1.44269504088896340735992468100189214   /* log 2e */
#define M_LOG10E    0.434294481903251827651128918916605082  /* log 10e */
#define M_LN2       0.693147180559945309417232121458176568  /* log e2 */
#define M_LN10      2.30258509299404568401799145468436421   /* log e10 */
#define M_PI        3.14159265358979323846264338327950288   /* pi */
#define M_PI_2      1.57079632679489661923132169163975144   /* pi/2 */
#define M_PI_4      0.785398163397448309615660845819875721  /* pi/4 */
#define M_1_PI      0.318309886183790671537767526745028724  /* 1/pi */
#define M_2_PI      0.636619772367581343075535053490057448  /* 2/pi */
#define M_2_SQRTPI  1.12837916709551257389615890312154517   /* 2/sqrt(pi) */
#define M_SQRT2     1.41421356237309504880168872420969808   /* sqrt(2) */
#define M_SQRT1_2   0.707106781186547524400844362104849039  /* 1/sqrt(2) */

class Camera
{
public:
	Camera(sf::Window*);
	~Camera(void);
	void Update(sf::Time);
	void SetViewportSize(int w, int h);
	glm::vec3 Position(void);
private:
	void handleInput(void);
	glm::mat4 viewMatrix(void);
	glm::mat4 projectionMatrix(void);
	glm::vec3 lookAt(void);
	//Fields
	int width, height;
	glm::vec2 angle;
	glm::vec3 position;
	glm::vec3 velocity;
	glm::vec3 accel;
	sf::Window* window;
};

#endif