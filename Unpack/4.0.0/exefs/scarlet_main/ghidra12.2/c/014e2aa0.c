/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e2aa0; name: FUN_014e2aa0
 */


void FUN_014e2aa0(int param_1,uint param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = param_2 % 6;
    param_2 = param_2 / 6;
  }
  else {
    if (1 < param_1 - 1U) {
      return;
    }
    uVar1 = 0;
  }
  *param_3 = uVar1;
  *param_4 = param_2;
  return;
}


