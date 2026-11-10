/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb29f8; name: FUN_01eb29f8
 */


void FUN_01eb29f8(int *param_1,long param_2,undefined8 param_3)

{
  int local_18 [2];
  
  FUN_01eb2a50(local_18);
  if (local_18[0] == 0) {
    FUN_019438a4(param_1,param_2 + 3,param_3);
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


