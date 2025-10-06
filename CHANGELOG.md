# Changelog  

All notable changes to **Paper Cut** will be documented in this file.

This project adheres to [Semantic Versioning](https://semver.org/)
and follows the [Keep a Changelog](https://keepachangelog.com/en/1.1.0/) guidelines.

---

## \[1.0.0] - 2025-10-06

### 🎉 Initial Release

The base version of **Paper Cut**, a command-line Rock–Paper–Scissors game written in C (ISO C99).

### Added

- Core game loop for Rock–Paper–Scissors logic
- Player vs Computer gameplay using random number generation
- Input validation for both move and replay choices
- Friendly terminal messages and re-prompt mechanism
- Replay functionality without restarting the program
- Cross-platform compatibility (Windows, Linux, macOS)
- Clean exit with farewell message
- Added project structure and documentation files:

  - `/bin/paper_cut.exe`
  - `/src/main.c`
  - `/docs/srs.pdf`
  - `CHANGELOG.md`
  - `LICENSE`
  - `README.md`

### Known Issues

No color formatting in output (planned for a later release)

---

## 🧭 Planned Features

*(Targeted for v1.1.0 and beyond)*  

- Multiplayer mode (local or online)  
- GUI version  
- Win/Loss statistics tracking  
- Colored text and smoother terminal animations  
