/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eda5c; name: FUN_001eda5c
 */


void FUN_001eda5c(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) < 1) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 4) < 0x101) {
      return;
    }
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


