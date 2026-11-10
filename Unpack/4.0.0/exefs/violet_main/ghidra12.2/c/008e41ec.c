/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


