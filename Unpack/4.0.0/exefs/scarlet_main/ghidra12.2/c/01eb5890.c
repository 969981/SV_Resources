/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb5890; name: FUN_01eb5890
 */


void FUN_01eb5890(int *param_1,long param_2,undefined8 param_3)

{
  int local_18 [2];
  
  FUN_01eb58e8(local_18);
  if (local_18[0] == 0) {
    FUN_01eb4af8(param_1,param_2 + 4,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


