/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f052c0; name: FUN_02f052c0
 */


int FUN_02f052c0(undefined1 param_1 [16],long param_2,undefined8 param_3,undefined8 param_4,
                float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  float fVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined2 uVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [12];
  undefined1 local_60 [8];
  float fStack_58;
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
  iVar6 = FUN_031913d8(param_1,0,param_3,param_4,&local_e0);
  if (-1 < iVar6) {
    *(undefined8 *)(param_5 + 6) = uStack_c8;
    *(undefined8 *)(param_5 + 4) = local_d0;
    *param_5 = (float)local_e0;
    param_5[1] = local_e0._4_4_;
    memcpy(local_90,&local_c0,0x30);
    FUN_031921bc(local_90,local_60);
    auVar4._8_4_ = uStack_78;
    auVar4._0_8_ = uStack_80;
    *(long *)(param_5 + 10) = local_90._8_8_;
    *(long *)(param_5 + 8) = local_90._0_8_;
    puVar5 = PTR_DAT_047d19e0;
    uVar16 = *(undefined8 *)(PTR_DAT_047d19e0 + 0x28);
    auVar4._12_4_ = uStack_74;
    auVar1._10_2_ = (short)((ulong)uVar16 >> 0x10);
    auVar1._0_10_ = *(unkbyte10 *)(PTR_DAT_047d19e0 + 0x20);
    auVar1._12_2_ = (short)((ulong)uVar16 >> 0x20);
    auVar1._14_2_ = (short)((ulong)uVar16 >> 0x30);
    local_90 = local_90 ^ (local_90 ^ auVar4) & auVar1;
    uVar16 = NEON_fmov(0x3f800000,4);
    *(long *)(param_5 + 10) = local_90._8_8_;
    *(long *)(param_5 + 8) = local_90._0_8_;
    auVar2._10_2_ = (short)((ulong)*(undefined8 *)(puVar5 + 0x48) >> 0x10);
    auVar2._0_10_ = *(unkbyte10 *)(puVar5 + 0x40);
    auVar8._0_12_ = local_90._0_12_ ^ (local_90._0_12_ ^ local_70) & auVar2;
    auVar8._12_4_ = (float)local_e0;
    *(long *)(param_5 + 10) = auVar8._8_8_;
    *(long *)(param_5 + 8) = auVar8._0_8_;
    fVar12 = (float)((ulong)uStack_50 >> 0x20);
    fVar7 = local_60._0_4_;
    fVar17 = fStack_38 + (float)uVar16;
    fVar11 = (float)((ulong)local_40 >> 0x20);
    fVar18 = local_60._4_4_ - (float)uStack_50;
    fVar19 = (float)local_40 - fStack_58;
    fStack_58 = fStack_58 + (float)local_40;
    fVar14 = fStack_48 + fVar11;
    fVar13 = local_60._4_4_ + (float)uStack_50;
    fVar3 = (float)uVar16 - fStack_38;
    fStack_48 = fStack_48 - fVar11;
    fVar11 = fVar18;
    fVar15 = fVar7 + fVar12 + fVar17;
    if (fVar7 < -fVar12) {
      fVar11 = fVar17 - (fVar7 + fVar12);
      fVar15 = fVar18;
    }
    uVar16 = CONCAT44(fVar19,fStack_48);
    if (fVar7 < -fVar12) {
      uVar16 = CONCAT44(fVar14,fStack_58);
    }
    fVar17 = fVar13;
    fVar18 = fVar3 - (fVar7 - fVar12);
    if (fVar12 < fVar7) {
      fVar17 = (fVar7 - fVar12) + fVar3;
      fVar18 = fVar13;
      fVar14 = fStack_58;
      fVar19 = fStack_48;
    }
    uVar10 = (undefined2)((ulong)uVar16 >> 0x10);
    uVar9 = (undefined2)uVar16;
    fVar3 = (float)((ulong)uVar16 >> 0x20);
    if (fStack_38 < 0.0) {
      uVar9 = SUB42(fVar17,0);
      uVar10 = (undefined2)((uint)fVar17 >> 0x10);
      fVar3 = fVar18;
      fVar11 = fVar14;
      fVar15 = fVar19;
    }
    fVar7 = (float)CONCAT22(uVar10,uVar9) * (float)CONCAT22(uVar10,uVar9) + fVar3 * fVar3;
    fVar19 = fVar11 * fVar11 + fVar15 * fVar15;
    fVar14 = fVar7 + fVar19;
    if (fVar14 == 0.0) {
      fVar7 = 0.0;
      fVar3 = 0.0;
      fVar11 = 0.0;
      fVar15 = 0.0;
    }
    else {
      fVar14 = SQRT(fVar14);
      fVar19 = SQRT(fVar7 + fVar19);
      fVar7 = (float)CONCAT22(uVar10,uVar9) / fVar14;
      fVar3 = fVar3 / fVar19;
      fVar11 = fVar11 / fVar14;
      fVar15 = fVar15 / fVar19;
    }
    *(ulong *)(param_5 + 0xe) =
         CONCAT26((short)((uint)fVar15 >> 0x10),CONCAT24(SUB42(fVar15,0),fVar11));
    *(ulong *)(param_5 + 0xc) =
         CONCAT26((short)((uint)fVar3 >> 0x10),CONCAT24(SUB42(fVar3,0),fVar7));
    fVar11 = *(float *)(param_2 + 0x20);
    fVar3 = *param_5 * -fVar11;
    if (0.0 <= fVar11) {
      fVar3 = fVar11;
    }
    fVar11 = *(float *)(param_2 + 0x1c) * fVar3;
    param_5[1] = fVar3;
    param_5[10] = auVar8._8_4_ * fVar11;
    param_5[0xb] = (float)local_e0 * fVar11;
    param_5[8] = auVar8._0_4_ * fVar11;
    param_5[9] = auVar8._4_4_ * fVar11;
  }
  return iVar6;
}


