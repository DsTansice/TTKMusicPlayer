#ifndef MUSICBDQUERYINTERFACE_H
#define MUSICBDQUERYINTERFACE_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2021 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include "musicobject.h"
#include "musicglobaldefine.h"

///cookie url
const QString BD_UA_URL                 = "QTllV1FYb3p4ZmZVNDArOW1uSGQrUGp2clowek55RmxrV2kzK3djN2dpb3J4YUlCbHpHSU9FNkJMREtSWDdVdWlVeVRHTnpTQUZ5TjE2RDlLb3lIeFNsMWVHMXBkWEsxSVpIRU85Ui8wVzhEbm80dUdQdHUxc0EzL1VhRHh5WmtxWlpJR1BqR3kzYkMycXVhQWljSmE3K1B3ZFd5dEdWMlE1UGhtWjBzOXJDcVRsN0lrL0d4V2ExdFJjQWtxMy9IbUN4ZkZ1NWhsY0ZqY3ZGcg==";
///base url
const QString BD_LISTEN_STRING          = "YTc1c0N1SVZCTXJlbEVIdUQ5U1lHR3Bta0ZSSm9xWk8wMTZqbTZ0dTB4QTUyRjFZ";
const QString BD_PREFIX_STRING          = "UkU5VWt3SjY4SURoUFpoSm5EeHdFOGI5RG9RVHBPcm1yc1ZSVDJmdmFKbCtEQlo0RERNRjVBV2NBMWxUcE1BL2RGN1ZWeWxUSFRZeEVaaFc=";
///song url
const QString BD_SONG_SEARCH_URL        = "OGk2ZWNtaFVwM3pOZ05Rb2RHbTRvUmxxUFlDUzBjdG1ob3E1dnR2VlFrM1dJYjFyU1ZZaEwwNm9jcTBmZlJ0SGtQMzNhN0h1a1BYR0pHeW5mK2pQRkdtdlZjN1BQQXN6ck9McTRNckpNS2E5MkViVkhBZEdqclpJNU5MRlBNU1Zpd0JJb3p5VUJLanhhbVVUczAvVDVFZHFPVWMyVzRic3hEM3NXYVYrRXhNYmJFK0JvcFBZTlRPcEQ5bys0NUJFMjRHZDl3b3VsRG1udHRUUjNUR0FLMjU5amY1UWJ3TnorQ1pjSzZwK0NNcm83OHFZRS96cTk1YTNOK3gra3I3MA==";
const QString BD_SONG_INFO_URL          = "MVRVZlZHQTkrc0R4QWxkMmFVdTZ1RGo2UllpMkNXRDZ6VkVieWRubzE1VzcrclEvZ3ZvblJVdGlWemZ6b3BGNjdSYTlKSnJCWHBDelNXaGk4d0YvWFhGbmdUWWlmWXVVN3N5QUxkelhGdHdXNHMzREtuOGM5aEdmSlB2WGFDbm5FTHV1ZU5GaGdjNU9wN3lrK2gxUHRMRE1xOXhFRUMzYzdpVkZGRWhBUnZNUlg4djg0K1NVcEE9PQ==";
const QString BD_SONG_INFO_DATA_URL     = "RStnQ2VJUDdYaHVXRmRFS29tVVFPbVNRNmxZPQ==";
const QString BD_SONG_DETAIL_URL        = "L0NwdGZrUHIvd21GVGRGN1BBOWMzMWY5bk5iWjdra3RMUTVJRUpqNEh1TVI1OVBBMjNtWW9ybk5aUU1IYWtYTTJNUGFTVXlKODBOOFBNdEl5cWRFc0RnOGg0aDNRLzFIcmc1bWZXZXlocnpYZVlzQThrcEhvdGd1Z2FjeWNrVlVQWnMyZUEwWE9OdlNITHNBRmpYNHNsTGhKL3BKY1NTRzFaRGVmRDQzQ2RMYVZuVlhxVjZaN0F5bDlBVXJYMkcrWk5TNzJqSTNHbnp6UmN6RitNWXZwQWVjMFJVPQ==";
const QString BD_SONG_PATH_URL          = "NU1oTy85RUFFdStaTm1xZTBWbldVNVN3WkxJRVNFVGZkYldCYzNaL1dHeURMRisrdUpmeE05WGp1RVYvNHkwVFdDTEgvOE5qak9ISjFoeURndTJ3KzRhNTVSSTB5ZjdINkxOWmVUdzZiaGE4Vk45K1lFcFB6QT09";
///artist url
const QString BD_ARTIST_URL             = "Sk5aUlJ3TlpVeUV0c3NKUDVtTFdXSC91MWVuM09tWmVHRStaOXVrUjdqY3gxUmFlNjFjQ3lNSVVkamFOdUpKT0FYd1poN0owVUE2MkZCWWJmbEZvQ1poalAyRzMrTlNzaTg4ZWtjNDVuekhHYmlGcWFEd0JpTE9hM1dZOE9VK09MdlVGU21zWk9SZ2tzUUJTNzZoWnJ0TXBTSTZXMkpYTFZxc21ZT1RQUVQrNHhxalp5UzNlaVVJek9LelZsSG9XVXR3SWdTRU5sUVpOUE9yQWpQVExMWWdYVktXdklwTjJSbkhXUXc9PQ==";
const QString BD_ARTIST_INFO_URL        = "YUJIZ2xMMk56UHdhc1pha3NXNlNrdnVKOTk5bjRkSW02bk9yK25xM00vVFNodXRhK1M2dTFIOVc0T1U1Z0FjWXg2REVlWElTMDk3N2dPaHNTNkFlTnNKZkpkeUgxNW04VHpwd1MxdmlxQUxQYU1heVl0Ulo3UVV5ajA2M3hmMjVGYkttNFQ5dHdSZUdaR2FWWlVJTENXaFVpc3JhbE1uY2h3TUE4NG05a1o0SEFnTXpwTzNKRHh2QlpGRT0=";
const QString BD_ARTIST_ALBUM_URL       = "NFdvUi9kVmQ0ZVlkMGxnYUgxUUdhUGJNZ2lxRWU5M0FBREFQV2VSMGpNbURETEN1eWtObzNQN05ZNjEvaGxWMTRWWDhKclFjOVF1WHBzVTBhWkJOWEw5OEs5cGM3SFlTdDhrVUFpUHNENU1YVjB1cVVjc09xL2VSTmNoa1JLbk1OdEhEWDB6SDFJUW9HMDZTMnc4MnZva2NoY3FSVTF6VHhMek0xT0Z5UXg0MEVoTWY2Z1UrZ2o2eFh2SDdERCtvS3l5V2p5YVR0SFRaMHFBVkI1S0NtOFNLeHVYNGkzS0VvYnZIRFE9PQ==";
const QString BD_ARTIST_MOVIE_URL       = "ZG1vdSs3ZW9qOXJMMzhTZVZTR1hRVnI0ZEs2OWxFcTd4RXEwaXd2Yks1USttd1hHa04vZWlKQm1KL01Pb3orQzdzQkcrOHE0ZjhhTjNMSm1JZXA2Znk0dVlQSzRRcGpNY0RFcjV4L3BwcVE9";
const QString BD_ARTIST_SIMILAR_URL     = "T2ZGajkyeXhaeHNKR3NONm53QXBRYVAxMnlCdVBuV0V3dFB6ejZlVi80NGFhTHVs";
const QString BD_ARTIST_LIST_URL        = "MFl1b2lPL0tQK3JqK3gwYUttOWdLTEh6SnNSdWFDVkJJVWY5L3VZc2pScllsUTFnQ2prQk9FQ3RSbTBneVVsNWhTTFpFVlArcWlYRzBYWXNtR3BwWGJmVEY3NDZPZk9XUCszdnc2bWZteU0xOTRGd015blpzV1JWb3dzOUJ1NHppMTZIL0lKRTVJWUFNckxNN05NUHRGeFJjNlZuRk5mVXpmRmUwZjVZWmN5WlQrWHd4NzF6ZGc9PQ==";
///album url
const QString BD_ALBUM_URL              = "aldnSzNmNHJBaFlGSTlXN3FUSDhzWjlhZ3U1SmN2eEJYWUE0WlM5RWhrQ09lK3MvTzRTcHlWNklhZk4xY0JMTFhVbVhWMzE2anYxT01IVjd1V2g2Rmx0S3dUaUpRUEtTZGsyUkIwbk1VeU8rSldaU2NsMGVPWkdmQWFQQUJZRnUvNnNGVXV6elZCa0tBUkorUTlkaVdTN3Baa0UvZDJqUG5hNis4OW1CZTFzcldWUmNqNnl6SjZVem1JdkVwYk9z";
///movie url
const QString BD_MOVIE_URL              = "YkY2RndLaCtlbWN1MEZsTnZ1SVVJVEZraitGYlpGRlFIUEFsVE92WERnNXh0UjNBY3Vib2RZZUtIZnBsRG83bE0rT1ZjaVNYQll3WVJhOW0=";
const QString BD_MOVIE_INFO_IQY_URL     = "NjFXMDBJUEdCKzdoVy9WbUkwdTZNQ1Fsb1FITG5iL2J0QjVSZFRybEU0ND0=";
const QString BD_MOVIE_INFO_DATA_URL    = "cFlKVEcrQWpaUC9hN0FFYU5RZDdMYlJEdEVLQTQwR1VFSURqNHBLL0N6NENEamk4c3BUd2hYRHhXOU05Z24vZnpyL3pLL2VEU3QxWVNkTTcyMnMvTzE1dUttZUxub0w0QkgxRGx2cEgxc1VteXBTZ0VZRFk0MDVYQm9aZ3haTGVJWFZpZmVURncyU0I0RlFRSXF4UjVCWk5lTzFXemFqQTVJY0VEQT09";
const QString BD_MOVIE_INFO_WEB_URL     = "WDQvblE1K1llTEpsSUJmQ0FiRzdRbHJjYlBkWTFVS3puZGZtU01ITEtqZ3ovcVIx";
///toplist url
const QString BD_SONG_TOPLIST_URL       = "ekFyWSt3akdGQU5VV1BYanJ6bEdxWkhSakxPRHUycnV5Qk04d0orRm1FTk1MeWcrcktlSlh1UDMyMzRVR3AwZGExU0lDNDg3Wm9DOU41NEFLRDhQNE42Q1BUNzd6cGxDT3VyY3AvbGdYK3N4a1puTGN2NnF1R3Vub3lCbXhFRFh0L2V2czdxWEMwN09aU2tLSmNRVWVZMmxBUDljZUpJZnRicHhsbzN6bzlHdm10ZEhWTHFjTVhSVjhobkNqTWRm";
///comment url
const QString BD_COMMENT_URL            = "MGJxK3E1QkhZdmluMExvcTJHbU1pbW9adVg5bnhQbFFHT3lCSERvS0MyaHIrcTl4QkovUVJDL1VaTVNsbGo4MURSWVdPL2R5VzNNanZNYzl6VDZSY0dSMVdvaXRJWEZDbmhtdkErQkVraU9yTG5IWXpOYUdzTHFyMVVnQ3prclBoQ3IzSEFMaW53Z0ZhVlBUMms0RXU5R0RXdjZ4V29STlpwWXluZkdraHNNPQ==";
const QString BD_COMMENT_SONG_URL       = "bUZVbEtEZ3JjcDMwakdDSUdlZ0EwS0xuVnFlNHV6aEVJT3ZNTCtWbU9KNGw0djExY3J5ai8wRk15eXRZdWhSOVA4d0t6ZmNUK2cyczFPMVRMdGpwVUNialpJNHA0QlM0";
const QString BD_COMMENT_PLAYLIST_URL   = "UEhqK3V6bGlJeEpGSmJwWFdjNUdXWFdlc2hkTTZoMmNORUNqTlhJQkptUExnSG5YSmFaQ3dUbkpZcjFlMTV1V0xsc1d2V2hqQzNwYVBkMHEvbFdMOUkwNGhHZVB5MnNY";
///playlist url
const QString BD_PLAYLIST_URL           = "WFUzM3JKMytSWDFzdURoQ1pDMDhDRDN0S0g1SjNtdFFNNTEvSmNEUDg2MG1xZ0JkbnpvZlhVTmxzdVBiS0dVL05MMzF5aFJ4UkZOVXB6c1dtcitmSTZESWVobWNDUEZNZGtzRHZTejBxTjdQM2ZFOENGVy9DaDhxeW9TS1FvcklYSmJpTmdKTlJCcUlUNVJHU0M3RGdDd1BYZitXRmJESlhPd3hiaERiclByUXl5bHpMbmYxbzZoNkZvWUpaSVpy";
const QString BD_PLAYLIST_INFO_URL      = "NXJsZ3ArR0JHeXFJYmdWUi9sOVNTaHlxbEpuekJYSVFrVkloY0U3d2VtU1VKOFZqcjlQTVNkMkJLbzJDSUxBb0ZWM0laZ0lVZHh1Y2RHUWRxVU5rS2hNMEpFM08yK0hxZXlYZGNlK0hpcys2RkVKRm94Uk5nUXlEVGo4QjlwQnFKQ0JmV0hGenBTTERoRG4xUGc0Z3I5OWtWMEhLMVh0RzBoeTdLQT09";
///recommend url
const QString BD_RECOMMEND_URL          = "NFpxdTFTWldSaktNZGRTTVhCc3VuUFZkZFROa2tQdXBLZjVPVFNMN2dGQ0QrbXozUjRyZU1uMUlLSmlQOUk2Qk85VXlwTFdqajRYcngyWEl4QXBFdndEWnFseCt5aS92V3BaYWR6Wi9jYlY2WDg2RnJBaVZ5ZExENUJmUzFwbXZMT1FGbkhab1g1OEthUlc3enNveEMvQWd3NHpBTVNGQnRtWTZQT0xTZUMyWUZHL0ZLVzNKWXNNUzVMMVF5amVl";
///suggest url
const QString BD_SUGGEST_URL            = "bStlUGdVM0pSYStqTW9QRzZmNm5xM3p6N1JSa1ZEbTc5V1NUOGdZUkFDZkl1Tnp5dmNaK2YvYytybEFScjBxRitQNnNndDMrb2s0UTN2L1dYSU1kdWc9PQ==";
///learn url
const QString BD_LEARN_URL              = "bFZyenh6K0hkblRMT2hxcmNNVjRHT3BMaW9Jc1VGSHFicDdEeFB3MzVqV3NTNk9pOGFVUnlXWHBZZXBZMWN5OHNJQjdrVEpnRGZnQUlUZE5OOEQ2WjhQUkxzN3oyRzNVenQrUTR3N080cWFlM3hPeVcxU3ZQZENtYTU5MDVvNy9zVWNadFZUenprMTRqOGpzQk43ZXFNZXVXaVQ3MXROc0gxWFNqTm0vcWxraXRaTFZIaEMxNDl1Q0NBRUdhVXBG";
const QString BD_LEARN_DATA_URL         = "Y3lUWmlxbUdMaUVtT3dKVUliRCtZRDRlWEFJPQ==";
const QString BD_LEARN_INFO_URL         = "S2srWTRQTVMwc0V1SkFxdU9VeFFSaHVtR0xCZ0lKS3NUNGV3dmFnR0VIZHI4aVVpMzBScUJ5WjNwVkNwb3Q2aTM3aWlxc3R1WlhsMzBTRGIxN0RqZ3QyM2NNa1JkZitRbDVJSWdtcTJ2NTE2cUxIT0Y3ZVJsRitJbjZEKzZYNjFlTVBZVVR2THpaaUQxc3FxNTV3WTgyWTJnVTBZWG5ETQ==";


class QNetworkRequest;

/*! @brief The class to baidu query interface.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_NETWORK_EXPORT MusicBDQueryInterface
{
public:
    /*!
     * Make token query url string.
     */
    void makeTokenQueryUrl(QNetworkRequest *request, const QString &id);

    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicSongAttribute(MusicObject::MusicSongInformation *info, const QString &bit);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicSongAttribute(MusicObject::MusicSongInformation *info, const QString &format, const QString &quality, bool all);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicLLAttribute(MusicObject::MusicSongInformation *info);
    /*!
     * Read tags(size\bitrate\url) from query results.
     */
    void readFromMusicPayAttribute(MusicObject::MusicSongInformation *info);

};

#endif // MUSICBDQUERYINTERFACE_H