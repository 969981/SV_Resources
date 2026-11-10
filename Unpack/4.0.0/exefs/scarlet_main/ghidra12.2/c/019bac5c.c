/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bac5c; name: FUN_019bac5c
 */


void FUN_019bac5c(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x408) - *(long *)(param_1 + 0x400) >> 3;
  if (param_2 < uVar1) {
    FUN_028cccbc(param_1 + 0x400,*(long *)(param_1 + 0x400) + param_2 * 8);
    return;
  }
  while (uVar1 < param_2) {
    FUN_0130702c(param_1);
    uVar1 = *(long *)(param_1 + 0x408) - *(long *)(param_1 + 0x400) >> 3;
  }
  return;
}


