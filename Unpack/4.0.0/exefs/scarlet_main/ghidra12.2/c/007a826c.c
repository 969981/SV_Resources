/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a826c; name: FUN_007a826c
 */


void FUN_007a826c(long param_1,short param_2)

{
  if (*(short *)(param_1 + 0x10) != param_2) {
    *(short *)(param_1 + 0x10) = param_2;
  }
  return;
}


