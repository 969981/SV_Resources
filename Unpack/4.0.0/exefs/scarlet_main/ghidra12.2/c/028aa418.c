/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028aa418; name: FUN_028aa418
 */


byte * FUN_028aa418(undefined8 param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  
  if (((param_2 != param_3) && (param_2 + 1 != param_3)) && (*param_2 == 0x5c)) {
    uVar1 = param_2[1] - 0x24;
    if ((uVar1 < 0x3b) && ((1L << ((ulong)uVar1 & 0x3f) & 0x580000000000441U) != 0)) {
      FUN_01467d38();
      param_2 = param_2 + 2;
    }
  }
  return param_2;
}


