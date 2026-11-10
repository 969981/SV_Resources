/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ac3ec; name: FUN_008ac3ec
 */


void FUN_008ac3ec(long *param_1,long param_2,int param_3,float *param_4,float *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float __x;
  float local_58;
  float fStack_54;
  float local_48;
  float local_44;
  
  lVar2 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_58);
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,&local_48);
  fVar3 = (float)(**(code **)(*(long *)*param_1 + 0x70))();
  lVar1 = *param_1;
  if ((*(byte *)(lVar1 + 0x5b) & 3) == 2) {
    local_48 = fVar3 + local_48;
  }
  else if ((*(byte *)(lVar1 + 0x5b) & 3) != 0) {
    local_48 = local_48 - fVar3;
  }
  lVar2 = lVar2 + param_3;
  local_48 = local_48 - (*param_5 - local_58) * 0.5;
  local_44 = local_44 + (param_5[1] - fStack_54) * 0.5;
  if (0.0 < param_4[1]) {
    __x = *param_4 * (*(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390);
    fVar3 = cosf(__x);
    local_48 = local_48 - fVar3 * param_4[1];
    fVar3 = sinf(__x);
    local_44 = local_44 - fVar3 * param_4[1];
    lVar1 = *param_1;
  }
  fVar3 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + 0x5a));
  *(float *)(lVar2 + 0xdc) = (fVar3 / 255.0) / 255.0;
  FUN_00892a80(param_2,lVar2,&local_48,param_5,1,&DAT_03d0f984);
  return;
}


