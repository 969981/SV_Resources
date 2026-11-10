/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01102768; name: FUN_01102768
 */


void FUN_01102768(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  
  if (((*PTR_DAT_047d8a48 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a48);
  }
  lVar5 = *(long *)PTR_DAT_047d8a50;
  *(long *)PTR_DAT_047d8a58 = lVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  if (*(char *)(param_3 + 0xf4) != '\0') {
    fVar7 = *(float *)(param_3 + 0xc0);
    fVar8 = *(float *)(param_3 + 0xc4);
    fVar9 = *(float *)(param_3 + 200);
    pauVar2 = (undefined1 (*) [12])(param_3 + 0xd0);
    fVar13 = (float)*(undefined8 *)(param_3 + 0xd8);
    fVar14 = (float)((ulong)*(undefined8 *)(param_3 + 0xd8) >> 0x20);
    fVar10 = (float)*(undefined8 *)*pauVar2;
    fVar17 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    auVar20._12_4_ = fVar14;
    auVar20._0_12_ = *pauVar2;
    auVar3._12_4_ = fVar14;
    auVar3._0_12_ = *pauVar2;
    auVar20 = NEON_ext(auVar20,auVar3,0xc,1);
    uVar6 = SUB124(*pauVar2,0);
    auVar21._4_12_ = auVar20._4_12_;
    auVar21._0_4_ = uVar6;
    auVar23._12_4_ = auVar20._12_4_;
    auVar23._0_8_ = auVar21._0_8_;
    auVar23._8_4_ = SUB124(*pauVar2,4);
    auVar22._8_8_ = auVar23._8_8_;
    auVar22._4_4_ = auVar20._0_4_;
    auVar22._0_4_ = uVar6;
    auVar24._0_12_ = auVar22._0_12_;
    auVar24._12_4_ = auVar20._4_4_;
    auVar20 = NEON_ext(auVar24,auVar24,8,1);
    fVar7 = (float)((uint)fVar7 ^ ((uint)fVar7 ^ 0x2b8cbccc) & -(uint)(ABS(fVar7) < 1e-12));
    fVar18 = fVar17 * fVar17 + fVar17 * fVar17;
    fVar19 = fVar13 * fVar13 + fVar13 * fVar13;
    fVar11 = fVar10 * fVar14 + fVar10 * fVar14;
    fVar12 = fVar17 * fVar14 + fVar17 * fVar14;
    fVar13 = fVar13 * fVar14 + fVar13 * fVar14;
    fVar15 = auVar20._0_4_ * SUB124(*pauVar2,8);
    fVar16 = auVar20._4_4_ * SUB124(*pauVar2,8);
    fVar17 = auVar20._8_4_ * fVar17;
    auVar20 = NEON_fmov(0x3f800000,4);
    auVar25._0_4_ = auVar20._0_4_ - (fVar10 * fVar10 + fVar10 * fVar10);
    auVar25._4_4_ = auVar20._4_4_ - fVar18;
    auVar25._8_4_ = auVar20._8_4_ - fVar19;
    auVar25._12_4_ = auVar20._12_4_ - (fVar14 * fVar14 + fVar14 * fVar14);
    auVar26._4_12_ = auVar25._4_12_;
    auVar26._0_4_ = auVar25._0_4_;
    auVar28._0_8_ = auVar26._0_8_;
    auVar28._8_4_ = auVar25._4_4_;
    auVar28._12_4_ = auVar25._12_4_;
    auVar27._8_8_ = auVar28._8_8_;
    auVar27._4_4_ = auVar25._0_4_;
    auVar27._0_4_ = auVar25._0_4_;
    auVar29._0_12_ = auVar27._0_12_;
    auVar29._12_4_ = auVar25._4_4_;
    auVar20 = NEON_ext(auVar29,auVar29,0xc,1);
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    fVar17 = fVar17 + fVar17;
    fVar8 = (float)((uint)fVar8 ^ ((uint)fVar8 ^ 0x2b8cbccc) & -(uint)(ABS(fVar8) < 1e-12));
    fVar9 = (float)((uint)fVar9 ^ ((uint)fVar9 ^ 0x2b8cbccc) & -(uint)(ABS(fVar9) < 1e-12));
    *(ulong *)(param_3 + 0x88) = CONCAT44(fVar7 * 0.0,(fVar16 - fVar12) * fVar7);
    *(undefined8 *)(param_3 + 0x80) =
         CONCAT44((fVar17 + fVar13) * fVar7,(auVar20._0_4_ - fVar19) * fVar7);
    *(ulong *)(param_3 + 0x98) = CONCAT44(fVar8 * 0.0,(fVar15 + fVar11) * fVar8);
    *(ulong *)(param_3 + 0x90) =
         CONCAT44((auVar20._4_4_ - fVar19) * fVar8,(fVar17 - fVar13) * fVar8);
    *(float *)(param_3 + 0xa8) = (auVar20._8_4_ - fVar18) * fVar9;
    *(float *)(param_3 + 0xac) = fVar9 * 0.0;
    *(float *)(param_3 + 0xa0) = (fVar16 + fVar12) * fVar9;
    *(float *)(param_3 + 0xa4) = (fVar15 - fVar11) * fVar9;
    *(ulong *)(param_3 + 0xb8) = CONCAT44(0x3f800000,(int)*(undefined8 *)(param_3 + 0xe8));
    *(undefined8 *)(param_3 + 0xb0) = *(undefined8 *)(param_3 + 0xe0);
    memcpy((void *)(param_3 + 0x40),(undefined8 *)(param_3 + 0x80),0x40);
    *(undefined1 *)(param_3 + 0xf4) = 0;
    *(int *)(param_3 + 0xf0) = *(int *)(param_3 + 0xf0) + 1;
  }
  FUN_0110294c(*(undefined1 (*) [16])(param_3 + 0x40),(int)*(undefined8 *)(param_3 + 0x50),
               (int)*(undefined8 *)(param_3 + 0x60),(int)*(undefined8 *)(param_3 + 0x70),
               *(undefined8 *)(lVar5 + 0x30),uVar1,*(undefined8 *)(param_2 + 8),0,param_3 + 0xf8);
  return;
}


