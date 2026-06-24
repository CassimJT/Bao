# Bawo Engine Architecture

This document is a placeholder for the engine architecture.

Current layers:

- `core`: enums, value objects, board state, serialization.
- `rules`: rule-set contracts and Bawo rules engine entry points.
- `players`: local, AI, and remote player abstractions.
- `match`: match orchestration.
- `network`: LAN and online session shells.
- `undo`: undo history shell.
- `tournament`: brackets, teams, and tournament orchestration.
- `monetization`: purchase, ads, and style management shells.
- `viewmodels`: QML-facing view-model shells.

## Business Logic Architecture
├── src/
│ ├── core/
│ │ ├── enums/
│ │ │ ├── MatchState.h
│ │ │ ├── PlayerType.h
│ │ │ ├── Direction.h
│ │ │ ├── AIDifficulty.h
│ │ │ ├── GamePhase.h
│ │ │ ├── TournamentState.h
│ │ │ ├── PurchaseType.h
│ │ │ └── GameType.h
│ │ │
│ │ ├── value_objects/
│ │ │ ├── Move.h
│ │ │ ├── Move.cpp
│ │ │ ├── MoveResult.h
│ │ │ ├── MoveResult.cpp
│ │ │ ├── MatchSettings.h
│ │ │ └── MatchSettings.cpp
│ │ │
│ │ ├── model/
│ │ │ ├── Pit.h
│ │ │ ├── Pit.cpp
│ │ │ ├── Board.h
│ │ │ ├── Board.cpp
│ │ │ ├── GameState.h
│ │ │ └── GameState.cpp
│ │ │
│ │ └── serialization/
│ │ ├── GameStateSerializer.h
│ │ └── GameStateSerializer.cpp
│ │
│ ├── rules/
│ │ ├── RuleSet.h
│ │ ├── RuleSet.cpp
│ │ ├── HouseRuleSet.h
│ │ ├── HouseRuleSet.cpp
│ │ ├── FreeMatchingRuleSet.h
│ │ ├── FreeMatchingRuleSet.cpp
│ │ ├── PhaseTransitionRule.h
│ │ ├── PhaseTransitionRule.cpp
│ │ ├── TargRule.h
│ │ ├── TargRule.cpp
│ │ ├── BawoRulesEngine.h
│ │ └── BawoRulesEngine.cpp
│ │
│ ├── players/
│ │ ├── Player.h
│ │ ├── Player.cpp
│ │ ├── LocalPlayer.h
│ │ ├── LocalPlayer.cpp
│ │ ├── AIPlayer.h
│ │ ├── AIPlayer.cpp
│ │ ├── RemotePlayer.h
│ │ ├── RemotePlayer.cpp
│ │ └── ai/
│ │ ├── BoardEvaluator.h
│ │ └── BoardEvaluator.cpp
│ │
│ ├── match/
│ │ ├── MatchController.h
│ │ └── MatchController.cpp
│ │
│ ├── network/
│ │ ├── NetworkSession.h
│ │ ├── NetworkSession.cpp
│ │ ├── LANSession.h
│ │ ├── LANSession.cpp
│ │ ├── OnlineSession.h
│ │ └── OnlineSession.cpp
│ │
│ ├── replay/
│ │ ├── ReplayManager.h
│ │ └── ReplayManager.cpp
│ │
│ ├── tournament/
│ │ ├── TournamentController.h
│ │ ├── TournamentController.cpp
│ │ ├── TournamentMatch.h
│ │ ├── TournamentMatch.cpp
│ │ ├── TournamentBracket.h
│ │ ├── TournamentBracket.cpp
│ │ ├── TournamentRules.h
│ │ ├── TournamentRules.cpp
│ │ ├── Team.h
│ │ └── Team.cpp
│ │
│ ├── monetization/
│ │ ├── IAPManager.h
│ │ ├── IAPManager.cpp
│ │ ├── AdsManager.h
│ │ ├── AdsManager.cpp
│ │ ├── SeedStyle.h
│ │ ├── SeedStyle.cpp
│ │ ├── BoardStyle.h
│ │ ├── BoardStyle.cpp
│ │ ├── StyleManager.h
│ │ └── StyleManager.cpp
│ │
│ └── viewmodels/
│ ├── MatchViewModel.h
│ ├── MatchViewModel.cpp
│ ├── TournamentViewModel.h
│ ├── TournamentViewModel.cpp
│ ├── StoreViewModel.h
│ ├── StoreViewModel.cpp
│ ├── GameTypeSelectorViewModel.h
│ └── GameTypeSelectorViewModel.cpp
│
│
│
├── tests/
│ ├── unit/
│ │ ├── core/
│ │ ├── rules/
│ │ ├── players/
│ │ ├── match/
│ │ ├── tournament/
│ │ └── monetization/
│ └── integration/
│ └── match_integration_test.cpp
│
├── docs/
│ ├── architecture.md
│ ├── api_reference.md
│ └── uml_diagrams/
│ └── bawo_engine_architecture.puml
│

