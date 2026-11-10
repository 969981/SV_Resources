/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021306e4; name: FUN_021306e4
 */


uint FUN_021306e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_02130730(param_2,param_3,*param_1,param_1[1],param_1[2]);
  FUN_00c5db00(param_2,0);
  return uVar1 & 1;
}


