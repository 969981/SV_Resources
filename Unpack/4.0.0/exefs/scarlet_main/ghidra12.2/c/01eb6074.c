/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb6074; name: FUN_01eb6074
 */


void FUN_01eb6074(int *param_1,long param_2,undefined8 param_3)

{
  int local_18 [2];
  
  FUN_01e643c8(local_18);
  if (local_18[0] == 0) {
    FUN_0192eda0(param_1,param_2 + 8,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


