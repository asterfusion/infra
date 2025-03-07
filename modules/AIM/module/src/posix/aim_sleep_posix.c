/****************************************************************
 *
 *        Copyright 2013, Big Switch Networks, Inc.
 *
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *        http://www.eclipse.org/legal/epl-v10.html
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 *
 ***************************************************************/

#include <AIM/aim_config.h>

#if AIM_CONFIG_INCLUDE_OS_POSIX == 1

#include <AIM/aim_sleep.h>
#include <time.h>

int
aim_sleep_usecs(uint64_t usecs)
{
    struct timespec ts;
    ts.tv_sec = usecs / 1000000;
    ts.tv_nsec = (usecs % 1000000) * 1000;
    return nanosleep(&ts, NULL);
}


#else
//int __not_empty__;
#endif
