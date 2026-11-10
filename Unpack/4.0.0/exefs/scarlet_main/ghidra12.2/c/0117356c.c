/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0117356c; name: FUN_0117356c
 */


void FUN_0117356c(long param_1,long *param_2,int param_3)

{
  if (*(long *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8) == 0) {
    FUN_008d43e0("The Resource to be cleared does not exist. ResourceId : %d.\n",param_3);
    return;
  }
  FUN_008daa84();
  (**(code **)(*param_2 + 0x18))
            (param_2,*(undefined8 *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8));
  *(undefined8 *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8) = 0;
  return;
}


