/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01578628; name: FUN_01578628
 */


void FUN_01578628(byte *param_1)

{
  size_t sVar1;
  
  for (sVar1 = strlen((char *)param_1); sVar1 != 0; sVar1 = sVar1 - 1) {
    if (*param_1 - 0x41 < 0x1a) {
      *param_1 = *param_1 + 0x20;
    }
    param_1 = param_1 + 1;
  }
  return;
}


