#ifndef Arts_h
#define Arts_h
#include "Classes/Transactions.h"


// Functions for Print, I used AI to print this cool arts
void printMoney() {
    // Очистка экрана
    for(int i = 0; i < 2; ++i) std::cout << "\n";

    // Цвета в стиле киберпанк-терминала
    const std::string DARK_GRAY  = "\033[2;90m";
    const std::string CYAN       = "\033[1;36m";
    const std::string GREEN      = "\033[1;32m";
    const std::string YELLOW     = "\033[1;33m";
    const std::string RED        = "\033[1;31m";
    const std::string PURPLE     = "\033[1;35m";
    const std::string RESET      = "\033[0m";

    // Верхняя рамка-частицы
    std::cout << DARK_GRAY << "  ░░░░░░░░░░░░░░░░░░░░ BANKNOTE INJECTOR v2.0 ░░░░░░░░░░░░░░░░░░░░\n" << RESET;

    // Стек купюры (псевдографика под стиль твоего старта)
    std::cout
    << CYAN << "  ┌──────────────────────────────────────────────────────────────┐\n"
    << CYAN << "  │ " << GREEN << "█▄░▄█ █▀▀█ █▀▀▄ █▀▀ █  " << CYAN << "┌───────────────────────────┐" << CYAN << " " << YELLOW << "[100]" << CYAN << " │\n"
    << CYAN << "  │ " << GREEN << "█ ▀ █ █  █ █  █ █▀▀ ▀  " << CYAN << "│  " << RESET << "O N E   H U N D R E D" << CYAN << "  │" << CYAN << "   :   │\n"
    << CYAN << "  │ " << GREEN << "▀   ▀ ▀▀▀▀ ▀  ▀ ▀▀▀ ▄  " << CYAN << "│  " << YELLOW << "    D O L L A R S    " << CYAN << "  │" << CYAN << "  [$]  │\n"
    << CYAN << "  │ " << DARK_GRAY << "├─ ASSETS ─────────────────" << CYAN << "│  " << DARK_GRAY << "Serial: #0xDEADBEEF" << CYAN << "  │" << CYAN << "       │\n"
    << CYAN << "  │ " << DARK_GRAY << "│ " << RESET << "Cash flow......" << GREEN << "STABLE" << CYAN << "    └───────────────────────────┘" << CYAN << "       │\n"
    << CYAN << "  │ " << DARK_GRAY << "│ " << RESET << "Liquidity......" << RED << "CRITICAL" << CYAN << "  " << PURPLE << "▓▓▓▓▓" << CYAN << "     [ oop-chaos-net ]" << CYAN << " │\n"
    << CYAN << "  └──────────────────────────────────────────────────────────────┘\n";

    // Слоеная 3D-тень пачки денег (эффект объема)
    std::cout
    << DARK_GRAY << "   └──────────────────────────────────────────────────────────────┘\n"
    << DARK_GRAY << "    └──────────────────────────────────────────────────────────────┘\n"
    << DARK_GRAY << "     ░░░░░░░░░░░░░░░░░░░░░░ BUFFER FLUSHED ░░░░░░░░░░░░░░░░░░░░░░░░\n" << RESET << "\n";
}

