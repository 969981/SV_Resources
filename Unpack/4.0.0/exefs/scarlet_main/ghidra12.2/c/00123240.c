/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00123240; name: FUN_00123240
 */


void FUN_00123240(long param_1,uint param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + (long)(int)~param_2 * 0x10;
  if ((param_5 == 0) || (*(short *)(param_1 + 0xb2) != 0)) {
    FUN_00127da0(param_1,lVar1,param_3);
  }
  else {
    *(long *)(*(long *)(param_1 + 0x20) + 0x20) = param_5;
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = param_4;
    FUN_00127d10(param_1,lVar1,param_3);
  }
  if (param_3 < 0) {
    if (*(ulong *)(*(long *)(param_1 + 0x20) + 8) < *(ulong *)(param_1 + 0x10)) {
      *(ulong *)(*(long *)(param_1 + 0x20) + 8) = *(ulong *)(param_1 + 0x10);
      return;
    }
  }
  return;
}


