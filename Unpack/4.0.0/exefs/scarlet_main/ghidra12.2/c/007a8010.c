/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a8010; name: FUN_007a8010
 */


void FUN_007a8010(long param_1,short param_2)

{
  if (*(short *)(param_1 + 0x18) != param_2) {
    *(short *)(param_1 + 0x18) = param_2;
  }
  return;
}