void printMenu() {
    // Цвета для меню
    const std::string DARK_GRAY  = "\033[2;90m";
    const std::string CYAN       = "\033[1;36m";
    const std::string GREEN      = "\033[1;32m";
    const std::string YELLOW     = "\033[1;33m";
    const std::string RED        = "\033[1;31m";
    const std::string PURPLE     = "\033[1;35m";
    const std::string RESET      = "\033[0m";

    std::cout << CYAN << "  ┌── SYSTEM CONTROL INTERFACE ──────────────────────────────────┐\n" << RESET;

    // Кнопка 1 & 2
    std::cout
    << CYAN << "  │ " << GREEN << "[1]" << RESET << " ⚡ Record Income     "
    << DARK_GRAY << "│" << CYAN << "  " << CYAN << "[2]" << RESET << " ◉ Income History     " << CYAN << "│\n"
    << DARK_GRAY << "  │    " << DARK_GRAY << "status: ACTIVE          │     status: REFRESHED       │\n";

    // Разделитель между строками
    std::cout << CYAN << "  ├────────────────────────────┼─────────────────────────────────┤\n" << RESET;

    // Кнопка 3 & 4
    std::cout
    << CYAN << "  │ " << RED << "[3]" << RESET << " ⚡ Record Expense    "
    << DARK_GRAY << "│" << CYAN << "  " << YELLOW << "[4]" << RESET << " ◉ Expense History    " << CYAN << "│\n"
    << DARK_GRAY << "  │    " << DARK_GRAY << "status: OUT OF CASH     │     status: DEPRECATED      │\n";

    // Разделитель перед настройками
    std::cout << CYAN << "  ├────────────────────────────┴─────────────────────────────────┤\n" << RESET;

    // Кнопка 5 (Настройки)
    std::cout
    << CYAN << "  │ " << PURPLE << "[5]" << RESET << " ✦ Core Settings & Metaprogramming Tweaks                  " << CYAN << "│\n"
    << CYAN << "  └──────────────────────────────────────────────────────────────┘\n";

    // Панель выхода (Нижний тулбар)
    std::cout
    << DARK_GRAY << "  [ 0 ] " << RED << "HALT SYSTEM (Exit)"
    << DARK_GRAY << "  │  " << CYAN << "User: " << RESET << "root@oopoor"
    << DARK_GRAY << "  │  " << RESET << "State: " << YELLOW << "DESPERATE" << RESET << "\n"
    << DARK_GRAY << "  ────────────────────────────────────────────────────────────────\n" << RESET;
}

void Art4option2() {
    // Цветовая палитра для кибер-терминала
    const std::string RESET       = "\033[0m";
    const std::string DARK_BG     = "\033[2;90m";     // Серый для разделителей
    const std::string BORDER      = "\033[38;2;34;139;34m";   // Лесной зеленый
    const std::string INNER       = "\033[38;2;46;139;87m";   // Морской зеленый
    const std::string TEXT_BRIGHT = "\033[1;38;2;240;248;255m"; // Яркий белый
    const std::string GOLD        = "\033[1;38;2;218;165;32m";  // Золотой номинал
    
    // Градиент для граней огромной пачки (эффект толщины как на фото)
    const std::string LAYER_1     = "\033[38;2;26;99;26m";
    const std::string LAYER_2     = "\033[38;2;20;80;20m";
    const std::string LAYER_3     = "\033[38;2;16;64;16m";
    const std::string LAYER_4     = "\033[38;2;12;48;12m";
    const std::string LAYER_5     = "\033[38;2;8;32;8m";
    const std::string SHADOW      = "\033[38;2;5;15;5m";

    // Очистка / отступ
    std::cout << "\n\n";

    // ВЕРХНЯЯ КУПЮРА
    std::cout
    << BORDER << "        .──────────────────────────────────────────────────────────────────────────.\n"
    << BORDER << "       /  .──────────────────────────────────────────────────────────────────────.  \\\n"
    << BORDER << "      |  /  " << GOLD << "100" << INNER << "   FEDERAL RESERVE NOTE   " << TEXT_BRIGHT << "U N I T E D   S T A T E S" << INNER << "   " << GOLD << "100" << BORDER << "  \\  |\n"
    << BORDER << "      |  |  " << INNER << "┌───┐      " << DARK_BG << "HB 29971109 F" << INNER << "        OF AMERICA        " << INNER << "┌───┐  |  |\n"
    << BORDER << "      |  |  " << INNER << "│ " << GOLD << "S" << INNER << " │     .▄████████▄.                               │ " << GOLD << "S" << INNER << " │  |  |\n"
    << BORDER << "      |  |  " << INNER << "└───┘    .██████████████.     " << TEXT_BRIGHT << "┌──────────────────────┐" << INNER << " └───┘  |  |\n"
    << BORDER << "      |  |  " << DARK_BG << "HB 2997" << INNER << "  ██████" << TEXT_BRIGHT << "░░" << INNER << "██████  " << TEXT_BRIGHT << "│  ONE HUNDRED DOLLARS │" << INNER << "        |  |\n"
    << BORDER << "      |  |  " << GOLD << "  100  " << INNER << "  ██████" << TEXT_BRIGHT << "▀▀" << INNER << "██████  " << TEXT_BRIGHT << "└──────────────────────┘" << GOLD << "  100   " << BORDER << "|  |\n"
    << BORDER << "      |  |  " << INNER << "┌───┐    `██████████████'        " << DARK_BG << "HB 29971109 F" << INNER << "     ┌───┐  |  |\n"
    << BORDER << "      |  |  " << INNER << "│ " << GOLD << "S" << INNER << " │       `▀████████▀'        " << GOLD << "[ $ 100 ]" << INNER << "        │ " << GOLD << "S" << INNER << " │  |  |\n"
    << BORDER << "      |  \\  " << GOLD << "100" << INNER << "      ONE HUNDRED DOLLARS      " << DARK_BG << "Series 2026" << INNER << "       " << GOLD << "100" << BORDER << "  /  |\n"
    << BORDER << "       \\  `──────────────────────────────────────────────────────────────────────'  /\n"
    << BORDER << "        `──────────────────────────────────────────────────────────────────────────'\n";

    // ОГРОМНЫЕ БОКОВЫЕ ГРАНИ ПАЧКИ (Объем слоев банкнот)
    std::cout
    << LAYER_1 << "         \\  \\                                                                      /  /\n"
    << LAYER_1 << "          \\  \\════════════════════════════════════════════════════════════════════/  /\n"
    << LAYER_2 << "           \\  \\------------------------------------------------------------------/  /\n"
    << LAYER_2 << "            \\  \\================================================================/  /\n"
    << LAYER_3 << "             \\  \\▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒/  /\n"
    << LAYER_3 << "              \\  \\────────────────────────────────────────────────────────────/  /\n"
    << LAYER_4 << "               \\  \\══════════════════════════════════════════════════════════/  /\n"
    << LAYER_4 << "                \\  \\--------------------------------------------------------/  /\n"
    << LAYER_5 << "                 \\  \\======================================================/  /\n"
    << LAYER_5 << "                  \\  `────────────────────────────────────────────────────'  /\n"
    << LAYER_5 << "                   `────────────────────────────────────────────────────────'\n";

    // ТЕНЬ НА СТОЛЕ
    std::cout
    << SHADOW << "                     `░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░'\n"
    << SHADOW << "                       `░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░'\n"
    << RESET << "\n";
}


