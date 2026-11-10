/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00efafb0; name: FUN_00efafb0
 */


void FUN_00efafb0(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((int)param_2 < 1) {
    if (-0xf4628 < (int)param_2) {
      FUN_00122d70(param_1,*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      return;
    }
    if (param_2 == 0xfff0b9d8) {
      FUN_00122d70(param_1,*(long *)(param_1 + 0x18) + 0x40);
      return;
    }
    plVar1 = (long *)**(long **)(param_1 + 0x20);
    if (((char)plVar1[1] != '\x16') &&
       (lVar2 = *plVar1, (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar2 + 10))) {
      FUN_00122d70(param_1,lVar2 + (ulong)(~param_2 - 0xf4628) * 0x10 + 0x20);
      return;
    }
  }
  else if (**(long **)(param_1 + 0x20) + (ulong)param_2 * 0x10 < *(ulong *)(param_1 + 0x10)) {
    FUN_00122d70();
    return;
  }
  FUN_00122d70(param_1,*(long *)(param_1 + 0x18) + 0x50);
  return;
}


