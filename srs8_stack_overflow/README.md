# СРС №8 — Ограничения стека (Arduino Uno / Wokwi)

**Студентка:** Кенжехан Меруерт  
**Группа:** 25-6  
**Дата фактических экспериментов:** 13 ноября 2026 г.

## Цель
Изучить, как 2 КБ SRAM Arduino Uno ограничивают глубину рекурсивных вызовов; обнаружить возможные симптомы переполнения стека и сравнить рекурсивный подход с итерационным.

**Отчёт:** [REPORT.md](REPORT.md) · **Порядок запуска:** [RUNBOOK.md](RUNBOOK.md).

## Эксперименты
1. [code/crash.ino](code/crash.ino): бесконечная рекурсия; **запуск только в Wokwi**.
2. [code/safe.ino](code/safe.ino): цикл до 10000 и строка SAFE FINISH.
3. [code/memory_hog.ino](code/memory_hog.ino): пять отдельных запусков с уровнями 0–4.

## Ссылки на Wokwi
- Рекурсия (Crash): [открыть Wokwi](https://wokwi.com/projects/480585462526784513).
- Безопасная итерация (Safe): [открыть Wokwi](https://wokwi.com/projects/480585568857667585).
- Memory Hog: [открыть Wokwi](https://wokwi.com/projects/480585549870044161).

## Доказательства
В папке `screenshots/` сохранены:
- `crash_result.png`: монитор аварийного опыта.
- `safe_result.png`: 10000 и SAFE FINISH.
- `memory_hog_result.png`: показательный результат Memory Hog.

**Все фактические результаты получены** и внесены в REPORT.md. Три скриншота загружены в [screenshots/](screenshots/): [Crash](screenshots/crash_result.png), [Safe](screenshots/safe_result.png), [Memory Hog (level 3)](screenshots/memory_hog_result.png). Расчётный прогноз не подменяет результаты симуляции.

## Как воспроизвести
Откройте https://wokwi.com/projects/new/arduino-uno, замените содержимое `sketch.ino` кодом соответствующего эксперимента и запустите симуляцию. Для Memory Hog изменяйте `memoryHog(4)` на 0, 1, 2, 3, 4 по очереди и каждый раз перезапускайте проект. Подробности в [RUNBOOK.md](RUNBOOK.md).

> Аварийные скетчи не загружать на реальный контроллер.
