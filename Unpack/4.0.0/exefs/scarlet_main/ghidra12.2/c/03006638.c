/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03006638; name: FUN_03006638
 */


void FUN_03006638(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [16];
  ushort uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  char cVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar17;
  float fVar19;
  undefined1 auVar15 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar16 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ushort local_98 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined1 (*local_70) [16];
  ushort local_68;
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar5 = param_2[1];
    lVar8 = 0;
    if (*param_1 != 0) {
      lVar8 = *param_1 + (long)param_1;
    }
    pauVar7 = (undefined1 (*) [16])(lVar8 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    auVar15._0_12_ = SUB1612(pauVar7[1],0);
    auVar15._12_4_ = 0;
    auVar25 = *(undefined1 (*) [16])(param_3 + 2);
    auVar23 = NEON_fmax(*pauVar7,auVar25,4);
    auVar15 = NEON_fmin(auVar15,auVar23,4);
    fVar13 = auVar25._0_4_ - auVar15._0_4_;
    fVar17 = auVar25._4_4_ - auVar15._4_4_;
    fVar19 = auVar25._8_4_ - auVar15._8_4_;
    fVar21 = auVar25._12_4_ - auVar15._12_4_;
    auVar25._0_4_ = fVar13 * fVar13;
    auVar25._4_4_ = fVar17 * fVar17;
    auVar25._8_4_ = fVar19 * fVar19;
    auVar25._12_4_ = fVar21 * fVar21;
    auVar15 = NEON_ext(auVar25,auVar25,8,1);
    if (auVar25._0_4_ + auVar25._4_4_ + auVar15._0_4_ <= (float)param_3[4]) {
LAB_030066e8:
      while( true ) {
        uVar3 = *(ushort *)(pauVar7[1] + 0xc);
        if ((ulong)uVar3 == 0) break;
        local_98[0] = uVar3;
        lVar8 = 0;
        if (*param_1 != 0) {
          lVar8 = *param_1 + (long)param_1;
        }
        pauVar2 = (undefined1 (*) [16])(lVar8 + (ulong)uVar3 * 0x20);
        auVar11._0_12_ = SUB1612(pauVar2[1],0);
        auVar11._12_4_ = 0;
        local_68 = *(ushort *)(pauVar7[1] + 0xe);
        local_70 = (undefined1 (*) [16])(lVar8 + (ulong)*(ushort *)(pauVar7[1] + 0xe) * 0x20);
        auVar25 = local_70[1];
        auVar24._0_12_ = auVar25._0_12_;
        auVar24._12_4_ = 0;
        uStack_78 = (ulong)auVar25._8_4_;
        local_80 = auVar25._0_8_;
        auVar25 = *local_70;
        uStack_88 = auVar25._8_8_;
        local_90 = auVar25._0_8_;
        pauVar1 = (undefined1 (*) [12])(param_3 + 2);
        fVar20 = (float)param_3[3];
        fVar22 = (float)((ulong)param_3[3] >> 0x20);
        fVar14 = (float)*(undefined8 *)*pauVar1;
        fVar18 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        auVar23._12_4_ = fVar22;
        auVar23._0_12_ = *pauVar1;
        auVar15 = NEON_fmax(*pauVar2,auVar23,4);
        auVar15 = NEON_fmin(auVar11,auVar15,4);
        auVar4._12_4_ = fVar22;
        auVar4._0_12_ = *pauVar1;
        auVar25 = NEON_fmax(auVar25,auVar4,4);
        fVar13 = fVar14 - auVar15._0_4_;
        fVar17 = fVar18 - auVar15._4_4_;
        fVar19 = fVar20 - auVar15._8_4_;
        fVar21 = fVar22 - auVar15._12_4_;
        auVar15 = NEON_fmin(auVar24,auVar25,4);
        auVar12._0_4_ = fVar13 * fVar13;
        auVar12._4_4_ = fVar17 * fVar17;
        auVar12._8_4_ = fVar19 * fVar19;
        auVar12._12_4_ = fVar21 * fVar21;
        auVar25 = NEON_ext(auVar12,auVar12,8,1);
        fVar13 = auVar12._0_4_ + auVar12._4_4_ + auVar25._0_4_;
        fVar14 = fVar14 - auVar15._0_4_;
        fVar18 = fVar18 - auVar15._4_4_;
        fVar20 = fVar20 - auVar15._8_4_;
        fVar22 = fVar22 - auVar15._12_4_;
        auVar16._0_4_ = fVar14 * fVar14;
        auVar16._4_4_ = fVar18 * fVar18;
        auVar16._8_4_ = fVar20 * fVar20;
        auVar16._12_4_ = fVar22 * fVar22;
        auVar25 = NEON_ext(auVar16,auVar16,8,1);
        fVar17 = auVar16._0_4_ + auVar16._4_4_ + auVar25._0_4_;
        cVar9 = '\0';
        if (!(bool)(~(fVar17 <= (float)param_3[4]) & 1)) {
          cVar9 = '\x02';
        }
        cVar9 = cVar9 + (fVar13 <= (float)param_3[4]);
        if (cVar9 == '\x01') {
          pauVar7 = pauVar2;
        }
        else {
          pauVar7 = local_70;
          if (cVar9 != '\x02') {
            if (cVar9 != '\x03') goto LAB_03006844;
            uVar10 = -(uint)(fVar17 < fVar13);
            *(uint *)(param_3 + 5) = uVar10 & 1;
            iVar6 = (int)param_2[1];
            lVar8 = (long)iVar6;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar6) {
              FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar8 + 1);
              iVar6 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = (int)(lVar8 + 1);
            *(ushort *)(*param_2 + (long)iVar6 * 2) = local_98[((ulong)~uVar10 & 1) * 0x18];
            pauVar7 = *(undefined1 (**) [16])(local_98 + ((ulong)uVar10 & 1) * 0x18 + -4);
          }
        }
      }
      FUN_02e91360(*param_3,*(undefined2 *)(pauVar7[1] + 0xe),param_3 + 4);
LAB_03006844:
      if ((int)lVar5 < (int)param_2[1]) {
        iVar6 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar6;
        lVar8 = 0;
        if (*param_1 != 0) {
          lVar8 = *param_1 + (long)param_1;
        }
        pauVar7 = (undefined1 (*) [16])
                  (lVar8 + (ulong)*(ushort *)(*param_2 + (long)iVar6 * 2) * 0x20);
        goto LAB_030066e8;
      }
    }
  }
  return;
}


