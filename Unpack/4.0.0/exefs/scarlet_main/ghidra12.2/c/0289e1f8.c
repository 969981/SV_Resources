/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289e1f8; name: FUN_0289e1f8
 */


void FUN_0289e1f8(int *param_1,long param_2,long *param_3)

{
  char cVar1;
  int local_18 [2];
  
  FUN_0289e278(local_18);
  if (local_18[0] == 0) {
    cVar1 = *(char *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
    if (cVar1 == -0x44) {
      FUN_0289e320(param_1,param_2 + 0xc0,param_3);
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


