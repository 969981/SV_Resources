/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e8cb74; name: FUN_02e8cb74
 */


void FUN_02e8cb74(long *param_1,long *param_2,long *param_3)

{
  float *pfVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  int iVar8;
  float *pfVar9;
  long lVar10;
  char cVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar23;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  ushort local_a8 [4];
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  float fStack_8c;
  ulong uStack_88;
  float *local_80;
  ushort local_78;
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar7 = 0;
    if (*param_1 != 0) {
      lVar7 = *param_1 + (long)param_1;
    }
    pfVar9 = (float *)(lVar7 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    fVar20 = (float)param_3[6];
    auVar31._0_4_ = ((*pfVar9 - *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) * fVar20;
    fVar23 = (float)((ulong)param_3[6] >> 0x20);
    auVar31._4_4_ =
         ((pfVar9[1] - *(float *)((long)param_3 + 0x44)) - *(float *)((long)param_3 + 0x14)) *
         fVar23;
    fVar24 = (float)param_3[7];
    auVar31._8_4_ = ((pfVar9[2] - *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) * fVar24;
    fVar25 = (float)((ulong)param_3[7] >> 0x20);
    auVar31._12_4_ =
         ((pfVar9[3] - *(float *)((long)param_3 + 0x4c)) - *(float *)((long)param_3 + 0x1c)) *
         fVar25;
    auVar13._0_4_ = fVar20 * ((pfVar9[4] + *(float *)(param_3 + 8)) - *(float *)(param_3 + 2));
    auVar13._4_4_ =
         fVar23 * ((pfVar9[5] + *(float *)((long)param_3 + 0x44)) - *(float *)((long)param_3 + 0x14)
                  );
    auVar13._8_4_ = fVar24 * ((pfVar9[6] + *(float *)(param_3 + 9)) - *(float *)(param_3 + 3));
    auVar13._12_4_ =
         fVar25 * ((*(float *)((long)param_3 + 0x4c) + 0.0) - *(float *)((long)param_3 + 0x1c));
    auVar18 = NEON_fmin(auVar31,auVar13,4);
    auVar13 = NEON_fmax(auVar31,auVar13,4);
    uVar14 = NEON_fmaxp(auVar18._0_8_,auVar18._0_8_,4);
    uVar15 = NEON_fmax(CONCAT44(auVar18._8_4_,auVar18._8_4_),uVar14,4);
    uVar14 = NEON_fminp(auVar13._0_8_,auVar13._0_8_,4);
    uVar14 = NEON_fmin(CONCAT44(auVar13._8_4_,auVar13._8_4_),uVar14,4);
    uVar15 = NEON_fmax(uVar15,0,4);
    uVar14 = NEON_fmin(uVar14,*(undefined8 *)(*(long *)(*param_3 + 0x48) + 0x10),4);
    if (!(bool)(~((float)uVar15 <= (float)uVar14) & 1)) {
      lVar7 = param_2[1];
LAB_02e8cc68:
      while( true ) {
        uVar2 = *(ushort *)(pfVar9 + 7);
        if ((ulong)uVar2 == 0) break;
        local_a8[0] = uVar2;
        lVar10 = 0;
        if (*param_1 != 0) {
          lVar10 = *param_1 + (long)param_1;
        }
        pfVar1 = (float *)(lVar10 + (ulong)uVar2 * 0x20);
        local_78 = *(ushort *)((long)pfVar9 + 0x1e);
        local_80 = (float *)(lVar10 + (ulong)*(ushort *)((long)pfVar9 + 0x1e) * 0x20);
        uStack_88 = (ulong)(uint)local_80[6];
        local_90 = local_80[4];
        fStack_8c = local_80[5];
        uStack_98 = *(undefined8 *)(local_80 + 2);
        local_a0 = *(undefined8 *)local_80;
        fVar20 = *(float *)(param_3 + 8);
        fVar23 = *(float *)((long)param_3 + 0x44);
        fVar24 = *(float *)(param_3 + 9);
        fVar25 = *(float *)((long)param_3 + 0x4c);
        uVar30 = *(undefined8 *)(*(long *)(*param_3 + 0x48) + 0x10);
        fVar3 = *(float *)(param_3 + 2);
        fVar4 = *(float *)((long)param_3 + 0x14);
        fVar5 = *(float *)(param_3 + 3);
        fVar6 = *(float *)((long)param_3 + 0x1c);
        fVar26 = (float)param_3[6];
        auVar16._0_4_ = ((*pfVar1 - fVar20) - fVar3) * fVar26;
        fVar27 = (float)((ulong)param_3[6] >> 0x20);
        auVar16._4_4_ = ((pfVar1[1] - fVar23) - fVar4) * fVar27;
        fVar28 = (float)param_3[7];
        auVar16._8_4_ = ((pfVar1[2] - fVar24) - fVar5) * fVar28;
        fVar29 = (float)((ulong)param_3[7] >> 0x20);
        auVar16._12_4_ = ((pfVar1[3] - fVar25) - fVar6) * fVar29;
        auVar18._0_4_ = fVar26 * ((pfVar1[4] + fVar20) - fVar3);
        auVar18._4_4_ = fVar27 * ((pfVar1[5] + fVar23) - fVar4);
        auVar18._8_4_ = fVar28 * ((pfVar1[6] + fVar24) - fVar5);
        auVar18._12_4_ = fVar29 * ((fVar25 + 0.0) - fVar6);
        auVar31 = NEON_fmin(auVar16,auVar18,4);
        auVar13 = NEON_fmax(auVar16,auVar18,4);
        uVar14 = NEON_fmaxp(auVar31._0_8_,auVar31._0_8_,4);
        uVar14 = NEON_fmax(CONCAT44(auVar31._8_4_,auVar31._8_4_),uVar14,4);
        uVar15 = NEON_fminp(auVar13._0_8_,auVar13._0_8_,4);
        uVar15 = NEON_fmin(CONCAT44(auVar13._8_4_,auVar13._8_4_),uVar15,4);
        uVar14 = NEON_fmax(uVar14,0,4);
        auVar17._0_4_ = (((float)local_a0 - fVar20) - fVar3) * fVar26;
        auVar17._4_4_ = (((float)((ulong)local_a0 >> 0x20) - fVar23) - fVar4) * fVar27;
        auVar17._8_4_ = (((float)uStack_98 - fVar24) - fVar5) * fVar28;
        auVar17._12_4_ = (((float)((ulong)uStack_98 >> 0x20) - fVar25) - fVar6) * fVar29;
        uVar21 = NEON_fmin(uVar15,uVar30,4);
        auVar19._0_4_ = fVar26 * ((local_80[4] + fVar20) - fVar3);
        auVar19._4_4_ = fVar27 * ((local_80[5] + fVar23) - fVar4);
        auVar19._8_4_ = fVar28 * ((local_80[6] + fVar24) - fVar5);
        auVar19._12_4_ = fVar29 * ((fVar25 + 0.0) - fVar6);
        auVar31 = NEON_fmin(auVar17,auVar19,4);
        auVar13 = NEON_fmax(auVar17,auVar19,4);
        uVar15 = NEON_fmaxp(auVar31._0_8_,auVar31._0_8_,4);
        uVar15 = NEON_fmax(CONCAT44(auVar31._8_4_,auVar31._8_4_),uVar15,4);
        uVar22 = NEON_fminp(auVar13._0_8_,auVar13._0_8_,4);
        uVar22 = NEON_fmin(CONCAT44(auVar13._8_4_,auVar13._8_4_),uVar22,4);
        uVar15 = NEON_fmax(uVar15,0,4);
        uVar22 = NEON_fmin(uVar22,uVar30,4);
        cVar11 = '\0';
        if (!(bool)(~((float)uVar15 <= (float)uVar22) & 1)) {
          cVar11 = '\x02';
        }
        cVar11 = cVar11 + ((float)uVar14 <= (float)uVar21);
        if (cVar11 == '\x01') {
          pfVar9 = pfVar1;
        }
        else {
          pfVar9 = local_80;
          if (cVar11 != '\x02') {
            if (cVar11 != '\x03') goto LAB_02e8ce10;
            uVar12 = -(uint)((float)uVar15 < (float)uVar14);
            *(uint *)(param_3 + 10) = uVar12 & 1;
            iVar8 = (int)param_2[1];
            lVar10 = (long)iVar8;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) <= iVar8) {
              FUN_02e8bb18(param_2,PTR_PTR_047d1a50,lVar10 + 1);
              iVar8 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = (int)(lVar10 + 1);
            *(ushort *)(*param_2 + (long)iVar8 * 2) = local_a8[((ulong)~uVar12 & 1) * 0x18];
            pfVar9 = *(float **)(local_a8 + ((ulong)uVar12 & 1) * 0x18 + -4);
          }
        }
      }
      FUN_02e8c538(*param_3,*(undefined2 *)((long)pfVar9 + 0x1e));
LAB_02e8ce10:
      if ((int)lVar7 < (int)param_2[1]) {
        iVar8 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar8;
        lVar10 = 0;
        if (*param_1 != 0) {
          lVar10 = *param_1 + (long)param_1;
        }
        pfVar9 = (float *)(lVar10 + (ulong)*(ushort *)(*param_2 + (long)iVar8 * 2) * 0x20);
        goto LAB_02e8cc68;
      }
    }
  }
  return;
}


