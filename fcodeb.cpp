VirtualProtect((PVOID)&FreeConsole, 1, PAGE_EXECUTE_READWRITE, new DWORD);
  *(BYTE*)(&FreeConsole) = (0xC3);
AllocConsole();
SetConsoleTitleA("ballsploit");
FILE** dummy;
freopen_s(dummy, "CONOUT$", "w", stdout);
freopen_s(dummy, "CONIN$", "r", stdin);
