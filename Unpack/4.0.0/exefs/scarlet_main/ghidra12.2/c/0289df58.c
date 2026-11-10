/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289df58; name: FUN_0289df58
 */


void FUN_0289df58(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 2;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] == 0) {
    FUN_0289dfc4(param_1,param_2,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


