/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034260b4; name: FUN_034260b4
 */


void FUN_034260b4(float *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  float local_58;
  
  pfVar1 = param_1;
  if (param_1[0x1e] != 0.0) {
    pfVar1 = param_1 + (ulong)((int)param_1[0x1e] - 1) * 3 + 3;
  }
  local_60 = *(undefined8 *)pfVar1;
  local_58 = pfVar1[2];
  uVar13 = *(ulong *)(param_3 + 0x68);
  uVar14 = param_4[0xd];
  if (*(int *)(param_2 + 0x78) != 0) {
    if (uVar13 < uVar14) {
      param_4 = (undefined8 *)(param_2 + (ulong)(*(int *)(param_2 + 0x78) - 1) * 0xc + 0xc);
    }
    else {
      param_4 = (undefined8 *)(param_2 + 0xc);
    }
  }
  local_70 = *param_4;
  local_68 = *(undefined4 *)(param_4 + 1);
  local_80 = 0;
  local_78 = 0.0;
  FUN_034237c0(param_3,&local_60,&local_70,&local_80);
  uVar11 = 0x50c5d1f;
  if (param_1[0x24] != 0.0) {
    uVar11 = (int)param_1[0x24] * 0x1000193;
  }
  uVar12 = (uint)param_3;
  uVar6 = (uint)((ulong)param_3 >> 0x20);
  param_1[0x24] =
       (float)((((((((uVar11 ^ uVar12 & 0xff) * 0x1000193 ^ uVar12 >> 8 & 0xff) * 0x1000193 ^
                   uVar12 >> 0x10 & 0xff) * 0x1000193 ^ uVar12 >> 0x18) * 0x1000193 ^ uVar6 & 0xff)
                 * 0x1000193 ^ uVar6 >> 8 & 0xff) * 0x1000193 ^
               (ushort)((ulong)param_3 >> 0x30) & 0xff) * 0x1000193 ^
              (uint)(byte)((ulong)param_3 >> 0x38));
  local_90 = local_80;
  local_88 = local_78;
  FUN_03425f98(param_1,&local_90,param_5,param_3);
  if (uVar13 < uVar14) {
    fVar15 = param_1[0x1e];
    uVar11 = *(uint *)(param_2 + 0x78);
    pfVar1 = param_1;
    if (fVar15 != 0.0) {
      pfVar1 = param_1 + (ulong)((int)fVar15 - 1) * 3 + 3;
    }
    if (uVar11 != 0) {
      uVar6 = 0;
      iVar8 = -1;
      fVar9 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar10 = *pfVar1;
      do {
        uVar12 = (int)fVar15 + uVar6;
        if (7 < uVar12) break;
        uVar11 = uVar11 + iVar8;
        iVar8 = iVar8 + -1;
        lVar5 = param_2 + (ulong)uVar11 * 0xc;
        fVar2 = *(float *)(lVar5 + 0xc);
        fVar3 = *(float *)(lVar5 + 0x10);
        fVar4 = *(float *)(lVar5 + 0x14);
        param_1[(ulong)uVar12 * 3 + 3] = fVar2;
        param_1[(ulong)uVar12 * 3 + 4] = fVar3;
        param_1[(ulong)uVar12 * 3 + 5] = fVar4;
        fVar15 = param_1[0x1e];
        uVar11 = uVar6 + (int)fVar15;
        uVar6 = uVar6 + 1;
        *(undefined8 *)(param_1 + (ulong)uVar11 * 2 + 0x2e) = param_6;
        param_1[0x20] =
             param_1[0x20] +
             SQRT((fVar2 - fVar10) * (fVar2 - fVar10) + (fVar3 - fVar9) * (fVar3 - fVar9) +
                  (fVar4 - fVar7) * (fVar4 - fVar7));
        uVar11 = *(uint *)(param_2 + 0x78);
        fVar9 = fVar3;
        fVar7 = fVar4;
        fVar10 = fVar2;
      } while (uVar6 < uVar11);
    }
    param_1[0x1b] = (float)local_80;
    param_1[0x1c] = local_80._4_4_;
    param_1[0x1d] = local_78;
    fVar15 = (float)(*(int *)(param_2 + 0x78) + (int)fVar15);
    if (7 < (uint)fVar15) {
      fVar15 = 1.12104e-44;
    }
    param_1[0x1e] = fVar15;
    fVar15 = *(float *)(param_2 + 0x84);
    if (*(float *)(param_2 + 0x84) <= param_1[0x21]) {
      fVar15 = param_1[0x21];
    }
    param_1[0x21] = fVar15;
    fVar15 = *(float *)(param_2 + 0x88);
    if (*(float *)(param_2 + 0x88) <= param_1[0x22]) {
      fVar15 = param_1[0x22];
    }
    param_1[0x22] = fVar15;
    fVar15 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0x8c),param_1[0x23]);
    param_1[0x23] = fVar15;
    fVar15 = *(float *)(param_2 + 0x90);
    if (fVar15 != 0.0) {
      if (param_1[0x24] != 0.0) {
        fVar15 = (float)(((((int)param_1[0x24] * 0x1000193 ^ (uint)fVar15 & 0xff) * 0x1000193 ^
                          (uint)fVar15 >> 8 & 0xff) * 0x1000193 ^ (uint)fVar15 >> 0x10 & 0xff) *
                         0x1000193 ^ (uint)fVar15 >> 0x18);
      }
      param_1[0x24] = fVar15;
    }
  }
  else {
    local_a0 = local_80;
    local_98 = local_78;
    FUN_03425e28(param_1,param_2,&local_a0,param_6);
  }
  return;
}


