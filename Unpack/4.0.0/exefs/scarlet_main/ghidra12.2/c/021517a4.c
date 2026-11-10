/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021517a4; name: FUN_021517a4
 */


void FUN_021517a4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (**(char **)(param_1 + 0x90) != '\0') {
    uVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x78))
                      (*(long **)(param_1 + 200),param_1 + 0x88);
    FUN_02151854(param_1,uVar1 & 1);
  }
  if (**(char **)(param_1 + 0x150) != '\0') {
    uVar2 = (**(code **)(**(long **)(param_1 + 200) + 0xa0))
                      (*(long **)(param_1 + 200),param_1 + 0x148);
    if ((uVar2 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),param_1 + 0x148);
    }
  }
  if (**(char **)(param_1 + 0x110) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02151844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),param_1 + 0x108);
  return;
}


