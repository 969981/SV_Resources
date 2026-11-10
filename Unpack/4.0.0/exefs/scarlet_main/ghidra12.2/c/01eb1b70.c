/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb1b70; name: FUN_01eb1b70
 */


void FUN_01eb1b70(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 4;
  FUN_0111b0ac(local_18,&local_38,param_4);
  if (local_18[0] == 0) {
    FUN_01eb1be0(param_1,param_3,param_4);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


