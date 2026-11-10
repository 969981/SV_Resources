/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c9140; name: FUN_001c9140
 */


long FUN_001c9140(long *param_1,undefined8 param_2,undefined4 param_3)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_140 [8];
  char acStack_138 [264];
  
  lVar3 = *param_1;
  FUN_001c9414(param_2,param_3,acStack_138);
  sVar1 = strlen(acStack_138);
  lVar2 = FUN_001c8b08(*(undefined8 *)(lVar3 + 200),acStack_138,sVar1 + 1);
  if (lVar2 == 0) {
    if ((*(byte *)(lVar3 + 0xf68) >> 2 & 1) == 0) {
      return 0;
    }
    FUN_001c9414(&DAT_03c0f097,param_3,acStack_138);
    sVar1 = strlen(acStack_138);
    lVar2 = FUN_001c8b08(*(undefined8 *)(lVar3 + 200),acStack_138,sVar1 + 1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (*(long *)(lVar3 + 0xc08) == -1) {
    return lVar2;
  }
  FUN_001ed1e0(auStack_140);
  FUN_001db818(lVar3,"Hostname in DNS cache was stale, zapped\n");
  FUN_001c8a64(*(undefined8 *)(lVar3 + 200),acStack_138,sVar1 + 1);
  return 0;
}


