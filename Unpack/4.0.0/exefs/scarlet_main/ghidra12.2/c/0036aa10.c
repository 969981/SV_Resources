/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036aa10; name: FUN_0036aa10
 */


undefined8 FUN_0036aa10(long *param_1,long *param_2)

{
  if (*(int *)(*param_1 + 8) == 0) {
    if ((ulong)*(uint *)(param_1 + 2) < *(ulong *)(param_1[1] + 0x28)) {
      *param_2 = *(long *)(param_1[1] + 0x20) + (ulong)*(uint *)(param_1 + 2) * 0x20;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      return 1;
    }
  }
  return 0;
}


