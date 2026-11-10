/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e91860; name: FUN_02e91860
 */


void FUN_02e91860(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [12];
  float *pfVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  int iVar8;
  float *pfVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar22;
  float fVar24;
  float fVar26;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar25;
  float fVar27;
  undefined1 auVar21 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar7 = param_2[1];
    lVar10 = 0;
    if (*param_1 != 0) {
      lVar10 = *param_1 + (long)param_1;
    }
    pfVar9 = (float *)(lVar10 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    fVar26 = (float)((ulong)param_3[7] >> 0x20);
    uVar4 = *(undefined8 *)*(undefined1 (*) [12])(param_3 + 6);
    auVar29 = *(undefined1 (*) [16])(param_3 + 8);
    auVar28._0_4_ = *pfVar9 - auVar29._0_4_;
    auVar28._4_4_ = pfVar9[1] - auVar29._4_4_;
    auVar28._8_4_ = pfVar9[2] - auVar29._8_4_;
    auVar28._12_4_ = pfVar9[3] - auVar29._12_4_;
    auVar20._0_4_ = pfVar9[4] + auVar29._0_4_;
    auVar20._4_4_ = pfVar9[5] + auVar29._4_4_;
    auVar20._8_4_ = pfVar9[6] + auVar29._8_4_;
    auVar20._12_4_ = auVar29._12_4_ + 0.0;
    auVar29._12_4_ = fVar26;
    auVar29._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
    auVar29 = NEON_fmax(auVar28,auVar29,4);
    auVar29 = NEON_fmin(auVar20,auVar29,4);
    fVar15 = (float)uVar4 - auVar29._0_4_;
    fVar22 = (float)((ulong)uVar4 >> 0x20) - auVar29._4_4_;
    fVar24 = (float)param_3[7] - auVar29._8_4_;
    fVar26 = fVar26 - auVar29._12_4_;
    auVar17._0_4_ = fVar15 * fVar15;
    auVar17._4_4_ = fVar22 * fVar22;
    auVar17._8_4_ = fVar24 * fVar24;
    auVar17._12_4_ = fVar26 * fVar26;
    auVar29 = NEON_ext(auVar17,auVar17,8,1);
    if (auVar17._0_4_ + auVar17._4_4_ + auVar29._0_4_ <= (float)param_3[10]) {
LAB_02e91918:
      while( true ) {
        uVar3 = *(ushort *)(pfVar9 + 7);
        if ((ulong)uVar3 == 0) break;
        local_98[0] = uVar3;
        lVar10 = 0;
        if (*param_1 != 0) {
          lVar10 = *param_1 + (long)param_1;
        }
        pfVar2 = (float *)(lVar10 + (ulong)uVar3 * 0x20);
        local_68 = *(ushort *)((long)pfVar9 + 0x1e);
        local_70 = (float *)(lVar10 + (ulong)*(ushort *)((long)pfVar9 + 0x1e) * 0x20);
        uStack_78 = (ulong)(uint)local_70[6];
        local_80 = local_70[4];
        fStack_7c = local_70[5];
        fStack_88 = local_70[2];
        fStack_84 = local_70[3];
        local_90 = *local_70;
        fStack_8c = local_70[1];
        pauVar1 = (undefined1 (*) [12])(param_3 + 6);
        fVar25 = (float)param_3[7];
        fVar27 = (float)((ulong)param_3[7] >> 0x20);
        fVar16 = (float)*(undefined8 *)*pauVar1;
        fVar23 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        fVar24 = (float)param_3[9];
        fVar26 = (float)((ulong)param_3[9] >> 0x20);
        fVar15 = (float)param_3[8];
        fVar22 = (float)((ulong)param_3[8] >> 0x20);
        auVar18._0_4_ = *pfVar2 - fVar15;
        auVar18._4_4_ = pfVar2[1] - fVar22;
        auVar18._8_4_ = pfVar2[2] - fVar24;
        auVar18._12_4_ = pfVar2[3] - fVar26;
        auVar13._0_4_ = pfVar2[4] + fVar15;
        auVar13._4_4_ = pfVar2[5] + fVar22;
        auVar13._8_4_ = pfVar2[6] + fVar24;
        auVar13._12_4_ = fVar26 + 0.0;
        auVar30._0_4_ = local_70[4] + fVar15;
        auVar30._4_4_ = local_70[5] + fVar22;
        auVar30._8_4_ = local_70[6] + fVar24;
        auVar30._12_4_ = fVar26 + 0.0;
        auVar5._12_4_ = fVar27;
        auVar5._0_12_ = *pauVar1;
        auVar29 = NEON_fmax(auVar18,auVar5,4);
        auVar29 = NEON_fmin(auVar13,auVar29,4);
        auVar19._0_4_ = *local_70 - fVar15;
        auVar19._4_4_ = local_70[1] - fVar22;
        auVar19._8_4_ = local_70[2] - fVar24;
        auVar19._12_4_ = local_70[3] - fVar26;
        auVar6._12_4_ = fVar27;
        auVar6._0_12_ = *pauVar1;
        auVar20 = NEON_fmax(auVar19,auVar6,4);
        fVar15 = fVar16 - auVar29._0_4_;
        fVar22 = fVar23 - auVar29._4_4_;
        fVar24 = fVar25 - auVar29._8_4_;
        fVar26 = fVar27 - auVar29._12_4_;
        auVar29 = NEON_fmin(auVar30,auVar20,4);
        auVar14._0_4_ = fVar15 * fVar15;
        auVar14._4_4_ = fVar22 * fVar22;
        auVar14._8_4_ = fVar24 * fVar24;
        auVar14._12_4_ = fVar26 * fVar26;
        auVar20 = NEON_ext(auVar14,auVar14,8,1);
        fVar16 = fVar16 - auVar29._0_4_;
        fVar23 = fVar23 - auVar29._4_4_;
        fVar25 = fVar25 - auVar29._8_4_;
        fVar27 = fVar27 - auVar29._12_4_;
        auVar21._0_4_ = fVar16 * fVar16;
        auVar21._4_4_ = fVar23 * fVar23;
        auVar21._8_4_ = fVar25 * fVar25;
        auVar21._12_4_ = fVar27 * fVar27;
        auVar29 = NEON_ext(auVar21,auVar21,8,1);
        fVar15 = auVar14._0_4_ + auVar14._4_4_ + auVar20._0_4_;
        fVar22 = auVar21._0_4_ + auVar21._4_4_ + auVar29._0_4_;
        cVar11 = '\0';
        if (!(bool)(~(fVar22 <= (float)param_3[10]) & 1)) {
          cVar11 = '\x02';
        }
        cVar11 = cVar11 + (fVar15 <= (float)param_3[10]);
        if (cVar11 == '\x01') {
          pfVar9 = pfVar2;
        }
        else {
          pfVar9 = local_70;
          if (cVar11 != '\x02') {
            if (cVar11 != '\x03') goto LAB_02e91a84;
            uVar12 = -(uint)(fVar22 < fVar15);
            *(uint *)(param_3 + 0xb) = uVar12 & 1;
            iVar8 = (int)param_2[1];
            lVar10 = (long)iVar8;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar8) {
              FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar10 + 1);
              iVar8 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = (int)(lVar10 + 1);
            *(ushort *)(*param_2 + (long)iVar8 * 2) = local_98[((ulong)~uVar12 & 1) * 0x18];
            pfVar9 = *(float **)(local_98 + ((ulong)uVar12 & 1) * 0x18 + -4);
          }
        }
      }
      FUN_02e91360(*param_3,*(undefined2 *)((long)pfVar9 + 0x1e),param_3 + 10);
LAB_02e91a84:
      if ((int)lVar7 < (int)param_2[1]) {
        iVar8 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar8;
        lVar10 = 0;
        if (*param_1 != 0) {
          lVar10 = *param_1 + (long)param_1;
        }
        pfVar9 = (float *)(lVar10 + (ulong)*(ushort *)(*param_2 + (long)iVar8 * 2) * 0x20);
        goto LAB_02e91918;
      }
    }
  }
  return;
}


