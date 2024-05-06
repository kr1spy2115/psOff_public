#pragma once

#include <functional>
#include <string>

class GameMenu {
  struct MenuButton {
    std::string               title;
    std::function<void(void)> func;
  };

  enum class MenuState {
    MAIN,
    TROPHIES,
  };

  struct Trophy {
    int32_t     id;
    std::string title;
    std::string subtitle;
  };

  MenuState               m_state      = MenuState::MAIN;
  bool                    m_bShown     = false;
  std::vector<MenuButton> m_buttons    = {};
  std::vector<Trophy>     m_trophyList = {};

  void _DrawTrophiesFor(int32_t userId);

  public:
  GameMenu() = default;

  virtual ~GameMenu() = default;

  void toggle() { m_bShown = !m_bShown; };

  void _PushTrophy(int32_t trophyId, std::string& name, std::string& detail);

  void init();
  void draw();
  void switchTo(MenuState state);
};
