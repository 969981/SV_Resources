/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dcfbfc; name: FUN_00dcfbfc
 */


void FUN_00dcfbfc(undefined8 *param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float local_24;
  
  memcpy(param_1,(void *)(param_2 + 0x2d0),0x30);
  fVar5 = *(float *)(param_2 + 0x338);
  local_28 = 0.0;
  local_24 = *(float *)(param_1 + 5) - fVar5;
  pfVar1 = &local_28;
  if (0.0 <= *(float *)(param_1 + 5) - fVar5) {
    pfVar1 = &local_24;
  }
  local_24 = *(float *)((long)param_1 + 0x24) - fVar5;
  fVar3 = *pfVar1;
  local_28 = 0.0;
  pfVar1 = &local_28;
  if (0.0 <= local_24) {
    pfVar1 = &local_24;
  }
  local_24 = *(float *)(param_1 + 4) - fVar5;
  local_28 = 0.0;
  pfVar2 = &local_28;
  if (0.0 <= *(float *)(param_1 + 4) - fVar5) {
    pfVar2 = &local_24;
  }
  fVar4 = *pfVar2;
  *(float *)((long)param_1 + 0x24) = *pfVar1;
  *(float *)(param_1 + 5) = fVar3;
  *(float *)(param_1 + 4) = fVar4;
  param_1[1] = param_1[1];
  *param_1 = CONCAT44(fVar5 + (float)((ulong)*param_1 >> 0x20),(int)*param_1);
  return;
}


