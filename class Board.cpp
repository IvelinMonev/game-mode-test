// Define the the Dimention of the board and bricks

#define BOARD_WIDTH 12
#define BOARD_HEIGHT 12
#define BOARD_BRWIDTH 64
#define BOARD_BRHEIGHT 24

// (...)

class Board : public Entity {
public:
	Board(SDL_Renderer renderer);
	~Board();

	void Update(float delta);
	void Render(float delta);
	void CreateLevel();

	float brockoffsetx, brickoffsety;

	//Define the two dimention array of bricks
	Brick bricks[BOARD_WIDTH][BOARD_HEIGHT];

private:
	SDL_Texture* bricktexture;
	SDL_Texture* sidetexture;
};`	
 