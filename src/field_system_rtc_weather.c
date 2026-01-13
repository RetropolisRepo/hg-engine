#include "../include/bag.h"
#include "../include/rtc.h"
#include "../include/save.h"
#include "../include/script.h"
#include "../include/constants/badge.h"
#include "../include/constants/maps.h"
#include "../include/constants/weather_numbers.h"

const MonthDay DiamondDustDates[] = {
    { JANUARY,  1  },
    { JANUARY,  31 },
    { FEBRUARY, 1  },
    { FEBRUARY, 29 },
    { MARCH,    15 },
    { OCTOBER,  10 },
    { DECEMBER, 3  },
    { DECEMBER, 31 },
}; //_020FA09C

const MonthDay RainGroup_1[] = {
    { JANUARY,   4  },
    { JANUARY,   10 },
    { MARCH,     7  },
    { MARCH,     27 },
    { APRIL,     16 },
    { MAY,       10 },
    { JUNE,      3  },
    { JUNE,      9  },
    { JUNE,      15 },
    { JUNE,      20 },
    { JULY,      1  },
    { JULY,      2  },
    { JULY,      5  },
    { JULY,      12 },
    { JULY,      26 },
    { AUGUST,    4  },
    { AUGUST,    27 },
    { SEPTEMBER, 18 },
    { OCTOBER,   7  },
    { OCTOBER,   29 },
    { NOVEMBER,  14 },
    { DECEMBER,  22 },
};

const MonthDay RainGroup_2[] = {
    { JANUARY,   5  },
    { JANUARY,   11 },
    { FEBRUARY,  8  },
    { MARCH,     9  },
    { APRIL,     17 },
    { MAY,       7  },
    { MAY,       18 },
    { JUNE,      4  },
    { JUNE,      10 },
    { JUNE,      16 },
    { JUNE,      20 },
    { JUNE,      28 },
    { JULY,      2  },
    { JULY,      6  },
    { JULY,      13 },
    { JULY,      18 },
    { AUGUST,    16 },
    { AUGUST,    18 },
    { AUGUST,    26 },
    { SEPTEMBER, 19 },
    { OCTOBER,   6  },
    { OCTOBER,   20 },
    { NOVEMBER,  16 },
    { DECEMBER,  23 },
};

const MonthDay RainGroup_3[] = {
    { JANUARY,   17 },
    { FEBRUARY,  10 },
    { MARCH,     18 },
    { APRIL,     8  },
    { APRIL,     25 },
    { MAY,       8  },
    { MAY,       28 },
    { JUNE,      8  },
    { JUNE,      17 },
    { JUNE,      21 },
    { JUNE,      24 },
    { JUNE,      29 },
    { JULY,      3  },
    { JULY,      7  },
    { JULY,      13 },
    { JULY,      27 },
    { AUGUST,    10 },
    { AUGUST,    22 },
    { SEPTEMBER, 8  },
    { OCTOBER,   13 },
    { NOVEMBER,  7  },
    { DECEMBER,  7  },
    { DECEMBER,  29 },
};

const MonthDay RainGroup_4[] = {
    { JANUARY,   11 },
    { JANUARY,   17 },
    { FEBRUARY,  9  },
    { FEBRUARY,  16 },
    { MARCH,     8  },
    { MARCH,     28 },
    { APRIL,     7  },
    { APRIL,     24 },
    { MAY,       11 },
    { MAY,       19 },
    { MAY,       27 },
    { JUNE,      5  },
    { JUNE,      10 },
    { JUNE,      15 },
    { JUNE,      16 },
    { JUNE,      21 },
    { JUNE,      23 },
    { JUNE,      28 },
    { JULY,      3  },
    { JULY,      6  },
    { JULY,      12 },
    { JULY,      19 },
    { JULY,      26 },
    { AUGUST,    6  },
    { AUGUST,    18 },
    { SEPTEMBER, 7  },
    { SEPTEMBER, 27 },
    { OCTOBER,   8  },
    { OCTOBER,   19 },
    { OCTOBER,   30 },
    { NOVEMBER,  18 },
    { DECEMBER,  6  },
    { DECEMBER,  12 },
    { DECEMBER,  28 },
};

