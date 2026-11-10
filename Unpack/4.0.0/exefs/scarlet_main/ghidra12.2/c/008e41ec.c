/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e41ec; name: FUN_008e41ec
 */


int FUN_008e41ec(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(long *)(*(long *)(param_1 + 0x238) + 0x338) + 0x18);
  fVar2 = fVar1 * *(float *)(param_1 + 0x4c);
  if (*(float *)(param_1 + 0x4c) <= 1.0) {
    fVar2 = fVar1;
  }
  return (int)fVar2;
}


