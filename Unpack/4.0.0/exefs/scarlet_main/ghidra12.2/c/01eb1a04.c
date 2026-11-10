/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb1a04; name: FUN_01eb1a04
 */


void FUN_01eb1a04(int *param_1,long param_2,long *param_3)

{
  int local_18 [2];
  
  FUN_01eb1a68(local_18);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = *(undefined1 *)(param_2 + 0x1d);
    param_3[2] = param_3[2] + 1;
  }
  *param_1 = local_18[0];
  return;
}


