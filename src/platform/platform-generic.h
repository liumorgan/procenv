/*--------------------------------------------------------------------
 * Copyright © 2016 James Hunt <jamesodhunt@ubuntu.com>.
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *--------------------------------------------------------------------
 */

#ifndef _PROCENV_PLATFORM_GENERIC_H
#define _PROCENV_PLATFORM_GENERIC_H

void show_fds_generic (void);
void show_rlimits_generic (void);
void show_confstrs_generic (void);
long get_kernel_bits_generic (void);

#if defined (PROCENV_PLATFORM_LINUX) || defined (PROCENV_PLATFORM_FREEBSD) || defined (PROCENV_PLATFORM_HURD)

void show_cpu_affinities_generic (void);
void show_pathconfs (ShowMountType what, const char *dir);
#endif /* PROCENV_PLATFORM_LINUX || PROCENV_PLATFORM_FREEBSD || PROCENV_PLATFORM_HURD */

#if defined (PROCENV_PLATFORM_LINUX) || defined (PROCENV_PLATFORM_HURD)

void show_mounts_generic_linux (ShowMountType what);
int get_canonical_generic_linux (const char *path, char *canonical, size_t len);

#endif /* PROCENV_PLATFORM_LINUX || PROCENV_PLATFORM_HURD */

#endif /* _PROCENV_PLATFORM_GENERIC_H */