/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0187692c; name: FUN_0187692c
 */


void FUN_0187692c(undefined4 *param_1,undefined4 *param_2,long *param_3)

{
  long lVar1;
  
  *(undefined1 *)(*param_3 + param_3[2]) = 0x88;
  lVar1 = param_3[2];
  param_3[2] = lVar1 + 1;
  *(undefined4 *)(*param_3 + lVar1 + 1) = *param_2;
  lVar1 = param_3[2];
  param_3[2] = lVar1 + 4;
  *(undefined1 *)(*param_3 + lVar1 + 4) = 0x88;
  lVar1 = param_3[2];
  param_3[2] = lVar1 + 1;
  *(undefined4 *)(*param_3 + lVar1 + 1) = param_2[1];
  param_3[2] = param_3[2] + 4;
  *param_1 = 0;
  return;
}


