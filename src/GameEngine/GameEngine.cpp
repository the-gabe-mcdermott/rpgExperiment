#include "GameEngine.h"


GameEngine::GameEngine()
{
    m_numPlays = 0;
}

bool GameEngine::Start()
{
    m_numPlays++;

    return true;
}

GameEngine::~GameEngine()
{
    m_numPlays = 0;
}

