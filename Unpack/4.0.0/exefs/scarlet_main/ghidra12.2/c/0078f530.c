/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078f530; name: FUN_0078f530
 */


undefined8 FUN_0078f530(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00796534(param_2,param_1 + 0x54);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_018ff39c(param_1 + 0x54,param_2);
  return 1;
}


