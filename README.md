# ✂️ Paper Cut  

A fun and minimal command-line Rock-Paper-Scissors game written in C.

## 🌟 About the Project

**Paper Cut** is a lightweight **Rock-Paper-Scissors** game built in pure C (ISO C99).  
It’s designed to demonstrate modular programming, input validation, and fun CLI interactions.

> “A tiny project with a big smile — the joy of old-school C in a few kilobytes!”

This release marks the **base version (v1.0.0)**.

The format is based on [**Keep a Changelog 1.1.0**](https://keepachangelog.com/en/1.1.0/)
and this project adheres to [**Semantic Versioning 2.0.0**](https://semver.org/).

---

## 🚀 Features

- 🎮 Play classic Rock–Paper–Scissors directly in your terminal  
- 💬 Friendly prompts with input validation  
- 🔁 Replay without restarting  
- 💻 Works seamlessly on Windows, Linux, and macOS  
- 🧩 Written in portable, clean C99 code  

---

## ⚙️ Technical Details

| Property | Value |
|-----------|--------|
| **Language** | C (ISO C99) |
| **Compiler** | GCC / Clang |
| **Source Size** | ~2 KB |
| **Executable Size** | ~137 KB |
| **Platform** | Cross-platform |
| **Version** | 1.0.0 (Base Release) |
| **Codename** | _First Slash_ |

---

## 🧱 Build & Run

### 🛠️ Compile

```bash
# Clone the repository
git clone https://github.com/dipsana/paper-cut.git
cd paper-cut

# Compile (GCC)
gcc paper_cut.c -o paper_cut

# Or with Clang
clang paper_cut.c -o paper_cut
````

### ▶️ Run

```bash
./paper_cut
```

---

## 🪶 Sample Output

```text
Enter 'r' for rock, 'p' for paper and 's' for scissors
r
You chose 'r' and computer chose 'r'. It's a draw!

Do you want to play again? (y/n): y

Enter 'r' for rock, 'p' for paper and 's' for scissors
s
You chose 's' and computer chose 'p'. Congrats, you won!

Do you want to play again? (y/n): n

Come back anytime to relive the fun! :)
```

---

## 📁 Clickable Repository Structure

/  
├─ 📁 [bin](./bin)  
│   └─ 📄 [paper_cut.exe](./bin/paper_cut.exe)  
├─ 📁 [docs](./docs)  
│   └─ 📄 [SRS.pdf](./docs/SRS.pdf)  
├─ 📁 [src](./src)  
│   └─ 📄 [main.c](./src/main.c)  
├─ 📄 [CHANGELOG.md](./CHANGELOG.md)  
├─ 📄 [LICENSE](./LICENSE)  
└─ 📄 [README.md](./README.md)

---

## 🧩 Future Enhancements

- 🌐 **Multiplayer Mode:** Play locally or online
- 🖥️ **GUI Version:** SDL or GTK-based graphical edition
- 📊 **Statistics:** Track wins/losses across sessions
- 🎨 **Colored Terminal Output:** Improved visual feedback

---

## 📜 License

This project is licensed under the [MIT License](./LICENSE).
You’re free to use, modify, and share it under the same terms.

---

## 🌟 Support

If you liked this project, consider giving it a ⭐ on GitHub — it helps a lot!
You can also support my free creations through donations or by sharing my repositories.
