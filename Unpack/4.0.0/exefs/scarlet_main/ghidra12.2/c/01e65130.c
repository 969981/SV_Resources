/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e65130; name: FUN_01e65130
 */


void FUN_01e65130(int *param_1,long param_2,long *param_3)

{
  int local_18 [2];
  
  *(undefined1 *)(*param_3 + param_3[2]) = 0xbc;
  param_3[2] = param_3[2] + 1;
  FUN_01e60ff0(local_18,0xbc,param_2,param_3);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
    param_3[2] = param_3[2] + 1;
    FUN_01e651c8(param_1,param_2 + 0x814,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


