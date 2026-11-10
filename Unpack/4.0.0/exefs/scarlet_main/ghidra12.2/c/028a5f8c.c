/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a5f8c; name: FUN_028a5f8c
 */


byte * FUN_028a5f8c(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 == param_3) {
    return param_2;
  }
  uVar2 = *param_2 - 0x30;
  if (uVar2 == 0) {
    FUN_01467d38();
    return param_2 + 1;
  }
  if (8 < *param_2 - 0x31) {
    return param_2;
  }
  param_2 = param_2 + 1;
  if (param_2 != param_3) {
    do {
      bVar1 = *param_2;
      if (9 < bVar1 - 0x30) {
        param_3 = param_2;
        break;
      }
      if (0x19999998 < uVar2) goto LAB_028a6044;
      param_2 = param_2 + 1;
      uVar2 = ((uint)bVar1 + uVar2 * 10) - 0x30;
    } while (param_3 != param_2);
    if (uVar2 == 0) goto LAB_028a6044;
  }
  if (uVar2 <= *(uint *)(param_1 + 0x1c)) {
    FUN_028a63dc();
    return param_3;
  }
LAB_028a6044:
                    /* WARNING: Subroutine does not return */
  FUN_028a63d0();
}


