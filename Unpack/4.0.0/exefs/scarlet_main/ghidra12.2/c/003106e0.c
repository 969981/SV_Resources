/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003106e0; name: FUN_003106e0
 */


void FUN_003106e0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  param_1[3] = param_2;
  uVar1 = *param_1;
  if (param_2 <= *param_1) {
    uVar1 = param_2;
  }
  FUN_00310700(param_1,uVar1);
  return;
}


