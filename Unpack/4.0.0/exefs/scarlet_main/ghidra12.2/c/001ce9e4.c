/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ce9e4; name: FUN_001ce9e4
 */


void FUN_001ce9e4(long param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (*(int *)(param_1 + 0x60) != iVar1) {
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0x11) {
      *(int *)(*(long *)(param_1 + 0xd8) + 0x1c) = *(int *)(*(long *)(param_1 + 0xd8) + 0x1c) + -1;
    }
    if ((0x5fdfbU >> (param_2 & 0x3f) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001cea2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(&DAT_04484558 + (param_2 & 0xffffffff) * 8))();
      return;
    }
  }
  return;
}