void Art4option1() {
    // Цветовая палитра терминала (TrueColor / ANSI)
    const std::string RESET       = "\033[0m";
    const std::string CYAN        = "\033[1;36m";   // Основной цвет знака
    const std::string BLUE        = "\033[1;34m";   // Тень объема знака
    const std::string DARK_GRAY   = "\033[2;90m";   // Эффекты и рамки
    const std::string PURPLE      = "\033[1;35m";   // Акценты эффектов
    const std::string GREEN       = "\033[1;32m";   // Текст вопроса
    const std::string YELLOW      = "\033[1;33m";   // Подсветка текста

    // Отступы для центрирования
    std::cout << "\n\n";

    // ВЕРХНЯЯ ДЕКОРАТИВНАЯ ЛИНИЯ
    std::cout << DARK_GRAY << "  ░░░░░░░░░░░░░░░░░░░░ AUDIT & SECURITY CHECK ░░░░░░░░░░░░░░░░░░░░\n" << RESET;

    // ОБЪЕМНЫЙ 3D ЗНАК ВОПРОСА
    std::cout
    << "                 " << CYAN << "██████████████" << BLUE << "▄▄\n"
    << "               " << CYAN << "██████████████████" << BLUE << "██▄\n"
    << "              " << CYAN << "██████" << RESET << "▀▀        ▀▀" << CYAN << "██████" << BLUE << "██▄\n"
    << "              " << CYAN << "██████" << RESET << "            " << CYAN << "██████" << BLUE << "██║\n"
    << "                            " << CYAN << "▄██████" << BLUE << "██▀\n"
    << "                          " << CYAN << "▄██████" << BLUE << "██▀\n"
    << "                        " << CYAN << "▄██████" << BLUE << "██▀\n"
    << "                        " << CYAN << "██████" << BLUE << "██║\n"
    << "                        " << RESET << "▀▀▀▀▀▀▀▀\n"
    << "                        " << CYAN << "██████" << BLUE << "▄▄\n"
    << "                        " << CYAN << "██████" << BLUE << "██║\n"
    << "                        " << RESET << "▀▀▀▀▀▀▀▀\n";

    // ЭФФЕКТЫ СНИЗУ (Цифровой дождь, сканирование и частицы)
    std::cout
    << DARK_GRAY << "              .  .  .  .. .  .  . .. .  .  .  .\n"
    << DARK_GRAY << "             : :: : :::: :::: :::: :::: : : :\n"
    << PURPLE    << "          ▲  ░░░▒▒▓▓██  DATA FLOW SCAN  ██▓▓▒▒░░  ▲\n"
    << DARK_GRAY << "         │││ ▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀ │││\n"
    << DARK_GRAY << "         ▼▼▼ ─────────────────────────────────── ▼▼▼\n";

    // ИНФОРМАЦИОННЫЙ БЛОК С ВОПРОСОМ
    std::cout
    << CYAN      << "  ┌──────────────────────────────────────────────────────────────┐\n"
    << CYAN      << "  │ " << YELLOW << "⚡ SYSTEM INQUIRY:" << RESET << "                                           │\n"
    << CYAN      << "  │                                                              │\n"
    << CYAN      << "  │      " << GREEN << ">>>  Where did you earn your money?  <<<" << CYAN << "        │\n"
    << CYAN      << "  │                                                              │\n"
    << CYAN      << "  │ " << DARK_GRAY << "Pending authentication...              [ oop-chaos-secure ]" << CYAN << " │\n"
    << CYAN      << "  └──────────────────────────────────────────────────────────────┘\n";

    // НИЖНЯЯ ДЕКОРАТИВНАЯ ЛИНИЯ
    std::cout << DARK_GRAY << "  ░░░░░░░░░░░░░░░░░░░░░░░ INTERFACE READY ░░░░░░░░░░░░░░░░░░░░░░░\n" << RESET << "\n";
}

