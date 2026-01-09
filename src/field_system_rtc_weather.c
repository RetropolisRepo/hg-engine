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
    { JANUARY,   8  },
    { DECEMBER,  24 },
    { DECEMBER,  25 },
};

const MonthDay RainGroup_2[] = {
    { JANUARY,   8  },
};

const MonthDay RainGroup_3[] = {
    { JANUARY,   8  },
};

const MonthDay RainGroup_4[] = {
    { JANUARY,   8  },
};

const MonthDay RainGroup_5[] = {
    { JANUARY,   8  },
};

const MonthDay RainGroup_6[] = {
    { JANUARY,   8  },
};

const MonthDay RainGroup_7[] = {
    { JANUARY,   8  },
};

const MonthDay RainGroup_8[] = {
    { JANUARY,   8  },
};

const MonthDay RainGroup_9[] = {
    { JANUARY,   8  },
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
        case MAP_CHERRYGROVE:
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
        case MAP_RUINS_OF_ALPH:
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
        case MAP_STARVIEW_ISLET:
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
        case MAP_CIANWOOD:
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
        case MAP_ROUTE_42:
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
        default: break;
    }
    
    return weatherType;
}