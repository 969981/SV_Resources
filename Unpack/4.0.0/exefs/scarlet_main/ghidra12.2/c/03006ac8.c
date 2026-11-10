/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03006ac8; name: FUN_03006ac8
 */


void FUN_03006ac8(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [16];
  ushort uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  uint uVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ushort local_98 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined1 (*local_70) [16];
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
      pauVar9 = (undefined1 (*) [16])(lVar8 + uVar7 * 0x20);
      auVar30 = *(undefined1 (*) [16])(param_3 + 2);
      auVar17 = NEON_fmax(*pauVar9,auVar30,4);
      auVar24._0_12_ = SUB1612(pauVar9[1],0);
      auVar24._12_4_ = 0;
      auVar17 = NEON_fmin(auVar24,auVar17,4);
      fVar15 = auVar30._0_4_ - auVar17._0_4_;
      fVar20 = auVar30._4_4_ - auVar17._4_4_;
      fVar21 = auVar30._8_4_ - auVar17._8_4_;
      fVar22 = auVar30._12_4_ - auVar17._12_4_;
      auVar30._0_4_ = fVar15 * fVar15;
      auVar30._4_4_ = fVar20 * fVar20;
      auVar30._8_4_ = fVar21 * fVar21;
      auVar30._12_4_ = fVar22 * fVar22;
      auVar17 = NEON_ext(auVar30,auVar30,8,1);
      if (auVar30._0_4_ + auVar30._4_4_ + auVar17._0_4_ <= (float)param_3[4]) {
LAB_03006ba4:
        while( true ) {
          uVar3 = *(ushort *)(pauVar9[1] + 0xc);
          uVar11 = (ulong)uVar3;
          if (uVar11 == 0) break;
          local_98[0] = uVar3;
          lVar8 = 0;
          if (*param_1 != 0) {
            lVar8 = *param_1 + (long)param_1;
          }
          pauVar2 = (undefined1 (*) [16])(lVar8 + uVar11 * 0x20);
          auVar18._0_12_ = SUB1612(pauVar2[1],0);
          auVar18._12_4_ = 0;
          local_68 = *(ushort *)(pauVar9[1] + 0xe);
          local_70 = (undefined1 (*) [16])(lVar8 + (ulong)local_68 * 0x20);
          auVar30 = local_70[1];
          auVar29._0_12_ = auVar30._0_12_;
          auVar29._12_4_ = 0;
          uStack_78 = (ulong)auVar30._8_4_;
          local_80 = auVar30._0_8_;
          auVar30 = *local_70;
          uStack_88 = auVar30._8_8_;
          local_90 = auVar30._0_8_;
          pauVar1 = (undefined1 (*) [12])(param_3 + 2);
          fVar27 = (float)param_3[3];
          fVar28 = (float)((ulong)param_3[3] >> 0x20);
          fVar23 = (float)*(undefined8 *)*pauVar1;
          fVar26 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
          auVar17._12_4_ = fVar28;
          auVar17._0_12_ = *pauVar1;
          auVar17 = NEON_fmax(*pauVar2,auVar17,4);
          auVar17 = NEON_fmin(auVar18,auVar17,4);
          auVar4._12_4_ = fVar28;
          auVar4._0_12_ = *pauVar1;
          auVar30 = NEON_fmax(auVar30,auVar4,4);
          fVar15 = fVar23 - auVar17._0_4_;
          fVar20 = fVar26 - auVar17._4_4_;
          fVar21 = fVar27 - auVar17._8_4_;
          fVar22 = fVar28 - auVar17._12_4_;
          auVar17 = NEON_fmin(auVar29,auVar30,4);
          auVar19._0_4_ = fVar15 * fVar15;
          auVar19._4_4_ = fVar20 * fVar20;
          auVar19._8_4_ = fVar21 * fVar21;
          auVar19._12_4_ = fVar22 * fVar22;
          auVar30 = NEON_ext(auVar19,auVar19,8,1);
          fVar15 = auVar19._0_4_ + auVar19._4_4_ + auVar30._0_4_;
          fVar23 = fVar23 - auVar17._0_4_;
          fVar26 = fVar26 - auVar17._4_4_;
          fVar27 = fVar27 - auVar17._8_4_;
          fVar28 = fVar28 - auVar17._12_4_;
          auVar25._0_4_ = fVar23 * fVar23;
          auVar25._4_4_ = fVar26 * fVar26;
          auVar25._8_4_ = fVar27 * fVar27;
          auVar25._12_4_ = fVar28 * fVar28;
          auVar30 = NEON_ext(auVar25,auVar25,8,1);
          fVar20 = auVar25._0_4_ + auVar25._4_4_ + auVar30._0_4_;
          if ((bool)(~(fVar15 <= (float)param_3[4]) & 1)) {
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
          if ((bool)(~(fVar20 <= (float)param_3[4]) & 1)) {
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
            pauVar9 = pauVar2;
          }
          else {
            uVar7 = (ulong)local_68;
            pauVar9 = local_70;
            if (uVar13 != 2) {
              if (uVar13 != 3) goto LAB_03006d98;
              uVar16 = -(uint)(fVar20 < fVar15);
              *(uint *)(param_3 + 5) = uVar16 & 1;
              iVar6 = (int)param_2[1];
              lVar8 = (long)iVar6;
              if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar6) {
                FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar8 + 1);
                iVar6 = (int)param_2[1];
              }
              *(int *)(param_2 + 1) = (int)(lVar8 + 1);
              *(ushort *)(*param_2 + (long)iVar6 * 2) = local_98[((ulong)~uVar16 & 1) * 0x18];
              uVar7 = (ulong)local_98[((ulong)uVar16 & 1) * 0x18];
              pauVar9 = *(undefined1 (**) [16])(local_98 + ((ulong)uVar16 & 1) * 0x18 + -4);
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
          FUN_02e92238(*param_3,*(undefined2 *)(pauVar9[1] + 0xe),param_3 + 4);
        }
LAB_03006d98:
        if ((int)lVar5 < (int)param_2[1]) {
          iVar6 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar6;
          uVar7 = (ulong)*(ushort *)(*param_2 + (long)iVar6 * 2);
          lVar8 = 0;
          if (*param_1 != 0) {
            lVar8 = *param_1 + (long)param_1;
          }
          pauVar9 = (undefined1 (*) [16])(lVar8 + uVar7 * 0x20);
          goto LAB_03006ba4;
        }
      }
    }
  }
  return;
}


