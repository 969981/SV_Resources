/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015567b0; name: FUN_015567b0
 */


void FUN_015567b0(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_01556f00((long *)(param_1 + 0x40),param_1 + 0x58);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_01556f00((long *)(param_1 + 0x48),param_1 + 0x90);
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_01556f00((long *)(param_1 + 0x50),param_1 + 200);
  return;
}


