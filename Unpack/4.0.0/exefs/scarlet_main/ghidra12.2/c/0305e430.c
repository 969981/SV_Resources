/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0305e430; name: FUN_0305e430
 */


ulong FUN_0305e430(long *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  float *pfVar22;
  ulong uVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_88 [2];
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pfVar22 = (float *)(param_3 + 0x30);
  local_a0 = *(undefined8 *)pfVar22;
  uStack_98 = *(undefined8 *)(param_3 + 0x38);
  uVar3 = *(uint *)(param_4 + 4);
  uVar23 = (ulong)uVar3;
  lVar19 = tpidr_el0;
  lVar10 = *(long *)(lVar19 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar10;
  }
  plVar24 = *(long **)(lVar10 + 0x3e0);
  if (plVar24 != (long *)0x0) {
    lVar10 = *plVar24;
    if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
      (**(code **)(lVar10 + 0x18))("coherentGCP",0xb,*(undefined8 *)(lVar10 + 0x28));
      if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
        (**(code **)(lVar10 + 0x18))("getMesh",7,*(undefined8 *)(lVar10 + 0x28));
      }
    }
    puVar2 = (undefined8 *)plVar24[2];
    uVar11 = (long)puVar2 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar24[3]) && (plVar24[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "LtcoherentGCP";
      puVar2[2] = "StgetMesh";
      uVar8 = nn::os::GetSystemTick();
      puVar2[1] = uVar8;
    }
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar2 = (undefined8 *)plVar24[2];
      uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar24[3]) && (plVar24[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
  }
  if ((uVar3 != 0xffffffff) &&
     (lVar10 = *(long *)(*(long *)(param_2 + 0x38) + ((ulong)(uVar3 >> 0xe) & 0x3ff00)), lVar10 != 0
     )) {
    lVar13 = *(long *)(lVar10 + 0x20);
    if (((int)(uVar23 & 0x3fffff) < *(int *)(lVar13 + 0xd8) + *(int *)(lVar13 + 0x20)) &&
       ((*(int *)(lVar13 + 0x108) == 0 ||
        ((*(byte *)(*(long *)(lVar13 + 0x100) + (uVar23 & 0x3fffff)) & 1) == 0)))) {
      plVar9 = *(long **)(param_3 + 0x10);
      uVar11 = (ulong)*(uint *)(param_4 + 4) & 0x3fffff;
      fVar43 = (float)uVar11;
      if (plVar9 == (long *)0x0) {
LAB_0305e5dc:
        lVar13 = *(long *)(lVar19 + 0x1000b8);
        if (lVar13 == 0) {
          lVar13 = FUN_00e5d3b4();
          *(long *)(lVar19 + 0x1000b8) = lVar13;
        }
        plVar9 = *(long **)(lVar13 + 0x3e0);
        if (plVar9 != (long *)0x0) {
          lVar13 = *plVar9;
          if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar9[6] != 0)) {
            puVar2 = (undefined8 *)plVar9[2];
            uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
            if ((uVar15 <= (ulong)plVar9[3]) && (plVar9[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
              *puVar2 = &DAT_03c4e575;
              puVar2[1] = *(undefined8 *)(plVar9[6] + 8);
            }
          }
          puVar2 = (undefined8 *)plVar9[2];
          uVar15 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
          if ((uVar15 <= (ulong)plVar9[3]) && (plVar9[2] = uVar15, puVar2 != (undefined8 *)0x0)) {
            *puVar2 = "Stprev";
            uVar8 = nn::os::GetSystemTick();
            puVar2[1] = uVar8;
          }
          if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
            (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
          }
          if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
            (**(code **)(lVar13 + 0x18))("prev",4,*(undefined8 *)(lVar13 + 0x28));
          }
        }
        local_80 = fVar43;
        fVar25 = (float)FUN_03098e0c(lVar10,&local_80,param_4 + 2,pfVar22,&local_70);
        if (fVar25 < (float)param_4[5] * (float)param_4[5]) {
          auVar42 = *(undefined1 (*) [16])(lVar10 + 0x80);
          fVar25 = (float)*(undefined8 *)pfVar22 - *(float *)(lVar10 + 0x90);
          fVar26 = (float)((ulong)*(undefined8 *)pfVar22 >> 0x20) - *(float *)(lVar10 + 0x94);
          fVar27 = (float)*(undefined8 *)(param_3 + 0x38) - *(float *)(lVar10 + 0x98);
          auVar34 = *(undefined1 (*) [16])(lVar10 + 0x60);
          auVar29 = *(undefined1 (*) [16])(lVar10 + 0x70);
          auVar39 = NEON_ext(auVar29,auVar29,8,1);
          auVar36 = NEON_ext(auVar34,auVar34,8,1);
          auVar40 = NEON_ext(auVar42,auVar42,8,1);
          uStack_68 = CONCAT44(auVar40._4_4_ * fVar27 +
                               auVar42._4_4_ * fVar25 + auVar40._4_4_ * fVar26,
                               auVar40._0_4_ * fVar27 +
                               auVar42._0_4_ * fVar25 + auVar42._4_4_ * fVar26);
          local_70 = CONCAT44(auVar39._0_4_ * fVar27 +
                              auVar29._0_4_ * fVar25 + auVar29._4_4_ * fVar26,
                              auVar36._0_4_ * fVar27 +
                              auVar34._0_4_ * fVar25 + auVar34._4_4_ * fVar26);
          local_88[0] = fVar43;
          FUN_03096b5c(*(undefined8 *)(lVar10 + 0x20),&local_70,local_88,&local_80);
          fVar25 = *(float *)(lVar10 + 0x90) +
                   *(float *)(lVar10 + 0x80) * fStack_78 +
                   (float)*(undefined8 *)(lVar10 + 0x60) * local_80 +
                   *(float *)(lVar10 + 0x70) * fStack_7c;
          fVar26 = *(float *)(lVar10 + 0x94) +
                   *(float *)(lVar10 + 0x84) * fStack_78 +
                   (float)((ulong)*(undefined8 *)(lVar10 + 0x60) >> 0x20) * local_80 +
                   *(float *)(lVar10 + 0x74) * fStack_7c;
          fVar27 = *(float *)(lVar10 + 0x98) +
                   *(float *)(lVar10 + 0x88) * fStack_78 +
                   (float)*(undefined8 *)(lVar10 + 0x68) * local_80 +
                   *(float *)(lVar10 + 0x78) * fStack_7c;
          fVar28 = *(float *)(lVar10 + 0x9c) +
                   *(float *)(lVar10 + 0x8c) * fStack_78 +
                   (float)((ulong)*(undefined8 *)(lVar10 + 0x68) >> 0x20) * local_80 +
                   *(float *)(lVar10 + 0x7c) * fStack_7c;
          uStack_98 = CONCAT44(fVar28,fVar27);
          local_a0 = CONCAT44(fVar26,fVar25);
          fVar31 = fVar26 - *(float *)(param_3 + 0x34);
          fVar32 = fVar27 - *(float *)(param_3 + 0x38);
          fVar33 = fVar28 - *(float *)(param_3 + 0x3c);
          auVar42._0_4_ = (fVar25 - *pfVar22) * (fVar25 - *pfVar22);
          auVar42._4_4_ = fVar31 * fVar31;
          auVar42._8_4_ = fVar32 * fVar32;
          auVar42._12_4_ = fVar33 * fVar33;
          auVar34 = NEON_ext(auVar42,auVar42,8,1);
          if (auVar42._0_4_ + auVar42._4_4_ + auVar34._0_4_ <= (float)param_4[6] * (float)param_4[6]
             ) goto LAB_0305ed20;
        }
      }
      else {
        local_70 = CONCAT44(local_70._4_4_,fVar43);
        iVar7 = (**(code **)(*plVar9 + 0x28))
                          (plVar9,lVar10,&local_70,*(undefined8 *)(param_3 + 0x18),
                           *(undefined8 *)(param_3 + 0x20));
        if (iVar7 != 0) goto LAB_0305e5dc;
      }
      lVar13 = *(long *)(lVar19 + 0x1000b8);
      if (lVar13 == 0) {
        lVar13 = FUN_00e5d3b4();
        *(long *)(lVar19 + 0x1000b8) = lVar13;
      }
      plVar9 = *(long **)(lVar13 + 0x3e0);
      if (plVar9 != (long *)0x0) {
        lVar13 = *plVar9;
        if (((*(byte *)(lVar13 + 0x38) & 1) != 0) && (plVar9[6] != 0)) {
          puVar2 = (undefined8 *)plVar9[2];
          uVar23 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
          if ((uVar23 <= (ulong)plVar9[3]) && (plVar9[2] = uVar23, puVar2 != (undefined8 *)0x0)) {
            *puVar2 = &DAT_03c4e575;
            puVar2[1] = *(undefined8 *)(plVar9[6] + 8);
          }
        }
        puVar2 = (undefined8 *)plVar9[2];
        uVar23 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
        if ((uVar23 <= (ulong)plVar9[3]) && (plVar9[2] = uVar23, puVar2 != (undefined8 *)0x0)) {
          *puVar2 = "Stneighbors";
          uVar8 = nn::os::GetSystemTick();
          puVar2[1] = uVar8;
        }
        if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
          (**(code **)(lVar13 + 0x20))(*(undefined8 *)(lVar13 + 0x28));
        }
        if (*(code **)(lVar13 + 0x18) != (code *)0x0) {
          (**(code **)(lVar13 + 0x18))("neighbors",9,*(undefined8 *)(lVar13 + 0x28));
        }
      }
      lVar13 = *(long *)(lVar10 + 0x20);
      fVar25 = (float)((int)fVar43 - *(int *)(lVar13 + 0x20));
      if ((int)fVar43 < *(int *)(lVar13 + 0x20)) {
        fVar25 = fVar43;
        if ((*(int *)(lVar13 + 0x98) == 0) ||
           (fVar25 = *(float *)(*(long *)(lVar13 + 0x90) + uVar11 * 4), fVar25 != -NAN)) {
          lVar16 = *(long *)(lVar13 + 0xb0);
          goto LAB_0305e88c;
        }
        piVar21 = (int *)(*(long *)(lVar13 + 0x18) + uVar11 * 0x10);
      }
      else {
        lVar16 = *(long *)(lVar13 + 0xd0);
LAB_0305e88c:
        piVar21 = (int *)(lVar16 + (long)(int)fVar25 * 0x10);
      }
      fVar26 = (float)param_4[1];
      fVar43 = (float)*param_4;
      fVar25 = (float)((ulong)*param_4 >> 0x20);
      auVar42 = *(undefined1 (*) [16])(param_4 + 2);
      if (0 < (short)piVar21[2]) {
        auVar36._0_4_ = *pfVar22 - fVar43;
        auVar36._4_4_ = *(float *)(param_3 + 0x34) - fVar25;
        auVar36._8_4_ = *(float *)(param_3 + 0x38) - fVar26;
        auVar36._12_4_ = *(float *)(param_3 + 0x3c) - (float)((ulong)param_4[1] >> 0x20);
        lVar16 = (long)*piVar21;
        auVar34 = NEON_ext(auVar42,auVar42,8,1);
        uVar8 = NEON_ext(auVar42._0_8_,auVar34._0_8_,4,1);
        auVar34 = NEON_ext(auVar36,auVar36,4,1);
        lVar20 = lVar16 * 0x14;
        auVar29._0_4_ = auVar42._0_4_ * auVar34._0_4_ - auVar36._0_4_ * (float)uVar8;
        auVar29._4_4_ =
             auVar42._4_4_ * auVar34._4_4_ - auVar36._4_4_ * (float)((ulong)uVar8 >> 0x20);
        auVar29._8_4_ = auVar42._8_4_ * auVar36._0_4_ - auVar36._8_4_ * auVar42._0_4_;
        auVar29._12_4_ = auVar42._12_4_ * auVar36._4_4_ - auVar36._12_4_ * auVar42._4_4_;
        auVar42 = NEON_ext(auVar29,auVar29,4,1);
        auVar39._0_8_ = auVar42._0_8_;
        auVar39._8_4_ = auVar29._0_4_;
        fVar43 = -(fVar43 * auVar42._0_4_ + fVar25 * auVar42._4_4_ + fVar26 * auVar29._0_4_);
        auVar39._12_4_ = fVar43;
        uVar8 = auVar39._8_8_;
        auVar34 = auVar39;
        do {
          lVar18 = (long)*(int *)(lVar13 + 0x30);
          iVar7 = (int)lVar16;
          if (lVar16 < lVar18) {
            iVar12 = iVar7;
            if (*(int *)(lVar13 + 0x78) != 0) {
              iVar12 = *(int *)(*(long *)(lVar13 + 0x70) + lVar16 * 4);
            }
            if (iVar12 == -1) {
              lVar14 = *(long *)(lVar13 + 0x28) + lVar16 * 0x14;
            }
            else {
              lVar14 = *(long *)(lVar13 + 0xc0) + (long)iVar12 * 0x14;
            }
          }
          else {
            lVar14 = *(long *)(lVar13 + 0xe0) + lVar18 * -0x14 + lVar20;
          }
          if ((*(int *)(lVar14 + 8) != -1) && ((*(byte *)(lVar14 + 0x10) >> 5 & 1) == 0)) {
            if (lVar16 < lVar18) {
              if (*(int *)(lVar13 + 0x78) != 0) {
                iVar7 = *(int *)(*(long *)(lVar13 + 0x70) + lVar16 * 4);
              }
              if (iVar7 == -1) {
                piVar17 = (int *)(*(long *)(lVar13 + 0x28) + lVar16 * 0x14);
              }
              else {
                piVar17 = (int *)(*(long *)(lVar13 + 0xc0) + (long)iVar7 * 0x14);
              }
            }
            else {
              piVar17 = (int *)(*(long *)(lVar13 + 0xe0) + lVar18 * -0x14 + lVar20);
            }
            iVar4 = *(int *)(lVar13 + 0x40);
            iVar7 = *piVar17;
            iVar12 = piVar17[1];
            lVar18 = 0x38;
            if (iVar4 <= iVar7) {
              lVar18 = 0xf0;
            }
            iVar1 = 0;
            if (iVar4 <= iVar7) {
              iVar1 = iVar4;
            }
            auVar42 = *(undefined1 (*) [16])(lVar10 + 0x60);
            fVar32 = (float)*(undefined8 *)(lVar10 + 0x78);
            fVar33 = (float)((ulong)*(undefined8 *)(lVar10 + 0x78) >> 0x20);
            fVar28 = (float)*(undefined8 *)(lVar10 + 0x70);
            fVar31 = (float)((ulong)*(undefined8 *)(lVar10 + 0x70) >> 0x20);
            pfVar5 = (float *)(*(long *)(lVar13 + lVar18) + (long)(iVar7 - iVar1) * 0x10);
            fVar25 = *pfVar5;
            fVar26 = pfVar5[1];
            fVar27 = pfVar5[2];
            lVar18 = 0x38;
            if (iVar4 <= iVar12) {
              lVar18 = 0xf0;
            }
            iVar7 = 0;
            if (iVar4 <= iVar12) {
              iVar7 = iVar4;
            }
            auVar36 = *(undefined1 (*) [16])(lVar10 + 0x80);
            auVar29 = *(undefined1 (*) [16])(lVar10 + 0x90);
            auVar40._0_4_ =
                 auVar34._0_4_ *
                 (auVar29._0_4_ + auVar36._0_4_ * fVar27 + auVar42._0_4_ * fVar25 + fVar28 * fVar26)
            ;
            auVar40._4_4_ =
                 auVar34._4_4_ *
                 (auVar29._4_4_ + auVar36._4_4_ * fVar27 + auVar42._4_4_ * fVar25 + fVar31 * fVar26)
            ;
            auVar40._8_4_ =
                 auVar34._8_4_ *
                 (auVar29._8_4_ + auVar36._8_4_ * fVar27 + auVar42._8_4_ * fVar25 + fVar32 * fVar26)
            ;
            auVar40._12_4_ =
                 auVar34._12_4_ *
                 (auVar29._12_4_ +
                 auVar36._12_4_ * fVar27 + auVar42._12_4_ * fVar25 + fVar33 * fVar26);
            auVar41 = NEON_ext(auVar40,auVar40,8,1);
            if (auVar40._0_4_ + auVar40._4_4_ + auVar41._0_4_ + fVar43 <= 0.0) {
              auVar40 = *(undefined1 (*) [16])
                         (*(long *)(lVar13 + lVar18) + (long)(iVar12 - iVar7) * 0x10);
              fVar35 = auVar40._0_4_;
              fVar37 = auVar40._4_4_;
              fVar38 = auVar40._8_4_;
              fVar25 = auVar34._0_4_ *
                       (auVar29._0_4_ +
                       auVar36._0_4_ * fVar38 + auVar42._0_4_ * fVar35 + fVar28 * fVar37);
              fVar26 = auVar34._4_4_ *
                       (auVar29._4_4_ +
                       auVar36._4_4_ * fVar38 + auVar42._4_4_ * fVar35 + fVar31 * fVar37);
              fVar27 = auVar34._8_4_ *
                       (auVar29._8_4_ +
                       auVar36._8_4_ * fVar38 + auVar42._8_4_ * fVar35 + fVar32 * fVar37);
              fVar28 = auVar34._12_4_ *
                       (auVar29._12_4_ +
                       auVar36._12_4_ * fVar38 + auVar42._12_4_ * fVar35 + fVar33 * fVar37);
              auVar41._4_4_ = fVar26;
              auVar41._0_4_ = fVar25;
              auVar41._8_4_ = fVar27;
              auVar41._12_4_ = fVar28;
              auVar6._4_4_ = fVar26;
              auVar6._0_4_ = fVar25;
              auVar6._8_4_ = fVar27;
              auVar6._12_4_ = fVar28;
              auVar42 = NEON_ext(auVar41,auVar6,8,1);
              if (0.0 <= fVar25 + fVar26 + auVar42._0_4_ + fVar43) {
                uVar3 = *(uint *)(lVar14 + 0xc);
                uVar23 = (ulong)uVar3;
                if ((*(byte *)(lVar14 + 0x10) >> 6 & 1) == 0) {
                  if (uVar3 == 0xffffffff) {
                    uVar23 = 0xffffffff;
                  }
                  else {
                    uVar23 = (ulong)(uVar3 & 0x3fffff | *(int *)(lVar13 + 0x17c) << 0x16);
                  }
                }
                lVar13 = *(long *)(*(long *)(param_2 + 0x38) + (uVar23 >> 0x16) * 0x100);
                if (lVar13 != 0) {
                  plVar9 = *(long **)(param_3 + 0x10);
                  fVar25 = (float)((uint)uVar23 & 0x3fffff);
                  if (plVar9 != (long *)0x0) {
                    local_70 = CONCAT44(local_70._4_4_,(uint)uVar23) & 0xffffffff003fffff;
                    iVar7 = (**(code **)(*plVar9 + 0x28))
                                      (plVar9,lVar13,&local_70,*(undefined8 *)(param_3 + 0x18),
                                       *(undefined8 *)(param_3 + 0x20));
                    auVar34._8_8_ = uVar8;
                    auVar34._0_8_ = auVar39._0_8_;
                    if (iVar7 == 0) goto LAB_0305ec18;
                  }
                  local_80 = fVar25;
                  fVar26 = (float)FUN_03098e0c(lVar13,&local_80,(undefined1 (*) [16])(param_4 + 2),
                                               pfVar22,&local_70);
                  auVar34._8_8_ = uVar8;
                  auVar34._0_8_ = auVar39._0_8_;
                  if (fVar26 < (float)param_4[5] * (float)param_4[5]) {
                    auVar42 = *(undefined1 (*) [16])(lVar13 + 0x80);
                    fVar26 = (float)*(undefined8 *)pfVar22 - *(float *)(lVar13 + 0x90);
                    fVar27 = (float)((ulong)*(undefined8 *)pfVar22 >> 0x20) -
                             *(float *)(lVar13 + 0x94);
                    fVar28 = (float)*(undefined8 *)(param_3 + 0x38) - *(float *)(lVar13 + 0x98);
                    auVar34 = *(undefined1 (*) [16])(lVar13 + 0x60);
                    auVar29 = *(undefined1 (*) [16])(lVar13 + 0x70);
                    auVar40 = NEON_ext(auVar29,auVar29,8,1);
                    auVar36 = NEON_ext(auVar34,auVar34,8,1);
                    auVar41 = NEON_ext(auVar42,auVar42,8,1);
                    uStack_68 = CONCAT44(auVar41._4_4_ * fVar28 +
                                         auVar42._4_4_ * fVar26 + auVar41._4_4_ * fVar27,
                                         auVar41._0_4_ * fVar28 +
                                         auVar42._0_4_ * fVar26 + auVar42._4_4_ * fVar27);
                    local_70 = CONCAT44(auVar40._0_4_ * fVar28 +
                                        auVar29._0_4_ * fVar26 + auVar29._4_4_ * fVar27,
                                        auVar36._0_4_ * fVar28 +
                                        auVar34._0_4_ * fVar26 + auVar34._4_4_ * fVar27);
                    local_88[0] = fVar25;
                    FUN_03096b5c(*(undefined8 *)(lVar13 + 0x20),&local_70,local_88,&local_80);
                    auVar42 = *(undefined1 (*) [16])(lVar13 + 0x80);
                    auVar29 = *(undefined1 (*) [16])(lVar13 + 0x90);
                    fVar25 = auVar29._0_4_ +
                             auVar42._0_4_ * fStack_78 +
                             (float)*(undefined8 *)(lVar13 + 0x60) * local_80 +
                             *(float *)(lVar13 + 0x70) * fStack_7c;
                    fVar26 = auVar29._4_4_ +
                             auVar42._4_4_ * fStack_78 +
                             (float)((ulong)*(undefined8 *)(lVar13 + 0x60) >> 0x20) * local_80 +
                             *(float *)(lVar13 + 0x74) * fStack_7c;
                    fVar27 = auVar29._8_4_ +
                             auVar42._8_4_ * fStack_78 +
                             (float)*(undefined8 *)(lVar13 + 0x68) * local_80 +
                             *(float *)(lVar13 + 0x78) * fStack_7c;
                    fVar28 = auVar29._12_4_ +
                             auVar42._12_4_ * fStack_78 +
                             (float)((ulong)*(undefined8 *)(lVar13 + 0x68) >> 0x20) * local_80 +
                             *(float *)(lVar13 + 0x7c) * fStack_7c;
                    uStack_98 = CONCAT44(fVar28,fVar27);
                    local_a0 = CONCAT44(fVar26,fVar25);
                    fVar31 = fVar26 - *(float *)(param_3 + 0x34);
                    fVar32 = fVar27 - *(float *)(param_3 + 0x38);
                    fVar33 = fVar28 - *(float *)(param_3 + 0x3c);
                    auVar30._0_4_ = (fVar25 - *pfVar22) * (fVar25 - *pfVar22);
                    auVar30._4_4_ = fVar31 * fVar31;
                    auVar30._8_4_ = fVar32 * fVar32;
                    auVar30._12_4_ = fVar33 * fVar33;
                    auVar42 = NEON_ext(auVar30,auVar30,8,1);
                    if (auVar30._0_4_ + auVar30._4_4_ + auVar42._0_4_ <=
                        (float)param_4[6] * (float)param_4[6]) goto LAB_0305ed20;
                  }
                }
              }
            }
          }
LAB_0305ec18:
          lVar16 = lVar16 + 1;
          if ((long)*piVar21 + (long)(short)piVar21[2] <= lVar16) break;
          lVar13 = *(long *)(lVar10 + 0x20);
          lVar20 = lVar20 + 0x14;
        } while( true );
      }
    }
  }
  lVar10 = *(long *)(lVar19 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar19 + 0x1000b8) = lVar10;
  }
  plVar9 = *(long **)(lVar10 + 0x3e0);
  if (plVar9 != (long *)0x0) {
    lVar19 = *plVar9;
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar9[6] != 0)) {
      puVar2 = (undefined8 *)plVar9[2];
      uVar23 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar23 <= (ulong)plVar9[3]) && (plVar9[2] = uVar23, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar9[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar9[2];
    uVar23 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar23 <= (ulong)plVar9[3]) && (plVar9[2] = uVar23, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = "Stfull";
      uVar8 = nn::os::GetSystemTick();
      puVar2[1] = uVar8;
    }
    if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
    }
    if (*(code **)(lVar19 + 0x18) != (code *)0x0) {
      (**(code **)(lVar19 + 0x18))("full",4,*(undefined8 *)(lVar19 + 0x28));
    }
  }
  uVar23 = (**(code **)(*param_1 + 0x20))(param_1,param_3,&local_a0);
  fVar27 = (float)uStack_98;
  fVar28 = (float)((ulong)uStack_98 >> 0x20);
  fVar25 = (float)local_a0;
  fVar26 = (float)((ulong)local_a0 >> 0x20);
LAB_0305ed20:
  param_5[1] = CONCAT44(fVar28,fVar27);
  *param_5 = CONCAT44(fVar26,fVar25);
  if (plVar24 != (long *)0x0) {
    lVar19 = *plVar24;
    if (((*(byte *)(lVar19 + 0x38) & 1) != 0) && (plVar24[6] != 0)) {
      puVar2 = (undefined8 *)plVar24[2];
      uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar24[3]) && (plVar24[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar24[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar24[2];
    uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar24[3]) && (plVar24[2] = uVar11, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c3697b;
      uVar8 = nn::os::GetSystemTick();
      puVar2[1] = uVar8;
    }
    if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
      (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
      if (*(code **)(lVar19 + 0x20) != (code *)0x0) {
        (**(code **)(lVar19 + 0x20))(*(undefined8 *)(lVar19 + 0x28));
      }
    }
  }
  return uVar23 & 0xffffffff;
}


