/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c79dc; name: FUN_008c79dc
 */


void FUN_008c79dc(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x150) != param_1) {
    *(float *)(param_2 + 0x150) = param_1;
    *(byte *)(param_2 + 0x158) = *(byte *)(param_2 + 0x158) | 1;
  }
  return;
}