void Art4option3() {
    const std::string RESET      = "\033[0m";
    const std::string STEEL      = "\033[38;2;100;149;237m";   // Корпус — кобальтово-синий
    const std::string STEEL_DARK = "\033[38;2;47;79;79m";      // Боковая грань (3D-тень)
    const std::string STEEL_MID  = "\033[38;2;70;110;160m";    // Средняя грань
    const std::string SCR_BG     = "\033[48;2;0;20;80m";       // Фон экрана
    const std::string SCR_TXT    = "\033[38;2;0;220;255m";      // Текст на экране
    const std::string SCR_DIM    = "\033[38;2;0;140;180m";      // Второй ряд экрана
    const std::string SLOT_GRN   = "\033[1;38;2;50;205;50m";   // Слот выдачи
    const std::string RECEIPT    = "\033[38;2;240;235;210m";    // Цвет чека (бежевый)
    const std::string REC_HEAD   = "\033[1;38;2;180;150;90m";  // Шапка чека (золотой)
    const std::string REC_ITEM   = "\033[38;2;60;50;30m";      // Пункты списка
    const std::string BOLT       = "\033[38;2;150;150;160m";    // Заклёпки

    std::cout << "\n";

    // ── Козырёк
    std::cout
        << STEEL      << "        ╔══════════════════════════╗" << STEEL_DARK << "▄▄▄\n"
        << STEEL      << "        ║  ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄  ║" << STEEL_DARK << "███\n";

    // ── Экран
    std::cout
        << STEEL      << "        ║ " << SCR_BG << SCR_TXT  << " ┌──────────────────┐ " << RESET << STEEL << " ║" << STEEL_DARK << "███\n"
        << STEEL      << "        ║ " << SCR_BG << SCR_TXT  << " │  🏦  ATM · 24/7  │ " << RESET << STEEL << " ║" << STEEL_DARK << "███\n"
        << STEEL      << "        ║ " << SCR_BG << SCR_DIM  << " │  ● SYSTEM ONLINE  │ " << RESET << STEEL << " ║" << STEEL_DARK << "███\n"
        << STEEL      << "        ║ " << SCR_BG << SCR_DIM  << " │  ● INSERT CARD    │ " << RESET << STEEL << " ║" << STEEL_DARK << "███\n"
        << STEEL      << "        ║ " << SCR_BG << SCR_TXT  << " └──────────────────┘ " << RESET << STEEL << " ║" << STEEL_DARK << "███\n";

    // ── Кнопки + картридер
    std::cout
        << STEEL      << "        ║  " << BOLT << "●" << STEEL << "  ┌──┐ ┌──┐ ┌──┐  " << BOLT << "●" << STEEL << "  ║" << STEEL_DARK << "███\n"
        << STEEL      << "        ║     │▶ │ │▶ │ │▶ │     ║" << STEEL_DARK << "███\n"
        << STEEL      << "        ║     └──┘ └──┘ └──┘     ║" << STEEL_DARK << "███\n";

    // ── Кардридер + слот купюр
    std::cout
        << STEEL      << "        ║  ┌────────────────┐     ║" << STEEL_DARK << "███\n"
        << STEEL      << "        ║  │" << SLOT_GRN << "▓▓▓▓ CARD ▓▓▓▓" << STEEL << "│  " << SLOT_GRN << "╔══╗" << STEEL << "  ║" << STEEL_DARK << "███\n"
        << STEEL      << "        ║  └────────────────┘  " << SLOT_GRN << "║$$║" << STEEL << "  ║" << STEEL_DARK << "███\n";

    // ── Слот чека
    std::cout
        << STEEL      << "        ║         RECEIPT:     " << SLOT_GRN << "╚══╝" << STEEL << "  ║" << STEEL_DARK << "███\n"
        << STEEL      << "        ╠═════════╦══════════════════╣" << STEEL_DARK << "███\n"
        << STEEL      << "        ║" << STEEL_MID << "░░░░░░░░░" << STEEL << "║" << RECEIPT;

    // ── Чек выезжает
    std::cout
        << "╔══════════════════╗" << STEEL << "║" << STEEL_DARK << "███\n"
        << STEEL << "        ║" << STEEL_MID << "░░░░░░░░░" << STEEL << "║" << RECEIPT << "║                  ║" << STEEL << "║" << STEEL_DARK << "███\n"
        << STEEL << "        ╚═════════╝" << RECEIPT << "║  Write the expense ║" << STEEL_DARK << "████\n"
        << RECEIPT   << "                   ║  category below:   ║" << STEEL_DARK << "███▀\n"
        << RECEIPT   << "                   ╠════════════════════╣" << STEEL_DARK << "██▀\n"
        << RECEIPT   << "                   ║                    ║" << STEEL_DARK << "▀\n"
        << RECEIPT   << "                   ║  Expense types:    ║\n"
        << RECEIPT   << "                   ║                    ║\n"
        << RECEIPT   << "                   ║  › groceries       ║\n"
        << RECEIPT   << "                   ║  › travel          ║\n"
        << RECEIPT   << "                   ║  › utilities       ║\n"
        << RECEIPT   << "                   ║  › clothing        ║\n"
        << RECEIPT   << "                   ║  › entertainment   ║\n"
        << RECEIPT   << "                   ║  › and so on...    ║\n"
        << RECEIPT   << "                   ║                    ║\n"
        << RECEIPT   << "                   ╚╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╝\n";

    // ── Тень
    std::cout
        << STEEL_DARK << "                     ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
        << RESET << "\n";
}

