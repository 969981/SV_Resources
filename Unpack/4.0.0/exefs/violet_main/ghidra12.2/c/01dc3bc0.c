/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc3bc0; name: FUN_01dc3bc0
 */


long FUN_01dc3bc0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x6c4b) == '\0') {
    lVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x6c57) == '\0') {
    lVar1 = 1;
  }
  else if (*(char *)(param_1 + 0x6c63) == '\0') {
    lVar1 = 2;
  }
  else if (*(char *)(param_1 + 0x6c6f) == '\0') {
    lVar1 = 3;
  }
  else if (*(char *)(param_1 + 0x6c7b) == '\0') {
    lVar1 = 4;
  }
  else if (*(char *)(param_1 + 0x6c87) == '\0') {
    lVar1 = 5;
  }
  else if (*(char *)(param_1 + 0x6c93) == '\0') {
    lVar1 = 6;
  }
  else if (*(char *)(param_1 + 0x6c9f) == '\0') {
    lVar1 = 7;
  }
  else if (*(char *)(param_1 + 0x6cab) == '\0') {
    lVar1 = 8;
  }
  else if (*(char *)(param_1 + 0x6cb7) == '\0') {
    lVar1 = 9;
  }
  else if (*(char *)(param_1 + 0x6cc3) == '\0') {
    lVar1 = 10;
  }
  else {
    if (*(char *)(param_1 + 0x6ccf) != '\0') {
      return 0;
    }
    lVar1 = 0xb;
  }
  return param_1 + lVar1 * 0xc + 0x6c40;
}


