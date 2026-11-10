/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008842f8; name: FUN_008842f8
 */


float FUN_008842f8(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc));
    fVar2 = *(float *)(param_1 + 0xc) * fVar2;
    fVar1 = *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8);
  }
  else {
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(param_2 + 0xc));
    fVar2 = *(float *)(param_1 + 0x20);
    fVar1 = (fVar2 - *(float *)(param_1 + 0xc) * fVar1) * 0.5 +
            *(float *)(param_1 + 0xc) * (float)(int)*(short *)(param_2 + 8);
  }
  FUN_0088439c(fVar1 + *(float *)(param_1 + 0x14),param_1);
  *(float *)(param_1 + 0x14) = fVar2 + *(float *)(param_1 + 0x14);
  return fVar2;
}


