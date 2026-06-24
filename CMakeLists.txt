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
