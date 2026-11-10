/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6c11c; name: FUN_01e6c11c
 */


void FUN_01e6c11c(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  int local_18 [2];
  
  FUN_01e60b74(local_18);
  if (local_18[0] == 0) {
    cVar1 = *(char *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if (cVar1 == -0x47) {
      FUN_01e6c19c(param_1,param_2 + 0x814,param_3);
    }
    else {
      *param_1 = 1;
    }
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


