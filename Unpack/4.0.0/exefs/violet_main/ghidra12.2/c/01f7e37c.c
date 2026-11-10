/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7e37c; name: FUN_01f7e37c
 */


float FUN_01f7e37c(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x58);
  fVar3 = *(float *)(param_1 + 0x5c);
  fVar1 = (float)(**(code **)PTR_PTR_047d9248)
                           (*(float *)(param_1 + 0x50) / *(float *)(param_1 + 0x54));
  return fVar2 + (fVar3 - fVar2) * fVar1;
}


