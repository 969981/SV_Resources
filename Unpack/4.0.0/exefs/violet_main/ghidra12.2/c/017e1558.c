/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e1558; name: FUN_017e1558
 */


void FUN_017e1558(long param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float local_c;
  float fStack_8;
  float local_4;
  
  fVar4 = *param_2;
  fVar5 = *(float *)(param_1 + 0xd0);
  *(float *)(param_1 + 0xd0) = fVar4;
  bVar3 = *(byte *)(param_1 + 0x91) | 1.1920929e-07 < ABS(fVar4 - fVar5);
  *(byte *)(param_1 + 0x91) = bVar3;
  local_4 = param_2[1];
  *(byte *)(param_1 + 0x91) = bVar3 | 1.1920929e-07 < ABS(local_4 - *(float *)(param_1 + 0xd4));
  local_c = 1.0;
  fStack_8 = 0.0;
  pfVar1 = &local_c;
  if (local_4 <= 1.0) {
    pfVar1 = &local_4;
  }
  pfVar2 = &fStack_8;
  if (0.0 <= local_4) {
    pfVar2 = pfVar1;
  }
  *(float *)(param_1 + 0xd4) = *pfVar2;
  return;
}


