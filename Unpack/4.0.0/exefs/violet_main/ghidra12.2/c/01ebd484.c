/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebd484; name: FUN_01ebd484
 */


float FUN_01ebd484(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    return 0.0;
  }
  fVar1 = *(float *)(*(long *)(param_1 + 0x78) + 0x290);
  fVar2 = *(float *)(*(long *)(param_1 + 0x78) + 0x294);
  fVar3 = fVar1;
  if (fVar1 < fVar2) {
    fVar3 = fVar2;
  }
  return fVar3 - fVar1;
}


