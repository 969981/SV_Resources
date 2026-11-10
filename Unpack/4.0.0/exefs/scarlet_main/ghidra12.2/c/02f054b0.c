/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f054b0; name: FUN_02f054b0
 */


int FUN_02f054b0(undefined4 param_1,long param_2,undefined8 *param_3,float *param_4)

{
  undefined *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  float fStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float fStack_48;
  undefined8 local_40;
  float fStack_38;
  
  local_e0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_60 = *param_3;
  uStack_58 = CONCAT44(*(undefined4 *)(param_3 + 1),*(undefined4 *)(param_3 + 1));
  local_90 = *(undefined8 *)((long)param_3 + 0xc);
  fStack_88 = *(float *)((long)param_3 + 0x14);
  local_f0 = param_3[3];
  uStack_e8 = CONCAT44(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 4));
  fStack_84 = fStack_88;
  iVar2 = FUN_03190574(ZEXT816(0x3f800000),param_1,&local_60,&local_90,&local_f0,&local_e0);
  if ((float)local_e0 == 0.0) {
    iVar2 = -0x7ffbfe00;
  }
  else if (-1 < iVar2) {
    *(undefined8 *)(param_4 + 6) = uStack_c8;
    *(undefined8 *)(param_4 + 4) = local_d0;
    param_4[1] = local_e0._4_4_;
    *param_4 = (float)local_e0;
    memcpy(&local_90,&local_c0,0x30);
    FUN_031921bc(&local_90,&local_60);
    param_4[10] = fStack_88;
    param_4[0xb] = fStack_84;
    param_4[8] = (float)local_90;
    param_4[9] = local_90._4_4_;
    puVar1 = PTR_DAT_047d19e0;
    uVar12 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x28);
    local_90._0_4_ =
         (float)((uint)(float)local_90 ^
                ((uint)(float)local_90 ^ uStack_80) & *(uint *)(PTR_DAT_047d19e0 + 0x20));
    local_90._4_4_ =
         (float)((uint)local_90._4_4_ ^
                ((uint)local_90._4_4_ ^ uStack_7c) & *(uint *)(PTR_DAT_047d19e0 + 0x24));
    fStack_88 = (float)((uint)fStack_88 ^
                       ((uint)fStack_88 ^ uStack_78) & *(uint *)(PTR_DAT_047d19e0 + 0x28));
    param_4[10] = fStack_88;
    param_4[0xb] = (float)((uint)fStack_84 ^
                          ((uint)fStack_84 ^ uStack_74) & (uint)((ulong)uVar12 >> 0x20));
    param_4[8] = (float)local_90;
    param_4[9] = local_90._4_4_;
    local_90._0_4_ =
         (float)((uint)(float)local_90 ^
                ((uint)(float)local_90 ^ local_70) & *(uint *)(puVar1 + 0x40));
    local_90._4_4_ =
         (float)((uint)local_90._4_4_ ^
                ((uint)local_90._4_4_ ^ uStack_6c) & *(uint *)(puVar1 + 0x44));
    fStack_88 = (float)((uint)fStack_88 ^ ((uint)fStack_88 ^ uStack_68) & *(uint *)(puVar1 + 0x48));
    param_4[10] = fStack_88;
    param_4[0xb] = (float)local_e0;
    param_4[8] = (float)local_90;
    param_4[9] = local_90._4_4_;
    fVar3 = (float)local_40;
    fVar13 = (float)((ulong)local_40 >> 0x20);
    fVar10 = (float)((ulong)uStack_50 >> 0x20);
    fVar4 = (float)local_60;
    fVar11 = (float)((ulong)local_60 >> 0x20);
    fVar9 = (float)uStack_58;
    if (fStack_38 < 0.0) {
      uVar12 = NEON_fmov(0x3f800000,4);
      fStack_38 = (float)uVar12 - fStack_38;
      fVar11 = fVar11 + (float)uStack_50;
      fVar5 = fVar11;
      fVar6 = fStack_38 - (fVar4 - fVar10);
      fVar7 = fStack_48 + fVar13;
      fVar8 = fVar3 - fVar9;
      if (fVar10 < fVar4) {
        fVar5 = (fVar4 - fVar10) + fStack_38;
        fVar6 = fVar11;
        fVar7 = fVar9 + fVar3;
        fVar8 = fStack_48 - fVar13;
      }
    }
    else {
      uVar12 = NEON_fmov(0x3f800000,4);
      fStack_38 = fStack_38 + (float)uVar12;
      fVar11 = fVar11 - (float)uStack_50;
      fVar5 = fStack_48 - fVar13;
      fVar6 = fVar3 - fVar9;
      fVar7 = fVar11;
      fVar8 = fVar4 + fVar10 + fStack_38;
      if (fVar4 < -fVar10) {
        fVar5 = fVar9 + fVar3;
        fVar6 = fStack_48 + fVar13;
        fVar7 = fStack_38 - (fVar4 + fVar10);
        fVar8 = fVar11;
      }
    }
    fVar3 = fVar5 * fVar5 + fVar6 * fVar6;
    fVar11 = fVar7 * fVar7 + fVar8 * fVar8;
    fVar4 = fVar3 + fVar11;
    if (fVar4 == 0.0) {
      fVar5 = 0.0;
      fVar6 = 0.0;
      fVar7 = 0.0;
      fVar8 = 0.0;
    }
    else {
      fVar4 = SQRT(fVar4);
      fVar3 = SQRT(fVar3 + fVar11);
      fVar5 = fVar5 / fVar4;
      fVar6 = fVar6 / fVar3;
      fVar7 = fVar7 / fVar4;
      fVar8 = fVar8 / fVar3;
    }
    *(ulong *)(param_4 + 0xe) = CONCAT44(fVar8,fVar7);
    *(ulong *)(param_4 + 0xc) = CONCAT44(fVar6,fVar5);
    fVar4 = *(float *)(param_2 + 0x20);
    fVar3 = *param_4 * -fVar4;
    if (0.0 <= fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = *(float *)(param_2 + 0x1c) * fVar3;
    param_4[1] = fVar3;
    param_4[10] = fStack_88 * fVar4;
    param_4[0xb] = (float)local_e0 * fVar4;
    param_4[8] = (float)local_90 * fVar4;
    param_4[9] = local_90._4_4_ * fVar4;
  }
  return iVar2;
}


