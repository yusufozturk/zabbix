/*
** Zabbix
** Copyright (C) 2001-2016 Zabbix SIA
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**/

#ifndef ZABBIX_CHECKS_IPMI_H
#define ZABBIX_CHECKS_IPMI_H

#include "common.h"

#ifdef HAVE_OPENIPMI

#include "dbcache.h"
#include "sysinfo.h"

int	zbx_init_ipmi_handler(void);
void	zbx_free_ipmi_handler(void);
int	get_value_ipmi(DC_ITEM *item, AGENT_RESULT *value);
int	zbx_parse_ipmi_command(const char *command, char *c_name, int *val, char *error, size_t max_error_len);
int	zbx_set_ipmi_control_value(DC_ITEM *item, int value, char *error, size_t max_error_len);
void	zbx_delete_inactive_ipmi_hosts(time_t last_check);

#endif	/* HAVE_OPENIPMI */
#endif	/* ZABBIX_CHECKS_IPMI_H */
