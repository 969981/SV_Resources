/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028aa914; name: FUN_028aa914
 */


byte * FUN_028aa914(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  if (((param_2 != param_3) && (param_2 + 1 != param_3)) && (*param_2 == 0x5c)) {
    bVar1 = param_2[1];
    uVar2 = bVar1 - 0x24;
    if (((0x3a < uVar2) || ((1L << ((ulong)uVar2 & 0x3f) & 0x5800000080004f1U) == 0)) &&
       (2 < bVar1 - 0x7b)) {
      if ((*(uint *)(param_1 + 0x18) & 0x1f0) == 0x40) {
        pbVar3 = (byte *)FUN_0146bf24();
        return pbVar3;
      }
      uVar4 = FUN_028aa488(param_1,bVar1);
      pbVar3 = param_2 + 2;
      if ((uVar4 & 1) == 0) {
        pbVar3 = param_2;
      }
      return pbVar3;
    }
    FUN_01467d38(param_1,bVar1);
    param_2 = param_2 + 2;
  }
  return param_2;
}


