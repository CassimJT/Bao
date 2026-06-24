cmake_minimum_required(VERSION 3.16)

project(Bao VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Quick)

qt_standard_project_setup(REQUIRES 6.10)

# Content of downloaded design from Figma to Qt or similar
if (EXISTS "${CMAKE_CURRENT_LIST_DIR}/importedcontent/CMakeLists.txt")
    add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/importedcontent)
endif()

set(BAWO_ENGINE_SOURCES
    src/core/enums/MatchState.h
    src/core/enums/PlayerType.h
    src/core/enums/Direction.h
    src/core/enums/AIDifficulty.h
    src/core/enums/GamePhase.h
    src/core/enums/TournamentState.h
    src/core/enums/PurchaseType.h
    src/core/enums/GameType.h
    src/core/value_objects/Move.h
    src/core/value_objects/Move.cpp
    src/core/value_objects/MoveResult.h
    src/core/value_objects/MoveResult.cpp
    src/core/value_objects/MatchSettings.h
    src/core/value_objects/MatchSettings.cpp
    src/core/model/Pit.h
    src/core/model/Pit.cpp
    src/core/model/Board.h
    src/core/model/Board.cpp
    src/core/model/GameState.h
    src/core/model/GameState.cpp
    src/core/serialization/GameStateSerializer.h
    src/core/serialization/GameStateSerializer.cpp
    src/rules/RuleSet.h
    src/rules/RuleSet.cpp
    src/rules/HouseRuleSet.h
    src/rules/HouseRuleSet.cpp
    src/rules/FreeMatchingRuleSet.h
    src/rules/FreeMatchingRuleSet.cpp
    src/rules/PhaseTransitionRule.h
    src/rules/PhaseTransitionRule.cpp
    src/rules/TargRule.h
    src/rules/TargRule.cpp
    src/rules/BawoRulesEngine.h
    src/rules/BawoRulesEngine.cpp
    src/players/Player.h
    src/players/Player.cpp
    src/players/LocalPlayer.h
    src/players/LocalPlayer.cpp
    src/players/AIPlayer.h
    src/players/AIPlayer.cpp
    src/players/RemotePlayer.h
    src/players/RemotePlayer.cpp
    src/players/ai/BoardEvaluator.h
    src/players/ai/BoardEvaluator.cpp
    src/match/MatchController.h
    src/match/MatchController.cpp
    src/network/NetworkSession.h
    src/network/NetworkSession.cpp
    src/network/LANSession.h
    src/network/LANSession.cpp
    src/network/OnlineSession.h
    src/network/OnlineSession.cpp
    src/undo/UndoManager.h
    src/undo/UndoManager.cpp
    src/tournament/TournamentController.h
    src/tournament/TournamentController.cpp
    src/tournament/TournamentMatch.h
    src/tournament/TournamentMatch.cpp
    src/tournament/TournamentBracket.h
    src/tournament/TournamentBracket.cpp
    src/tournament/TournamentRules.h
    src/tournament/TournamentRules.cpp
    src/tournament/Team.h
    src/tournament/Team.cpp
    src/monetization/IAPManager.h
    src/monetization/IAPManager.cpp
    src/monetization/AdsManager.h
    src/monetization/AdsManager.cpp
    src/monetization/SeedStyle.h
    src/monetization/SeedStyle.cpp
    src/monetization/BoardStyle.h
    src/monetization/BoardStyle.cpp
    src/monetization/StyleManager.h
    src/monetization/StyleManager.cpp
    src/viewmodels/MatchViewModel.h
    src/viewmodels/MatchViewModel.cpp
    src/viewmodels/TournamentViewModel.h
    src/viewmodels/TournamentViewModel.cpp
    src/viewmodels/StoreViewModel.h
    src/viewmodels/StoreViewModel.cpp
    src/viewmodels/GameTypeSelectorViewModel.h
    src/viewmodels/GameTypeSelectorViewModel.cpp
)

add_library(BaoEngine STATIC ${BAWO_ENGINE_SOURCES}
    src/utils/appsettings.h
    src/utils/appsettings.cpp
    src/utils/helper.h
    src/utils/helper.cpp
)

target_include_directories(BaoEngine
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/src
)

target_link_libraries(BaoEngine
    PUBLIC Qt6::Core
)

qt_add_executable(appBao
    main.cpp
    resources.qrc
)

