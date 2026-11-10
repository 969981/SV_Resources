/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f75220; name: FUN_02f75220
 */


undefined8
FUN_02f75220(float param_1,float param_2,undefined8 param_3,long param_4,undefined8 *param_5,
            undefined8 *param_6,undefined4 *param_7,float *param_8,ulong *param_9)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_138;
  byte local_134;
  undefined8 local_130;
  float local_128;
  float local_124;
  float fStack_120;
  float local_11c;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float fStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  *param_9 = 0;
  if (param_2 + -1e-05 <= param_1) {
    return 0;
  }
  if ((param_2 <= 0.0) && (-*(float *)(param_4 + 0x1c30) <= param_1)) {
    uVar9 = 0;
    goto LAB_02f754b0;
  }
  if (-*(float *)(param_4 + 0x1c30) <= param_1) {
    uStack_f0 = *(undefined8 *)((long)param_6 + 0xc);
    uVar9 = 0;
    uVar10 = 0;
    fStack_e8 = *(float *)((long)param_6 + 0x14);
    local_108 = param_1;
  }
  else {
    uStack_b8 = *(undefined8 *)(param_4 + 0xa8);
    local_c0 = *(undefined8 *)(param_4 + 0xa0);
    uStack_a8 = *(undefined8 *)(param_4 + 0xb8);
    local_b0 = *(undefined8 *)(param_4 + 0xb0);
    uStack_c8 = param_5[1];
    local_d0 = *param_5;
    local_138 = *param_7;
    fVar12 = (float)local_d0;
    local_134 = *(byte *)(param_7 + 1);
    uStack_98 = *(undefined8 *)(param_4 + 200);
    uStack_a0 = *(undefined8 *)(param_4 + 0xc0);
    local_110 = 0x3f8000003f800000;
    fVar14 = (float)((ulong)local_d0 >> 0x20);
    fVar15 = (float)uStack_c8;
    fVar16 = *(float *)(param_4 + 0x1c64) + param_2 + *(float *)(param_4 + 0x1ca4);
    local_90 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xd0) >> 0x20) -
                        ((float)((ulong)uStack_a0 >> 0x20) * fVar15 +
                        (float)((ulong)local_c0 >> 0x20) * fVar12 +
                        (float)((ulong)local_b0 >> 0x20) * fVar14),
                        (float)*(undefined8 *)(param_4 + 0xd0) -
                        ((float)uStack_a0 * fVar15 +
                        (float)local_c0 * fVar12 + (float)local_b0 * fVar14));
    uStack_88 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0xd8) >> 0x20) -
                         ((float)((ulong)uStack_98 >> 0x20) * fVar15 +
                         (float)((ulong)uStack_b8 >> 0x20) * fVar12 +
                         (float)((ulong)uStack_a8 >> 0x20) * fVar14),
                         (float)*(undefined8 *)(param_4 + 0xd8) -
                         ((float)uStack_98 * fVar15 +
                         (float)uStack_b8 * fVar12 + (float)uStack_a8 * fVar14));
    local_70 = CONCAT44(fVar16,fVar16);
    local_80 = 0x3727c5ac3727c5ac;
    uStack_78 = 0;
    local_68 = 0x100000014;
    uVar10 = FUN_00867290(*(undefined8 *)(param_4 + 0x1c58),*(undefined4 *)(param_4 + 0x1c60),
                          *(undefined8 *)(param_4 + 0x1c98),*(undefined4 *)(param_4 + 0x1ca0),
                          &local_d0,&local_110,0,&local_138);
    uVar9 = local_110;
    local_108 = local_108 + param_2;
    local_11c = fStack_e8;
    fVar12 = *(float *)(param_4 + 0x1c64);
    local_124 = (float)uStack_f0;
    fStack_120 = (float)((ulong)uStack_f0 >> 0x20);
    local_130 = CONCAT44((float)((ulong)local_100 >> 0x20) - fStack_120 * fVar12,
                         (float)local_100 - local_124 * fVar12);
    local_128 = fStack_f8 - fStack_e8 * fVar12;
    uVar13 = 0x3f8000003f800000;
    if ((uVar10 & 1) != 0) {
      bVar5 = *(byte *)(param_7 + 1);
      uVar13 = local_110;
      if ((bVar5 & 3) != 3) {
        bVar3 = local_134 & 3;
        local_118 = local_108;
        if (bVar3 != 3) {
          pbVar2 = (byte *)((long)param_7 + (ulong)(bVar5 >> 6));
          pbVar11 = (byte *)((ulong)&local_138 | (ulong)(local_134 >> 6));
          if ((bVar5 & 3) == 2) {
            if ((*pbVar11 == *pbVar2) || (*pbVar11 == pbVar2[1])) {
              if (bVar3 != 2) goto LAB_02f753b8;
              if ((pbVar11[1] == *pbVar2) || (pbVar11[1] == pbVar2[1])) goto LAB_02f75518;
            }
LAB_02f75560:
            FUN_02f781d0(param_4,&local_130,&local_138);
          }
          else {
            bVar6 = *pbVar2;
            bVar7 = *pbVar11;
            if (bVar3 == 2) {
              if ((bVar6 != bVar7) && (bVar6 != pbVar11[1])) goto LAB_02f75560;
            }
            else if ((uint)bVar6 != (uint)bVar7) {
              if (*(int *)(*(long *)(param_4 + 0x3c0) + 0x44) == 4) {
                iVar8 = (uint)bVar7 - (uint)bVar6;
                uVar1 = iVar8 + 4;
                uVar4 = iVar8 + 7;
                if (-1 < (int)uVar1) {
                  uVar4 = uVar1;
                }
                if (uVar1 - (uVar4 & 0xfffffffc) == 2) goto LAB_02f75560;
              }
              goto LAB_02f753b8;
            }
LAB_02f75518:
            if (local_134 >> 6 < bVar5 >> 6) goto LAB_02f753b8;
          }
        }
        uVar13 = NEON_fmov(0xbf800000,4);
        uVar10 = CONCAT44((float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar13 >> 0x20),
                          (float)uVar9 + (float)uVar13);
        *(byte *)(param_7 + 1) = local_134;
        *param_7 = local_138;
        *(float *)(param_6 + 3) = local_118;
        param_6[1] = CONCAT44(local_124,local_128);
        param_6[2] = CONCAT44(local_11c,fStack_120);
        *param_6 = local_130;
        *param_9 = uVar10;
        uVar9 = 1;
        goto LAB_02f753dc;
      }
    }
LAB_02f753b8:
    uVar9 = NEON_fmov(0xbf800000,4);
    uVar10 = (ulong)(uint)((float)uVar13 + (float)uVar9);
    uVar9 = 0;
  }
LAB_02f753dc:
  param_1 = (float)uVar10 - *(float *)(param_4 + 0x1c30);
  local_108 = local_108 - param_2;
  if (local_108 < 0.0) {
    fVar12 = (float)uStack_f0 * (float)*param_5 +
             (float)((ulong)uStack_f0 >> 0x20) * (float)((ulong)*param_5 >> 0x20) +
             fStack_e8 * (float)param_5[1];
    if ((0.0 <= fVar12) || (fVar12 = local_108 / fVar12, 10.0 < fVar12)) {
      param_1 = param_1 - (10.0 - local_108);
    }
    else {
      param_1 = param_1 - fVar12;
    }
  }
LAB_02f754b0:
  *param_8 = param_1 + -1e-05;
  return uVar9;
}


