/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031600b8; name: FUN_031600b8
 */


undefined8
FUN_031600b8(long *param_1,undefined4 param_2,float *param_3,undefined8 param_4,long *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 (*pauVar16) [16];
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  float *pfVar20;
  int iVar21;
  undefined1 (*pauVar22) [16];
  ulong uVar23;
  float *pfVar24;
  long lVar25;
  long *plVar26;
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [12];
  undefined1 auVar32 [16];
  undefined1 auVar30 [12];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar43;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [12];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar59;
  undefined1 auVar57 [16];
  float fVar60;
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar66;
  undefined1 auVar65 [12];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  long *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  long *local_78;
  long *local_70;
  long local_68;
  
  lVar25 = tpidr_el0;
  lVar14 = *(long *)(lVar25 + 0x1000b8);
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar14;
  }
  plVar26 = *(long **)(lVar14 + 0x3e0);
  if (plVar26 != (long *)0x0) {
    lVar14 = *plVar26;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))
                ("getSilhouetteFromPointCloud",0x1b,*(undefined8 *)(lVar14 + 0x28));
    }
    puVar18 = (undefined8 *)plVar26[2];
    uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = "TtgetSilhouetteFromPointCloud";
      uVar10 = nn::os::GetSystemTick();
      puVar18[1] = uVar10;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
      puVar18 = (undefined8 *)plVar26[2];
      uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(plVar26[6] + 8);
      }
    }
    lVar14 = *(long *)(lVar25 + 0x1000b8);
  }
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  local_78 = plVar26;
  if (lVar14 == 0) {
    lVar14 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar14;
  }
  local_90 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
  if (*(long *)(local_90 + 8) == 0) {
    local_80 = 0x800;
    local_68 = 0x800;
    if (local_90 == 0) goto LAB_03160278;
    local_e0 = (long *)0x800;
    if (*(ulong *)(local_90 + 0x28) < 0x800) {
LAB_03160214:
      local_88 = FUN_031cf3b4(local_90,&local_e0);
    }
    else {
      local_88 = *(long *)(local_90 + 0x38);
      if (*(ulong *)(local_90 + 0x40) < local_88 + 0x800U) goto LAB_03160214;
      *(ulong *)(local_90 + 0x38) = local_88 + 0x800U;
    }
  }
  else {
    local_90 = 0;
LAB_03160278:
    local_68 = 0x800;
    local_80 = 0x800;
    local_88 = (**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
  }
  local_98 = CONCAT44(0x80000080,(int)local_98);
  uStack_c8 = SUB168(*(undefined1 (*) [16])(param_3 + 4),8);
  local_d0 = SUB168(*(undefined1 (*) [16])(param_3 + 4),0);
  uStack_b8 = SUB168(*(undefined1 (*) [16])(param_3 + 8),8);
  uStack_c0 = SUB168(*(undefined1 (*) [16])(param_3 + 8),0);
  local_e0 = param_1;
  local_d8 = param_2;
  local_b0 = param_4;
  local_a0 = local_88;
  iVar9 = FUN_0315f9f8(&local_e0,&local_a0);
  uVar10 = 0;
  if (iVar9 != 0) {
    if (3 < (int)local_98) {
      if ((int)param_5[1] != (int)local_98) {
        *(int *)(param_5 + 1) = (int)local_98;
      }
      uVar15 = 0;
      do {
        pfVar20 = (float *)(local_a0 + uVar15 * 0x10);
        fVar37 = param_3[4] * *pfVar20;
        fVar43 = param_3[5] * pfVar20[1];
        fVar44 = param_3[6] * pfVar20[2];
        fVar38 = -(fVar37 + fVar43 + fVar44);
        fVar37 = -(fVar37 + fVar43 + fVar44);
        auVar32._0_8_ = CONCAT44(pfVar20[1] + param_3[5] * fVar37,*pfVar20 + param_3[4] * fVar38);
        auVar32._8_4_ = pfVar20[2] + param_3[6] * fVar38;
        auVar32._12_4_ = pfVar20[3] + param_3[7] * fVar37;
        puVar18 = (undefined8 *)(*param_5 + uVar15 * 0x10);
        puVar18[1] = auVar32._8_8_;
        *puVar18 = auVar32._0_8_;
        uVar15 = uVar15 + 1;
      } while ((local_98 & 0xffffffff) != uVar15);
      fVar37 = param_3[3];
      lVar14 = *(long *)(lVar25 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar25 + 0x1000b8) = lVar14;
      }
      plVar26 = *(long **)(lVar14 + 0x3e0);
      if (plVar26 != (long *)0x0) {
        lVar14 = *plVar26;
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))(&DAT_03c79af3,4,*(undefined8 *)(lVar14 + 0x28));
        }
        puVar18 = (undefined8 *)plVar26[2];
        uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = &DAT_03c79af1;
          uVar10 = nn::os::GetSystemTick();
          puVar18[1] = uVar10;
        }
        if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
          puVar18 = (undefined8 *)plVar26[2];
          uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
          if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0))
          {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar26[6] + 8);
          }
        }
      }
      iVar9 = (int)param_5[1];
      bVar8 = 4 < iVar9;
      if (iVar9 < 3) {
        iVar12 = 0;
      }
      else {
        iVar12 = 0;
        do {
          if (!bVar8) goto LAB_031605d4;
          lVar19 = *param_5;
          lVar14 = (long)iVar12 + 1;
          pfVar20 = (float *)(lVar19 + (long)iVar12 * 0x10);
          pfVar24 = (float *)(lVar19 + lVar14 * 0x10);
          auVar34._0_4_ = (*pfVar20 - *pfVar24) * (*pfVar20 - *pfVar24);
          auVar34._4_4_ = (pfVar20[1] - pfVar24[1]) * (pfVar20[1] - pfVar24[1]);
          auVar34._8_4_ = (pfVar20[2] - pfVar24[2]) * (pfVar20[2] - pfVar24[2]);
          auVar34._12_4_ = (pfVar20[3] - pfVar24[3]) * (pfVar20[3] - pfVar24[3]);
          auVar32 = NEON_ext(auVar34,auVar34,8,1);
          if (fVar37 <= auVar34._0_4_ + auVar34._4_4_ + auVar32._0_4_) {
            iVar12 = (int)lVar14;
          }
          else {
            iVar9 = iVar9 + -1;
            uVar13 = iVar9 - (int)lVar14;
            *(int *)(param_5 + 1) = iVar9;
            if (uVar13 != 0) {
              uVar23 = (-(ulong)(uVar13 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar13 << 4) - 1;
              uVar15 = (uVar23 >> 3) + 1;
              if (uVar23 < 0x38) {
                uVar23 = 0;
              }
              else {
                uVar23 = 0;
                puVar18 = (undefined8 *)(lVar19 + lVar14 * 0x10 + 0x28);
                do {
                  uVar23 = uVar23 + 8;
                  puVar18[-5] = puVar18[-3];
                  puVar18[-4] = puVar18[-2];
                  puVar18[-3] = puVar18[-1];
                  puVar18[-2] = *puVar18;
                  puVar18[-1] = puVar18[1];
                  *puVar18 = puVar18[2];
                  puVar18[1] = puVar18[3];
                  puVar18[2] = puVar18[4];
                  puVar18 = puVar18 + 8;
                } while ((uVar15 & 0x3ffffffffffffff8) != uVar23);
              }
              if ((uVar15 & 6) != 0) {
                lVar17 = (uVar15 >> 1 & 3) * -2;
                puVar18 = (undefined8 *)(lVar19 + lVar14 * 0x10 + uVar23 * 8 + 0x10);
                do {
                  puVar18[-2] = *puVar18;
                  puVar18 = puVar18 + 1;
                  bVar8 = lVar17 != -1;
                  lVar17 = lVar17 + 1;
                } while (bVar8);
              }
              iVar9 = (int)param_5[1];
            }
          }
          bVar8 = 4 < iVar9;
        } while (iVar12 < iVar9 + -2);
      }
      if (bVar8) {
        pfVar20 = (float *)*param_5;
        pfVar24 = pfVar20 + (long)iVar12 * 4;
        auVar48._0_4_ = (*pfVar24 - *pfVar20) * (*pfVar24 - *pfVar20);
        auVar48._4_4_ = (pfVar24[1] - pfVar20[1]) * (pfVar24[1] - pfVar20[1]);
        auVar48._8_4_ = (pfVar24[2] - pfVar20[2]) * (pfVar24[2] - pfVar20[2]);
        auVar48._12_4_ = (pfVar24[3] - pfVar20[3]) * (pfVar24[3] - pfVar20[3]);
        auVar32 = NEON_ext(auVar48,auVar48,8,1);
        if (auVar48._0_4_ + auVar48._4_4_ + auVar32._0_4_ < fVar37) {
          iVar9 = iVar9 + -1;
          uVar13 = iVar9 - iVar12;
          *(int *)(param_5 + 1) = iVar9;
          if (uVar13 != 0) {
            uVar23 = (-(ulong)(uVar13 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar13 << 4) - 1;
            uVar15 = (uVar23 >> 3) + 1;
            if (uVar23 < 0x18) {
              uVar23 = 0;
            }
            else {
              uVar23 = 0;
              pfVar24 = pfVar20 + (long)iVar12 * 4 + 6;
              do {
                uVar23 = uVar23 + 4;
                *(undefined8 *)(pfVar24 + -6) = *(undefined8 *)(pfVar24 + -2);
                *(undefined8 *)(pfVar24 + -4) = *(undefined8 *)pfVar24;
                *(undefined8 *)(pfVar24 + -2) = *(undefined8 *)(pfVar24 + 2);
                *(undefined8 *)pfVar24 = *(undefined8 *)(pfVar24 + 4);
                pfVar24 = pfVar24 + 8;
              } while ((uVar15 & 0x3ffffffffffffffc) != uVar23);
            }
            if (((uint)uVar15 >> 1 & 1) != 0) {
              lVar14 = (uVar15 >> 1 & 1) * -2;
              pfVar20 = pfVar20 + (long)iVar12 * 4 + uVar23 * 2 + 4;
              do {
                *(undefined8 *)(pfVar20 + -4) = *(undefined8 *)pfVar20;
                pfVar20 = pfVar20 + 2;
                bVar8 = lVar14 != -1;
                lVar14 = lVar14 + 1;
              } while (bVar8);
            }
            iVar9 = (int)param_5[1];
          }
        }
      }
LAB_031605d4:
      pauVar16 = (undefined1 (*) [16])*param_5;
      auVar32 = *pauVar16;
      *(long *)(pauVar16[(long)iVar9 + -1] + 8) = auVar32._8_8_;
      *(long *)pauVar16[(long)iVar9 + -1] = auVar32._0_8_;
      local_e0 = plVar26;
      if (plVar26 != (long *)0x0) {
        lVar14 = *plVar26;
        if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
          puVar18 = (undefined8 *)plVar26[2];
          uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
          if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0))
          {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar26[6] + 8);
          }
        }
        puVar18 = (undefined8 *)plVar26[2];
        uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = &DAT_03c2d363;
          uVar10 = nn::os::GetSystemTick();
          puVar18[1] = uVar10;
        }
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
      }
      fVar37 = param_3[2];
      lVar14 = *(long *)(lVar25 + 0x1000b8);
      if (lVar14 == 0) {
        lVar14 = FUN_00e5d3b4();
        *(long *)(lVar25 + 0x1000b8) = lVar14;
      }
      plVar26 = *(long **)(lVar14 + 0x3e0);
      if (plVar26 != (long *)0x0) {
        lVar14 = *plVar26;
        if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
          (**(code **)(lVar14 + 0x18))("removeColinear",0xe,*(undefined8 *)(lVar14 + 0x28));
        }
        puVar18 = (undefined8 *)plVar26[2];
        uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = "TtremoveColinear";
          uVar10 = nn::os::GetSystemTick();
          puVar18[1] = uVar10;
        }
        if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
          puVar18 = (undefined8 *)plVar26[2];
          uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
          if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0))
          {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar26[6] + 8);
          }
        }
      }
      uVar13 = *(uint *)(param_5 + 1);
      uVar15 = (ulong)uVar13;
      if ((int)uVar13 < 1) {
        auVar30._8_4_ = 0xff7fffee;
        auVar30._0_8_ = 0xff7fffeeff7fffee;
        auVar27._8_4_ = 0x7f7fffee;
        auVar27._0_8_ = 0x7f7fffee7f7fffee;
      }
      else {
        if (uVar13 == 1) {
          auVar28._8_4_ = 0x7f7fffee;
          auVar28._0_8_ = 0x7f7fffee7f7fffee;
          auVar28._12_4_ = 0x7f7fffee;
          uVar23 = 0;
          auVar33._8_4_ = 0xff7fffee;
          auVar33._0_8_ = 0xff7fffeeff7fffee;
          auVar33._12_4_ = 0xff7fffee;
        }
        else {
          auVar28._8_4_ = 0x7f7fffee;
          auVar28._0_8_ = 0x7f7fffee7f7fffee;
          auVar28._12_4_ = 0x7f7fffee;
          uVar23 = 0;
          auVar33._8_4_ = 0xff7fffee;
          auVar33._0_8_ = 0xff7fffeeff7fffee;
          auVar33._12_4_ = 0xff7fffee;
          do {
            pauVar16 = (undefined1 (*) [16])(*param_5 + uVar23 * 0x10);
            uVar23 = uVar23 + 2;
            auVar32 = *pauVar16;
            auVar34 = pauVar16[1];
            auVar48 = NEON_fmin(auVar28,auVar32,4);
            auVar32 = NEON_fmax(auVar33,auVar32,4);
            auVar28 = NEON_fmin(auVar48,auVar34,4);
            auVar33 = NEON_fmax(auVar32,auVar34,4);
          } while ((uVar15 & 0xfffffffe) != uVar23);
        }
        auVar30 = auVar33._0_12_;
        auVar27 = auVar28._0_12_;
        if ((uVar13 & 1) != 0) {
          auVar32 = *(undefined1 (*) [16])(*param_5 + uVar23 * 0x10);
          auVar34 = NEON_fmax(auVar33,auVar32,4);
          auVar30 = auVar34._0_12_;
          auVar32 = NEON_fmin(auVar28,auVar32,4);
          auVar27 = auVar32._0_12_;
        }
      }
      if (2 < (int)uVar13) {
        uVar10 = CONCAT44(auVar30._4_4_ - auVar27._4_4_,auVar30._0_4_ - auVar27._0_4_);
        fVar38 = auVar30._8_4_ - auVar27._8_4_;
        iVar9 = 0;
        uVar10 = NEON_fmaxp(uVar10,uVar10,4);
        uVar10 = NEON_fmax(CONCAT44(fVar38,fVar38),uVar10,4);
        fVar37 = (float)uVar10 * fVar37;
        fVar37 = fVar37 * fVar37;
        do {
          lVar14 = (long)iVar9 + 1;
          if ((int)uVar15 < 5) {
LAB_03160888:
            iVar9 = (int)lVar14;
          }
          else {
            lVar19 = *param_5;
            pfVar20 = (float *)(lVar19 + (long)iVar9 * 0x10);
            pfVar24 = (float *)(lVar19 + lVar14 * 0x10);
            auVar39._0_4_ = *pfVar24 - *pfVar20;
            auVar39._4_4_ = pfVar24[1] - pfVar20[1];
            auVar39._8_4_ = pfVar24[2] - pfVar20[2];
            auVar39._12_4_ = pfVar24[3] - pfVar20[3];
            auVar34 = NEON_ext(auVar39,auVar39,4,1);
            auVar46._0_4_ = pfVar20[8] - *pfVar20;
            auVar46._4_4_ = pfVar20[9] - pfVar20[1];
            auVar46._8_4_ = pfVar20[10] - pfVar20[2];
            auVar46._12_4_ = pfVar20[0xb] - pfVar20[3];
            auVar32 = NEON_ext(auVar46,auVar46,4,1);
            auVar40._0_4_ = auVar46._0_4_ * auVar34._0_4_ - auVar39._0_4_ * auVar32._0_4_;
            auVar40._4_4_ = auVar46._4_4_ * auVar34._4_4_ - auVar39._4_4_ * auVar32._4_4_;
            auVar40._8_4_ = auVar46._8_4_ * auVar39._0_4_ - auVar39._8_4_ * auVar46._0_4_;
            auVar40._12_4_ = auVar46._12_4_ * auVar39._4_4_ - auVar39._12_4_ * auVar46._4_4_;
            auVar32 = NEON_ext(auVar40,auVar40,4,1);
            if (fVar37 <= auVar32._0_4_ * auVar32._0_4_ + auVar32._4_4_ * auVar32._4_4_ +
                          auVar40._0_4_ * auVar40._0_4_) goto LAB_03160888;
            uVar13 = (int)uVar15 - 1;
            uVar15 = (ulong)uVar13;
            uVar3 = uVar13 - (int)lVar14;
            *(uint *)(param_5 + 1) = uVar13;
            if (uVar3 != 0) {
              uVar23 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4) - 1;
              uVar15 = (uVar23 >> 3) + 1;
              if (uVar23 < 0x38) {
                uVar23 = 0;
              }
              else {
                uVar23 = 0;
                puVar18 = (undefined8 *)(lVar19 + lVar14 * 0x10 + 0x28);
                do {
                  uVar23 = uVar23 + 8;
                  puVar18[-5] = puVar18[-3];
                  puVar18[-4] = puVar18[-2];
                  puVar18[-3] = puVar18[-1];
                  puVar18[-2] = *puVar18;
                  puVar18[-1] = puVar18[1];
                  *puVar18 = puVar18[2];
                  puVar18[1] = puVar18[3];
                  puVar18[2] = puVar18[4];
                  puVar18 = puVar18 + 8;
                } while ((uVar15 & 0x3ffffffffffffff8) != uVar23);
              }
              if ((uVar15 & 6) != 0) {
                lVar17 = (uVar15 >> 1 & 3) * -2;
                puVar18 = (undefined8 *)(lVar19 + lVar14 * 0x10 + uVar23 * 8 + 0x10);
                do {
                  puVar18[-2] = *puVar18;
                  puVar18 = puVar18 + 1;
                  bVar8 = lVar17 != -1;
                  lVar17 = lVar17 + 1;
                } while (bVar8);
              }
              uVar15 = (ulong)*(uint *)(param_5 + 1);
            }
          }
          uVar13 = (uint)uVar15;
        } while (iVar9 < (int)(uVar13 - 2));
        if (4 < (int)uVar13) {
          lVar14 = *param_5;
          pfVar20 = (float *)(lVar14 + (long)iVar9 * 0x10);
          auVar47._0_4_ = *pfVar20 - pfVar20[4];
          auVar47._4_4_ = pfVar20[1] - pfVar20[5];
          auVar47._8_4_ = pfVar20[2] - pfVar20[6];
          auVar47._12_4_ = pfVar20[3] - pfVar20[7];
          auVar34 = NEON_ext(auVar47,auVar47,4,1);
          auVar41._0_4_ = *(float *)(lVar14 + 0x10) - *pfVar20;
          auVar41._4_4_ = *(float *)(lVar14 + 0x14) - pfVar20[1];
          auVar41._8_4_ = *(float *)(lVar14 + 0x18) - pfVar20[2];
          auVar41._12_4_ = *(float *)(lVar14 + 0x1c) - pfVar20[3];
          auVar32 = NEON_ext(auVar41,auVar41,4,1);
          auVar42._0_4_ = auVar41._0_4_ * auVar34._0_4_ - auVar47._0_4_ * auVar32._0_4_;
          auVar42._4_4_ = auVar41._4_4_ * auVar34._4_4_ - auVar47._4_4_ * auVar32._4_4_;
          auVar42._8_4_ = auVar41._8_4_ * auVar47._0_4_ - auVar47._8_4_ * auVar41._0_4_;
          auVar42._12_4_ = auVar41._12_4_ * auVar47._4_4_ - auVar47._12_4_ * auVar41._4_4_;
          auVar32 = NEON_ext(auVar42,auVar42,4,1);
          if (auVar32._0_4_ * auVar32._0_4_ + auVar32._4_4_ * auVar32._4_4_ +
              auVar42._0_4_ * auVar42._0_4_ < fVar37) {
            *(uint *)(param_5 + 1) = uVar13 - 1;
            uVar23 = (ulong)(uVar13 - 1) * 0x10 - 1;
            uVar15 = (uVar23 >> 3) + 1;
            if (uVar23 < 0x18) {
              uVar23 = 0;
            }
            else {
              uVar23 = 0;
              puVar18 = (undefined8 *)(lVar14 + 0x18);
              do {
                uVar23 = uVar23 + 4;
                puVar18[-3] = puVar18[-1];
                puVar18[-2] = *puVar18;
                puVar18[-1] = puVar18[1];
                *puVar18 = puVar18[2];
                puVar18 = puVar18 + 4;
              } while ((uVar15 & 0x3ffffffffffffffc) != uVar23);
            }
            if (((uint)uVar15 >> 1 & 1) != 0) {
              puVar18 = (undefined8 *)(lVar14 + uVar23 * 8 + 0x10);
              lVar14 = (uVar15 >> 1 & 1) * -2;
              do {
                puVar18[-2] = *puVar18;
                puVar18 = puVar18 + 1;
                bVar8 = lVar14 != -1;
                lVar14 = lVar14 + 1;
              } while (bVar8);
            }
            uVar13 = *(uint *)(param_5 + 1);
          }
        }
      }
      pauVar16 = (undefined1 (*) [16])*param_5;
      auVar32 = *pauVar16;
      *(long *)(pauVar16[(long)(int)uVar13 + -1] + 8) = auVar32._8_8_;
      *(long *)pauVar16[(long)(int)uVar13 + -1] = auVar32._0_8_;
      local_e0 = plVar26;
      if (plVar26 != (long *)0x0) {
        lVar14 = *plVar26;
        if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
          puVar18 = (undefined8 *)plVar26[2];
          uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
          if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0))
          {
            *puVar18 = &DAT_03c4e575;
            puVar18[1] = *(undefined8 *)(plVar26[6] + 8);
          }
        }
        puVar18 = (undefined8 *)plVar26[2];
        uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
        if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
          *puVar18 = &DAT_03c2d363;
          uVar10 = nn::os::GetSystemTick();
          puVar18[1] = uVar10;
        }
        if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
          (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
        }
      }
      fVar37 = *param_3;
      if (0.0 < fVar37) {
        fVar38 = param_3[1];
        lVar14 = *(long *)(lVar25 + 0x1000b8);
        if (lVar14 == 0) {
          lVar14 = FUN_00e5d3b4();
          *(long *)(lVar25 + 0x1000b8) = lVar14;
        }
        plVar26 = *(long **)(lVar14 + 0x3e0);
        if (plVar26 != (long *)0x0) {
          lVar14 = *plVar26;
          if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
            (**(code **)(lVar14 + 0x18))("expandByRad2",0xc,*(undefined8 *)(lVar14 + 0x28));
          }
          puVar18 = (undefined8 *)plVar26[2];
          uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
          if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0))
          {
            *puVar18 = "TtexpandByRad2";
            uVar10 = nn::os::GetSystemTick();
            puVar18[1] = uVar10;
          }
          if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar26[6] != 0)) {
            puVar18 = (undefined8 *)plVar26[2];
            uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
            if ((uVar15 <= (ulong)plVar26[3]) && (plVar26[2] = uVar15, puVar18 != (undefined8 *)0x0)
               ) {
              *puVar18 = &DAT_03c4e575;
              puVar18[1] = *(undefined8 *)(plVar26[6] + 8);
            }
          }
          lVar14 = *(long *)(lVar25 + 0x1000b8);
        }
        iVar9 = (int)param_5[1];
        uVar13 = *(uint *)((long)param_5 + 0xc);
        local_70 = plVar26;
        if (lVar14 == 0) {
          lVar14 = FUN_00e5d3b4();
          *(long *)(lVar25 + 0x1000b8) = lVar14;
        }
        lVar25 = *(long *)(*(long *)(lVar14 + 0x3d0) + 0x10);
        if (*(long *)(lVar25 + 8) == 0) {
          lVar14 = (long)iVar9 * 0x10;
          local_68 = lVar14;
          if (lVar25 == 0) goto LAB_03160c6c;
          local_e0 = (long *)(lVar14 + 0x3fU & 0xffffffffffffffc0);
          if (*(long **)(lVar25 + 0x28) < local_e0) {
LAB_03160bc0:
            pauVar16 = (undefined1 (*) [16])FUN_031cf3b4(lVar25,&local_e0);
          }
          else {
            pauVar16 = *(undefined1 (**) [16])(lVar25 + 0x38);
            if (*(ulong *)(lVar25 + 0x40) < (ulong)((long)local_e0 + (long)pauVar16))
            goto LAB_03160bc0;
            *(long *)(lVar25 + 0x38) = (long)local_e0 + (long)pauVar16;
          }
        }
        else {
          local_68 = (long)iVar9 << 4;
LAB_03160c6c:
          lVar14 = local_68;
          pauVar16 = (undefined1 (*) [16])(**(code **)PTR_DAT_047d1a08)(1,&local_68,0x40);
          lVar25 = 0;
        }
        if (0 < iVar9) {
          puVar18 = (undefined8 *)*param_5;
          pauVar22 = pauVar16;
          iVar12 = iVar9;
          do {
            iVar12 = iVar12 + -1;
            uVar1 = *(undefined4 *)(puVar18 + 1);
            uVar2 = *(undefined4 *)((long)puVar18 + 0xc);
            *(undefined8 *)*pauVar22 = *puVar18;
            *(undefined4 *)(*pauVar22 + 8) = uVar1;
            *(undefined4 *)(*pauVar22 + 0xc) = uVar2;
            puVar18 = puVar18 + 2;
            pauVar22 = pauVar22 + 1;
          } while (iVar12 != 0);
        }
        *(undefined4 *)(param_5 + 1) = 0;
        uVar3 = iVar9 - 2;
        auVar32 = *pauVar16;
        auVar58 = pauVar16[(int)uVar3];
        auVar34 = *(undefined1 (*) [16])(param_3 + 4);
        auVar48 = NEON_ext(auVar34,auVar34,8,1);
        fVar44 = auVar32._0_4_;
        auVar29._0_4_ = fVar44 - auVar58._0_4_;
        fVar71 = auVar32._4_4_;
        auVar29._4_4_ = fVar71 - auVar58._4_4_;
        fVar72 = auVar32._8_4_;
        auVar29._8_4_ = fVar72 - auVar58._8_4_;
        auVar29._12_4_ = auVar32._12_4_ - auVar58._12_4_;
        uVar10 = NEON_ext(auVar34._0_8_,auVar48._0_8_,4,1);
        fVar66 = (float)((ulong)uVar10 >> 0x20);
        auVar48 = NEON_ext(auVar29,auVar29,4,1);
        fVar59 = auVar34._0_4_;
        fVar60 = auVar34._4_4_;
        auVar61._0_4_ = auVar29._0_4_ * (float)uVar10 - fVar59 * auVar48._0_4_;
        auVar61._4_4_ = auVar29._4_4_ * fVar66 - fVar60 * auVar48._4_4_;
        auVar61._8_4_ = auVar29._8_4_ * fVar59 - auVar34._8_4_ * auVar29._0_4_;
        auVar61._12_4_ = auVar29._12_4_ * fVar60 - auVar34._12_4_ * auVar29._4_4_;
        auVar48 = NEON_ext(auVar61,auVar61,4,1);
        fVar53 = auVar48._0_4_;
        fVar55 = auVar48._4_4_;
        fVar43 = fVar53 * fVar53 + fVar55 * fVar55 + auVar61._0_4_ * auVar61._0_4_;
        auVar31 = SUB1612(ZEXT816(0),0);
        auVar45 = SUB1612(ZEXT816(0),0);
        if (fVar43 != 0.0) {
          fVar43 = SQRT(fVar43);
          auVar45._0_4_ = fVar53 / fVar43;
          auVar45._4_4_ =
               fVar55 / SQRT(fVar53 * fVar53 + fVar55 * fVar55 + auVar61._0_4_ * auVar61._0_4_);
          auVar45._8_4_ = auVar61._0_4_ / fVar43;
        }
        auVar48 = pauVar16[1];
        auVar62._0_4_ = auVar48._0_4_ - fVar44;
        auVar62._4_4_ = auVar48._4_4_ - fVar71;
        auVar62._8_4_ = auVar48._8_4_ - fVar72;
        auVar62._12_4_ = auVar48._12_4_ - auVar32._12_4_;
        auVar32 = NEON_ext(auVar62,auVar62,4,1);
        fVar50 = (float)uVar10 * auVar62._0_4_ - fVar59 * auVar32._0_4_;
        fVar43 = fVar66 * auVar62._4_4_ - fVar60 * auVar32._4_4_;
        fVar53 = fVar59 * auVar62._8_4_ - auVar34._8_4_ * auVar62._0_4_;
        fVar55 = fVar60 * auVar62._12_4_ - auVar34._12_4_ * auVar62._4_4_;
        auVar4._4_4_ = fVar43;
        auVar4._0_4_ = fVar50;
        auVar4._8_4_ = fVar53;
        auVar4._12_4_ = fVar55;
        auVar5._4_4_ = fVar43;
        auVar5._0_4_ = fVar50;
        auVar5._8_4_ = fVar53;
        auVar5._12_4_ = fVar55;
        auVar32 = NEON_ext(auVar4,auVar5,4,1);
        fVar53 = auVar32._0_4_;
        fVar55 = auVar32._4_4_;
        fVar43 = fVar53 * fVar53 + fVar55 * fVar55 + fVar50 * fVar50;
        if (fVar43 != 0.0) {
          fVar43 = SQRT(fVar43);
          auVar31._0_4_ = fVar53 / fVar43;
          auVar31._4_4_ = fVar55 / SQRT(fVar53 * fVar53 + fVar55 * fVar55 + fVar50 * fVar50);
          auVar31._8_4_ = fVar50 / fVar43;
        }
        if (iVar9 < 2) {
          iVar12 = 0;
        }
        else {
          auVar49._12_4_ =
               -(fVar44 * auVar45._0_4_ + fVar71 * auVar45._4_4_ + fVar72 * auVar45._8_4_) - fVar37;
          auVar49._0_12_ = auVar45;
          auVar35._12_4_ =
               -(auVar48._8_4_ * auVar31._8_4_ +
                auVar48._0_4_ * auVar31._0_4_ + auVar48._4_4_ * auVar31._4_4_) - fVar37;
          auVar35._0_12_ = auVar31;
          iVar12 = 0;
          uVar15 = 0;
          iVar21 = (uVar13 & 0x7fffffff) - iVar9;
          do {
            fVar53 = auVar49._0_4_;
            fVar68 = auVar35._0_4_ + fVar53;
            fVar55 = auVar49._4_4_;
            fVar69 = auVar35._4_4_ + fVar55;
            fVar66 = auVar49._8_4_;
            fVar70 = auVar35._8_4_ + fVar66;
            fVar67 = fVar37 * auVar49._12_4_;
            fVar73 = fVar68 * fVar68 + fVar69 * fVar69 + fVar70 * fVar70;
            pauVar22 = pauVar16 + uVar15;
            fVar43 = *(float *)*pauVar22;
            fVar44 = *(float *)(*pauVar22 + 4);
            fVar71 = *(float *)(*pauVar22 + 8);
            fVar72 = *(float *)(*pauVar22 + 0xc);
            fVar51 = auVar58._0_4_ + fVar37 * fVar53;
            fVar52 = auVar58._4_4_ + fVar37 * fVar55;
            fVar54 = auVar58._8_4_ + fVar37 * fVar66;
            fVar56 = auVar58._12_4_ + fVar67;
            fVar59 = 0.0;
            fVar60 = 0.0;
            fVar50 = 0.0;
            fVar64 = 0.0;
            if (fVar73 <= 2.842171e-14) {
              fVar68 = fVar43 - auVar58._0_4_;
              fVar69 = fVar44 - auVar58._4_4_;
              fVar70 = fVar71 - auVar58._8_4_;
              fVar73 = fVar70 * fVar70 + fVar68 * fVar68 + fVar69 * fVar69;
              if (fVar73 != 0.0) {
                fVar73 = SQRT(fVar73);
                fVar64 = SQRT(fVar70 * fVar70 + fVar68 * fVar68 + fVar69 * fVar69);
                fVar59 = fVar68 / fVar73;
                fVar60 = fVar69 / fVar64;
                fVar50 = fVar70 / fVar73;
                fVar64 = (fVar72 - auVar58._12_4_) / fVar64;
              }
              fVar43 = fVar43 + fVar37 * fVar59;
              fVar44 = fVar44 + fVar37 * fVar60;
              fVar71 = fVar71 + fVar37 * fVar50;
              fVar72 = fVar72 + fVar37 * fVar64;
              fVar53 = fVar37 * fVar53 + fVar43;
              fVar55 = fVar37 * fVar55 + fVar44;
              fVar66 = fVar37 * fVar66 + fVar71;
              fVar67 = fVar67 + fVar72;
              fVar43 = fVar37 * auVar35._0_4_ + fVar43;
              fVar44 = fVar37 * auVar35._4_4_ + fVar44;
              fVar71 = fVar37 * auVar35._8_4_ + fVar71;
              fVar72 = fVar37 * auVar35._12_4_ + fVar72;
LAB_03160f00:
              iVar21 = iVar21 + -1;
              pfVar20 = (float *)(*param_5 + (long)iVar12 * 0x10);
              pfVar20[2] = fVar66;
              pfVar20[3] = fVar67;
              *pfVar20 = fVar53;
              pfVar20[1] = fVar55;
              lVar19 = *param_5 + (long)iVar12 * 0x10;
              iVar12 = iVar12 + 2;
              *(float *)(lVar19 + 0x18) = fVar71;
              *(float *)(lVar19 + 0x1c) = fVar72;
              *(float *)(lVar19 + 0x10) = fVar43;
              *(float *)(lVar19 + 0x14) = fVar44;
            }
            else {
              auVar57 = ZEXT816(0);
              if (fVar73 != 0.0) {
                fVar59 = SQRT(fVar68 * fVar68 + fVar69 * fVar69 + fVar70 * fVar70);
                auVar57._0_4_ = fVar68 / SQRT(fVar73);
                auVar57._4_4_ = fVar69 / fVar59;
                auVar57._8_4_ = fVar70 / SQRT(fVar73);
                auVar57._12_4_ = (auVar35._12_4_ + auVar49._12_4_) / fVar59;
              }
              fVar59 = auVar57._0_4_;
              fVar60 = auVar57._4_4_;
              fVar50 = auVar57._8_4_;
              fVar68 = fVar53 * fVar59 + fVar55 * fVar60 + fVar66 * fVar50;
              fVar64 = fVar37 / fVar68;
              fVar67 = fVar37 / (fVar53 * fVar59 + fVar55 * fVar60 + fVar66 * fVar50);
              fVar53 = fVar43 + fVar59 * fVar64;
              fVar55 = fVar44 + fVar60 * fVar67;
              fVar66 = fVar71 + fVar50 * fVar64;
              fVar67 = fVar72 + auVar57._12_4_ * fVar67;
              if ((0 < iVar21) && (fVar68 < fVar38)) {
                fVar43 = fVar43 + fVar37 * fVar59;
                fVar44 = fVar44 + fVar37 * fVar60;
                fVar71 = fVar71 + fVar37 * fVar50;
                fVar72 = fVar72 + fVar37 * auVar57._12_4_;
                fVar68 = fVar59 * (fVar43 - fVar51);
                fVar69 = fVar60 * (fVar44 - fVar52);
                fVar70 = fVar50 * (fVar71 - fVar54);
                fVar59 = fVar59 * (fVar53 - fVar43);
                fVar60 = fVar60 * (fVar55 - fVar44);
                fVar50 = fVar50 * (fVar66 - fVar71);
                fVar64 = fVar50 + fVar59 + fVar60;
                fVar50 = fVar50 + fVar59 + fVar60;
                fVar64 = fVar64 / (fVar70 + fVar68 + fVar69 + fVar64);
                fVar50 = fVar50 / (fVar70 + fVar68 + fVar69 + fVar50);
                fVar53 = fVar53 + (fVar51 - fVar53) * fVar64;
                fVar55 = fVar55 + (fVar52 - fVar55) * fVar50;
                fVar66 = fVar66 + (fVar54 - fVar66) * fVar64;
                fVar67 = fVar67 + (fVar56 - fVar67) * fVar50;
                fVar43 = fVar43 + (fVar43 - fVar53);
                fVar44 = fVar44 + (fVar44 - fVar55);
                fVar71 = fVar71 + (fVar71 - fVar66);
                fVar72 = fVar72 + (fVar72 - fVar67);
                goto LAB_03160f00;
              }
              pfVar20 = (float *)(*param_5 + (long)iVar12 * 0x10);
              pfVar20[2] = fVar66;
              pfVar20[3] = fVar67;
              *pfVar20 = fVar53;
              pfVar20[1] = fVar55;
              iVar12 = iVar12 + 1;
            }
            *(int *)(param_5 + 1) = iVar12;
            if (uVar15 == uVar3) {
              uVar15 = (ulong)uVar3 + 1;
              auVar36 = auVar35;
            }
            else {
              pauVar22 = pauVar16 + uVar15;
              uVar15 = uVar15 + 1;
              uVar11 = *(undefined8 *)(pauVar16[uVar15] + 8);
              uVar10 = *(undefined8 *)pauVar16[uVar15];
              auVar32 = *(undefined1 (*) [16])(param_3 + 4);
              auVar34 = NEON_ext(auVar32,auVar32,8,1);
              fVar43 = *(float *)pauVar22[2] - (float)uVar10;
              fVar44 = *(float *)(pauVar22[2] + 4) - (float)((ulong)uVar10 >> 0x20);
              fVar71 = *(float *)(pauVar22[2] + 8) - (float)uVar11;
              fVar72 = *(float *)(pauVar22[2] + 0xc) - (float)((ulong)uVar11 >> 0x20);
              uVar10 = NEON_ext(auVar32._0_8_,auVar34._0_8_,4,1);
              auVar6._4_4_ = fVar44;
              auVar6._0_4_ = fVar43;
              auVar6._8_4_ = fVar71;
              auVar6._12_4_ = fVar72;
              auVar7._4_4_ = fVar44;
              auVar7._0_4_ = fVar43;
              auVar7._8_4_ = fVar71;
              auVar7._12_4_ = fVar72;
              auVar34 = NEON_ext(auVar6,auVar7,4,1);
              auVar63._0_4_ = fVar43 * (float)uVar10 - auVar32._0_4_ * auVar34._0_4_;
              auVar63._4_4_ =
                   fVar44 * (float)((ulong)uVar10 >> 0x20) - auVar32._4_4_ * auVar34._4_4_;
              auVar63._8_4_ = fVar71 * auVar32._0_4_ - auVar32._8_4_ * fVar43;
              auVar63._12_4_ = fVar72 * auVar32._4_4_ - auVar32._12_4_ * fVar44;
              auVar32 = NEON_ext(auVar63,auVar63,4,1);
              fVar43 = auVar32._0_4_;
              fVar44 = auVar32._4_4_;
              fVar54 = (float)*(undefined8 *)(*pauVar22 + 8);
              fVar56 = (float)((ulong)*(undefined8 *)(*pauVar22 + 8) >> 0x20);
              fVar51 = (float)*(undefined8 *)*pauVar22;
              fVar52 = (float)((ulong)*(undefined8 *)*pauVar22 >> 0x20);
              fVar71 = fVar43 * fVar43 + fVar44 * fVar44 + auVar63._0_4_ * auVar63._0_4_;
              auVar65 = SUB1612(ZEXT816(0),0);
              if (fVar71 != 0.0) {
                fVar71 = SQRT(fVar71);
                auVar65._0_4_ = fVar43 / fVar71;
                auVar65._4_4_ =
                     fVar44 / SQRT(fVar43 * fVar43 + fVar44 * fVar44 + auVar63._0_4_ * auVar63._0_4_
                                  );
                auVar65._8_4_ = auVar63._0_4_ / fVar71;
              }
              auVar36._12_4_ =
                   -(*(float *)pauVar22[2] * auVar65._0_4_ +
                     *(float *)(pauVar22[2] + 4) * auVar65._4_4_ +
                    *(float *)(pauVar22[2] + 8) * auVar65._8_4_) - fVar37;
              auVar36._0_12_ = auVar65;
              auVar49 = auVar35;
            }
            auVar58._12_4_ = fVar56;
            auVar58._8_4_ = fVar54;
            auVar58._4_4_ = fVar52;
            auVar58._0_4_ = fVar51;
            auVar35 = auVar36;
          } while (uVar15 != iVar9 - 1);
        }
        auVar32 = *(undefined1 (*) [16])*param_5;
        pauVar22 = (undefined1 (*) [16])*param_5 + iVar12;
        *(long *)(*pauVar22 + 8) = auVar32._8_8_;
        *(long *)*pauVar22 = auVar32._0_8_;
        *(int *)(param_5 + 1) = iVar12 + 1;
        if (lVar25 == 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1,pauVar16,lVar14);
        }
        else {
          uVar15 = lVar14 + 0x3fU & 0xffffffffffffffc0;
          if ((*(ulong *)(lVar25 + 0x28) < uVar15) ||
             (*(undefined1 **)(lVar25 + 0x38) != *pauVar16 + uVar15)) {
            if (*(ulong *)(lVar25 + 0x28) < uVar15 + 0x40) {
              *(int *)(*(long *)(lVar25 + 0x30) + 0x20) =
                   *(int *)(*(long *)(lVar25 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(lVar25 + 0x10) + 0x18))
                        (*(long **)(lVar25 + 0x10),
                         (long)pauVar16 - (long)*(int *)(pauVar16[-1] + 0xc),uVar15 + 0x44);
            }
            else {
              if (*(undefined1 **)(lVar25 + 0x38) == *pauVar16 + uVar15) {
                *(undefined1 (**) [16])(lVar25 + 0x38) = pauVar16;
                goto LAB_031610b4;
              }
              FUN_031cf778(lVar25);
            }
          }
          else {
            *(undefined1 (**) [16])(lVar25 + 0x38) = pauVar16;
            if (*(undefined1 (**) [16])(lVar25 + 0x48) == pauVar16) {
LAB_031610b4:
              FUN_031cf578(lVar25);
            }
          }
        }
        if (local_70 != (long *)0x0) {
          lVar25 = *local_70;
          if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (local_70[6] != 0)) {
            puVar18 = (undefined8 *)local_70[2];
            uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
            if ((uVar15 <= (ulong)local_70[3]) &&
               (local_70[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
              *puVar18 = &DAT_03c4e575;
              puVar18[1] = *(undefined8 *)(local_70[6] + 8);
            }
          }
          puVar18 = (undefined8 *)local_70[2];
          uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
          if ((uVar15 <= (ulong)local_70[3]) && (local_70[2] = uVar15, puVar18 != (undefined8 *)0x0)
             ) {
            *puVar18 = &DAT_03c2d363;
            uVar10 = nn::os::GetSystemTick();
            puVar18[1] = uVar10;
          }
          if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
            (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
          }
        }
      }
      uVar10 = 1;
    }
  }
  lVar25 = local_a0;
  if (local_88 == local_a0) {
    local_98 = local_98 & 0xffffffff00000000;
  }
  if (local_90 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_0316121c;
  }
  uVar15 = local_80 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_90 + 0x28) < uVar15) || (*(long *)(local_90 + 0x38) != uVar15 + local_88)) {
    if (local_88 == 0) goto LAB_0316121c;
    if (*(ulong *)(local_90 + 0x28) < uVar15 + 0x40) {
      *(int *)(*(long *)(local_90 + 0x30) + 0x20) = *(int *)(*(long *)(local_90 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_90 + 0x10) + 0x18))
                (*(long **)(local_90 + 0x10),local_88 - *(int *)(local_88 + -4),uVar15 + 0x44);
      goto LAB_0316121c;
    }
    if (*(long *)(local_90 + 0x38) != uVar15 + local_88) {
      FUN_031cf778();
      goto LAB_0316121c;
    }
    *(long *)(local_90 + 0x38) = local_88;
  }
  else {
    *(long *)(local_90 + 0x38) = local_88;
    if (*(long *)(local_90 + 0x48) != local_88) goto LAB_0316121c;
  }
  FUN_031cf578();
LAB_0316121c:
  uVar23 = local_98;
  uVar15 = local_98 >> 0x20;
  local_98 = uVar15 << 0x20;
  if ((lVar25 != 0) && (-1 < (long)uVar23)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar25,uVar15 << 4);
  }
  if (local_78 != (long *)0x0) {
    lVar25 = *local_78;
    if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (local_78[6] != 0)) {
      puVar18 = (undefined8 *)local_78[2];
      uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
      if ((uVar15 <= (ulong)local_78[3]) && (local_78[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
        *puVar18 = &DAT_03c4e575;
        puVar18[1] = *(undefined8 *)(local_78[6] + 8);
      }
    }
    puVar18 = (undefined8 *)local_78[2];
    uVar15 = (long)puVar18 + 0x17U & 0xfffffffffffffff8;
    if ((uVar15 <= (ulong)local_78[3]) && (local_78[2] = uVar15, puVar18 != (undefined8 *)0x0)) {
      *puVar18 = &DAT_03c2d363;
      uVar11 = nn::os::GetSystemTick();
      puVar18[1] = uVar11;
    }
    if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
      (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
    }
  }
  return uVar10;
}


