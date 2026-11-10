/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001db9c8; name: FUN_001db9c8
 */


void FUN_001db9c8(long param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined1 auStack_1f8 [128];
  char acStack_154 [260];
  
  if (((*(byte *)(param_1 + 0xf43) >> 2 & 1) != 0) || (*(long *)(param_1 + 0x678) != 0)) {
    FUN_001cd240(acStack_154,0x100,param_2,auStack_1f8 + 0x80);
    sVar1 = strlen(acStack_154);
    if ((*(char **)(param_1 + 0x678) != (char *)0x0) &&
       ((*(byte *)(param_1 + 0x15a4) >> 3 & 1) == 0)) {
      strcpy(*(char **)(param_1 + 0x678),acStack_154);
      *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 8;
    }
    if ((*(byte *)(param_1 + 0xf43) >> 2 & 1) != 0) {
      (acStack_154 + sVar1)[0] = '\n';
      (acStack_154 + sVar1)[1] = '\0';
      FUN_001db920(param_1,0,acStack_154,sVar1 + 1);
    }
  }
  return;
}