const MonthDay RainGroup_5[] = {
    { JANUARY,   18 },
    { FEBRUARY,  17 },
    { MARCH,     29 },
    { APRIL,     13 },
    { MAY,       12 },
    { MAY,       20 },
    { MAY,       28 },
    { JUNE,      6  },
    { JUNE,      11 },
    { JUNE,      22 },
    { JUNE,      24 },
    { JULY,      2  },
    { JULY,      4  },
    { JULY,      7  },
    { JULY,      20 },
    { AUGUST,    9  },
    { AUGUST,    19 },
    { SEPTEMBER, 8  },
    { SEPTEMBER, 28 },
    { OCTOBER,   31 },
    { NOVEMBER,  19 },
    { DECEMBER,  13 },
};

const MonthDay RainGroup_6[] = {
    { JANUARY,   18 },
    { FEBRUARY,  21 },
    { APRIL,     6  },
    { APRIL,     30 },
    { MAY,       9  },
    { MAY,       20 },
    { JUNE,      9  },
    { JUNE,      15 },
    { JUNE,      16 },
    { JUNE,      22 },
    { JUNE,      29 },
    { JUNE,      30 },
    { JULY,      4  },
    { JULY,      14 },
    { JULY,      22 },
    { JULY,      28 },
    { AUGUST,    5  },
    { AUGUST,    11 },
    { SEPTEMBER, 4  },
    { SEPTEMBER, 9  },
    { OCTOBER,   12 },
    { NOVEMBER,  6  },
    { DECEMBER,  2  },
    { DECEMBER,  30 },
	
};

const MonthDay RainGroup_7[] = {
    { JANUARY,   25 },
    { FEBRUARY,  2  },
    { FEBRUARY,  22 },
    { MARCH,     14 },
    { APRIL,     7  },
    { APRIL,     12 },
    { MAY,       1  },
    { MAY,       10 },
    { MAY,       13 },
    { MAY,       18 },
    { MAY,       19 },
    { JUNE,      8  },
    { JUNE,      14 },
    { JUNE,      15 },
    { JUNE,      19 },
    { JUNE,      23 },
    { JUNE,      24 },
    { JUNE,      29 },
    { JUNE,      30 },
    { JULY,      1  },
    { JULY,      5  },
    { JULY,      6  },
    { JULY,      12 },
    { JULY,      13 },
    { JULY,      27 },
    { AUGUST,    9  },
    { AUGUST,    10 },
    { AUGUST,    21 },
    { SEPTEMBER, 8  },
    { SEPTEMBER, 16 },
    { OCTOBER,   3  },
    { OCTOBER,   11 },
    { NOVEMBER,  5  },
    { NOVEMBER,  22 },
    { DECEMBER,  17 },
};

const MonthDay RainGroup_8[] = {
    { JANUARY,   15 },
    { FEBRUARY,  19 },
    { MARCH,     10 },
    { APRIL,     4  },
    { APRIL,     18 },
    { MAY,       7  },
    { JUNE,      6  },
    { JUNE,      7  },
    { JUNE,      17 },
    { JUNE,      27 },
    { JULY,      2  },
    { JULY,      3  },
    { JULY,      6  },
    { JULY,      13 },
    { JULY,      20 },
    { AUGUST,    3  },
    { AUGUST,    16 },
    { AUGUST,    25 },
    { SEPTEMBER, 2  },
    { OCTOBER,   5  },
    { OCTOBER,   20 },
    { NOVEMBER,  12 },
    { NOVEMBER,  30 },
    { DECEMBER,  24 },
};

const MonthDay RainGroup_9[] = {
    { JANUARY,   14 },
    { MARCH,     6  },
    { APRIL,     3  },
    { MAY,       6  },
    { MAY,       17 },
    { JUNE,      3  },
    { JUNE,      19 },
    { JULY,      1  },
    { JULY,      13 },
    { AUGUST,    15 },
    { AUGUST,    26 },
    { OCTOBER,   6  },
    { NOVEMBER,  13 },
};

