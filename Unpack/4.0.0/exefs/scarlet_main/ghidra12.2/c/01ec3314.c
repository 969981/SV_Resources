/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec3314; name: FUN_01ec3314
 */


void FUN_01ec3314(int *param_1,long param_2,long *param_3)

{
  int local_18 [2];
  
  FUN_01ec3388(local_18);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xba;
    param_3[2] = param_3[2] + 1;
    FUN_01ec341c(param_1,param_2 + 0x2a,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


