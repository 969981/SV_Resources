/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f458d4; name: FUN_00f458d4
 */


void FUN_00f458d4(int *param_1,long param_2,long *param_3)

{
  int local_18 [2];
  
  FUN_00f45948(local_18);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0xb9;
    param_3[2] = param_3[2] + 1;
    FUN_00f46670(param_1,0xb9,param_2 + 8,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


