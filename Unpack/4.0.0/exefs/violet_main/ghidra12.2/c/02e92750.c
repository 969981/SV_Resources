/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e92750; name: FUN_02e92750
 */


void FUN_02e92750(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  uint uVar16;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar24;
  float fVar30;
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  ushort local_98 [4];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  ulong uStack_78;
  float *local_70;
  ushort local_68;
  
  uVar3 = *(ushort *)((long)param_1 + 0x1c);
  uVar7 = (ulong)uVar3;
  if (uVar7 != 0) {
    lVar5 = param_2[1];
    lVar8 = 0;
    if (*param_1 != 0) {
      lVar8 = *param_1 + (long)param_1;
    }
    plVar10 = (long *)(*(long *)(*param_3 + 8) + 0x38);
    lVar12 = *plVar10;
    lVar14 = 0;
    if (lVar12 != 0) {
      lVar14 = lVar12 + (long)plVar10;
    }
    if ((*(uint *)(lVar14 + ((ulong)(uVar3 >> 3) & 0x1ffc)) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
      pfVar9 = (float *)(lVar8 + uVar7 * 0x20);
      auVar26 = *(undefined1 (*) [16])(param_3 + 6);
      auVar18 = *(undefined1 (*) [16])(param_3 + 8);
      auVar17._0_4_ = *pfVar9 - auVar18._0_4_;
      auVar17._4_4_ = pfVar9[1] - auVar18._4_4_;
      auVar17._8_4_ = pfVar9[2] - auVar18._8_4_;
      auVar17._12_4_ = pfVar9[3] - auVar18._12_4_;
      auVar17 = NEON_fmax(auVar17,auVar26,4);
      auVar25._0_4_ = auVar18._0_4_ + pfVar9[4];
      auVar25._4_4_ = auVar18._4_4_ + pfVar9[5];
      auVar25._8_4_ = auVar18._8_4_ + pfVar9[6];
      auVar25._12_4_ = auVar18._12_4_ + 0.0;
      auVar18 = NEON_fmin(auVar25,auVar17,4);
      fVar15 = auVar26._0_4_ - auVar18._0_4_;
      fVar21 = auVar26._4_4_ - auVar18._4_4_;
      fVar22 = auVar26._8_4_ - auVar18._8_4_;
      fVar23 = auVar26._12_4_ - auVar18._12_4_;
      auVar18._0_4_ = fVar15 * fVar15;
      auVar18._4_4_ = fVar21 * fVar21;
      auVar18._8_4_ = fVar22 * fVar22;
      auVar18._12_4_ = fVar23 * fVar23;
      auVar26 = NEON_ext(auVar18,auVar18,8,1);
      if (auVar18._0_4_ + auVar18._4_4_ + auVar26._0_4_ <= (float)param_3[10]) {
LAB_02e92834:
        while( true ) {
          uVar3 = *(ushort *)(pfVar9 + 7);
          uVar11 = (ulong)uVar3;
          if (uVar11 == 0) break;
          local_98[0] = uVar3;
          lVar8 = 0;
          if (*param_1 != 0) {
            lVar8 = *param_1 + (long)param_1;
          }
          pfVar2 = (float *)(lVar8 + uVar11 * 0x20);
          local_68 = *(ushort *)((long)pfVar9 + 0x1e);
          local_70 = (float *)(lVar8 + (ulong)local_68 * 0x20);
          uStack_78 = (ulong)(uint)local_70[6];
          local_80 = local_70[4];
          fStack_7c = local_70[5];
          fStack_88 = local_70[2];
          fStack_84 = local_70[3];
          local_90 = *local_70;
          fStack_8c = local_70[1];
          pauVar1 = (undefined1 (*) [12])(param_3 + 6);
          fVar31 = (float)param_3[7];
          fVar32 = (float)((ulong)param_3[7] >> 0x20);
          fVar24 = (float)*(undefined8 *)*pauVar1;
          fVar30 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
          fVar15 = (float)param_3[8];
          auVar27._0_4_ = *pfVar2 - fVar15;
          fVar21 = (float)((ulong)param_3[8] >> 0x20);
          auVar27._4_4_ = pfVar2[1] - fVar21;
          fVar22 = (float)param_3[9];
          auVar27._8_4_ = pfVar2[2] - fVar22;
          fVar23 = (float)((ulong)param_3[9] >> 0x20);
          auVar27._12_4_ = pfVar2[3] - fVar23;
          auVar19._0_4_ = pfVar2[4] + fVar15;
          auVar19._4_4_ = pfVar2[5] + fVar21;
          auVar19._8_4_ = pfVar2[6] + fVar22;
          auVar19._12_4_ = fVar23 + 0.0;
          auVar33._0_4_ = local_70[4] + fVar15;
          auVar33._4_4_ = local_70[5] + fVar21;
          auVar33._8_4_ = local_70[6] + fVar22;
          auVar33._12_4_ = fVar23 + 0.0;
          auVar26._12_4_ = fVar32;
          auVar26._0_12_ = *pauVar1;
          auVar18 = NEON_fmax(auVar27,auVar26,4);
          auVar18 = NEON_fmin(auVar19,auVar18,4);
          auVar28._0_4_ = *local_70 - fVar15;
          auVar28._4_4_ = local_70[1] - fVar21;
          auVar28._8_4_ = local_70[2] - fVar22;
          auVar28._12_4_ = local_70[3] - fVar23;
          auVar4._12_4_ = fVar32;
          auVar4._0_12_ = *pauVar1;
          auVar26 = NEON_fmax(auVar28,auVar4,4);
          fVar15 = fVar24 - auVar18._0_4_;
          fVar21 = fVar30 - auVar18._4_4_;
          fVar22 = fVar31 - auVar18._8_4_;
          fVar23 = fVar32 - auVar18._12_4_;
          auVar18 = NEON_fmin(auVar33,auVar26,4);
          auVar20._0_4_ = fVar15 * fVar15;
          auVar20._4_4_ = fVar21 * fVar21;
          auVar20._8_4_ = fVar22 * fVar22;
          auVar20._12_4_ = fVar23 * fVar23;
          auVar26 = NEON_ext(auVar20,auVar20,8,1);
          fVar24 = fVar24 - auVar18._0_4_;
          fVar30 = fVar30 - auVar18._4_4_;
          fVar31 = fVar31 - auVar18._8_4_;
          fVar32 = fVar32 - auVar18._12_4_;
          auVar29._0_4_ = fVar24 * fVar24;
          auVar29._4_4_ = fVar30 * fVar30;
          auVar29._8_4_ = fVar31 * fVar31;
          auVar29._12_4_ = fVar32 * fVar32;
          auVar18 = NEON_ext(auVar29,auVar29,8,1);
          fVar15 = auVar20._0_4_ + auVar20._4_4_ + auVar26._0_4_;
          fVar21 = auVar29._0_4_ + auVar29._4_4_ + auVar18._0_4_;
          if ((bool)(~(fVar15 <= (float)param_3[10]) & 1)) {
            uVar16 = 0;
          }
          else {
            plVar10 = (long *)(*(long *)(*param_3 + 8) + 0x38);
            lVar14 = *plVar10;
            lVar8 = 0;
            if (lVar14 != 0) {
              lVar8 = lVar14 + (long)plVar10;
            }
            uVar16 = *(uint *)(lVar8 + ((ulong)(uVar3 >> 3) & 0x1ffc)) >> (ulong)(uVar3 & 0x1f) & 1;
          }
          if ((bool)(~(fVar21 <= (float)param_3[10]) & 1)) {
            uVar13 = 0;
          }
          else {
            plVar10 = (long *)(*(long *)(*param_3 + 8) + 0x38);
            lVar14 = *plVar10;
            lVar8 = 0;
            if (lVar14 != 0) {
              lVar8 = lVar14 + (long)plVar10;
            }
            uVar13 = (*(uint *)(lVar8 + ((ulong)(local_68 >> 3) & 0x1ffc)) >>
                      (ulong)(local_68 & 0x1f) & 1) << 1;
          }
          uVar13 = uVar13 | uVar16;
          if (uVar13 == 1) {
            uVar7 = uVar11;
            pfVar9 = pfVar2;
          }
          else {
            uVar7 = (ulong)local_68;
            pfVar9 = local_70;
            if (uVar13 != 2) {
              if (uVar13 != 3) goto LAB_02e92a38;
              uVar16 = -(uint)(fVar21 < fVar15);
              *(uint *)(param_3 + 0xb) = uVar16 & 1;
              iVar6 = (int)param_2[1];
              lVar8 = (long)iVar6;
              if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar6) {
                FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar8 + 1);
                iVar6 = (int)param_2[1];
              }
              *(int *)(param_2 + 1) = (int)(lVar8 + 1);
              *(ushort *)(*param_2 + (long)iVar6 * 2) = local_98[((ulong)~uVar16 & 1) * 0x18];
              uVar7 = (ulong)local_98[((ulong)uVar16 & 1) * 0x18];
              pfVar9 = *(float **)(local_98 + ((ulong)uVar16 & 1) * 0x18 + -4);
            }
          }
        }
        plVar10 = (long *)(*(long *)(*param_3 + 8) + 0x38);
        lVar14 = *plVar10;
        lVar8 = 0;
        if (lVar14 != 0) {
          lVar8 = lVar14 + (long)plVar10;
        }
        if ((*(uint *)(lVar8 + (uVar7 >> 3 & 0x1ffc)) >> (ulong)((uint)uVar7 & 0x1f) & 1) != 0) {
          FUN_02e92238(*param_3,*(undefined2 *)((long)pfVar9 + 0x1e),param_3 + 10);
        }
LAB_02e92a38:
        if ((int)lVar5 < (int)param_2[1]) {
          iVar6 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar6;
          uVar7 = (ulong)*(ushort *)(*param_2 + (long)iVar6 * 2);
          lVar8 = 0;
          if (*param_1 != 0) {
            lVar8 = *param_1 + (long)param_1;
          }
          pfVar9 = (float *)(lVar8 + uVar7 * 0x20);
          goto LAB_02e92834;
        }
      }
    }
  }
  return;
}


