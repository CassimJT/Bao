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
