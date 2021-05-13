
/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Bulgarian
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 */
#define DISPLAY_CHARSET_ISO10646_5

namespace Language_bg {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t    CHARSIZE                            = 2;
  PROGMEM Language_Str LANGUAGE                            = _UxGT("Bulgarian");

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" е готов.");
  PROGMEM Language_Str MSG_YES                             = _UxGT("Да");
  PROGMEM Language_Str MSG_NO                              = _UxGT("Не");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Назад");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  = _UxGT("Прекъсване...");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Картата е поставена");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Картата е извадена");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   = _UxGT("Поставете карта");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                = _UxGT("Грешка в картата");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT("USB премахнат");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                = _UxGT("Грешка в USB");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_KILL_SUBCALL_OVERFLOW         = _UxGT("Прекратяване");
  #else
    PROGMEM Language_Str MSG_KILL_SUBCALL_OVERFLOW         = _UxGT("Прекратяване");
  #endif
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Прогр. ендостоп");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Ендостоп"); // Max length 8 characters
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Основно меню");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Други настройки");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Настройки");
  PROGMEM Language_Str MSG_AUTOSTART                       = _UxGT("Автостарт");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Изключи двигателите");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Меню отлагане");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               = _UxGT("Тест индикатора");
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Паркирай XYZ");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Паркирай X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Паркирай Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Паркирай Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Авто Z-подравняване");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Нулева позиция");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Натисни копче");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Поредна точка");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Изравняване готово!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Височина на пада");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_SET_HOME_OFFSETS              = _UxGT("Запомни паркинга");
  #else
    PROGMEM Language_Str MSG_SET_HOME_OFFSETS              = _UxGT("Запомни паркинга");
  #endif
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Приложи корекции");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Задай нула");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_PREHEAT_1                     = _UxGT("Подгряване ") PREHEAT_1_LABEL;
    PROGMEM Language_Str MSG_PREHEAT_1_H                   = _UxGT("Подгряване ") PREHEAT_1_LABEL " ~";
    PROGMEM Language_Str MSG_PREHEAT_1_END                 = _UxGT("Подгряване ") PREHEAT_1_LABEL _UxGT(" дюза");
    PROGMEM Language_Str MSG_PREHEAT_1_END_E               = _UxGT("Подгряване ") PREHEAT_1_LABEL _UxGT(" дюза ~");
    PROGMEM Language_Str MSG_PREHEAT_1_ALL                 = _UxGT("Подгряване ") PREHEAT_1_LABEL _UxGT(" всичко");
    PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY             = _UxGT("Подгряване ") PREHEAT_1_LABEL _UxGT(" легло");
    PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS            = _UxGT("Подгряване ") PREHEAT_1_LABEL _UxGT(" настройка");

    PROGMEM Language_Str MSG_PREHEAT_M                     = _UxGT("Подгряване $");
    PROGMEM Language_Str MSG_PREHEAT_M_H                   = _UxGT("Подгряване $ ~");
    PROGMEM Language_Str MSG_PREHEAT_M_END                 = _UxGT("Подгряване $ дюза");
    PROGMEM Language_Str MSG_PREHEAT_M_END_E               = _UxGT("Подгряване $ дюза ~");
    PROGMEM Language_Str MSG_PREHEAT_M_ALL                 = _UxGT("Подгряване $ всико");
    PROGMEM Language_Str MSG_PREHEAT_M_BEDONLY             = _UxGT("Подгряване $ легло");
    PROGMEM Language_Str MSG_PREHEAT_M_SETTINGS            = _UxGT("Подгряване $ настройка");
  #endif
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Подгряване отделно");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Охлаждене");
  PROGMEM Language_Str MSG_CUTTER_FREQUENCY                = _UxGT("Честота");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Управление лазер");
  PROGMEM Language_Str MSG_LASER_OFF                       = _UxGT("Вклучи лазер");
  PROGMEM Language_Str MSG_LASER_ON                        = _UxGT("Изключи лазер");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Сила на лазера");
  PROGMEM Language_Str MSG_SPINDLE_MENU                    = _UxGT("Управление шпиндел");
  PROGMEM Language_Str MSG_SPINDLE_OFF                     = _UxGT("Изключи шпиндел");
  PROGMEM Language_Str MSG_SPINDLE_ON                      = _UxGT("Включи шпиндел");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_SPINDLE_POWER                 = _UxGT("Сила на шпиндела");
  #else
    PROGMEM Language_Str MSG_SPINDLE_POWER                 = _UxGT("Сила на шпиндела");
  #endif
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Обратен шпиндел");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Включи ток");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Изключи ток");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Екструзия");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Оттегляне");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Движение по ос");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Изравни легло");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Подравни легло");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Подравни ъглите");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Пореден ъгъл");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_MESH_EDITOR                   = _UxGT("Отместване по Z");
    PROGMEM Language_Str MSG_EDITING_STOPPED               = _UxGT("Приключи редак.");
  #else
    PROGMEM Language_Str MSG_MESH_EDITOR                   = _UxGT("Отместване Z");
    PROGMEM Language_Str MSG_EDITING_STOPPED               = _UxGT("Редактирането приключи");
  #endif
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Редактирай мрежа");
  PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Точки на мрежата");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Индекс X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Индекс Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Значение Z");
  PROGMEM Language_Str MSG_USER_MENU                       = _UxGT("Ръчна команда");

  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("M48 тест Z-зонда");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Отклонение");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("M48 точка");

  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Меню IDEX");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Авто паркиране");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Размножение");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Огледално копие");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Пълен контрол");

  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Поставяне на дюзи");

  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT(" изместване X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT(" изместване Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT(" изместване Z");

  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("Изпълнява G29");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Инструменти UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Настройка UBL");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Точка на въртене");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Ръчна мрежа");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_UBL_BC_INSERT                 = _UxGT("Поставете шайбата и измерете");
    PROGMEM Language_Str MSG_UBL_BC_REMOVE                 = _UxGT("Извади измери легло");
  #else
    PROGMEM Language_Str MSG_UBL_BC_INSERT                 = _UxGT("Разм.шайба,измери");
    PROGMEM Language_Str MSG_UBL_BC_REMOVE                 = _UxGT("Премахни измерване");
  #endif
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Вмести 2");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Преместване");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Активирай UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Деактивирай UBL");

  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Редактор мрежа");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Направи мрежа");

  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_UBL_SET_TEMP_BED              = _UxGT("Температура легло");
    PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM           = _UxGT("Температура легло");
    PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND           = _UxGT("Температура легло");
    PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM        = _UxGT("Температура легло");
    PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH         = _UxGT("Ръчна мрежа");
    PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH         = _UxGT("Завърши мрежа");
  #else
    PROGMEM Language_Str MSG_UBL_SET_TEMP_BED              = LCD_STR_THERMOMETER _UxGT(" легло, ") LCD_STR_DEGREE "C";
    PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM           = LCD_STR_THERMOMETER _UxGT(" легло, ") LCD_STR_DEGREE "C";
    PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND           = LCD_STR_THERMOMETER _UxGT(" дюза,  ") LCD_STR_DEGREE "C";
    PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM        = LCD_STR_THERMOMETER _UxGT(" дюза,  ") LCD_STR_DEGREE "C";
    PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH         = _UxGT("Построй своя мрежа");
    PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH         = _UxGT("Редактирането приключи");
  #endif
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Прецизно измерване");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Направи мрежа");
  #if PREHEAT_COUNT
    PROGMEM Language_Str MSG_UBL_BUILD_MESH_M              = _UxGT("Направи мрежа $");
  #endif
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH           = _UxGT("Изгради студена мрежа");
  #else
    PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH           = _UxGT("Изградете студена мрежа");
  #endif
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Височина на мрежата");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Височина");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Провери мрежата");
  #if LCD_WIDTH > 21
    #if PREHEAT_COUNT
      PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M         = _UxGT("Провери мрежата $");
    #endif
    PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH      = _UxGT("Провери свойта мрежа");
  #else
    #if PREHEAT_COUNT
      PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M         = _UxGT("Провери мрежата $");
    #endif
    PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH      = _UxGT("Провери свойта мрежа");
  #endif
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("G26 нагряване легло");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("G26 нагряване дюза");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Ръчен прайм");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Установи дължина");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Грундът е готов");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 завършен");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("Излез от G26");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Продължи мрежата");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Подравнете мрежата");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING      = _UxGT("3-х точково изравняване");
  #else
    PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING      = _UxGT("3-точково изав.");
  #endif
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Калибровай растера");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Изравни мрежата");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Крайни точки");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Тип карта");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Покажи карта");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Изход към HOST");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Извести в CSV");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP         = _UxGT("Запазете");
    PROGMEM Language_Str MSG_UBL_INFO_UBL                  = _UxGT("Изход от UBL");
  #else
    PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP         = _UxGT("Запазете карта");
    PROGMEM Language_Str MSG_UBL_INFO_UBL                  = _UxGT("Справка UBL");
  #endif
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Кол-во запълване");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Ръчно запълване");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Умно запълване");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Запълни ; мрежата");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Анулирай всичко");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Аннулир. близкия");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Точна направа");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Настр.близка точка");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Съхранени на точки");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Слот памет");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Заредете мрежата");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Съхрани мрежата");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("Мрежата %i заредена");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("Мрежата %i съхранена");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Без запазване");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Грешка: съхран. UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Грешка: въстанови UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT(" Z стоп");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL стъпка по стъпка");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1.Изградете на студено");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2.Умно запълване");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3.Провери мрежата");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4.Точно настр. всичко");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5.Провери мрежата");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6.Точна настр. всичко");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7.Съхрани мрежата");

  PROGMEM Language_Str MSG_LED_CONTROL                     = _UxGT("Настрой подцветка");
  PROGMEM Language_Str MSG_LEDS                            = _UxGT("Подцветка");
  PROGMEM Language_Str MSG_LED_PRESETS                     = _UxGT("Предварителна настройка");
  PROGMEM Language_Str MSG_SET_LEDS_RED                    = _UxGT("червен");
  PROGMEM Language_Str MSG_SET_LEDS_ORANGE                 = _UxGT("оранжев");
  PROGMEM Language_Str MSG_SET_LEDS_YELLOW                 = _UxGT("жълт");
  PROGMEM Language_Str MSG_SET_LEDS_GREEN                  = _UxGT("зелен");
  PROGMEM Language_Str MSG_SET_LEDS_BLUE                   = _UxGT("син");
  PROGMEM Language_Str MSG_SET_LEDS_INDIGO                 = _UxGT("индиго");
  PROGMEM Language_Str MSG_SET_LEDS_VIOLET                 = _UxGT("виолетов");
  PROGMEM Language_Str MSG_SET_LEDS_WHITE                  = _UxGT("бял");
  PROGMEM Language_Str MSG_SET_LEDS_DEFAULT                = _UxGT("Светлина по подразбиране");
  PROGMEM Language_Str MSG_CUSTOM_LEDS                     = _UxGT("Персонолизирай цвят");
  PROGMEM Language_Str MSG_INTENSITY_R                     = _UxGT("Ниво червен");
  PROGMEM Language_Str MSG_INTENSITY_G                     = _UxGT("Ниво зелен");
  PROGMEM Language_Str MSG_INTENSITY_B                     = _UxGT("Ниво син");
  PROGMEM Language_Str MSG_INTENSITY_W                     = _UxGT("Ниво бял");
  PROGMEM Language_Str MSG_LED_BRIGHTNESS                  = _UxGT("Яркост");

  PROGMEM Language_Str MSG_MOVING                          = _UxGT("Движение...");
  PROGMEM Language_Str MSG_FREE_XY                         = _UxGT("Освободи XY");
  PROGMEM Language_Str MSG_MOVE_X                          = _UxGT("Движение по X");
  PROGMEM Language_Str MSG_MOVE_Y                          = _UxGT("Движение по Y");
  PROGMEM Language_Str MSG_MOVE_Z                          = _UxGT("Движение по Z");
  PROGMEM Language_Str MSG_MOVE_E                          = _UxGT("Екструдер");
  PROGMEM Language_Str MSG_MOVE_EN                         = _UxGT("Екструдер *");
  PROGMEM Language_Str MSG_HOTEND_TOO_COLD                 = _UxGT("Леглото е студено");
  PROGMEM Language_Str MSG_MOVE_Z_DIST                     = _UxGT("Движение %в мм");
  PROGMEM Language_Str MSG_MOVE_01MM                       = _UxGT("Движение 0.1мм");
  PROGMEM Language_Str MSG_MOVE_1MM                        = _UxGT("Движение 1мм");
  PROGMEM Language_Str MSG_MOVE_10MM                       = _UxGT("Движение 10мм");
  PROGMEM Language_Str MSG_SPEED                           = _UxGT("Скорост");
  PROGMEM Language_Str MSG_BED_Z                           = _UxGT("Z легло");
  PROGMEM Language_Str MSG_NOZZLE                          = _UxGT("Дюза, ") LCD_STR_DEGREE "C";
  PROGMEM Language_Str MSG_NOZZLE_N                        = _UxGT("Дюза ~");
  PROGMEM Language_Str MSG_NOZZLE_PARKED                   = _UxGT("Дюза е паркирана");
  PROGMEM Language_Str MSG_NOZZLE_STANDBY                  = _UxGT("Дюза очаква");
  PROGMEM Language_Str MSG_BED                             = _UxGT("Легло,") LCD_STR_DEGREE "C";
  PROGMEM Language_Str MSG_CHAMBER                         = _UxGT("Камера") LCD_STR_DEGREE "C";
  PROGMEM Language_Str MSG_FAN_SPEED                       = _UxGT("Охладител");
  PROGMEM Language_Str MSG_FAN_SPEED_N                     = _UxGT("Охладител ~");
  PROGMEM Language_Str MSG_STORED_FAN_N                    = _UxGT("Съхрани охладител ~");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED                 = _UxGT("Допълн. охладител");
  PROGMEM Language_Str MSG_EXTRA_FAN_SPEED_N               = _UxGT("Допълн. охладител ~");
  PROGMEM Language_Str MSG_CONTROLLER_FAN                  = _UxGT("Контролер охладител");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_IDLE_SPEED       = _UxGT("Скорост на празен ход");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_AUTO_ON          = _UxGT("Автоматично включване");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_SPEED            = _UxGT("Работни обороти");
  PROGMEM Language_Str MSG_CONTROLLER_FAN_DURATION         = _UxGT("Период престой");
  PROGMEM Language_Str MSG_FLOW                            = _UxGT("Поток");
  PROGMEM Language_Str MSG_FLOW_N                          = _UxGT("Поток ~");
  PROGMEM Language_Str MSG_CONTROL                         = _UxGT("Настройки");
  PROGMEM Language_Str MSG_MIN                             = " " LCD_STR_THERMOMETER ", " LCD_STR_DEGREE _UxGT("С  мин");
  PROGMEM Language_Str MSG_MAX                             = " " LCD_STR_THERMOMETER ", " LCD_STR_DEGREE _UxGT("С макс");
  PROGMEM Language_Str MSG_FACTOR                          = " " LCD_STR_THERMOMETER _UxGT(" Влияние");
  PROGMEM Language_Str MSG_AUTOTEMP                        = _UxGT("Автотемпер.");
  PROGMEM Language_Str MSG_LCD_ON                          = _UxGT("Вкл.");
  PROGMEM Language_Str MSG_LCD_OFF                         = _UxGT("Изкл.");

  PROGMEM Language_Str MSG_PID_AUTOTUNE                    = _UxGT("Автоподбор PID");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_E                  = _UxGT("Автоподбор PID *");
  PROGMEM Language_Str MSG_PID_AUTOTUNE_DONE               = _UxGT("Подбор PID изпълнен");
  PROGMEM Language_Str MSG_PID_BAD_EXTRUDER_NUM            = _UxGT("Неуспешно пасване.Грешен Екст.");
  PROGMEM Language_Str MSG_PID_TEMP_TOO_HIGH               = _UxGT("Неизправност.Висока Темп..");
  PROGMEM Language_Str MSG_PID_TIMEOUT                     = _UxGT("Неизправност.Времето изтече");

  PROGMEM Language_Str MSG_SELECT                          = _UxGT("Избор");
  PROGMEM Language_Str MSG_SELECT_E                        = _UxGT("Избор *");
  PROGMEM Language_Str MSG_ACC                             = _UxGT("Ускорение");
  PROGMEM Language_Str MSG_JERK                            = _UxGT("Откат");
  PROGMEM Language_Str MSG_VA_JERK                         = _UxGT("V а") LCD_STR_A _UxGT("-Откат");
  PROGMEM Language_Str MSG_VB_JERK                         = _UxGT("V в") LCD_STR_B _UxGT("-Откат");
  PROGMEM Language_Str MSG_VC_JERK                         = _UxGT("V с") LCD_STR_C _UxGT("-Откат");
  PROGMEM Language_Str MSG_VE_JERK                         = _UxGT("V e-откат");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_JUNCTION_DEVIATION            = _UxGT("Отклонение на възела");
  #else
    PROGMEM Language_Str MSG_JUNCTION_DEVIATION            = _UxGT("Откло. на възела");
  #endif
  PROGMEM Language_Str MSG_VELOCITY                        = _UxGT("Скорост, мм/с");
  PROGMEM Language_Str MSG_VMAX_A                          = _UxGT("Скор.макс ") LCD_STR_A;
  PROGMEM Language_Str MSG_VMAX_B                          = _UxGT("Скор.макс ") LCD_STR_B;
  PROGMEM Language_Str MSG_VMAX_C                          = _UxGT("Скор.макс ") LCD_STR_C;
  PROGMEM Language_Str MSG_VMAX_E                          = _UxGT("Скор.макс ") LCD_STR_E;
  PROGMEM Language_Str MSG_VMAX_EN                         = _UxGT("Скор.макс *");
  PROGMEM Language_Str MSG_VMIN                            = _UxGT("Скор.мин");
  PROGMEM Language_Str MSG_VTRAV_MIN                       = _UxGT("Преместване мин.");
  PROGMEM Language_Str MSG_ACCELERATION                    = _UxGT("Ускорение, мм/с2");
  PROGMEM Language_Str MSG_AMAX_A                          = _UxGT("Ускор.макс ") LCD_STR_A;
  PROGMEM Language_Str MSG_AMAX_B                          = _UxGT("Ускор.макс ") LCD_STR_B;
  PROGMEM Language_Str MSG_AMAX_C                          = _UxGT("Ускор.макс ") LCD_STR_C;
  PROGMEM Language_Str MSG_AMAX_E                          = _UxGT("Ускор.макс ") LCD_STR_E;
  PROGMEM Language_Str MSG_AMAX_EN                         = _UxGT("Ускор.макс *");
  PROGMEM Language_Str MSG_A_RETRACT                       = _UxGT("Ускор.прибиране.");
  PROGMEM Language_Str MSG_A_TRAVEL                        = _UxGT("Ускор.път.");
  PROGMEM Language_Str MSG_XY_FREQUENCY_LIMIT              = _UxGT("Честота макс.");
  PROGMEM Language_Str MSG_XY_FREQUENCY_FEEDRATE           = _UxGT("Прикачване мин.");
  PROGMEM Language_Str MSG_STEPS_PER_MM                    = _UxGT("Стъпки/мм");
  PROGMEM Language_Str MSG_A_STEPS                         = LCD_STR_A _UxGT(" стъпка/мм");
  PROGMEM Language_Str MSG_B_STEPS                         = LCD_STR_B _UxGT(" стъпка/мм");
  PROGMEM Language_Str MSG_C_STEPS                         = LCD_STR_C _UxGT(" стъпка/мм");
  PROGMEM Language_Str MSG_E_STEPS                         = _UxGT("E стъпка/мм");
  PROGMEM Language_Str MSG_EN_STEPS                        = _UxGT("* стъпка/мм");
  PROGMEM Language_Str MSG_TEMPERATURE                     = _UxGT("Температура");
  PROGMEM Language_Str MSG_MOTION                          = _UxGT("Движение");
  PROGMEM Language_Str MSG_FILAMENT                        = _UxGT("Нишка");
  PROGMEM Language_Str MSG_VOLUMETRIC_ENABLED              = _UxGT("E в мм³");
  PROGMEM Language_Str MSG_VOLUMETRIC_LIMIT                = _UxGT("E огран.,мм³");
  PROGMEM Language_Str MSG_VOLUMETRIC_LIMIT_E              = _UxGT("E огран. *");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_FILAMENT_DIAM                 = _UxGT("Диам. нишка");
    PROGMEM Language_Str MSG_FILAMENT_DIAM_E               = _UxGT("Диам. нишка *");
  #else
    PROGMEM Language_Str MSG_FILAMENT_DIAM                 = _UxGT("Диам. нишка.");
    PROGMEM Language_Str MSG_FILAMENT_DIAM_E               = _UxGT("Диам. нишка. *");
  #endif
  PROGMEM Language_Str MSG_FILAMENT_UNLOAD                 = _UxGT("Зареждане, мм");
  PROGMEM Language_Str MSG_FILAMENT_LOAD                   = _UxGT("Изваждане, мм");
  PROGMEM Language_Str MSG_ADVANCE_K                       = _UxGT("Kое. напредък.");
  PROGMEM Language_Str MSG_ADVANCE_K_E                     = _UxGT("Kое. напредък. *");
  PROGMEM Language_Str MSG_CONTRAST                        = _UxGT("Контраст на екрана");
  PROGMEM Language_Str MSG_STORE_EEPROM                    = _UxGT("Съхрани настройки");
  PROGMEM Language_Str MSG_LOAD_EEPROM                     = _UxGT("Отмени настройки");
  PROGMEM Language_Str MSG_RESTORE_DEFAULTS                = _UxGT("Възстанови параметри");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_INIT_EEPROM                   = _UxGT("Инициализация EEPROM");
  #else
    PROGMEM Language_Str MSG_INIT_EEPROM                   = _UxGT("Инициализ. EEPROM");
  #endif
  PROGMEM Language_Str MSG_ERR_EEPROM_CRC                  = _UxGT("Грешен EEPROM: CRC");
  PROGMEM Language_Str MSG_ERR_EEPROM_INDEX                = _UxGT("Грешен EEPROM: индекс");
  PROGMEM Language_Str MSG_ERR_EEPROM_VERSION              = _UxGT("Грешен EEPROM: версия");
  PROGMEM Language_Str MSG_SETTINGS_STORED                 = _UxGT("Параметрите са запазени");
  PROGMEM Language_Str MSG_MEDIA_UPDATE                    = _UxGT("Надстройка на програмата");
  PROGMEM Language_Str MSG_RESET_PRINTER                   = _UxGT("Нулиране на принтера");
  PROGMEM Language_Str MSG_REFRESH                         =  LCD_STR_REFRESH  _UxGT(" Обнови");
  PROGMEM Language_Str MSG_INFO_SCREEN                     = _UxGT("Главно меню");
  PROGMEM Language_Str MSG_PREPARE                         = _UxGT("Подготови");
  PROGMEM Language_Str MSG_TUNE                            = _UxGT("Настрой");
  PROGMEM Language_Str MSG_POWER_MONITOR                   = _UxGT("Монитор захранване");
  PROGMEM Language_Str MSG_CURRENT                         = _UxGT("Актуален");
  PROGMEM Language_Str MSG_VOLTAGE                         = _UxGT("Напрежение");
  PROGMEM Language_Str MSG_POWER                           = _UxGT("Сила");
  PROGMEM Language_Str MSG_START_PRINT                     = _UxGT("Начало на печат");

  PROGMEM Language_Str MSG_BUTTON_NEXT                     = _UxGT("Пореден"); //short text for buttons
  PROGMEM Language_Str MSG_BUTTON_INIT                     = _UxGT("Иниц-я");
  PROGMEM Language_Str MSG_BUTTON_STOP                     = _UxGT("Стоп");
  PROGMEM Language_Str MSG_BUTTON_PRINT                    = _UxGT("Печат");
  PROGMEM Language_Str MSG_BUTTON_RESET                    = _UxGT("Нулирай");
  PROGMEM Language_Str MSG_BUTTON_IGNORE                   = _UxGT("Игнорирай");
  PROGMEM Language_Str MSG_BUTTON_CANCEL                   = _UxGT("Отмяна");
  PROGMEM Language_Str MSG_BUTTON_DONE                     = _UxGT("Готово");
  PROGMEM Language_Str MSG_BUTTON_BACK                     = _UxGT("Назад");
  PROGMEM Language_Str MSG_BUTTON_PROCEED                  = _UxGT("Продължи");

  PROGMEM Language_Str MSG_PAUSE_PRINT                     = _UxGT("Пауза печат");
  PROGMEM Language_Str MSG_RESUME_PRINT                    = _UxGT("Продължи печат");
  PROGMEM Language_Str MSG_STOP_PRINT                      = _UxGT("Спри печат");
  PROGMEM Language_Str MSG_PRINTING_OBJECT                 = _UxGT("Печат на обекта");
  PROGMEM Language_Str MSG_CANCEL_OBJECT                   = _UxGT("Завърши обект");
  PROGMEM Language_Str MSG_CANCEL_OBJECT_N                 = _UxGT("Завърши обект =");
  PROGMEM Language_Str MSG_OUTAGE_RECOVERY                 = _UxGT("Възстановяване при срив");
  PROGMEM Language_Str MSG_MEDIA_MENU                      = _UxGT("Печат от SD карта");
  PROGMEM Language_Str MSG_NO_MEDIA                        = _UxGT("Няма SD карта");
  PROGMEM Language_Str MSG_DWELL                           = _UxGT("Покой...");
  PROGMEM Language_Str MSG_USERWAIT                        = _UxGT("Продължи...");
  PROGMEM Language_Str MSG_PRINT_PAUSED                    = _UxGT("Печат на пауза");
  PROGMEM Language_Str MSG_PRINTING                        = _UxGT("Принтира...");
  PROGMEM Language_Str MSG_PRINT_ABORTED                   = _UxGT("Печат отменен");
  PROGMEM Language_Str MSG_PRINT_DONE                      = _UxGT("Печат завършен");
  PROGMEM Language_Str MSG_NO_MOVE                         = _UxGT("Няма движение");
  PROGMEM Language_Str MSG_KILLED                          = _UxGT("УБИТО. ");
  PROGMEM Language_Str MSG_STOPPED                         = _UxGT("СПРЯНО. ");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_CONTROL_RETRACT               = _UxGT("Отдръпване, мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP          = _UxGT("Контрол отдр., мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP  = _UxGT("Възврат смени, мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF = _UxGT("Възврат смени, V");
    PROGMEM Language_Str MSG_AUTORETRACT                   = _UxGT("Автоотдъпване");
  #else
    PROGMEM Language_Str MSG_CONTROL_RETRACT               = _UxGT("Отдръпване., мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_SWAP          = _UxGT("Контрал отдр.,мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAP  = _UxGT("Възвр.смени,мм");
    PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER_SWAPF = _UxGT("Възвр.смени V");
    PROGMEM Language_Str MSG_AUTORETRACT                   = _UxGT("Авто отдъпване.");
  #endif
  PROGMEM Language_Str MSG_CONTROL_RETRACT_ZHOP            = _UxGT("Подскок, мм");
  PROGMEM Language_Str MSG_CONTROL_RETRACTF                = _UxGT("Отдръпване V");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVER         = _UxGT("Възврат, мм");
  PROGMEM Language_Str MSG_CONTROL_RETRACT_RECOVERF        = _UxGT("Възврат V");

  PROGMEM Language_Str MSG_FILAMENT_SWAP_LENGTH            = _UxGT("Промени дължина");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_FILAMENT_SWAP_EXTRA           = _UxGT("Промени допълнително");
  #else
    PROGMEM Language_Str MSG_FILAMENT_SWAP_EXTRA           = _UxGT("Промяна добавяне.");
  #endif
  PROGMEM Language_Str MSG_FILAMENT_PURGE_LENGTH           = _UxGT("Ясна дължина");

  PROGMEM Language_Str MSG_TOOL_CHANGE                     = _UxGT("Смяна на дюзите");
  PROGMEM Language_Str MSG_TOOL_CHANGE_ZLIFT               = _UxGT("Изкачване в Z");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPEED      = _UxGT("Начална скор.");
    PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPEED    = _UxGT("Скорост отдръпване.");
  #else
    PROGMEM Language_Str MSG_SINGLENOZZLE_PRIME_SPEED      = _UxGT("Начало.скор.");
    PROGMEM Language_Str MSG_SINGLENOZZLE_RETRACT_SPEED    = _UxGT("Скор.отдръпване.");
  #endif
  PROGMEM Language_Str MSG_FILAMENT_PARK_ENABLED           = _UxGT("Паркирай дюза");
  PROGMEM Language_Str MSG_SINGLENOZZLE_UNRETRACT_SPEED    = _UxGT("Върни скорост");
  PROGMEM Language_Str MSG_SINGLENOZZLE_FAN_SPEED          = _UxGT("Обороти охладител");
  PROGMEM Language_Str MSG_SINGLENOZZLE_FAN_TIME           = _UxGT("Време охладител");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_ON               = _UxGT("Подмяна Вкл.");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_OFF              = _UxGT("Подмяна Изкл.");
  PROGMEM Language_Str MSG_TOOL_MIGRATION                  = _UxGT("Замени инструмента");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_AUTO             = _UxGT("Авто подмяна");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_END              = _UxGT("Последен екструдер");
  PROGMEM Language_Str MSG_TOOL_MIGRATION_SWAP             = _UxGT("Замяна на *");
  PROGMEM Language_Str MSG_FILAMENTCHANGE                  = _UxGT("Размяна нишка");
  PROGMEM Language_Str MSG_FILAMENTCHANGE_E                = _UxGT("Размяна нишка *");
  PROGMEM Language_Str MSG_FILAMENTLOAD                    = _UxGT("Зареди нишка");
  PROGMEM Language_Str MSG_FILAMENTUNLOAD                  = _UxGT("Извади нишка");

  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_FILAMENTLOAD_E                = _UxGT("Зареди нишка *");
    PROGMEM Language_Str MSG_FILAMENTUNLOAD_E              = _UxGT("Извади нишка *");
  #else
    PROGMEM Language_Str MSG_FILAMENTLOAD_E                = _UxGT("Подай нишка *");
    PROGMEM Language_Str MSG_FILAMENTUNLOAD_E              = _UxGT("Извади нишка *");
  #endif
  PROGMEM Language_Str MSG_FILAMENTUNLOAD_ALL              = _UxGT("Извади всички");
  PROGMEM Language_Str MSG_ATTACH_MEDIA                    = _UxGT("Постави SD карта");
  PROGMEM Language_Str MSG_CHANGE_MEDIA                    = _UxGT("Смени SD карта");
  PROGMEM Language_Str MSG_RELEASE_MEDIA                   = _UxGT("Освободи SD карта");
  PROGMEM Language_Str MSG_ZPROBE_OUT                      = _UxGT("Z-сонда извън легло");
  PROGMEM Language_Str MSG_SKEW_FACTOR                     = _UxGT("Условие на наклона");
  PROGMEM Language_Str MSG_BLTOUCH                         = _UxGT("Z-сонда BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SELFTEST                = _UxGT("Тестване BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_RESET                   = _UxGT("Нулиране BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_STOW                    = _UxGT("Повдигане BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_DEPLOY                  = _UxGT("Нисък BLTouch");
  PROGMEM Language_Str MSG_BLTOUCH_SW_MODE                 = _UxGT("Режим SW");
  PROGMEM Language_Str MSG_BLTOUCH_5V_MODE                 = _UxGT("Режим 5V");
  PROGMEM Language_Str MSG_BLTOUCH_OD_MODE                 = _UxGT("Режим OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE              = _UxGT("Режим съхранение");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_5V           = _UxGT("Установи на 5V");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_STORE_OD           = _UxGT("Установи на OD");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_ECHO               = _UxGT("Източване на отчет");
  PROGMEM Language_Str MSG_BLTOUCH_MODE_CHANGE             = _UxGT("ОПАСНОСТ: Неправилните параметри водят до повреда! Продължавам?");
  PROGMEM Language_Str MSG_TOUCHMI_PROBE                   = _UxGT("Z-Сонда TouchMI");
  PROGMEM Language_Str MSG_TOUCHMI_INIT                    = _UxGT("Инициализация");
  PROGMEM Language_Str MSG_TOUCHMI_ZTEST                   = _UxGT("Тест Z-денивелация");
  PROGMEM Language_Str MSG_TOUCHMI_SAVE                    = _UxGT("Съхрани");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY_TOUCHMI           = _UxGT("Установи TouchMI");
  PROGMEM Language_Str MSG_MANUAL_DEPLOY                   = _UxGT("Установи сонда");
  PROGMEM Language_Str MSG_MANUAL_STOW                     = _UxGT("Изтеглете сондата");
  PROGMEM Language_Str MSG_HOME_FIRST                      = _UxGT("Първо паркирайте %s%s%s");
  PROGMEM Language_Str MSG_ZPROBE_OFFSETS                  = _UxGT("Z-сонда компенсира");
  PROGMEM Language_Str MSG_ZPROBE_XOFFSET                  = _UxGT("Измести X");
  PROGMEM Language_Str MSG_ZPROBE_YOFFSET                  = _UxGT("Измести Y");
  PROGMEM Language_Str MSG_ZPROBE_ZOFFSET                  = _UxGT("Измести Z");
  PROGMEM Language_Str MSG_BABYSTEP_X                      = _UxGT("Микростъпка X");
  PROGMEM Language_Str MSG_BABYSTEP_Y                      = _UxGT("Микростъпка Y");
  PROGMEM Language_Str MSG_BABYSTEP_Z                      = _UxGT("Микростъпка Z");
  PROGMEM Language_Str MSG_BABYSTEP_TOTAL                  = _UxGT("Микростъпка сумарно");
  PROGMEM Language_Str MSG_ENDSTOP_ABORT                   = _UxGT("Сработил изключвател");
  PROGMEM Language_Str MSG_HEATING_FAILED_LCD              = _UxGT("Загряването неуспешно");
  PROGMEM Language_Str MSG_ERR_REDUNDANT_TEMP              = _UxGT("Грешка:Излишна Т");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY                 = _UxGT("ТОПЛИНА");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_BED             = _UxGT("ТОПЛИНА ЛЕГЛО");
  PROGMEM Language_Str MSG_THERMAL_RUNAWAY_CHAMBER         = _UxGT("ТОПЛИНА КАМЕРА");
  PROGMEM Language_Str MSG_ERR_MAXTEMP                     = _UxGT("Грешка: Т макс.");
  PROGMEM Language_Str MSG_ERR_MINTEMP                     = _UxGT("Грешка: Т мин.");
  PROGMEM Language_Str MSG_HALTED                          = _UxGT("ПРИНТЕРЪТ Е СПРАН ");
  PROGMEM Language_Str MSG_PLEASE_RESET                    = _UxGT("Нулирайте");
  PROGMEM Language_Str MSG_SHORT_DAY                       = _UxGT("д"); // One character only
  PROGMEM Language_Str MSG_SHORT_HOUR                      = _UxGT("ч"); // One character only
  PROGMEM Language_Str MSG_SHORT_MINUTE                    = _UxGT("м"); // One character only
  PROGMEM Language_Str MSG_HEATING                         = _UxGT("Нагряване...");
  PROGMEM Language_Str MSG_COOLING                         = _UxGT("Охлаждане...");
  PROGMEM Language_Str MSG_BED_HEATING                     = _UxGT("Нагряване легло...");
  PROGMEM Language_Str MSG_CHAMBER_HEATING                 = _UxGT("Нагряване камера...");
  PROGMEM Language_Str MSG_BED_COOLING                     = _UxGT("Охлаждане легло...");
  PROGMEM Language_Str MSG_CHAMBER_COOLING                 = _UxGT("Охладжанее камера...");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE                 = _UxGT("Калибровка Delta");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_X               = _UxGT("Калибровай X");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Y               = _UxGT("Калибровай Y");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_Z               = _UxGT("Калибровай Z");
  PROGMEM Language_Str MSG_DELTA_CALIBRATE_CENTER          = _UxGT("Калибровай център");
  PROGMEM Language_Str MSG_DELTA_SETTINGS                  = _UxGT("Настройка Delta");
  PROGMEM Language_Str MSG_DELTA_AUTO_CALIBRATE            = _UxGT("Авто калибровка");
  PROGMEM Language_Str MSG_DELTA_HEIGHT_CALIBRATE          = _UxGT("Височина Delta");
  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE      = _UxGT("Z-отместване на сондата");
    PROGMEM Language_Str MSG_DELTA_DIAG_ROD                = _UxGT("Диагонална лента");
  #else
    PROGMEM Language_Str MSG_DELTA_Z_OFFSET_CALIBRATE      = _UxGT("Сондир. Z-компенсации");
    PROGMEM Language_Str MSG_DELTA_DIAG_ROD                = _UxGT("Ядро диаг.");
  #endif
  PROGMEM Language_Str MSG_DELTA_HEIGHT                    = _UxGT("Височина");
  PROGMEM Language_Str MSG_DELTA_RADIUS                    = _UxGT("Радиус");
  PROGMEM Language_Str MSG_INFO_MENU                       = _UxGT("За принтера");
  PROGMEM Language_Str MSG_INFO_PRINTER_MENU               = _UxGT("Данни за принтера");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_3POINT_LEVELING               = _UxGT("3-точково подравняване");
    PROGMEM Language_Str MSG_LINEAR_LEVELING               = _UxGT("Линейно подравняване");
    PROGMEM Language_Str MSG_BILINEAR_LEVELING             = _UxGT("Билинейно подравняване");
  #else
    PROGMEM Language_Str MSG_3POINT_LEVELING               = _UxGT("3-точ. подрав.");
    PROGMEM Language_Str MSG_LINEAR_LEVELING               = _UxGT("Линейно подрав.");
    PROGMEM Language_Str MSG_BILINEAR_LEVELING             = _UxGT("Билин. подрав.");
  #endif
  PROGMEM Language_Str MSG_UBL_LEVELING                    = _UxGT("Управление UBL");
  PROGMEM Language_Str MSG_MESH_LEVELING                   = _UxGT("Изравняване на мрежата");

  PROGMEM Language_Str MSG_INFO_STATS_MENU                 = _UxGT("Статистика за принтера");
  PROGMEM Language_Str MSG_INFO_BOARD_MENU                 = _UxGT("Данни за борда");
  PROGMEM Language_Str MSG_INFO_THERMISTOR_MENU            = _UxGT("Термистори");
  PROGMEM Language_Str MSG_INFO_EXTRUDERS                  = _UxGT("Екструдери");
  PROGMEM Language_Str MSG_INFO_BAUDRATE                   = _UxGT("Скорост,БОД");
  PROGMEM Language_Str MSG_INFO_PROTOCOL                   = _UxGT("Протокол");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF              = _UxGT("Контрол на течове Т: Изкл.");
    PROGMEM Language_Str MSG_INFO_RUNAWAY_ON               = _UxGT("Контрол на течове Т: Вкл.");
    PROGMEM Language_Str MSG_HOTEND_IDLE_TIMEOUT           = _UxGT("Престой в топлия край");
  #else
    PROGMEM Language_Str MSG_INFO_RUNAWAY_OFF              = _UxGT("Контр.теч Т:Изкл.");
    PROGMEM Language_Str MSG_INFO_RUNAWAY_ON               = _UxGT("Контр.теч Т:Вкл.");
    PROGMEM Language_Str MSG_HOTEND_IDLE_TIMEOUT           = _UxGT("Време прост.дюза");
  #endif
  PROGMEM Language_Str MSG_CASE_LIGHT                      = _UxGT("Подцветка корп.  ");
  PROGMEM Language_Str MSG_CASE_LIGHT_BRIGHTNESS           = _UxGT("Подцветка ярко.  ");
  PROGMEM Language_Str MSG_KILL_EXPECTED_PRINTER           = _UxGT("Невалиден принтер");

  #if LCD_WIDTH >= 20
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Брояч за печат");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Общо време за печат");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Най-голямата задача");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Дължина на нишката");
  #else
    PROGMEM Language_Str MSG_INFO_PRINT_COUNT              = _UxGT("Разпечатки");
    PROGMEM Language_Str MSG_INFO_PRINT_TIME               = _UxGT("Общо време");
    PROGMEM Language_Str MSG_INFO_PRINT_LONGEST            = _UxGT("Най-голямото");
    PROGMEM Language_Str MSG_INFO_PRINT_FILAMENT           = _UxGT("Екструдирана нишка");
  #endif
  PROGMEM Language_Str MSG_INFO_COMPLETED_PRINTS           = _UxGT("Принта завършен");

  PROGMEM Language_Str MSG_INFO_MIN_TEMP                   = _UxGT("Мин.  ") LCD_STR_THERMOMETER;
  PROGMEM Language_Str MSG_INFO_MAX_TEMP                   = _UxGT("Макс. ") LCD_STR_THERMOMETER;
  PROGMEM Language_Str MSG_INFO_PSU                        = _UxGT("БП");
  PROGMEM Language_Str MSG_DRIVE_STRENGTH                  = _UxGT("Задвижвана сила");
  PROGMEM Language_Str MSG_DAC_PERCENT_X                   = _UxGT("X Скорост, %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Y                   = _UxGT("Y Скорост, %");
  PROGMEM Language_Str MSG_DAC_PERCENT_Z                   = _UxGT("Z Скорост, %");
  PROGMEM Language_Str MSG_DAC_PERCENT_E                   = _UxGT("E Скорост, %");
  PROGMEM Language_Str MSG_ERROR_TMC                       = _UxGT("ГРЕШКА С TMC");
  PROGMEM Language_Str MSG_DAC_EEPROM_WRITE                = _UxGT("Запис DAC в EEPROM");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER          = _UxGT("Подмени нишката");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_PAUSE    = _UxGT("ПЕЧАТ НА ПАУЗА");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_LOAD     = _UxGT("Заредете нишката");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEADER_UNLOAD   = _UxGT("Извадете нишката");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_HEADER   = _UxGT("Опции за дюзата:");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_PURGE    = _UxGT("Изтичане ");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_OPTION_RESUME   = _UxGT("Възобнови печат");
  PROGMEM Language_Str MSG_FILAMENT_CHANGE_NOZZLE          = _UxGT("  ДЮЗА: ");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_RUNOUT_SENSOR                 = _UxGT("Датчик за нишка");
  #else
    PROGMEM Language_Str MSG_RUNOUT_SENSOR                 = _UxGT("Датчик за нишка");
  #endif
  PROGMEM Language_Str MSG_RUNOUT_DISTANCE_MM              = _UxGT("До края, мм");
  PROGMEM Language_Str MSG_KILL_HOMING_FAILED              = _UxGT("Грешка при паркиране");
  PROGMEM Language_Str MSG_LCD_PROBING_FAILED              = _UxGT("Грешка при проба");

  PROGMEM Language_Str MSG_MMU2_CHOOSE_FILAMENT_HEADER     = _UxGT("Изберете нишка");
  PROGMEM Language_Str MSG_MMU2_MENU                       = _UxGT("Настройки MMU");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_KILL_MMU2_FIRMWARE            = _UxGT("Актуализирайте програмата MMU!");
  #else
    PROGMEM Language_Str MSG_KILL_MMU2_FIRMWARE            = _UxGT("Актуализирайте програмата MMU");
  #endif
  PROGMEM Language_Str MSG_MMU2_NOT_RESPONDING             = _UxGT("MMU не отговаря");
  PROGMEM Language_Str MSG_MMU2_RESUME                     = _UxGT("Продължи печат");
  PROGMEM Language_Str MSG_MMU2_RESUMING                   = _UxGT("Продължение...");
  PROGMEM Language_Str MSG_MMU2_LOAD_FILAMENT              = _UxGT("Зареди нишка");
  PROGMEM Language_Str MSG_MMU2_LOAD_ALL                   = _UxGT("Зареди всички");
  PROGMEM Language_Str MSG_MMU2_LOAD_TO_NOZZLE             = _UxGT("Зареди в дюза");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT             = _UxGT("Освободи нишка");
  PROGMEM Language_Str MSG_MMU2_EJECT_FILAMENT_N           = _UxGT("Освободи нишка ~");
  PROGMEM Language_Str MSG_MMU2_UNLOAD_FILAMENT            = _UxGT("Извади нишка");
  PROGMEM Language_Str MSG_MMU2_LOADING_FILAMENT           = _UxGT("Зареждане %i...");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT        = _UxGT("Освободи нишка...");
  #else
    PROGMEM Language_Str MSG_MMU2_EJECTING_FILAMENT        = _UxGT("Освободи нишка...");
  #endif
  PROGMEM Language_Str MSG_MMU2_UNLOADING_FILAMENT         = _UxGT("Извади нишка....");
  PROGMEM Language_Str MSG_MMU2_ALL                        = _UxGT("Всички");
  PROGMEM Language_Str MSG_MMU2_FILAMENT_N                 = _UxGT("Нишка ~");
  PROGMEM Language_Str MSG_MMU2_RESET                      = _UxGT("Нулиряй MMU");
  PROGMEM Language_Str MSG_MMU2_RESETTING                  = _UxGT("Нулиране MMU...");
  PROGMEM Language_Str MSG_MMU2_EJECT_RECOVER              = _UxGT("Освободи и натисни");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_MIX                           = _UxGT("Смесване");
  #else
    PROGMEM Language_Str MSG_MIX                           = _UxGT("Смесване");
  #endif
  PROGMEM Language_Str MSG_MIX_COMPONENT_N                 = _UxGT("Компонент смесване =");
  PROGMEM Language_Str MSG_MIXER                           = _UxGT("Смесител");
  PROGMEM Language_Str MSG_GRADIENT                        = _UxGT("Градиент");
  PROGMEM Language_Str MSG_FULL_GRADIENT                   = _UxGT("Пълен градиент");
  PROGMEM Language_Str MSG_CYCLE_MIX                       = _UxGT("Циклично смесване");
  PROGMEM Language_Str MSG_GRADIENT_MIX                    = _UxGT("Градиент смесване");
  PROGMEM Language_Str MSG_REVERSE_GRADIENT                = _UxGT("Обратен градиент");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_TOGGLE_MIX                    = _UxGT("Превключване на смесването");
    PROGMEM Language_Str MSG_ACTIVE_VTOOL                  = _UxGT("Активация В-инструм.");
    PROGMEM Language_Str MSG_START_VTOOL                   = _UxGT("Начало В-инструмент");
    PROGMEM Language_Str MSG_END_VTOOL                     = _UxGT("Край В-инструмента");
    PROGMEM Language_Str MSG_GRADIENT_ALIAS                = _UxGT("Псевдоним В-инструмент");
    PROGMEM Language_Str MSG_RESET_VTOOLS                  = _UxGT("Грешка В-инструмент");
    PROGMEM Language_Str MSG_VTOOLS_RESET                  = _UxGT("В-инструменти сброшены");
    PROGMEM Language_Str MSG_COMMIT_VTOOL                  = _UxGT("Смесване В-инструменти");
  #else
    PROGMEM Language_Str MSG_TOGGLE_MIX                    = _UxGT("забележи смесването");
    PROGMEM Language_Str MSG_ACTIVE_VTOOL                  = _UxGT("Актив.В-инстр.");
    PROGMEM Language_Str MSG_START_VTOOL                   = _UxGT("В-инстр.нач.");
    PROGMEM Language_Str MSG_END_VTOOL                     = _UxGT("В-инстр.край.");
    PROGMEM Language_Str MSG_GRADIENT_ALIAS                = _UxGT("Псевдоним В-инстр.");
    PROGMEM Language_Str MSG_RESET_VTOOLS                  = _UxGT("Нулирай В-инстр.");
    PROGMEM Language_Str MSG_VTOOLS_RESET                  = _UxGT("В-инстр. отпада");
    PROGMEM Language_Str MSG_COMMIT_VTOOL                  = _UxGT("Ангажирай В-инстр.");
  #endif
  PROGMEM Language_Str MSG_START_Z                         = _UxGT("Начало Z");
  PROGMEM Language_Str MSG_END_Z                           = _UxGT(" Край Z");

  PROGMEM Language_Str MSG_GAMES                           = _UxGT("ИГРИ");
  PROGMEM Language_Str MSG_BRICKOUT                        = _UxGT("Тухли");
  PROGMEM Language_Str MSG_INVADERS                        = _UxGT("Инвазия");
  PROGMEM Language_Str MSG_SNAKE                           = _UxGT("Змия");
  PROGMEM Language_Str MSG_MAZE                            = _UxGT("Лабиринт");

  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_BAD_PAGE                      = _UxGT("Лош индекс на страницата");
    PROGMEM Language_Str MSG_BAD_PAGE_SPEED                = _UxGT("Скорост на плоска страница");
  #else
    PROGMEM Language_Str MSG_BAD_PAGE                      = _UxGT("Лоша страница");
    PROGMEM Language_Str MSG_BAD_PAGE_SPEED                = _UxGT("Лоша скор.стран.");
  #endif

  PROGMEM Language_Str MSG_PAUSE_PRINT_PARKING             = _UxGT(MSG_1_LINE("Паркиране..."));
  //
  // Filament Change screens show up to 3 lines on a 4-line display
  //                        ...or up to 2 lines on a 3-line display
  //
  #if LCD_HEIGHT >= 4
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_2_LINE("натисни копче", "да продължи"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Паркинг..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_3_LINE("Очаквам", "Начало смяна", "нишка"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_3_LINE("Очаквам", "Изваждане", "нишка"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_3_LINE("Постани нишка", "натисни копче", "да продължи"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEAT          = _UxGT(MSG_2_LINE("Натисни копче", "нагрява дюза..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_2_LINE("Нагряване дюза", "Очакване..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_2_LINE("Очаквам", "Зареди нишка"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_3_LINE("Очаквам", "екструзия", "нишка"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_3_LINE("Очаквам", "обнови", "печат"));
  #else
    PROGMEM Language_Str MSG_ADVANCED_PAUSE_WAITING        = _UxGT(MSG_1_LINE("Натисни да продължи"));
    PROGMEM Language_Str MSG_PAUSE_PRINT_INIT              = _UxGT(MSG_1_LINE("Паркинг..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INIT          = _UxGT(MSG_1_LINE("Очакване..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Зареди и кликни"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_UNLOAD        = _UxGT(MSG_1_LINE("Изваждане..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_INSERT        = _UxGT(MSG_1_LINE("Поднови"));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_HEATING       = _UxGT(MSG_1_LINE("Нагряване..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_LOAD          = _UxGT(MSG_1_LINE("Зареждане..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_PURGE         = _UxGT(MSG_1_LINE("Подаване..."));
    PROGMEM Language_Str MSG_FILAMENT_CHANGE_RESUME        = _UxGT(MSG_1_LINE("Продължи..."));
  #endif

  PROGMEM Language_Str MSG_TMC_DRIVERS                     = _UxGT("Драйвер TMC");
  PROGMEM Language_Str MSG_TMC_CURRENT                     = _UxGT("Актуални настройки");
  PROGMEM Language_Str MSG_TMC_HYBRID_THRS                 = _UxGT("Кръстосан режим");
  PROGMEM Language_Str MSG_TMC_HOMING_THRS                 = _UxGT("Режим без ендстоп");
  PROGMEM Language_Str MSG_TMC_STEPPING_MODE               = _UxGT("Стъпков режим");
  PROGMEM Language_Str MSG_TMC_STEALTH_ENABLED             = _UxGT("Тих режим вкл");
  PROGMEM Language_Str MSG_SERVICE_IN                      = _UxGT(" В:");
  PROGMEM Language_Str MSG_BACKLASH                        = _UxGT("Засечка");
  PROGMEM Language_Str MSG_BACKLASH_A                      = LCD_STR_A;
  PROGMEM Language_Str MSG_BACKLASH_B                      = LCD_STR_B;
  PROGMEM Language_Str MSG_BACKLASH_C                      = LCD_STR_C;
  PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Корекция");
  PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Изглаждане");

  PROGMEM Language_Str MSG_SERVICE_RESET                   = _UxGT("Нулирай");
  //PROGMEM Language_Str MSG_SERVICE_IN                      = _UxGT(" в:");
  //PROGMEM Language_Str MSG_BACKLASH                        = _UxGT("Люк");
  //PROGMEM Language_Str MSG_BACKLASH_CORRECTION             = _UxGT("Корекция");
  //PROGMEM Language_Str MSG_BACKLASH_SMOOTHING              = _UxGT("Изглаждане");

  PROGMEM Language_Str MSG_LEVEL_X_AXIS                    = _UxGT("Ниво на оста X");
  PROGMEM Language_Str MSG_AUTO_CALIBRATE                  = _UxGT("Авто калибровка");
  #if LCD_WIDTH > 21
    PROGMEM Language_Str MSG_HEATER_TIMEOUT                = _UxGT("Време за изчакване на нагревателя");
  #else
    PROGMEM Language_Str MSG_HEATER_TIMEOUT                = _UxGT("Време нагр. приключи");
  #endif
  PROGMEM Language_Str MSG_REHEAT                          = _UxGT("Възобнови нагряване");
  PROGMEM Language_Str MSG_REHEATING                       = _UxGT("Нагряване...");
}

#if FAN_COUNT == 1
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED
  #define MSG_FIRST_EXTRA_FAN_SPEED MSG_EXTRA_FAN_SPEED
#else
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED_N
  #define MSG_FIRST_EXTRA_FAN_SPEED MSG_EXTRA_FAN_SPEED_N
#endif
