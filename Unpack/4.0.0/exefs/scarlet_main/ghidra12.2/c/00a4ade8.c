/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4ade8; name: FUN_00a4ade8
 */


void FUN_00a4ade8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04540f18;
  FUN_00db2500(param_1 + 1);
  FUN_00a4bc40(param_1 + 9,param_1[10]);
  param_1[0xf] = 0;
  param_1[9] = param_1 + 10;
  param_1[10] = 0;
  FUN_00db239c(param_1 + 1);
  return;
}


