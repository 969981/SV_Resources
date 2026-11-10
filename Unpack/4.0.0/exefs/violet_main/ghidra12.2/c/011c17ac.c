/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c17ac; name: FUN_011c17ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011c17ac(undefined1 param_1 [16],long param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  float fVar11;
  undefined1 auVar8 [16];
  int iVar12;
  int iVar15;
  int iVar16;
  undefined1 auVar13 [16];
  int iVar17;
  undefined1 auVar14 [16];
  float fVar18;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  
  fVar11 = param_1._12_4_;
  fVar10 = param_1._8_4_;
  fVar9 = param_1._4_4_;
  fVar6 = param_1._0_4_;
  if (*(char *)(param_2 + 0xb1) == '\0') {
    auVar13._0_4_ = fVar6 * fVar6 + fVar9 * fVar9;
    auVar13._4_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar13._8_4_ = fVar6 * fVar6 + fVar9 * fVar9;
    auVar13._12_4_ = fVar10 * fVar10 + fVar11 * fVar11;
    auVar13 = NEON_ext(auVar13,auVar13,4,1);
    fVar4 = auVar13._0_4_ + auVar13._4_4_;
    if (*(float *)(param_2 + 0x74) <= fVar4) {
      return;
    }
    uVar2 = *(undefined8 *)*(undefined1 (*) [12])(param_3 + 0x20);
    fVar18 = (float)(0x5f1ffff9 - ((uint)fVar4 >> 1));
    iVar12 = -(uint)(fVar4 == 0.0);
    iVar15 = -(uint)(auVar13._8_4_ + auVar13._12_4_ == 0.0);
    iVar16 = -(uint)(auVar13._0_4_ + auVar13._4_4_ == 0.0);
    iVar17 = -(uint)(auVar13._8_4_ + auVar13._12_4_ == 0.0);
    fVar18 = (fVar4 * -0.70395225 * fVar18 * fVar18 + 1.6819141) * fVar18;
    auVar7._0_4_ = fVar6 * fVar18;
    auVar7._4_4_ = fVar9 * fVar18;
    auVar7._8_4_ = fVar10 * fVar18;
    auVar7._12_4_ = fVar11 * fVar18;
    auVar14[0] = ~(byte)iVar12;
    auVar14[1] = ~(byte)((uint)iVar12 >> 8);
    auVar14[2] = ~(byte)((uint)iVar12 >> 0x10);
    auVar14[3] = ~(byte)((uint)iVar12 >> 0x18);
    auVar14[4] = ~(byte)iVar15;
    auVar14[5] = ~(byte)((uint)iVar15 >> 8);
    auVar14[6] = ~(byte)((uint)iVar15 >> 0x10);
    auVar14[7] = ~(byte)((uint)iVar15 >> 0x18);
    auVar14[8] = ~(byte)iVar16;
    auVar14[9] = ~(byte)((uint)iVar16 >> 8);
    auVar14[10] = ~(byte)((uint)iVar16 >> 0x10);
    auVar14[0xb] = ~(byte)((uint)iVar16 >> 0x18);
    auVar14[0xc] = ~(byte)iVar17;
    auVar14[0xd] = ~(byte)((uint)iVar17 >> 8);
    auVar14[0xe] = ~(byte)((uint)iVar17 >> 0x10);
    auVar14[0xf] = ~(byte)((uint)iVar17 >> 0x18);
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(param_3 + 0x20);
    auVar7 = auVar7 ^ (auVar7 ^ auVar1) & ~auVar14;
    fVar6 = (float)uVar2 * auVar7._0_4_;
    fVar9 = (float)((ulong)uVar2 >> 0x20) * auVar7._4_4_;
    fVar10 = (float)*(undefined8 *)(param_3 + 0x28) * auVar7._8_4_;
    fVar11 = auVar7._12_4_ * 0.0;
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    auVar5._0_4_ = fVar6 + fVar9;
    auVar5._4_4_ = fVar10 + fVar11;
    auVar5._8_4_ = fVar6 + fVar9;
    auVar5._12_4_ = fVar10 + fVar11;
    auVar13 = NEON_ext(auVar5,auVar5,4,1);
    uVar3 = (ulong)((fVar4 / *(float *)PTR_FloatDegree180_047d2390) * 90.0);
    if (*(float *)(PTR_SinCosSampleTable_047d2398 + (uVar3 >> 0x18 & 0xff) * 0x10) +
        *(float *)((long)(PTR_SinCosSampleTable_047d2398 + (uVar3 >> 0x18 & 0xff) * 0x10) + 8) *
        (float)((uint)uVar3 & 0xffffff) * 5.9604645e-08 < auVar13._0_4_ + auVar13._4_4_) {
      return;
    }
    *(undefined1 *)(param_2 + 0xb1) = 1;
  }
  if (0.5 < *(float *)(param_2 + 0x90)) {
    *(undefined4 *)(param_2 + 0x90) = 0x3f800000;
  }
  if (DAT_04837998 != '\0') {
    local_18 = 1;
    local_1c = 0x40800000;
    local_20 = 1;
    auVar13 = NEON_fmov(0x3fc0000000000000,8);
    local_70 = 0x3f800000;
    uStack_68 = 0x3f8000003f800000;
    local_80 = 0x3f800000;
    uStack_78 = 0x3f8000003f800000;
    fVar6 = (float)*(undefined8 *)(param_3 + 0x30) + auVar13._0_4_;
    fVar9 = (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20) + auVar13._4_4_;
    fVar10 = (float)*(undefined8 *)(param_3 + 0x38) + auVar13._8_4_;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_b8 = DAT_03cab628;
    local_c0 = DAT_03cab620;
    uStack_a8 = _UNK_03cabe68;
    uStack_b0 = _DAT_03cabe60;
    local_d0 = 0xa0000000a;
    uStack_50 = CONCAT44((float)((ulong)_DAT_03cab4e0 >> 0x20) + fVar9 * 0.0,
                         (float)_DAT_03cab4e0 + fVar6 * 0.0);
    uStack_48 = CONCAT44((float)((ulong)_UNK_03cab4e8 >> 0x20) + 0.0,
                         (float)_UNK_03cab4e8 + fVar10 * 0.0);
    local_40 = CONCAT44((float)((ulong)_DAT_03cab8d0 >> 0x20) + fVar9 * 0.0,
                        (float)_DAT_03cab8d0 + fVar6 * 0.0);
    uStack_38 = CONCAT44((float)((ulong)_UNK_03cab8d8 >> 0x20) + 0.0,
                         (float)_UNK_03cab8d8 + fVar10 * 0.0);
    local_60 = CONCAT44((float)((ulong)_DAT_03caabc0 >> 0x20) + fVar9 * 0.0,
                        (float)_DAT_03caabc0 + fVar6 * 0.0);
    uStack_58 = CONCAT44((float)((ulong)_UNK_03caabc8 >> 0x20) + 0.0,
                         (float)_UNK_03caabc8 + fVar10 * 0.0);
    auVar8._0_8_ = CONCAT44(fVar9 + 0.0,fVar6 + 0.0);
    auVar8._8_4_ = fVar10 + 0.0;
    auVar8._12_4_ = 0x3f800000;
    local_f0 = 0x3f000000;
    uStack_d8 = _UNK_03cabe58;
    local_e0 = _DAT_03cabe50;
    uStack_98 = _UNK_03caa5b8;
    local_a0 = _DAT_03caa5b0;
    uStack_88 = _UNK_03cabe58;
    uStack_90 = _DAT_03cabe50;
    uStack_28 = auVar8._8_8_;
    uStack_30 = auVar8._0_8_;
    FUN_011c1de4(&local_80,&local_100);
  }
  return;
}


