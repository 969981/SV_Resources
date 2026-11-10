/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00811a60; name: FUN_00811a60
 */


undefined8 FUN_00811a60(long param_1)

{
  if (((*(int *)(param_1 + 1000) == 0) || (*(int *)(param_1 + 0x408) == 0)) ||
     (*(int *)(param_1 + 0x428) == 0)) {
    return 0;
  }
  return 1;
}


