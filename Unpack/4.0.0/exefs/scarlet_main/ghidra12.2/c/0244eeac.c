/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0244eeac; name: FUN_0244eeac
 */


void FUN_0244eeac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00d334b4(param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_2[3] = 0;
  param_2[2] = uVar1;
  param_2[4] = 0;
  FUN_00c96b7c(param_2 + 3,param_1 + 0x18);
  return;
}


