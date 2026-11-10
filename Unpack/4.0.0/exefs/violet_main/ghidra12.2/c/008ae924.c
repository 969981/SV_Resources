/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ae924; name: FUN_008ae924
 */


float FUN_008ae924(long param_1,float *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_24;
  
  fVar8 = *(float *)(param_1 + 0x50) * 0.5;
  fVar7 = *(float *)(param_1 + 0x54) * 0.5;
  pfVar3 = (float *)(param_3 + 0x2c);
  local_24 = *pfVar3;
  fVar9 = 1.0 / fVar7;
  fVar10 = 1.0 / fVar8;
  FUN_008b5210(0,fVar8,&local_24);
  FUN_008b5210(0,fVar7,&local_24);
  *param_2 = fVar10;
  param_2[1] = fVar9;
  fVar5 = 0.0;
  if (*(char *)(param_3 + 4) < '\0') {
    fVar5 = 1.0;
  }
  param_2[2] = fVar5;
  param_2[5] = local_24;
  pfVar4 = (float *)(param_3 + 0x1c);
  param_2[4] = *pfVar4;
  FUN_008b5210(0x3f000000,0x40400000);
  fVar5 = 0.99999;
  if (local_24 / fVar8 != 0.0) {
    fVar5 = 1.0 - local_24 / fVar8;
  }
  param_2[6] = fVar5;
  FUN_008b5210(0,0x3f800000);
  fVar5 = 0.99999;
  if (local_24 / fVar7 != 0.0) {
    fVar5 = 1.0 - local_24 / fVar7;
  }
  param_2[7] = fVar5;
  FUN_008b5210(0,0x3f800000);
  fVar5 = local_24;
  uVar2 = (ulong)(*(byte *)(param_3 + 4) >> 6) & 1;
  local_24 = pfVar3[uVar2];
  FUN_008b5210(0,fVar8,&local_24);
  FUN_008b5210(0,fVar7,&local_24);
  *param_2 = fVar10;
  param_2[1] = fVar9;
  fVar6 = 0.0;
  if (*(char *)(param_3 + 4) < '\0') {
    fVar6 = 1.0;
  }
  param_2[2] = fVar6;
  param_2[9] = local_24;
  param_2[8] = pfVar4[uVar2];
  FUN_008b5210(0x3f000000,0x40400000);
  fVar6 = 0.99999;
  if (local_24 / fVar8 != 0.0) {
    fVar6 = 1.0 - local_24 / fVar8;
  }
  param_2[10] = fVar6;
  FUN_008b5210(0,0x3f800000);
  fVar6 = 0.99999;
  if (local_24 / fVar7 != 0.0) {
    fVar6 = 1.0 - local_24 / fVar7;
  }
  param_2[0xb] = fVar6;
  FUN_008b5210(0,0x3f800000);
  uVar2 = (ulong)(*(byte *)(param_3 + 4) >> 3) & 8;
  local_24 = *(float *)((long)pfVar3 + uVar2);
  FUN_008b5210(0,fVar8,&local_24);
  FUN_008b5210(0,fVar7,&local_24);
  *param_2 = fVar10;
  param_2[1] = fVar9;
  fVar6 = 0.0;
  if (*(char *)(param_3 + 4) < '\0') {
    fVar6 = 1.0;
  }
  param_2[2] = fVar6;
  param_2[0xd] = local_24;
  param_2[0xc] = *(float *)((long)pfVar4 + uVar2);
  FUN_008b5210(0x3f000000,0x40400000);
  fVar6 = 0.99999;
  if (local_24 / fVar8 != 0.0) {
    fVar6 = 1.0 - local_24 / fVar8;
  }
  param_2[0xe] = fVar6;
  FUN_008b5210(0,0x3f800000);
  fVar6 = 0.99999;
  if (local_24 / fVar7 != 0.0) {
    fVar6 = 1.0 - local_24 / fVar7;
  }
  param_2[0xf] = fVar6;
  FUN_008b5210(0,0x3f800000);
  lVar1 = 0;
  if ((*(byte *)(param_3 + 4) & 0x40) != 0) {
    lVar1 = 0xc;
  }
  local_24 = *(float *)((long)pfVar3 + lVar1);
  FUN_008b5210(0,fVar8,&local_24);
  FUN_008b5210(0,fVar7,&local_24);
  *param_2 = fVar10;
  param_2[1] = fVar9;
  fVar9 = 0.0;
  if (*(char *)(param_3 + 4) < '\0') {
    fVar9 = 1.0;
  }
  param_2[2] = fVar9;
  param_2[0x11] = local_24;
  param_2[0x10] = *(float *)((long)pfVar4 + lVar1);
  FUN_008b5210(0x3f000000,0x40400000);
  fVar9 = 0.99999;
  if (local_24 / fVar8 != 0.0) {
    fVar9 = 1.0 - local_24 / fVar8;
  }
  param_2[0x12] = fVar9;
  FUN_008b5210(0,0x3f800000);
  fVar8 = 0.99999;
  if (local_24 / fVar7 != 0.0) {
    fVar8 = 1.0 - local_24 / fVar7;
  }
  param_2[0x13] = fVar8;
  FUN_008b5210(0,0x3f800000,param_2 + 0x13);
  return fVar5;
}


