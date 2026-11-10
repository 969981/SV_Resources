/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bd5f8; name: FUN_016bd5f8
 */


void FUN_016bd5f8(long param_1)

{
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    FUN_016be648();
  }
  else {
    FUN_016bdccc();
  }
  return;
}


