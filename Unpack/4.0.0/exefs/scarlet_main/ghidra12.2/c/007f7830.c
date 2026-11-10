/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f7830; name: FUN_007f7830
 */


void FUN_007f7830(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_007fa8b4();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_007fa8b4();
  return;
}