const MonthDay RainGroup_10[] = {
    { JANUARY,   26 },
    { FEBRUARY,  3  },
    { FEBRUARY,  22 },
    { MARCH,     14 },
    { APRIL,     12 },
    { MAY,       2  },
    { MAY,       10 },
    { MAY,       13 },
    { MAY,       18 },
    { JUNE,      8  },
    { JUNE,      15 },
    { JUNE,      20 },
    { JUNE,      23 },
    { JUNE,      29 },
    { JUNE,      30 },
    { JULY,      1  },
    { JULY,      6  },
    { JULY,      12 },
    { JULY,      27 },
    { AUGUST,    11 },
    { AUGUST,    22 },
    { SEPTEMBER, 17 },
    { OCTOBER,   3  },
    { OCTOBER,   11 },
    { NOVEMBER,  5  },
    { NOVEMBER,  23 },
    { DECEMBER,  18 },
};

const MonthDay RainGroup_11[] = {
    { JANUARY,   18 },
    { JANUARY,   25 },
    { FEBRUARY,  2  },
    { FEBRUARY,  21 },
    { APRIL,     7  },
    { MAY,       1  },
    { MAY,       9  },
    { MAY,       19 },
    { JUNE,      9  },
    { JUNE,      14 },
    { JUNE,      15 },
    { JUNE,      22 },
    { JUNE,      24 },
    { JUNE,      30 },
    { JULY,      5  },
    { JULY,      13 },
    { JULY,      28 },
    { AUGUST,    10 },
    { AUGUST,    21 },
    { SEPTEMBER, 8  },
    { OCTOBER,   11 },
    { NOVEMBER,  6  },
    { DECEMBER,  17 },
};

const MonthDay RainGroup_12[] = {
    { JANUARY,   6  },
    { JANUARY,   16 },
    { FEBRUARY,  20 },
    { MARCH,     10 },
    { MARCH,     17 },
    { APRIL,     5  },
    { MAY,       8  },
    { JUNE,      7  },
    { JUNE,      17 },
    { JUNE,      23 },
    { JUNE,      28 },
    { JULY,      3  },
    { JULY,      6  },
    { JULY,      21 },
    { AUGUST,    4  },
    { AUGUST,    17 },
    { AUGUST,    23 },
    { SEPTEMBER, 3  },
    { SEPTEMBER, 20 },
    { OCTOBER,   20 },
    { NOVEMBER,  13 },
    { DECEMBER,  1  },
    { DECEMBER,  24 },
};

const MonthDay RainGroup_13[] = {
    { JANUARY,   19 },
    { JANUARY,   24 },
    { MARCH,     13 },
    { APRIL,     12 },
    { MAY,       13 },
    { MAY,       18 },
    { JUNE,      7  },
    { JUNE,      15 },
    { JUNE,      18 },
    { JUNE,      24 },
    { JUNE,      29 },
    { JULY,      1  },
    { JULY,      6  },
    { JULY,      27 },
    { AUGUST,    9  },
    { AUGUST,    20 },
    { SEPTEMBER, 17 },
    { OCTOBER,   12 },
    { OCTOBER,   16 },
    { NOVEMBER,  4  },
    { NOVEMBER,  23 },
    { DECEMBER,  17 },
};

const MonthDay RainGroup_14[] = {
    { JANUARY,   4  },
    { JANUARY,   10 },
    { FEBRUARY,  8  },
    { FEBRUARY,  16 },
    { MARCH,     7  },
    { MARCH,     9  },
    { MARCH,     27 },
    { APRIL,     16 },
    { APRIL,     17 },
    { MAY,       10 },
    { MAY,       18 },
    { JUNE,      4  },
    { JUNE,      9  },
    { JUNE,      15 },
    { JUNE,      20 },
    { JUNE,      27 },
    { JUNE,      28 },
    { JULY,      1  },
    { JULY,      2  },
    { JULY,      5  },
    { JULY,      12 },
    { JULY,      18 },
    { JULY,      26 },
    { AUGUST,    5  },
    { AUGUST,    17 },
    { AUGUST,    27 },
    { SEPTEMBER, 18 },
    { OCTOBER,   7  },
    { OCTOBER,   19 },
    { OCTOBER,   29 },
    { NOVEMBER,  15 },
    { DECEMBER,  22 },
};