void Art4option4() {
    // ── Цветовая палитра ─────────────────────────────────────────────
    const std::string R       = "\033[0m";

    // Обложка (тёмно-бордовая кожа)
    const std::string COV     = "\033[38;2;120;30;30m";
    const std::string COV_HI  = "\033[38;2;180;60;50m";   // блик
    const std::string COV_SD  = "\033[38;2;70;15;15m";    // тень обложки
    const std::string COV_MID = "\033[38;2;150;45;40m";

    // Корешок (чуть светлее — поворот)
    const std::string SPINE   = "\033[38;2;90;22;22m";
    const std::string SPINE_H = "\033[38;2;140;50;40m";

    // Страницы (торец книги)
    const std::string PAGE    = "\033[38;2;240;230;200m";
    const std::string PAGE_SD = "\033[38;2;190;180;155m";
    const std::string PAGE_LN = "\033[38;2;160;150;120m";

    // Золотое тиснение
    const std::string GOLD    = "\033[1;38;2;210;165;50m";
    const std::string GOLD_D  = "\033[38;2;150;110;20m";

    // Тень на столе
    const std::string SHA1    = "\033[38;2;60;45;45m";
    const std::string SHA2    = "\033[38;2;80;65;60m";
    const std::string SHA3    = "\033[38;2;100;85;80m";

    std::cout << "\n\n";

    // ════════════════════════════════════════════════
    //  Строка 1 — верхний скос обложки
    // ════════════════════════════════════════════════
    std::cout
        << "   "
        << SPINE_H << "▄"
        << SPINE   << "▄▄▄"
        << COV_HI  << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄"
        << COV_SD  << "▄▄▄"
        << PAGE    << "▄▄▄▄▄▄▄▄"
        << R << "\n";

    // ════════════════════════════════════════════════
    //  Строки 2–4 — верхняя часть (блик сверху)
    // ════════════════════════════════════════════════
    auto covLine = [&](const std::string& inner) {
        std::cout
            << "   "
            << SPINE   << "█"
            << SPINE_H << "▓"
            << SPINE   << "█"
            << SPINE_H << "▒"
            << COV_HI  << "▌"
            << inner
            << COV_SD  << "▐"
            << PAGE    << "▐"
            << PAGE_SD << "██"
            << PAGE    << "▌"
            << PAGE_LN << "░░░░░"
            << R << "\n";
    };

    // Верхний блик
    covLine(COV_HI + "▓" + COV_MID + "█████████████████████████████" + COV_SD + "▓");

    // ════════════════════════════════════════════════
    //  Строки 5–7 — золотая рамка сверху
    // ════════════════════════════════════════════════
    std::cout
        << "   "
        << SPINE   << "█"
        << SPINE_H << "▓"
        << SPINE   << "█"
        << SPINE_H << "▒"
        << COV_HI  << "▌"
        << COV     << "█"
        << GOLD    << " ╔═══════════════════════════╗ "
        << COV_SD  << "▐"
        << PAGE    << "▐"
        << PAGE_SD << "██"
        << PAGE    << "▌"
        << PAGE_LN << "░░░░░"
        << R << "\n";

    // ════════════════════════════════════════════════
    //  Строки — пустые строки внутри рамки
    // ════════════════════════════════════════════════
    auto innerLine = [&](const std::string& content) {
        std::cout
            << "   "
            << SPINE   << "█"
            << SPINE_H << "▓"
            << SPINE   << "█"
            << SPINE_H << "▒"
            << COV_HI  << "▌"
            << COV     << "█"
            << GOLD    << " ║"
            << content
            << GOLD    << "║ "
            << COV_SD  << "▐"
            << PAGE    << "▐"
            << PAGE_SD << "██"
            << PAGE    << "▌"
            << PAGE_LN << "░░░░░"
            << R << "\n";
    };

    innerLine(COV     + "                             ");
    innerLine(COV     + "                             ");

    // ── Символ книги / медальон
    innerLine(COV_HI  + "        ╔═══════════╗        ");
    innerLine(COV_HI  + "        ║  " + GOLD + "✦ " + COV_HI + "░░░" + GOLD + " ✦" + COV_HI + "  ║        ");
    innerLine(COV_HI  + "        ║    " + GOLD + "░░░░░" + COV_HI + "    ║        ");
    innerLine(COV_HI  + "        ║  " + GOLD + "✦ " + COV_HI + "░░░" + GOLD + " ✦" + COV_HI + "  ║        ");
    innerLine(COV_HI  + "        ╚═══════════╝        ");

    innerLine(COV     + "                             ");

    // ── Название
    innerLine(COV     + "    " + GOLD + "  T H E   G R I M O I R E  " + "    ");
    innerLine(COV     + "    " + GOLD_D + " ─────────────────────── " + "    " );
    innerLine(COV     + "    " + GOLD + "     of  Ancient  Arts     " + "    ");
    innerLine(COV     + "                             ");
    innerLine(COV     + "    " + GOLD_D + "        ~ Vol. I ~        " + "     ");
    innerLine(COV     + "                             ");
    innerLine(COV     + "                             ");

    // ════════════════════════════════════════════════
    //  Нижняя рамка
    // ════════════════════════════════════════════════
    std::cout
        << "   "
        << SPINE   << "█"
        << SPINE_H << "▓"
        << SPINE   << "█"
        << SPINE_H << "▒"
        << COV_HI  << "▌"
        << COV     << "█"
        << GOLD    << " ╚═══════════════════════════╝ "
        << COV_SD  << "▐"
        << PAGE    << "▐"
        << PAGE_SD << "██"
        << PAGE    << "▌"
        << PAGE_LN << "░░░░░"
        << R << "\n";

    // ── Нижний блик
    covLine(COV_MID + "█████████████████████████████" + COV_SD + "▓");

    // ════════════════════════════════════════════════
    //  Нижний скос — подошва книги
    // ════════════════════════════════════════════════
    std::cout
        << "   "
        << SPINE   << "▀▀▀▀"
        << COV_MID << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"
        << COV_SD  << "▀▀▀"
        << PAGE_SD << "▀▀▀▀▀▀▀▀"
        << R << "\n";

    // ════════════════════════════════════════════════
    //  Тень (3 уровня мягкого размытия)
    // ════════════════════════════════════════════════
    std::cout
        << "    " << SHA1 << "▄███████████████████████████████████████▄" << R << "\n"
        << "     " << SHA2 << "▀███████████████████████████████████▀" << R << "\n"
        << "       " << SHA3 << "▀▀███████████████████████████▀▀" << R << "\n"
        << "\n";
}



