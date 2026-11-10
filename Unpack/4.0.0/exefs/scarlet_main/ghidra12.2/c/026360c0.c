/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026360c0; name: FUN_026360c0
 */


void FUN_026360c0(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  FUN_02635fac(&local_8,param_2);
  uVar1 = local_8;
  *param_1 = 1;
  local_8 = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_02631cf4(&local_8);
  return;
}


