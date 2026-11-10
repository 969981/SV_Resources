/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03070100; name: FUN_03070100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_03070100(float *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined1 (*param_5) [16],long *param_6,float *param_7,long param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  undefined1 auVar24 [16];
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar36;
  ulong uVar33;
  float fVar37;
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  float fVar40;
  float fVar43;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar44;
  ulong uVar45;
  float fVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  ulong uVar50;
  ulong uVar51;
  float fVar52;
  ulong uVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar60;
  undefined8 uVar59;
  ulong local_78;
  ulong local_48;
  
  lVar5 = nn::os::GetSystemTick();
  lVar10 = param_6[1];
  if ((int)lVar10 == 0) {
    *param_7 = 0.5;
    uVar26 = 1;
    goto LAB_03070710;
  }
  fVar22 = *param_1;
  fVar23 = param_1[1];
  fVar25 = param_1[2];
  uVar26 = *param_3;
  fVar14 = *param_2 - fVar22;
  fVar18 = param_2[1] - fVar23;
  fVar19 = param_2[2] - fVar25;
  uVar27 = *param_4;
  fVar20 = fVar14 * fVar14 + fVar18 * fVar18 + fVar19 * fVar19;
  if (fVar20 == 0.0) {
    uVar59 = 0;
    fVar14 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    fVar60 = 0.0;
  }
  else {
    fVar20 = SQRT(fVar20);
    fVar60 = SQRT(fVar14 * fVar14 + fVar18 * fVar18 + fVar19 * fVar19);
    uVar59 = CONCAT44(fVar60,fVar20);
    fVar14 = fVar14 / fVar20;
    fVar18 = fVar18 / fVar60;
    fVar19 = fVar19 / fVar20;
    fVar60 = (param_2[3] - param_1[3]) / fVar60;
  }
  auVar17 = *param_5;
  lVar8 = tpidr_el0;
  lVar7 = *(long *)(lVar8 + 0x1000b8);
  if (lVar7 == 0) {
    lVar7 = FUN_00e5d3b4();
    *(long *)(lVar8 + 0x1000b8) = lVar7;
  }
  uVar1 = (int)lVar10 * 2 + 2;
  lVar10 = *(long *)(*(long *)(lVar7 + 0x3d0) + 0x10);
  if (*(long *)(lVar10 + 8) == 0) {
    uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
    local_78 = uVar11;
    if (lVar10 == 0) goto LAB_03070278;
    local_48 = uVar11 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar10 + 0x28) < local_48) {
LAB_03070208:
      pfVar6 = (float *)FUN_031cf3b4(lVar10,&local_48);
    }
    else {
      pfVar6 = *(float **)(lVar10 + 0x38);
      if (*(ulong *)(lVar10 + 0x40) < local_48 + (long)pfVar6) goto LAB_03070208;
      *(ulong *)(lVar10 + 0x38) = local_48 + (long)pfVar6;
    }
  }
  else {
    local_78 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
LAB_03070278:
    uVar11 = local_78;
    pfVar6 = (float *)(**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    lVar10 = 0;
  }
  puVar4 = PTR_DAT_047d19e0;
  uVar1 = *(uint *)(param_6 + 1);
  if ((int)uVar1 < 1) {
LAB_030705c4:
    *param_7 = 0.0;
LAB_030705c8:
    uVar26 = 1;
  }
  else {
    auVar16 = NEON_ext(auVar17,auVar17,8,1);
    uVar15 = NEON_ext(auVar17._0_8_,auVar16._0_8_,4,1);
    auVar16._4_4_ = fVar18;
    auVar16._0_4_ = fVar14;
    auVar16._8_4_ = fVar19;
    auVar16._12_4_ = fVar60;
    auVar29._4_4_ = fVar18;
    auVar29._0_4_ = fVar14;
    auVar29._8_4_ = fVar19;
    auVar29._12_4_ = fVar60;
    auVar16 = NEON_ext(auVar16,auVar29,4,1);
    auVar24._0_4_ = auVar17._0_4_ * auVar16._0_4_ - fVar14 * (float)uVar15;
    auVar24._4_4_ = auVar17._4_4_ * auVar16._4_4_ - fVar18 * (float)((ulong)uVar15 >> 0x20);
    auVar24._8_4_ = auVar17._8_4_ * fVar14 - fVar19 * auVar17._0_4_;
    auVar24._12_4_ = auVar17._12_4_ * fVar18 - fVar60 * auVar17._4_4_;
    auVar17 = NEON_ext(auVar24,auVar24,4,1);
    auVar30._0_8_ = auVar17._0_8_;
    auVar30._8_4_ = auVar24._0_4_;
    fVar20 = auVar17._0_4_;
    fVar60 = auVar17._4_4_;
    fVar21 = -(fVar22 * fVar20 + fVar23 * fVar60 + fVar25 * auVar24._0_4_);
    auVar35._8_8_ = _UNK_03caad18;
    auVar35._0_8_ = _DAT_03caad10;
    auVar30._12_4_ = fVar21;
    fVar22 = -(fVar25 * fVar19 + fVar22 * fVar14 + fVar23 * fVar18);
    fVar23 = (float)uVar26 - (float)uVar27;
    fVar25 = (float)((ulong)uVar26 >> 0x20) - (float)((ulong)uVar27 >> 0x20);
    fVar58 = (float)uVar59;
    auVar17._4_4_ = fVar18;
    auVar17._0_4_ = fVar14;
    auVar17._8_4_ = fVar19;
    auVar17._12_4_ = fVar22;
    auVar17 = a64_TBL(ZEXT816(0),auVar17,auVar35);
    auVar16 = a64_TBL(ZEXT816(0),auVar30,auVar35);
    uVar26 = NEON_fmov(0x3f800000,4);
    lVar8 = 0;
    iVar12 = 0;
    uVar13 = 0;
    bVar3 = true;
    do {
      pfVar9 = (float *)(*param_6 + lVar8);
      auVar46._0_4_ = fVar14 * pfVar9[4];
      auVar46._4_4_ = fVar18 * pfVar9[5];
      auVar46._8_4_ = fVar19 * pfVar9[6];
      auVar46._12_4_ = fVar22 * pfVar9[7];
      auVar41._0_4_ = fVar14 * *pfVar9;
      auVar41._4_4_ = fVar18 * pfVar9[1];
      auVar41._8_4_ = fVar19 * pfVar9[2];
      auVar41._12_4_ = fVar22 * pfVar9[3];
      auVar28._0_4_ = fVar20 * *pfVar9;
      auVar28._4_4_ = fVar60 * pfVar9[1];
      auVar28._8_4_ = auVar24._0_4_ * pfVar9[2];
      auVar28._12_4_ = fVar21 * pfVar9[3];
      auVar34._0_4_ = fVar20 * pfVar9[4];
      auVar34._4_4_ = fVar60 * pfVar9[5];
      auVar34._8_4_ = auVar24._0_4_ * pfVar9[6];
      auVar34._12_4_ = fVar21 * pfVar9[7];
      auVar42 = NEON_ext(auVar41,auVar41,8,1);
      auVar47 = NEON_ext(auVar46,auVar46,8,1);
      auVar29 = NEON_ext(auVar28,auVar28,8,1);
      auVar35 = NEON_ext(auVar34,auVar34,8,1);
      auVar30 = auVar16 ^ (auVar16 ^ auVar17) & *(undefined1 (*) [16])(puVar4 + 0x30);
      fVar32 = auVar42._0_4_ + auVar41._0_4_ + auVar41._4_4_ + auVar30._0_4_;
      fVar36 = auVar47._0_4_ + auVar46._0_4_ + auVar46._4_4_ + auVar30._4_4_;
      fVar38 = auVar29._0_4_ + auVar28._0_4_ + auVar28._4_4_ + auVar30._8_4_;
      fVar39 = auVar35._0_4_ + auVar34._0_4_ + auVar34._4_4_ + auVar30._12_4_;
      uVar51 = CONCAT44(fVar32,fVar32);
      uVar45 = CONCAT44(fVar36,fVar36);
      uVar27 = NEON_fmin(uVar51,uVar45,4);
      if (((bool)(~(fVar23 + fVar58 < (float)uVar27) & 1)) &&
         (uVar27 = NEON_fmax(uVar51,uVar45,4), -fVar23 <= (float)uVar27)) {
        uVar53 = CONCAT44(fVar38,fVar38);
        uVar50 = CONCAT44(fVar39,fVar39);
        iVar2 = -(uint)(fVar39 < fVar38);
        uVar33 = uVar50 ^ (uVar50 ^ uVar53) & CONCAT44(iVar2,iVar2);
        fVar32 = (float)uVar33;
        if (0.0 <= fVar23 + fVar32) {
          uVar53 = uVar53 ^ (uVar53 ^ uVar50) & CONCAT44(iVar2,iVar2);
          fVar36 = (float)uVar53;
          fVar38 = (float)(uVar53 >> 0x20);
          if (fVar36 - fVar23 <= 0.0) {
            uVar53 = uVar45 ^ (uVar45 ^ uVar51) & CONCAT44(iVar2,iVar2);
            uVar51 = uVar51 ^ (uVar51 ^ uVar45) & CONCAT44(iVar2,iVar2);
            fVar39 = fVar32 - fVar36;
            fVar37 = (float)(uVar33 >> 0x20);
            fVar31 = fVar37 - fVar38;
            fVar40 = (float)uVar53;
            fVar49 = (float)uVar51;
            fVar54 = fVar40 - fVar49;
            fVar43 = (float)(uVar53 >> 0x20);
            fVar52 = (float)(uVar51 >> 0x20);
            fVar55 = fVar43 - fVar52;
            fVar56 = fVar39 * fVar39 + fVar54 * fVar54;
            fVar44 = 0.0;
            fVar48 = 0.0;
            if (fVar56 != 0.0) {
              fVar44 = (float)uVar26 / SQRT(fVar56);
              fVar48 = (float)((ulong)uVar26 >> 0x20) / SQRT(fVar31 * fVar31 + fVar55 * fVar55);
            }
            fVar39 = -fVar39;
            fVar31 = -fVar31;
            fVar56 = fVar23 * fVar54 * fVar44;
            fVar57 = fVar25 * fVar55 * fVar48;
            fVar44 = fVar23 * fVar44 * fVar39;
            fVar48 = fVar25 * fVar48 * fVar31;
            uVar27 = uVar59;
            if ((fVar36 + fVar56 < 0.0) && (0.0 < fVar32 + fVar56)) {
              uVar27 = CONCAT44(fVar52 + fVar48 + fVar55 * ((fVar38 + fVar57) / fVar31),
                                fVar49 + fVar44 + fVar54 * ((fVar36 + fVar56) / fVar39));
            }
            uVar15 = 0;
            if ((fVar36 - fVar56 < 0.0) && (uVar15 = 0, 0.0 < fVar32 - fVar56)) {
              uVar15 = CONCAT44((fVar52 - fVar48) + fVar55 * ((fVar38 - fVar57) / fVar31),
                                (fVar49 - fVar44) + fVar54 * ((fVar36 - fVar56) / fVar39));
            }
            fVar36 = fVar23 * fVar23 - fVar36 * fVar36;
            if (0.0 < fVar36) {
              fVar36 = SQRT(fVar36);
              fVar38 = SQRT(fVar25 * fVar25 - fVar38 * fVar38);
              uVar27 = NEON_fmin(uVar27,CONCAT44(fVar52 - fVar38,fVar49 - fVar36),4);
              uVar15 = NEON_fmax(uVar15,CONCAT44(fVar52 + fVar38,fVar49 + fVar36),4);
            }
            fVar32 = fVar23 * fVar23 - fVar32 * fVar32;
            if (0.0 < fVar32) {
              fVar32 = SQRT(fVar32);
              fVar36 = SQRT(fVar25 * fVar25 - fVar37 * fVar37);
              uVar27 = NEON_fmin(uVar27,CONCAT44(fVar43 - fVar36,fVar40 - fVar32),4);
              uVar15 = NEON_fmax(uVar15,CONCAT44(fVar43 + fVar36,fVar40 + fVar32),4);
            }
            fVar32 = (float)uVar27;
            fVar36 = (float)uVar15;
            if (!(bool)(~(fVar32 < fVar36) & 1)) {
              if (0.0 <= fVar32) {
                if (fVar32 < fVar58) {
                  pfVar6[(int)uVar13] = (float)((uint)fVar32 & 0xfffffffe);
                  uVar13 = uVar13 + 1;
                }
              }
              else {
                iVar12 = iVar12 + 1;
              }
              if (0.0 <= fVar36) {
                if (fVar58 <= fVar36) {
                  bVar3 = (bool)(fVar58 <= fVar32 & bVar3);
                }
                else {
                  pfVar6[(int)uVar13] = (float)((uint)fVar36 | 1);
                  uVar13 = uVar13 + 1;
                }
              }
              else {
                iVar12 = iVar12 + -1;
              }
            }
          }
        }
      }
      lVar8 = lVar8 + 0x20;
    } while ((ulong)uVar1 * 0x20 != lVar8);
    if (iVar12 == 0) goto LAB_030705c4;
    if (bVar3) {
      *param_7 = 1.0;
      goto LAB_030705c8;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 1) goto LAB_03070690;
    }
    else {
      FUN_03076780(pfVar6,0,uVar13 - 1);
LAB_03070690:
      lVar8 = -1;
      pfVar9 = pfVar6;
      do {
        iVar12 = iVar12 + ((uint)*pfVar9 & 1) * -2 + 1;
        if (iVar12 == 0) {
          if (uVar13 + (int)lVar8 == 0) {
            fVar22 = 1.0;
          }
          else {
            fVar22 = pfVar6[(uint)-(int)lVar8];
          }
          *param_7 = ((*pfVar9 + fVar22) * 0.5) / fVar58;
          goto LAB_030705c8;
        }
        lVar8 = lVar8 + -1;
        pfVar9 = pfVar9 + 1;
      } while ((ulong)uVar13 + lVar8 != -1);
    }
    uVar26 = 0;
  }
  if (lVar10 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pfVar6,uVar11);
    goto LAB_03070710;
  }
  uVar11 = uVar11 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar10 + 0x28) < uVar11) || (*(long *)(lVar10 + 0x38) != uVar11 + (long)pfVar6)) {
    if (pfVar6 == (float *)0x0) goto LAB_03070710;
    if (*(ulong *)(lVar10 + 0x28) < uVar11 + 0x40) {
      *(int *)(*(long *)(lVar10 + 0x30) + 0x20) = *(int *)(*(long *)(lVar10 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar10 + 0x10) + 0x18))
                (*(long **)(lVar10 + 0x10),(long)pfVar6 - (long)(int)pfVar6[-1],uVar11 + 0x44);
      goto LAB_03070710;
    }
    if (*(long *)(lVar10 + 0x38) != uVar11 + (long)pfVar6) {
      FUN_031cf778(lVar10,pfVar6);
      goto LAB_03070710;
    }
    *(float **)(lVar10 + 0x38) = pfVar6;
  }
  else {
    *(float **)(lVar10 + 0x38) = pfVar6;
    if (*(float **)(lVar10 + 0x48) != pfVar6) goto LAB_03070710;
  }
  FUN_031cf578(lVar10);
LAB_03070710:
  lVar10 = nn::os::GetSystemTick();
  *(long *)(param_8 + 8) = (lVar10 - lVar5) + *(long *)(param_8 + 8);
  *(int *)(param_8 + 0x10) = *(int *)(param_8 + 0x10) + 1;
  return uVar26;
}


