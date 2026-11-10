/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6e014; name: FUN_01f6e014
 */


undefined8 FUN_01f6e014(long param_1)

{
  if (*(int *)(param_1 + 0x24) == 3) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    return 1;
  }
  return 0;
}


