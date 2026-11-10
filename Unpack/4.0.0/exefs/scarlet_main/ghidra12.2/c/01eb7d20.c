/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb7d20; name: FUN_01eb7d20
 */


void FUN_01eb7d20(int *param_1,undefined8 param_2,long *param_3)

{
  undefined8 local_38;
  int local_18 [2];
  
  local_38 = 1;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xbc;
    param_3[2] = param_3[2] + 1;
    FUN_01eb7da8(param_1,0xbc,param_2,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


