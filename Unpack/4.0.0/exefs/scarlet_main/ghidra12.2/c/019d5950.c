/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019d5950; name: FUN_019d5950
 */


void FUN_019d5950(int *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_38;
  int local_18 [2];
  
  lVar1 = FUN_00f45be8();
  if ((ulong)param_3[1] < lVar1 + param_3[2] + 4U) {
    *param_1 = 0xd;
    return;
  }
  *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
  param_3[2] = param_3[2] + 1;
  local_38 = 1;
  FUN_0111b0ac(local_18,&local_38);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
    param_3[2] = param_3[2] + 1;
    FUN_00f46824(param_1,param_2,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


