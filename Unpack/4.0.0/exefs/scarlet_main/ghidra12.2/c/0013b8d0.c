/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013b8d0; name: FUN_0013b8d0
 */


uint FUN_0013b8d0(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  
  param_3 = (uint)param_2 ^ param_3;
  if (param_2 != 0) {
    uVar2 = param_2;
    if ((param_2 & 1) != 0) {
      param_3 = param_3 * 0x20 + (param_3 >> 2) + (uint)*(byte *)(param_1 + (param_2 - 1)) ^ param_3
      ;
      uVar2 = param_2 - 1;
    }
    if (param_2 != 1) {
      do {
        lVar1 = param_1 + uVar2;
        uVar2 = uVar2 - 2;
        param_3 = param_3 * 0x20 + (param_3 >> 2) + (uint)*(byte *)(lVar1 + -1) ^ param_3;
        param_3 = param_3 * 0x20 + (param_3 >> 2) + (uint)*(byte *)(lVar1 + -2) ^ param_3;
      } while (uVar2 != 0);
    }
  }
  return param_3;
}