const MonthDay RainGroup_15[] = {
    { FEBRUARY,  9  },
    { MARCH,     8  },
    { MARCH,     18 },
    { APRIL,     25 },
    { MAY,       11 },
    { MAY,       28 },
    { JUNE,      5  },
    { JUNE,      10 },
    { JUNE,      16 },
    { JUNE,      21 },
    { JUNE,      24 },
    { JULY,      3  },
    { JULY,      7  },
    { JULY,      13 },
    { JULY,      19 },
    { JULY,      27 },
    { AUGUST,    10 },
    { AUGUST,    22 },
    { SEPTEMBER, 8  },
    { SEPTEMBER, 27 },
    { OCTOBER,   19 },
    { NOVEMBER,  7  },
    { DECEMBER,  6  },
    { DECEMBER,  29 },
};

u32 Fsys_GetWeather_HandleDiamondDust(FieldSystem *fieldSystem, u32 mapId) {
    u8 c;
    u32 weatherType = MapHeader_GetWeatherType(mapId);
    SysInfo_RTC *sysinfo_rtc = Save_SysInfo_RTC_Get(fieldSystem->savedata);
    // Set per-header using the switch cases.
    // Lock to after a flag is set using: if(CheckScriptFlag(flag))
    // Lock to after a badge is obtained using: if(PlayerProfile_TestBadgeFlag(Sav2_PlayerData_GetProfileAddr(fieldSystem->savedata), badge))
    // Lock to when an item is held using: if (Bag_HasItem(Sav2_Bag_get(SaveBlock2_get()), item, 1, HEAPID_WORLD))
    switch (fieldSystem->location->mapId)
    {
        case MAP_MOUNT_SILVER_CAVE_SUMMIT: // MAP_D41R0108
            for (c = 0; c < NELEMS(DiamondDustDates); c++) 
            {
                u8 month = DiamondDustDates[c].month;
                u8 day = DiamondDustDates[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_DIAMOND_DUST;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 1:
        case MAP_ROUTE_29:
        case MAP_ROUTE_46:
            // Only active after Violet City gym is complete.
            if (PlayerProfile_TestBadgeFlag(Sav2_PlayerData_GetProfileAddr(fieldSystem->savedata), BADGE_ZEPHYR))
            {
                for (c = 0; c < NELEMS(RainGroup_1); c++) 
                {
                    u8 month = RainGroup_1[c].month;
                    u8 day = RainGroup_1[c].day;
                    if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                    {
                        if (!FieldSystem_HasPenalty(fieldSystem)) 
                        {
                            weatherType = WEATHER_SYS_RAIN;
                        }
                        return weatherType;
                    }
                }
            }
            break;
        // Group 2:
        case MAP_ROUTE_30:
        case MAP_ROUTE_31:
            // Only active after Violet City gym is complete.
            if (PlayerProfile_TestBadgeFlag(Sav2_PlayerData_GetProfileAddr(fieldSystem->savedata), BADGE_ZEPHYR))
            {
                for (c = 0; c < NELEMS(RainGroup_2); c++) 
                {
                    u8 month = RainGroup_2[c].month;
                    u8 day = RainGroup_2[c].day;
                    if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                    {
                        if (!FieldSystem_HasPenalty(fieldSystem)) 
                        {
                            weatherType = WEATHER_SYS_RAIN;
                        }
                        return weatherType;
                    }
                }
            }
            break;
        // Group 3:
        case MAP_ROUTE_36:
        case MAP_ROUTE_37:
            for (c = 0; c < NELEMS(RainGroup_3); c++) 
            {
                u8 month = RainGroup_3[c].month;
                u8 day = RainGroup_3[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 4:
        case MAP_ROUTE_32:
        case MAP_ROUTE_33:
        case MAP_UNION_TRAIL:
            for (c = 0; c < NELEMS(RainGroup_4); c++) 
            {
                u8 month = RainGroup_4[c].month;
                u8 day = RainGroup_4[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 5:
        case MAP_ILEX_FOREST:
        case MAP_ROUTE_34:
            for (c = 0; c < NELEMS(RainGroup_5); c++) 
            {
                u8 month = RainGroup_5[c].month;
                u8 day = RainGroup_5[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 6:
        case MAP_ROUTE_38:
        case MAP_ROUTE_39:
            for (c = 0; c < NELEMS(RainGroup_6); c++) 
            {
                u8 month = RainGroup_6[c].month;
                u8 day = RainGroup_6[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 7:
        case MAP_ROUTE_40:
        case MAP_ROUTE_41:
            // TODO: Only active after receiving the SecretPotion.
            if(CheckScriptFlag(185))
            {
                for (c = 0; c < NELEMS(RainGroup_7); c++) 
                {
                    u8 month = RainGroup_7[c].month;
                    u8 day = RainGroup_7[c].day;
                    if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                    {
                        if (!FieldSystem_HasPenalty(fieldSystem)) 
                        {
                            weatherType = WEATHER_SYS_RAIN;
                        }
                        return weatherType;
                    }
                }
            }
            break;
        // Group 8:
        case MAP_ROUTE_44:
        case MAP_MAHOGANY:
            for (c = 0; c < NELEMS(RainGroup_8); c++) 
            {
                u8 month = RainGroup_8[c].month;
                u8 day = RainGroup_8[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 9:
        case MAP_ROUTE_45:
        case MAP_BLACKTHORN_SPIRE:
            for (c = 0; c < NELEMS(RainGroup_9); c++) 
            {
                u8 month = RainGroup_9[c].month;
                u8 day = RainGroup_9[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 10:
        case MAP_CIANWOOD:
            // TODO: Only active after receiving the SecretPotion.
            if(CheckScriptFlag(185))
            {
                for (c = 0; c < NELEMS(RainGroup_10); c++) 
                {
                    u8 month = RainGroup_10[c].month;
                    u8 day = RainGroup_10[c].day;
                    if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                    {
                        if (!FieldSystem_HasPenalty(fieldSystem)) 
                        {
                            weatherType = WEATHER_SYS_RAIN;
                        }
                        return weatherType;
                    }
                }
            }
            break;
        // Group 11:
        case MAP_OLIVINE:
            for (c = 0; c < NELEMS(RainGroup_11); c++) 
            {
                u8 month = RainGroup_11[c].month;
                u8 day = RainGroup_11[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 12:
        case MAP_ROUTE_42:
            for (c = 0; c < NELEMS(RainGroup_12); c++) 
            {
                u8 month = RainGroup_12[c].month;
                u8 day = RainGroup_12[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 13:
        case MAP_STARVIEW_ISLET:
            for (c = 0; c < NELEMS(RainGroup_13); c++) 
            {
                u8 month = RainGroup_13[c].month;
                u8 day = RainGroup_13[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        // Group 14:
        case MAP_CHERRYGROVE:
            // Only active after Violet City gym is complete.
            if (PlayerProfile_TestBadgeFlag(Sav2_PlayerData_GetProfileAddr(fieldSystem->savedata), BADGE_ZEPHYR))
            {
                for (c = 0; c < NELEMS(RainGroup_14); c++) 
                {
                    u8 month = RainGroup_14[c].month;
                    u8 day = RainGroup_14[c].day;
                    if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                    {
                        if (!FieldSystem_HasPenalty(fieldSystem)) 
                        {
                            weatherType = WEATHER_SYS_RAIN;
                        }
                        return weatherType;
                    }
                }
            }
            break;
        // Group 15:
        case MAP_RUINS_OF_ALPH:
            for (c = 0; c < NELEMS(RainGroup_15); c++) 
            {
                u8 month = RainGroup_15[c].month;
                u8 day = RainGroup_15[c].day;
                if ((sysinfo_rtc->date.month == month) && (sysinfo_rtc->date.day == day)) 
                {
                    if (!FieldSystem_HasPenalty(fieldSystem)) 
                    {
                        weatherType = WEATHER_SYS_RAIN;
                    }
                    return weatherType;
                }
            }
            break;
        default: break;
    }
    
    return weatherType;
}