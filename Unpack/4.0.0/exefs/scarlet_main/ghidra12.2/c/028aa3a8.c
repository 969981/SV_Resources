/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028aa3a8; name: FUN_028aa3a8
 */


byte * FUN_028aa3a8(undefined8 param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  
  if (param_2 != param_3) {
    if (((param_2 + 1 != param_3) || (*param_2 != 0x24)) &&
       ((uVar1 = *param_2 - 0x2e, 0x2e < uVar1 ||
        ((1L << ((ulong)uVar1 & 0x3f) & 0x600000000001U) == 0)))) {
      FUN_01467d38();
      param_2 = param_2 + 1;
    }
  }
  return param_2;
}


