/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021da59c; name: FUN_021da59c
 */


bool FUN_021da59c(long param_1,ulong param_2,long *param_3)

{
  if (param_2 < *(ulong *)(param_1 + 0x30)) {
    return false;
  }
  return *param_3 + param_2 < *(long *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x30);
}