void Art4option5() {
    const std::string R       = "\033[0m";

    // Металл корпуса
    const std::string MTL     = "\033[38;2;90;100;115m";
    const std::string MTL_H   = "\033[38;2;150;165;180m";  // блик
    const std::string MTL_D   = "\033[38;2;50;55;65m";     // тень
    const std::string MTL_M   = "\033[38;2;115;128;142m";  // средний

    // Зубья
    const std::string TOOTH   = "\033[38;2;170;185;200m";
    const std::string TOOTH_D = "\033[38;2;60;68;78m";

    // Центр / отверстие
    const std::string HOLE    = "\033[38;2;28;30;36m";
    const std::string HOLE_R  = "\033[38;2;65;72;85m";

    // Гравировка
    const std::string ENGV    = "\033[38;2;105;118;132m";

    // Золотые болты (как тиснение на книге)
    const std::string BOLT    = "\033[1;38;2;200;160;45m";
    const std::string BOLT_D  = "\033[38;2;140;105;20m";

    // Тень на столе
    const std::string SHA1    = "\033[38;2;38;34;34m";
    const std::string SHA2    = "\033[38;2;58;52;52m";
    const std::string SHA3    = "\033[38;2;78;70;70m";

    // Бумага с текстом (как чек из книжки)
    const std::string PAP     = "\033[38;2;238;230;208m";
    const std::string PAP_H   = "\033[1;38;2;175;140;55m";
    const std::string PAP_T   = "\033[38;2;50;40;25m";
    const std::string PAP_D   = "\033[38;2;155;120;35m";

    std::cout << "\n\n";

    // ══════════════════════════════════════
    //  Верхние зубья
    // ══════════════════════════════════════
    std::cout
        << "          "
        << TOOTH   << "   ▄██▄       ▄██▄   \n"
        << "          "
        << TOOTH   << "   ████       ████   \n";

    // ══════════════════════════════════════
    //  Верхняя дуга + боковые зубья
    // ══════════════════════════════════════
    std::cout
        << "       "
        << TOOTH_D << "▄" << TOOTH << "██" << MTL_H << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << TOOTH << "██" << TOOTH_D << "▄\n"
        << TOOTH << " ██" << MTL_H << "█" << MTL << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << MTL_H << "█" << TOOTH << "██\n";

    // ══════════════════════════════════════
    //  Тело шестерёнки — верх
    // ══════════════════════════════════════
    auto gearLine = [&](const std::string& leftTooth, const std::string& inner, const std::string& rightTooth) {
        std::cout
            << leftTooth
            << inner
            << rightTooth
            << "\n";
    };

    // Верхняя часть тела
    gearLine(
        TOOTH + " ██" + MTL + "█" + MTL_D,
        "                       ",
        MTL + "█" + TOOTH + "██"
    );
    gearLine(
        TOOTH + " ██" + MTL + "█" + MTL_D,
        "   " + BOLT + "◆" + MTL_D + "               " + BOLT + "◆" + MTL_D + "   ",
        MTL + "█" + TOOTH + "██"
    );

    // ── Центральное отверстие
    gearLine(
        TOOTH + " ██" + MTL + "█" + MTL_D,
        "        " + HOLE_R + "▄▄▄▄▄▄▄" + MTL_D + "        ",
        MTL + "█" + TOOTH + "██"
    );
    gearLine(
        TOOTH_D + "▀██" + MTL_H + "█" + MTL,
        "      " + HOLE_R + "▄" + HOLE + "█████████" + HOLE_R + "▄" + MTL + "      ",
        MTL_H + "█" + TOOTH + "██" + TOOTH_D + "▄"
    );

    // Боковые зубья (середина)
    std::cout
        << TOOTH << "████" << MTL << "█" << MTL_D
        << "    " + HOLE_R + "█" + HOLE + "███" + ENGV + " ✦ " + HOLE + "███" + HOLE_R + "█" + MTL_D + "    "
        << MTL << "█" << TOOTH << "████\n";

    std::cout
        << TOOTH << "████" << MTL << "█" << MTL_D
        << "    " + HOLE_R + "█" + HOLE + "███" + ENGV + "   " + HOLE + "███" + HOLE_R + "█" + MTL_D + "    "
        << MTL << "█" << TOOTH << "████\n";

    std::cout
        << TOOTH << "████" << MTL << "█" << MTL_D
        << "    " + HOLE_R + "█" + HOLE + "███████████" + HOLE_R + "█" + MTL_D + "    "
        << MTL << "█" << TOOTH << "████\n";

    // Нижняя часть отверстия
    gearLine(
        TOOTH_D + "▄██" + MTL_H + "█" + MTL,
        "      " + HOLE_R + "▀" + HOLE + "█████████" + HOLE_R + "▀" + MTL + "      ",
        MTL_H + "█" + TOOTH + "██" + TOOTH_D + "▀"
    );
    gearLine(
        TOOTH + " ██" + MTL + "█" + MTL_D,
        "        " + HOLE_R + "▀▀▀▀▀▀▀" + MTL_D + "        ",
        MTL + "█" + TOOTH + "██"
    );

    gearLine(
        TOOTH + " ██" + MTL + "█" + MTL_D,
        "   " + BOLT + "◆" + MTL_D + "               " + BOLT + "◆" + MTL_D + "   ",
        MTL + "█" + TOOTH + "██"
    );
    gearLine(
        TOOTH + " ██" + MTL + "█" + MTL_D,
        "                       ",
        MTL + "█" + TOOTH + "██"
    );

    // ══════════════════════════════════════
    //  Нижняя дуга
    // ══════════════════════════════════════
    std::cout
        << TOOTH << " ██" << MTL_H << "█" << MTL << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << MTL_H << "█" << TOOTH << "██\n"
        << "       "
        << TOOTH_D << "▀" << TOOTH << "██" << MTL_H << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" << TOOTH << "██" << TOOTH_D << "▀\n";

    // ══════════════════════════════════════
    //  Нижние зубья
    // ══════════════════════════════════════
    std::cout
        << "          "
        << TOOTH   << "   ████       ████   \n"
        << "          "
        << TOOTH_D << "   ▀██▀       ▀██▀   \n";

    // ══════════════════════════════════════
    //  Тень (как у книжки)
    // ══════════════════════════════════════
    std::cout
        << "       " << SHA1 << "▄████████████████████████████▄\n"
        << "        " << SHA2 << "▀██████████████████████████▀\n"
        << "          " << SHA3 << "▀▀██████████████████████▀▀\n";

    // ══════════════════════════════════════
    //  Бумага с текстом (выезжает снизу)
    // ══════════════════════════════════════
    std::cout
            << "              " << PAP << "╔═══════════════════════╗\n"
            << "              " << PAP << "║ " << PAP_H << "⚙  S E T T I N G S  ⚙" << PAP << " ║\n"
            << "              " << PAP << "╠═══════════════════════╣\n"
            << "              " << PAP << "║                       ║\n"
            << "              " << PAP << "║  " << PAP_T << "To change your         " << PAP << "║\n"
            << "              " << PAP << "║  " << PAP_T << "password, press        " << PAP << "║\n"
            << "              " << PAP << "║  " << PAP_D << "press " << PAP_H << "[ 1 ]" << PAP << "              ║\n"
            << "              " << PAP << "║                       ║\n"
            << "              " << PAP << "╚╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╝\n"
            << "              " << SHA1 << " ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n"
            << R << "\n";
}

#endif /* Arts_h */
