/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341d17c; name: FUN_0341d17c
 */


undefined8
FUN_0341d17c(undefined8 param_1,long param_2,float *param_3,int *param_4,undefined8 param_5,
            uint param_6)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  puVar11 = PTR_DAT_047e6dd8;
  puVar10 = PTR_DAT_047e6dd0;
  puVar9 = PTR_DAT_047e6dc8;
  puVar8 = PTR_DAT_047e6dc0;
  puVar7 = PTR_DAT_047e6db8;
  if (*(int *)(param_2 + 0x284) < 1) {
    if (0 < *(int *)(param_2 + 0x280)) {
      if ((param_6 & 1) == 0) {
        auVar17 = NEON_fmov(0x3f800000,4);
        lVar15 = 0;
        lVar16 = 0;
        do {
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
            *(long *)(puVar8 + 8) = auVar17._8_8_;
            *(long *)puVar8 = auVar17._0_8_;
            __cxa_guard_release(puVar7);
          }
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            *(undefined8 *)puVar10 = 0;
            *(undefined8 *)(puVar10 + 8) = 0;
            __cxa_guard_release(puVar9);
          }
          puVar1 = (undefined8 *)(param_2 + lVar15);
          fVar30 = (float)*(undefined8 *)(param_3 + 10);
          fVar31 = (float)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
          fVar28 = (float)*(undefined8 *)(param_3 + 8);
          fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
          fVar21 = fVar28 * ((float)*puVar1 - *param_3);
          fVar22 = fVar29 * ((float)((ulong)*puVar1 >> 0x20) - param_3[1]);
          fVar23 = fVar30 * ((float)puVar1[1] - param_3[2]);
          fVar24 = fVar31 * ((float)((ulong)puVar1[1] >> 0x20) - param_3[3]);
          auVar20._0_4_ = (*(float *)(puVar1 + 2) - *param_3) * fVar28;
          auVar20._4_4_ = (*(float *)((long)puVar1 + 0x14) - param_3[1]) * fVar29;
          auVar20._8_4_ = (*(float *)(puVar1 + 3) - param_3[2]) * fVar30;
          auVar20._12_4_ = (*(float *)((long)puVar1 + 0x1c) - param_3[3]) * fVar31;
          auVar19._4_4_ = fVar22;
          auVar19._0_4_ = fVar21;
          auVar19._8_4_ = fVar23;
          auVar19._12_4_ = fVar24;
          auVar27 = NEON_fmin(auVar19,auVar20,4);
          auVar26._4_4_ = fVar22;
          auVar26._0_4_ = fVar21;
          auVar26._8_4_ = fVar23;
          auVar26._12_4_ = fVar24;
          auVar19 = NEON_fmax(auVar20,auVar26,4);
          auVar6._12_4_ = (int)((ulong)*(undefined8 *)(puVar10 + 8) >> 0x20);
          auVar6._0_12_ = *(undefined1 (*) [12])puVar10;
          auVar26 = NEON_fmax(auVar27,auVar6,4);
          auVar27._12_4_ = (int)((ulong)*(undefined8 *)(puVar8 + 8) >> 0x20);
          auVar27._0_12_ = *(undefined1 (*) [12])puVar8;
          auVar19 = NEON_fmin(auVar19,auVar27,4);
          uVar25 = NEON_fminnm(auVar19._4_4_,auVar19._8_4_);
          fVar21 = (float)NEON_fminnm(auVar19._0_4_,uVar25);
          *(float *)puVar11 = fVar21;
          if (auVar26._0_4_ <= fVar21) {
            *param_4 = *param_4 + 1;
            uVar13 = FUN_0341d4ac(param_5,*(undefined8 *)(param_2 + lVar16 * 8 + 0x200));
            if ((uVar13 & 1) == 0) {
              return 0;
            }
          }
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x20;
        } while (lVar16 < *(int *)(param_2 + 0x280));
      }
      else {
        lVar16 = 0;
        do {
          *param_4 = *param_4 + 1;
          uVar13 = FUN_0341d4ac(param_5,*(undefined8 *)(param_2 + 0x200 + lVar16 * 8));
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(param_2 + 0x280));
      }
    }
  }
  else if (0 < *(int *)(param_2 + 0x280)) {
    auVar17 = NEON_fmov(0x3f800000,4);
    lVar15 = 0;
    lVar16 = 0;
    pbVar14 = PTR_DAT_047e6db8;
    do {
      if (((*pbVar14 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(pbVar14), puVar8 = PTR_DAT_047e6dc0,
         puVar7 = PTR_DAT_047e6db8, pbVar14 = PTR_DAT_047e6db8, iVar12 != 0)) {
        *(long *)(PTR_DAT_047e6dc0 + 8) = auVar17._8_8_;
        *(long *)puVar8 = auVar17._0_8_;
        __cxa_guard_release(puVar7);
        pbVar14 = PTR_DAT_047e6db8;
      }
      if (((*puVar9 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(puVar9), pbVar14 = PTR_DAT_047e6db8, iVar12 != 0)) {
        *(undefined8 *)puVar10 = 0;
        *(undefined8 *)(puVar10 + 8) = 0;
        __cxa_guard_release(puVar9);
        pbVar14 = PTR_DAT_047e6db8;
      }
      puVar1 = (undefined8 *)(param_2 + lVar15);
      fVar30 = (float)*(undefined8 *)(param_3 + 10);
      fVar31 = (float)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
      fVar28 = (float)*(undefined8 *)(param_3 + 8);
      fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
      fVar21 = fVar28 * ((float)*puVar1 - *param_3);
      fVar22 = fVar29 * ((float)((ulong)*puVar1 >> 0x20) - param_3[1]);
      fVar23 = fVar30 * ((float)puVar1[1] - param_3[2]);
      fVar24 = fVar31 * ((float)((ulong)puVar1[1] >> 0x20) - param_3[3]);
      auVar18._0_4_ = (*(float *)(puVar1 + 2) - *param_3) * fVar28;
      auVar18._4_4_ = (*(float *)((long)puVar1 + 0x14) - param_3[1]) * fVar29;
      auVar18._8_4_ = (*(float *)(puVar1 + 3) - param_3[2]) * fVar30;
      auVar18._12_4_ = (*(float *)((long)puVar1 + 0x1c) - param_3[3]) * fVar31;
      auVar2._4_4_ = fVar22;
      auVar2._0_4_ = fVar21;
      auVar2._8_4_ = fVar23;
      auVar2._12_4_ = fVar24;
      auVar26 = NEON_fmin(auVar2,auVar18,4);
      auVar3._4_4_ = fVar22;
      auVar3._0_4_ = fVar21;
      auVar3._8_4_ = fVar23;
      auVar3._12_4_ = fVar24;
      auVar19 = NEON_fmax(auVar18,auVar3,4);
      auVar5._12_4_ = (int)((ulong)*(undefined8 *)(puVar10 + 8) >> 0x20);
      auVar5._0_12_ = *(undefined1 (*) [12])puVar10;
      auVar26 = NEON_fmax(auVar26,auVar5,4);
      auVar4._12_4_ = (int)((ulong)*(undefined8 *)(PTR_DAT_047e6dc0 + 8) >> 0x20);
      auVar4._0_12_ = *(undefined1 (*) [12])PTR_DAT_047e6dc0;
      auVar19 = NEON_fmin(auVar19,auVar4,4);
      uVar25 = NEON_fminnm(auVar19._4_4_,auVar19._8_4_);
      fVar21 = (float)NEON_fminnm(auVar19._0_4_,uVar25);
      *(float *)puVar11 = fVar21;
      if ((auVar26._0_4_ <= fVar21) &&
         (uVar13 = FUN_0341d17c(param_1,*(undefined8 *)(param_2 + lVar16 * 8 + 0x200),param_3,
                                param_4,param_5,param_6 & 1), pbVar14 = PTR_DAT_047e6db8,
         (uVar13 & 1) == 0)) {
        return 0;
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x20;
    } while (lVar16 < *(int *)(param_2 + 0x280));
  }
  return 1;
}


