#pragma once

#include "../utils/GameContext.h"
#include "../utils/GameState.h"
#include "../utils/Enums.h"
#include "BaseState.h"

char const level_Caption_01[] PROGMEM = "Easy:";
char const level_Caption_02[] PROGMEM = "Normal:";
char const level_Caption_03[] PROGMEM = "Hard:";
char const level_Caption_04[] PROGMEM = "Hell:";

char const * const level_Captions[] = {
	level_Caption_01,
	level_Caption_02,
	level_Caption_03,
	level_Caption_04,
};

class GameOverState : public BaseState {
  
  enum class ViewState : uint8_t {
    PlayerDead,
    Winner,
    HighScore
  };

  private:

    ViewState viewState = ViewState::PlayerDead;
    uint8_t score = 123;
    uint8_t highScore = 456;

  public:

    void activate(StateMachine & machine) override;
    void update(StateMachine & machine) override;
    void render(StateMachine & machine) override;
    void renderTwoDigitNumeric(uint8_t val);
    void renderThreeDigitNumeric(uint8_t val);
    void initEEPROM(bool forceClear);

};