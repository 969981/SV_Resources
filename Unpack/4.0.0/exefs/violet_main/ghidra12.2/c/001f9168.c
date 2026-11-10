/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9168; name: FUN_001f9168
 */


void FUN_001f9168(long param_1)

{
  char cVar1;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0xc);
    switch(cVar1) {
    case '\0':
      FUN_001f489c();
      return;
    case '\x01':
      FUN_001f470c();
      return;
    case '\x02':
      FUN_001f4758();
      return;
    case '\x03':
      FUN_001f477c();
      return;
    case '\x04':
      FUN_001f47a8();
      return;
    case '\x05':
      FUN_001f47b8();
      return;
    case '\x06':
      FUN_001f47fc();
      return;
    case '\a':
      FUN_001f4828();
      return;
    case '\b':
      FUN_001f4860();
      return;
    }
    if (*(char *)(param_1 + 0x60) == '\0') {
      FUN_001f48a0();
      return;
    }
    if (cVar1 == '\f') {
      FUN_001f48c0();
      return;
    }
    if (cVar1 == '\n') {
      FUN_001f48a4();
      return;
    }
  }
  return;
}


