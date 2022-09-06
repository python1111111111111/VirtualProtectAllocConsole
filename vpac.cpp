VirtualProtect((PVOID)&FreeConsole, 1, PAGE_EXECUTE_READWRITE, new DWORD);
    *(BYTE*)(&FreeConsole) = (0xC3);
AllocConsole();
