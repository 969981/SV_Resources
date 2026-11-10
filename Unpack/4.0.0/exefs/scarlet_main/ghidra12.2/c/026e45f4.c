/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e45f4; name: FUN_026e45f4
 */


void FUN_026e45f4(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_026d5d80();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  return;
}


