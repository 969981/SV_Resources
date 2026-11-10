/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018768b0; name: FUN_018768b0
 */


void FUN_018768b0(int *param_1,long param_2,long *param_3)

{
  long lVar1;
  int local_18 [2];
  
  FUN_0187692c(local_18);
  if (local_18[0] == 0) {
    *(undefined1 *)(*param_3 + param_3[2]) = 0x88;
    lVar1 = param_3[2];
    param_3[2] = lVar1 + 1;
    *(undefined4 *)(*param_3 + lVar1 + 1) = *(undefined4 *)(param_2 + 8);
    param_3[2] = param_3[2] + 4;
  }
  *param_1 = local_18[0];
  return;
}


