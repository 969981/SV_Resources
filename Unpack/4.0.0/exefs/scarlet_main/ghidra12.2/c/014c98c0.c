/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c98c0; name: FUN_014c98c0
 */


void FUN_014c98c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_014c9a94();
  *param_1 = &PTR_FUN_0456fd78;
  param_1[4] = &PTR_LAB_0456fda8;
  uVar1 = FUN_014c996c(param_1[1]);
  FUN_014c9910(param_1 + 5,uVar1);
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


