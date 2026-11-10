/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e6c0c; name: FUN_034e6c0c
 */


void FUN_034e6c0c(float param_1,undefined8 param_2,ulong *param_3,ulong param_4,int param_5,
                 int param_6,int param_7)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = *param_3;
  uVar4 = param_3[8];
  *param_3 = param_4;
  if ((param_5 != 0) && (((byte)uVar4 >> 1 & 1) != 0)) {
    fVar7 = expf((float)(int)-(uint)*(ushort *)PTR_DAT_047e6d08 / ((float)param_5 * 9.6));
    *(float *)((long)param_3 + 0x44) = fVar7;
  }
  fVar7 = *(float *)(param_3 + 2);
  if (((byte)uVar4 & 1) == 0) {
    *(float *)(param_3 + 1) = fVar7;
    if (param_7 == 2) {
      param_1 = *(float *)((long)param_3 + 0xc) + param_1;
    }
    *(float *)((long)param_3 + 0xc) = param_1;
    *(float *)((long)param_3 + 0x14) = param_1;
  }
  else {
    if (-37.0 <= fVar7 * 0.05) {
      uVar5 = (uint)(fVar7 * 1393317.6 + 1.0653532e+09);
      fVar7 = (float)(uVar5 & 0x7fffff | 0x3f800000);
      fVar7 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) *
              (float)(uVar5 & 0xff800000);
    }
    else {
      fVar7 = 0.0;
    }
    *(float *)(param_3 + 1) = fVar7;
    if (param_7 == 2) {
      if (-37.0 <= param_1 * 0.05) {
        uVar5 = (uint)(param_1 * 1393317.6 + 1.0653532e+09);
        fVar2 = (float)(uVar5 & 0x7fffff | 0x3f800000);
        param_1 = (fVar2 * (fVar2 * 0.32518977 + 0.020805772) + 0.65304345) *
                  (float)(uVar5 & 0xff800000);
      }
      else {
        param_1 = 0.0;
      }
      param_1 = *(float *)((long)param_3 + 0xc) * param_1;
      fVar2 = (float)((uint)param_1 & 0x7fffff | 0x3f800000);
      fVar8 = fVar2 + 1.0;
      *(float *)((long)param_3 + 0xc) = param_1;
      *(float *)((long)param_3 + 0x14) =
           ((float)((uint)param_1 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
           (fVar2 * fVar2 * fVar2 * 1.1581186 + -1.1581186) / (fVar8 * fVar8 * fVar8)) * 20.0;
    }
    else {
      *(float *)((long)param_3 + 0x14) = param_1;
      if (-37.0 <= param_1 * 0.05) {
        uVar5 = (uint)(param_1 * 1393317.6 + 1.0653532e+09);
        fVar2 = (float)(uVar5 & 0x7fffff | 0x3f800000);
        param_1 = (fVar2 * (fVar2 * 0.32518977 + 0.020805772) + 0.65304345) *
                  (float)(uVar5 & 0xff800000);
      }
      else {
        param_1 = 0.0;
      }
      *(float *)((long)param_3 + 0xc) = param_1;
    }
  }
  if ((param_1 <= fVar7 && param_6 != 3) && param_6 != 5) {
    param_6 = 8 - param_6;
  }
  *(int *)(param_3 + 7) = param_6;
  iVar3 = *(int *)PTR_DAT_047e6fc0;
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar5 = (param_5 + iVar3 + -1) / iVar3;
  }
  iVar3 = *(int *)(*(long *)PTR_DAT_047e2fe8 + 0x78);
  if (((param_4 & 0xf000000) != 0) && (uVar6 == param_4)) {
    uVar1 = ((int)param_3[3] - iVar3) + *(int *)((long)param_3 + 0x1c);
    if (uVar1 <= uVar5) {
      uVar5 = uVar1;
    }
  }
  *(int *)(param_3 + 3) = iVar3;
  *(uint *)((long)param_3 + 0x1c) = uVar5;
  *(int *)((long)param_3 + 0x24) = iVar3;
  return;
}