qt_add_qml_module(appBao
    URI Bao
    VERSION 1.0
    QML_FILES
        Main.qml
        RESOURCES
        QML_FILES
         ui/animations/Animations.qml
         ui/animations/SeedMoveAnimation.qml
         ui/animations/TransitionAnimations.qml
         ui/utils/Utils.js
         ui/utils/GameUtils.js
         ui/utils/BoardUtils.js
         ui/utils/AnimationUtils.js
         ui/app/MainStackView.qml
         ui/components/buttons/PrimaryButton.qml
         ui/components/buttons/SecondaryButton.qml
         ui/components/buttons/IconButton.qml
         ui/components/buttons/GameTypeButton.qml
         ui/components/dialogs/AlertDialog.qml
         ui/components/dialogs/ConfirmationDialog.qml
         ui/components/dialogs/LoadingDialog.qml
         ui/components/inputs/TextInput.qml
         ui/components/inputs/Dropdown.qml
         ui/components/indicators/Spinner.qml
         ui/components/indicators/StatusIndicator.qml
         ui/components/board/BoardRenderer.qml
         ui/components/board/PitRenderer.qml
         ui/components/board/SeedRenderer.qml
         ui/components/board/TrapRenderer.qml
         ui/features/home/pages/HomePage.qml
         ui/features/home/screens/HomeScreen.qml
         ui/features/home/components/MenuGrid.qml
         ui/features/home/components/MenuCard.qml
         ui/features/home/components/WelcomeHeader.qml
         ui/features/home/models/MenuItemModel.qml
         ui/features/home/delegates/MenuItemDelegate.qml
         ui/features/game_setup/pages/GameSetupPage.qml
         ui/features/game_setup/screens/GameSetupScreen.qml
         ui/features/game_setup/screens/GameModeSelectionScreen.qml
         ui/features/game_setup/components/GameTypeSelector.qml
         ui/features/game_setup/components/PlayerSetupPanel.qml
         ui/features/game_setup/components/AIDifficultySelector.qml
         ui/features/game_setup/components/MatchSettingsPanel.qml
         ui/features/game_setup/components/PhaseInfoPanel.qml
         ui/features/game_setup/delegates/PlayerSetupDelegate.qml
         ui/features/game_setup/delegates/GameTypeDelegate.qml
         ui/features/match/pages/MatchPage.qml
         ui/features/match/screens/MatchScreen.qml
         ui/features/match/components/board/MatchBoard.qml
         ui/features/match/components/board/PitItem.qml
         ui/features/match/components/board/SeedItem.qml
         ui/features/match/components/board/HouseItem.qml
         ui/features/match/components/board/TrapItem.qml
         ui/features/match/components/players/PlayerPanel.qml
         ui/features/match/components/players/PlayerStats.qml
         ui/features/match/components/players/PlayerTurnIndicator.qml
         ui/features/match/components/controls/MoveControls.qml
         ui/features/match/components/controls/DirectionSelector.qml
         ui/features/match/components/controls/SpecialMoveButton.qml
         ui/features/match/components/controls/TimerDisplay.qml
         ui/features/match/components/controls/GameControls.qml
         ui/features/match/components/overlays/PhaseOverlay.qml
         ui/features/match/components/overlays/GameOverOverlay.qml
         ui/features/match/components/overlays/VictoryOverlay.qml
         ui/features/match/components/overlays/InvalidMoveOverlay.qml
         ui/features/match/components/overlays/PauseOverlay.qml
         ui/features/match/delegates/MoveHistoryDelegate.qml
         ui/features/tournament/pages/TournamentPage.qml
         ui/features/tournament/screens/TournamentScreen.qml
         ui/features/tournament/screens/TournamentSetupScreen.qml
         ui/features/tournament/components/bracket/BracketView.qml
         ui/features/tournament/components/bracket/BracketNode.qml
         ui/features/tournament/components/bracket/BracketMatch.qml
         ui/features/tournament/components/bracket/BracketConnector.qml
         ui/features/tournament/components/leaderboard/LeaderboardView.qml
         ui/features/tournament/components/leaderboard/LeaderboardEntry.qml
         ui/features/tournament/components/TeamCard.qml
         ui/features/tournament/delegates/TournamentMatchDelegate.qml
         ui/features/tournament/delegates/TeamDelegate.qml
         ui/features/store/pages/StorePage.qml
         ui/features/store/screens/StoreScreen.qml
         ui/features/store/components/styles/SeedStyleShop.qml
         ui/features/store/components/styles/BoardStyleShop.qml
         ui/features/store/components/styles/StyleCard.qml
         ui/features/store/components/purchases/SpecialMovePurchase.qml
         ui/features/store/components/purchases/PurchaseConfirmation.qml
         ui/features/store/delegates/SeedStyleDelegate.qml
         ui/features/store/delegates/BoardStyleDelegate.qml
         ui/features/store/delegates/SpecialMoveDelegate.qml
         ui/features/settings/pages/SettingsPage.qml
         ui/features/settings/screens/SettingsScreen.qml
         ui/features/settings/components/SettingsItem.qml
         ui/features/settings/components/ToggleSwitch.qml
         ui/features/settings/components/DifficultySelector.qml
         ui/features/settings/components/SoundSettings.qml
         ui/features/settings/components/StyleSettings.qml
         ui/features/settings/delegates/SettingsDelegate.qml
         ui/features/game_modes/pages/GameModesPage.qml
         ui/features/game_modes/screens/GameModesScreen.qml
         ui/features/game_modes/components/ModeCard.qml
         ui/features/game_modes/components/ModeDescription.qml
         ui/features/game_modes/delegates/GameModeDelegate.qml
         ui/features/game_modes/models/GameModeModel.qml
         ui/features/game_modes/models/TutorialModel.qml
         ui/features/game_modes/models/ChallengeModel.qml

)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appBao PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appBao
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appBao
    PRIVATE
        Qt6::Quick
        BaoEngine
)

install(TARGETS appBao
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
