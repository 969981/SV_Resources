/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4f5d0; name: FUN_00d4f5d0
 */


ulong FUN_00d4f5d0(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  param_2 = ((float)param_5 * 3.0 + 1.5) - param_2;
  param_2 = param_2 * param_2;
  if (param_4 < param_2) {
    uVar1 = 0;
  }
  else {
    fVar6 = SQRT(param_4 - param_2);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(param_4 - param_2);
    }
    fVar7 = (param_1 - fVar6) / 3.0;
    iVar2 = (int)fVar7;
    fVar6 = (fVar6 + param_1) / 3.0;
    uVar4 = (iVar2 - param_6) - (uint)(fVar7 < (float)iVar2);
    iVar2 = (int)fVar6;
    uVar5 = (param_6 - iVar2) + (uint)(fVar6 < (float)iVar2) + 0x3f;
    if (0x3e < (int)uVar4) {
      uVar4 = 0x3f;
    }
    if (0x3e < (int)uVar5) {
      uVar5 = 0x3f;
    }
    uVar1 = -1L << ((ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) & 0x3f) &
            0xffffffffffffffffU >> ((ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) & 0x3f);
  }
  if ((0.0 < param_3) && (param_2 <= param_3)) {
    fVar6 = SQRT(param_3 - param_2);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(param_3 - param_2);
    }
    fVar7 = (param_1 - fVar6) / 3.0;
    iVar2 = (int)fVar7;
    fVar6 = (fVar6 + param_1) / 3.0;
    iVar3 = (int)fVar6;
    uVar4 = (iVar2 - param_6) - (uint)(fVar7 < (float)iVar2);
    uVar5 = (param_6 - iVar3) + (uint)(fVar6 < (float)iVar3) + 0x3f;
    if (0x3e < (int)uVar4) {
      uVar4 = 0x3f;
    }
    if (0x3e < (int)uVar5) {
      uVar5 = 0x3f;
    }
    uVar1 = uVar1 & (-1L << ((ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) & 0x3f) &
                     0xffffffffffffffffU >>
                     ((ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) & 0x3f) ^
                    0xffffffffffffffff);
  }
  return uVar1;
}


