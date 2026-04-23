# esp32_unit_testing_demo

Demonstrates structured unit testing on ESP32 using the ESP-IDF testing framework — tag-based test filtering, interactive test menu, and CI-compatible output.

## Key Technologies

- **MCU:** ESP32
- **Framework:** ESP-IDF unit testing
- **Build:** CMake + idf.py

## Getting Started

```bash
idf.py build flash monitor
```

Tests can be filtered by tag (e.g. `[mean]`, `[fails]`) from the interactive menu on the serial console.

---

Built by Owen O'Hehir — embedded Linux, IoT, Matter & Rust consulting at [electronicsconsult.com](https://electronicsconsult.com). Available for contract and consulting work.
