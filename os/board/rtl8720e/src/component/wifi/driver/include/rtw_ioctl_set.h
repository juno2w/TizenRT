/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#ifndef __RTW_IOCTL_SET_H_
#define __RTW_IOCTL_SET_H_


u8 rtw_set_802_11_add_key(_adapter *padapter, NDIS_802_11_KEY *key);
u8 rtw_set_802_11_bssid(_adapter *padapter, u8 *bssid);
u8 rtw_set_802_11_disassociate(_adapter *padapter);
u8 rtw_set_802_11_bssid_list_scan(_adapter *padapter, struct sitesurvey_parm *pparm);
u8 rtw_set_802_11_remove_wep(_adapter *padapter, u32 keyindex);
u8 rtw_set_802_11_ssid(_adapter *padapter, NDIS_802_11_SSID *ssid);
u8 rtw_set_802_11_connect(_adapter *padapter, u8 *bssid, NDIS_802_11_SSID *ssid);
u8 rtw_set_802_11_remove_key(_adapter *padapter, NDIS_802_11_REMOVE_KEY *key);

u8 rtw_validate_bssid(u8 *bssid);
u8 rtw_validate_ssid(NDIS_802_11_SSID *ssid);

u16 rtw_get_cur_max_rate(_adapter *adapter);
//int rtw_set_scan_mode(_adapter *adapter, RT_SCAN_TYPE scan_mode);
int rtw_set_channel_plan(_adapter *adapter, u8 channel_plan);
//int rtw_set_band(_adapter *adapter, enum _BAND band);

#endif

