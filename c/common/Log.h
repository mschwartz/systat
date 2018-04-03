/*
 * systat for MacOS and Linux
 *
 * Programmed by Mike Schwartz <mike@moduscreate.com>
 *
 * Command line tool that refreshes the terminal/console window each second,
 * showing uptime, load average, CPU usage/stats, Memory/Swap usage, Disk
 * Activity (per drive/device), Virtual Memory activity (paging/swapping), and
 * Network traffic (per interface).
 *
 * Run this on a busy system and you can diagnose if:
 * 1) System is CPU bound
 * 2) System is RAM bound
 * 3) System is Disk bound
 * 4) System is Paging/Swapping heavily
 * 5) System is Network bound
 *
 * To exit, hit ^C.
 */

#ifndef LOG_H
#define LOG_H

// NOTE NOTE NOTE
// You must #define ENABLE_LOGGING before including this file, if you want
// logging
class Log {
public:
  Log();
  ~Log();

public:
  void print(const char *fmt, ...);
  void println(const char *fmt, ...);
};

extern Log logger;

#endif
