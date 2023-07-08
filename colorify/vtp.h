#ifndef __COLORIFY_HPP
#define __COLORIFY_HPP

jule::Bool enable_vtp(void) noexcept {
  HANDLE hOut{ GetStdHandle(STD_OUTPUT_HANDLE) };
  if (hOut == INVALID_HANDLE_VALUE)
    return false;

  DWORD dwMode{ 0 };
  if (!GetConsoleMode(hOut, &dwMode))
    return false;

  dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
  if (!SetConsoleMode(hOut, dwMode))
    return false;

  return true;
}

#endif