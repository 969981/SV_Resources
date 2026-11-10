/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028aa890; name: FUN_028aa890
 */


byte * FUN_028aa890(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar2 = *param_2;
  uVar1 = bVar2 - 0x24;
  if (uVar1 < 0x3b) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x5800000080004d1U) != 0) {
      return param_2;
    }
    if ((ulong)uVar1 == 5) {
      if (*(int *)(param_1 + 0x24) != 0) {
        return param_2;
      }
      bVar2 = 0x29;
      goto LAB_028aa908;
    }
  }
  if (bVar2 - 0x7b < 2) {
    return param_2;
  }
LAB_028aa908:
  FUN_01467d38(param_1,bVar2);
  return param_2 + 1;
}