## UI Architecture
Ui/
├── components/ # Reusable UI components
│ ├── buttons/
│ │ ├── PrimaryButton.qml
│ │ ├── SecondaryButton.qml
│ │ ├── IconButton.qml
│ │ └── GameTypeButton.qml
│ ├── dialogs/
│ │ ├── AlertDialog.qml
│ │ ├── ConfirmationDialog.qml
│ │ └── LoadingDialog.qml
│ ├── inputs/
│ │ ├── TextInput.qml
│ │ ├── Dropdown.qml
│ │ └── Slider.qml
│ ├── indicators/
│ │ ├── Spinner.qml
│ │ ├── ProgressBar.qml
│ │ └── StatusIndicator.qml
│ └── board/
│ ├── BoardRenderer.qml
│ ├── PitRenderer.qml
│ ├── SeedRenderer.qml
│ └── TrapRenderer.qml
│
├── app/ # Navigation
│ ├── MainStackView.qml
│
├── features/
│ ├── home/ # Feature: Home / Main Menu
│ │ ├── pages/
│ │ │ └── HomePage.qml
│ │ ├── screens/
│ │ │ └── HomeScreen.qml
│ │ ├── components/
│ │ │ ├── MenuGrid.qml
│ │ │ ├── MenuCard.qml
│ │ │ └── WelcomeHeader.qml
│ └── models/ # Only feature with QML models (static data)
│ ├── MenuItemModel.qml
│ │ └── delegates/
│ │ └── MenuItemDelegate.qml
│ │
│ │
│ ├── game_setup/ # Feature: Game Setup
│ │ ├── pages/
│ │ │ └── GameSetupPage.qml
│ │ ├── screens/
│ │ │ ├── GameSetupScreen.qml
│ │ │ └── GameModeSelectionScreen.qml
│ │ ├── components/
│ │ │ ├── GameTypeSelector.qml
│ │ │ ├── PlayerSetupPanel.qml
│ │ │ ├── AIDifficultySelector.qml
│ │ │ ├── MatchSettingsPanel.qml
│ │ │ └── PhaseInfoPanel.qml
│ │ └── delegates/
│ │ ├── PlayerSetupDelegate.qml
│ │ └── GameTypeDelegate.qml
│ │
│ ├── match/ # Feature: Match Play
│ │ ├── pages/
│ │ │ └── MatchPage.qml
│ │ ├── screens/
│ │ │ └── MatchScreen.qml
│ │ ├── components/
│ │ │ ├── board/
│ │ │ │ ├── MatchBoard.qml
│ │ │ │ ├── PitItem.qml
│ │ │ │ ├── SeedItem.qml
│ │ │ │ ├── HouseItem.qml
│ │ │ │ └── TrapItem.qml
│ │ │ ├── players/
│ │ │ │ ├── PlayerPanel.qml
│ │ │ │ ├── PlayerStats.qml
│ │ │ │ └── PlayerTurnIndicator.qml
│ │ │ ├── controls/
│ │ │ │ ├── MoveControls.qml
│ │ │ │ ├── DirectionSelector.qml
│ │ │ │ ├── SpecialMoveButton.qml
│ │ │ │ ├── TimerDisplay.qml
│ │ │ │ └── GameControls.qml
│ │ │ └── overlays/
│ │ │ ├── PhaseOverlay.qml
│ │ │ ├── GameOverOverlay.qml
│ │ │ ├── VictoryOverlay.qml
│ │ │ ├── InvalidMoveOverlay.qml
│ │ │ └── PauseOverlay.qml
│ │ └── delegates/
│ │ └── MoveHistoryDelegate.qml
│ │
│ ├── tournament/ # Feature: Tournament
│ │ ├── pages/
│ │ │ └── TournamentPage.qml
│ │ ├── screens/
│ │ │ ├── TournamentScreen.qml
│ │ │ └── TournamentSetupScreen.qml
│ │ ├── components/
│ │ │ ├── bracket/
│ │ │ │ ├── BracketView.qml
│ │ │ │ ├── BracketNode.qml
│ │ │ │ ├── BracketMatch.qml
│ │ │ │ └── BracketConnector.qml
│ │ │ ├── leaderboard/
│ │ │ │ ├── LeaderboardView.qml
│ │ │ │ └── LeaderboardEntry.qml
│ │ │ └── TeamCard.qml
│ │ └── delegates/
│ │ ├── TournamentMatchDelegate.qml
│ │ └── TeamDelegate.qml
│ │
│ │
│ ├── store/ # Feature: Store (Styles & Special Moves)
│ │ ├── pages/
│ │ │ └── StorePage.qml
│ │ ├── screens/
│ │ │ └── StoreScreen.qml
│ │ ├── components/
│ │ │ ├── styles/
│ │ │ │ ├── SeedStyleShop.qml
│ │ │ │ ├── BoardStyleShop.qml
│ │ │ │ └── StyleCard.qml
│ │ │ └── purchases/
│ │ │ ├── SpecialMovePurchase.qml
│ │ │ └── PurchaseConfirmation.qml
│ │ └── delegates/
│ │ ├── SeedStyleDelegate.qml
│ │ ├── BoardStyleDelegate.qml
│ │ └── SpecialMoveDelegate.qml
│ │
│ │
│ ├── settings/ # Feature: Settings
│ │ ├── pages/
│ │ │ └── SettingsPage.qml
│ │ ├── screens/
│ │ │ └── SettingsScreen.qml
│ │ ├── components/
│ │ │ ├── SettingsItem.qml
│ │ │ ├── ToggleSwitch.qml
│ │ │ ├── DifficultySelector.qml
│ │ │ ├── SoundSettings.qml
│ │ │ └── StyleSettings.qml
│ │ └── delegates/
│ │ └── SettingsDelegate.qml
│ │
│ │
│ └── game_modes/ # Feature: Game Modes (Static QML Models)
│ ├── pages/
│ │ └── GameModesPage.qml
│ ├── screens/
│ │ └── GameModesScreen.qml
│ ├── components/
│ │ ├── ModeCard.qml
│ │ └── ModeDescription.qml
│ ├── delegates/
│ │ └── GameModeDelegate.qml
│ └── models/ # Only feature with QML models (static data)
│ ├── GameModeModel.qml
│ ├── TutorialModel.qml
│ └── ChallengeModel.qml
│
├── animations/ # Shared animations
│ ├── Animations.qml
│ ├── SeedMoveAnimation.qml
│ └── TransitionAnimations.qml
│
└── utils/
├── Utils.js
├── BoardUtils.js
├── GameUtils.js
└── AnimationUtils.js
