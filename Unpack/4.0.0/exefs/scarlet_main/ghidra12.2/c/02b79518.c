/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b79518; name: FUN_02b79518
 */


uint FUN_02b79518(long param_1)

{
  uint uVar1;
  char *pcVar2;
  char *__s;
  uint uVar3;
  char acStack_140 [256];
  
  __s = *(char **)(param_1 + 8);
  pcVar2 = strchr(__s,0x2c);
  if (pcVar2 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      memset(acStack_140,0,0x100);
      strncpy(acStack_140,__s,(long)pcVar2 - (long)__s);
      uVar1 = atoi(acStack_140);
      if (uVar1 == 0xffffffff) {
        return 0xffffffff;
      }
      __s = pcVar2 + 1;
      uVar3 = 1 << (ulong)(uVar1 & 0x1f) | uVar3;
      pcVar2 = strchr(__s,0x2c);
    } while (pcVar2 != (char *)0x0);
  }
  uVar1 = atoi(__s);
  uVar3 = 1 << (ulong)(uVar1 & 0x1f) | uVar3;
  if (uVar1 == 0xffffffff) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


