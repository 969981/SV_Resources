/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02223f80; name: FUN_02223f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02223f80(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  bool bVar15;
  short sVar16;
  ushort *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  float fVar32;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar79;
  float fVar80;
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  float fStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  
  piVar9 = (int *)*param_1;
  puVar17 = (ushort *)((long)piVar9 - (long)*piVar9);
  if (*puVar17 < 0xb) {
    iVar12 = 0;
    iVar8 = 0;
    iVar7 = 0;
    if (8 < *puVar17) goto LAB_02223fbc;
  }
  else {
    iVar7 = 0;
    if ((ulong)puVar17[5] != 0) {
      iVar7 = *(int *)((long)piVar9 + (ulong)puVar17[5]);
    }
LAB_02223fbc:
    iVar12 = iVar7;
    if ((ulong)puVar17[4] == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)((long)piVar9 + (ulong)puVar17[4]);
    }
  }
  if (iVar12 - iVar8 == 1) {
    return;
  }
  local_60 = param_1[0x22];
  uStack_58 = param_1[0x23];
  local_50 = param_1[0x24];
  plVar13 = (long *)param_1[0x25];
  local_48 = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  if ((code *)param_1[2] == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (*(code *)param_1[2])(&local_40,param_1 + 6,&local_60);
    plVar13 = local_48;
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (local_40 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_40 + 0x1a) == 0) {
LAB_022247cc:
    puVar6 = local_40;
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar16 = *psVar1;
      cVar3 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar16 == 1) {
      piVar9 = (int *)((long)local_40 + 0x1c);
      do {
        iVar8 = *piVar9;
        cVar3 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar15) {
          *piVar9 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == -1) {
        return;
      }
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar11 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar11;
      local_80 = *puVar6;
      FUN_00c44438(lVar11 + 0x8040,&local_80);
      return;
    }
    if (sVar16 != 0) {
      return;
    }
LAB_02224280:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  psVar1 = (short *)((long)local_40 + 0x1a);
  sVar16 = *(short *)((long)local_40 + 0x1a);
LAB_02224080:
  sVar2 = *psVar1;
  if (sVar2 == sVar16) {
    cVar3 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar16 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_022240a4;
    bVar15 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_022240a4:
    bVar15 = false;
  }
  if (!bVar15) goto code_r0x022240ac;
  plVar13 = (long *)(local_40[2] + -0x28);
  if (local_40[2] == 0) goto LAB_022247cc;
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_00d0a71c(&local_70,&local_40);
  lVar11 = FUN_01180e7c(param_1,&local_70);
  puVar6 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar16 = *psVar1;
      cVar3 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar16 == 1) {
      piVar9 = (int *)((long)local_70 + 0x1c);
      do {
        iVar8 = *piVar9;
        cVar3 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar15) {
          *piVar9 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_80 = *puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_80);
      }
    }
    else if (sVar16 == 0) goto LAB_02224280;
  }
  if (lVar11 == 0) goto LAB_022247b4;
  uVar14 = param_1[0x2c];
  auVar27 = ZEXT816(0);
  if (uVar14 != 0) {
    uVar18 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar14 - 1 & 0x621830a3d0c277e;
    }
    else {
      uVar19 = 0x621830a3d0c277e;
      if (uVar14 < 0x621830a3d0c277f) {
        uVar19 = 0;
        if (uVar14 != 0) {
          uVar19 = 0x621830a3d0c277e / uVar14;
        }
        uVar19 = 0x621830a3d0c277e - uVar19 * uVar14;
      }
    }
    plVar20 = *(long **)(param_1[0x2b] + uVar19 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar20[1] != 0x621830a3d0c277e) {
            if ((plVar20[1] & uVar14 - 1) == uVar19) goto LAB_0222419c;
            break;
          }
          if (plVar20[2] == 0x621830a3d0c277e) goto LAB_022242e0;
LAB_0222419c:
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar20[1];
          if (uVar18 == 0x621830a3d0c277e) {
            if (plVar20[2] == 0x621830a3d0c277e) goto LAB_022242e0;
          }
          else {
            if (uVar14 <= uVar18) {
              uVar21 = 0;
              if (uVar14 != 0) {
                uVar21 = uVar18 / uVar14;
              }
              uVar18 = uVar18 - uVar21 * uVar14;
            }
            if (uVar18 != uVar19) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_022242e4;
code_r0x022240ac:
  sVar16 = sVar2;
  if (sVar2 == 0) goto LAB_022247c8;
  goto LAB_02224080;
LAB_022242e0:
  auVar27 = *(undefined1 (*) [16])(plVar20 + 6);
LAB_022242e4:
  uStack_78 = auVar27._8_8_;
  local_80 = auVar27._0_8_;
  *(undefined8 *)(lVar11 + 0xc0) = local_80;
  *(undefined8 *)(lVar11 + 200) = uStack_78;
  *(undefined1 *)(lVar11 + 0xe0) = 1;
  uVar14 = param_1[0x2c];
  if (uVar14 != 0) {
    uVar18 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar14 - 1 & 0xc801830bf868d88f;
    }
    else {
      uVar19 = 0xc801830bf868d88f;
      if (uVar14 < 0xc801830bf868d890) {
        uVar19 = 0;
        if (uVar14 != 0) {
          uVar19 = 0xc801830bf868d88f / uVar14;
        }
        uVar19 = 0xc801830bf868d88f - uVar19 * uVar14;
      }
    }
    plVar20 = *(long **)(param_1[0x2b] + uVar19 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      uVar21 = uVar14 - 1;
      if (uVar18 < 2) {
        do {
          if (plVar20[1] != 0xc801830bf868d88f) {
            if ((plVar20[1] & uVar21) == uVar19) goto LAB_0222439c;
            break;
          }
          if (plVar20[2] == -0x37fe7cf407972771) goto LAB_02224404;
LAB_0222439c:
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar20[1];
          if (uVar22 == 0xc801830bf868d88f) {
            if (plVar20[2] == -0x37fe7cf407972771) goto LAB_02224404;
          }
          else {
            if (uVar14 <= uVar22) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar22 / uVar14;
              }
              uVar22 = uVar22 - uVar4 * uVar14;
            }
            if (uVar22 != uVar19) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_022247b4;
LAB_02224404:
  if (uVar18 < 2) {
    uVar19 = uVar21 & 0xc801830bf868d88f;
  }
  else {
    uVar19 = 0xc801830bf868d88f;
    if (uVar14 < 0xc801830bf868d890) {
      uVar19 = 0;
      if (uVar14 != 0) {
        uVar19 = 0xc801830bf868d88f / uVar14;
      }
      uVar19 = 0xc801830bf868d88f - uVar19 * uVar14;
    }
  }
  plVar20 = *(long **)(param_1[0x2b] + uVar19 * 8);
  lStack_a8 = 0;
  local_b0 = 0;
  fStack_98 = 0.0;
  local_a0 = 0;
  if (plVar20 != (long *)0x0) {
    plVar20 = (long *)*plVar20;
    fStack_98 = 0.0;
    local_a0 = 0;
    if (plVar20 != (long *)0x0) {
      if (uVar18 < 2) {
        while( true ) {
          if (plVar20[1] != 0xc801830bf868d88f) {
            if ((plVar20[1] & uVar21) == uVar19) goto LAB_02224460;
            goto LAB_022244c4;
          }
          if (plVar20[2] == -0x37fe7cf407972771) break;
LAB_02224460:
          plVar20 = (long *)*plVar20;
          if (plVar20 == (long *)0x0) goto LAB_022244c4;
        }
LAB_022244cc:
        auVar26 = SUB1612(*(undefined1 (*) [16])(plVar20 + 6),0);
      }
      else {
        do {
          uVar18 = plVar20[1];
          if (uVar18 == 0xc801830bf868d88f) {
            if (plVar20[2] == -0x37fe7cf407972771) goto LAB_022244cc;
          }
          else {
            if (uVar14 <= uVar18) {
              uVar21 = 0;
              if (uVar14 != 0) {
                uVar21 = uVar18 / uVar14;
              }
              uVar18 = uVar18 - uVar21 * uVar14;
            }
            if (uVar18 != uVar19) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
LAB_022244c4:
        auVar26 = SUB1612(ZEXT816(0),0);
      }
      fStack_98 = auVar26._8_4_;
      local_a0 = auVar26._0_8_;
    }
  }
  auVar27 = FUN_0211fe50(&local_80);
  auVar83._4_4_ = fStack_98;
  auVar83._0_4_ = fStack_98;
  auVar83._8_4_ = fStack_98;
  auVar83._12_4_ = fStack_98;
  auVar68._4_12_ = auVar83._4_12_;
  auVar68._0_4_ = (float)local_a0;
  auVar84._0_8_ = auVar68._0_8_;
  auVar84._8_4_ = local_a0._4_4_;
  auVar84._12_4_ = fStack_98;
  auVar69._8_8_ = auVar84._8_8_;
  auVar69._4_4_ = fStack_98;
  auVar69._0_4_ = (float)local_a0;
  auVar70._0_12_ = auVar69._0_12_;
  auVar70._12_4_ = fStack_98;
  auVar83 = NEON_ext(auVar70,auVar70,8,1);
  fVar32 = auVar27._12_4_;
  fVar23 = auVar83._0_4_;
  auVar71._4_12_ = auVar70._4_12_;
  auVar71._0_4_ = fVar23;
  fVar54 = auVar83._8_4_;
  auVar73._0_8_ = auVar71._0_8_;
  auVar73._8_4_ = fVar54;
  auVar73._12_4_ = fStack_98;
  auVar72._8_8_ = auVar73._8_8_;
  auVar72._4_4_ = (float)local_a0;
  auVar72._0_4_ = fVar23;
  auVar74._0_12_ = auVar72._0_12_;
  auVar74._12_4_ = local_a0._4_4_;
  fVar24 = auVar27._0_4_;
  auVar75 = NEON_ext(auVar74,auVar83,8,1);
  fVar53 = auVar27._8_4_;
  auVar48._4_4_ = fVar53;
  auVar48._0_4_ = fVar53;
  auVar48._8_4_ = fVar53;
  auVar48._12_4_ = fVar53;
  auVar42 = NEON_ext(auVar48,auVar27,0xc,1);
  auVar84 = NEON_ext(auVar75,auVar75,0xc,1);
  fVar51 = auVar27._4_4_;
  auVar46._4_4_ = fVar51;
  auVar46._0_4_ = fVar51;
  auVar46._8_4_ = fVar51;
  auVar46._12_4_ = fVar51;
  fVar67 = (float)_DAT_03cab640;
  fVar79 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar80 = (float)_UNK_03cab648;
  fVar56 = (float)((ulong)_UNK_03cab648 >> 0x20);
  auVar27 = NEON_ext(auVar46,auVar42,0xc,1);
  uVar14 = param_1[0x2c];
  auVar35._0_4_ = -fVar24;
  fVar36 = -fVar51;
  auVar75._8_4_ = -fVar53;
  auVar75._4_4_ = auVar75._8_4_;
  auVar75._0_4_ = auVar75._8_4_;
  auVar75._12_4_ = auVar75._8_4_;
  auVar35._4_12_ = auVar75._4_12_;
  auVar39._0_8_ = auVar35._0_8_;
  auVar39._8_4_ = fVar36;
  auVar39._12_4_ = auVar75._8_4_;
  auVar43._8_8_ = auVar39._8_8_;
  auVar43._4_4_ = auVar75._8_4_;
  auVar43._0_4_ = auVar35._0_4_;
  auVar28._0_12_ = auVar43._0_12_;
  auVar28._12_4_ = auVar75._8_4_;
  fVar49 = ((float)local_a0 * fVar32 + fVar24 * fVar67 * 0.0 +
           auVar84._0_4_ * auVar27._0_4_ * fVar67) - auVar42._0_4_ * fVar23;
  fVar51 = (local_a0._4_4_ * fVar32 + fVar51 * fVar79 * 0.0 + auVar84._4_4_ * auVar27._4_4_ * fVar79
           ) - auVar42._4_4_ * auVar83._4_4_;
  fVar53 = (fStack_98 * fVar32 + fVar53 * fVar80 * 0.0 + auVar84._8_4_ * auVar27._8_4_ * fVar80) -
           auVar42._8_4_ * fVar54;
  fVar55 = (fVar32 * 0.0 + (float)local_a0 * fVar24 * fVar56 +
           auVar84._12_4_ * auVar27._12_4_ * fVar56) - auVar42._12_4_ * auVar83._12_4_;
  auVar82._4_4_ = fVar53;
  auVar82._0_4_ = fVar53;
  auVar82._8_4_ = fVar53;
  auVar82._12_4_ = fVar53;
  auVar47._4_4_ = fVar51;
  auVar47._0_4_ = fVar51;
  auVar47._8_4_ = fVar51;
  auVar47._12_4_ = fVar51;
  auVar27._4_4_ = fVar51;
  auVar27._0_4_ = fVar49;
  auVar27._8_4_ = fVar53;
  auVar27._12_4_ = fVar55;
  auVar43 = NEON_ext(auVar82,auVar27,0xc,1);
  auVar39 = NEON_ext(auVar47,auVar43,0xc,1);
  auVar48 = NEON_ext(auVar28,auVar28,8,1);
  fVar24 = auVar48._0_4_;
  auVar78._4_12_ = auVar28._4_12_;
  auVar78._0_4_ = fVar24;
  auVar42._0_8_ = auVar78._0_8_;
  auVar42._8_4_ = auVar48._8_4_;
  auVar42._12_4_ = auVar75._8_4_;
  auVar66._8_8_ = auVar42._8_8_;
  auVar66._4_4_ = auVar35._0_4_;
  auVar66._0_4_ = fVar24;
  auVar45._0_12_ = auVar66._0_12_;
  auVar45._12_4_ = fVar36;
  auVar27 = NEON_ext(auVar45,auVar48,8,1);
  auVar27 = NEON_ext(auVar27,auVar27,0xc,1);
  if (uVar14 != 0) {
    uVar18 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
    uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar14 - 1 & 0x306313b8c647eda4;
    }
    else {
      uVar19 = 0x306313b8c647eda4;
      if (uVar14 < 0x306313b8c647eda5) {
        uVar19 = 0;
        if (uVar14 != 0) {
          uVar19 = 0x306313b8c647eda4 / uVar14;
        }
        uVar19 = 0x306313b8c647eda4 - uVar19 * uVar14;
      }
    }
    plVar20 = *(long **)(param_1[0x2b] + uVar19 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar18 < 2) {
        do {
          if (plVar20[1] != 0x306313b8c647eda4) {
            if ((plVar20[1] & uVar14 - 1) == uVar19) goto LAB_02224658;
            break;
          }
          if (plVar20[2] == 0x306313b8c647eda4) goto LAB_022246c0;
LAB_02224658:
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar18 = plVar20[1];
          if (uVar18 == 0x306313b8c647eda4) {
            if (plVar20[2] == 0x306313b8c647eda4) goto LAB_022246c0;
          }
          else {
            if (uVar14 <= uVar18) {
              uVar21 = 0;
              if (uVar14 != 0) {
                uVar21 = uVar18 / uVar14;
              }
              uVar18 = uVar18 - uVar21 * uVar14;
            }
            if (uVar18 != uVar19) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
LAB_022246c8:
  lStack_88 = lStack_a8;
  local_90 = local_b0;
  auVar28 = FUN_0211fe50(&local_90);
  fVar25 = auVar28._0_4_;
  fVar34 = -fVar25;
  fVar52 = auVar28._4_4_;
  fVar37 = -fVar52;
  fVar31 = auVar28._8_4_;
  fVar38 = -fVar31;
  fVar33 = auVar28._12_4_;
  auVar40._4_4_ = fVar31;
  auVar40._0_4_ = fVar31;
  auVar40._8_4_ = fVar31;
  auVar40._12_4_ = fVar31;
  auVar44._4_4_ = fVar52;
  auVar44._0_4_ = fVar52;
  auVar44._8_4_ = fVar52;
  auVar44._12_4_ = fVar52;
  auVar57._4_4_ = fVar38;
  auVar57._0_4_ = fVar38;
  auVar57._8_4_ = fVar38;
  auVar57._12_4_ = fVar38;
  auVar28 = NEON_ext(auVar40,auVar28,0xc,1);
  auVar45 = NEON_ext(auVar44,auVar28,0xc,1);
  auVar41._0_8_ =
       CONCAT44(*(float *)(lVar11 + 0xa4) * *(float *)(lVar11 + 0xb4),
                *(float *)(lVar11 + 0xa0) * *(float *)(lVar11 + 0xb0));
  auVar41._8_4_ = *(float *)(lVar11 + 0xa8) * *(float *)(lVar11 + 0xb8);
  auVar41._12_4_ = *(float *)(lVar11 + 0xac) * *(float *)(lVar11 + 0xbc);
  auVar76._8_8_ = auVar41._8_8_;
  auVar76._0_8_ = auVar41._0_8_;
  auVar58._4_12_ = auVar57._4_12_;
  auVar58._0_4_ = fVar34;
  auVar60._0_8_ = auVar58._0_8_;
  auVar60._8_4_ = fVar37;
  auVar60._12_4_ = fVar38;
  auVar59._8_8_ = auVar60._8_8_;
  auVar59._4_4_ = fVar38;
  auVar59._0_4_ = fVar34;
  auVar61._0_12_ = auVar59._0_12_;
  auVar61._12_4_ = fVar38;
  auVar77._0_12_ = auVar76._0_12_;
  auVar77._12_4_ = 0;
  auVar42 = NEON_ext(auVar77,auVar41,0xc,1);
  fVar50 = ((float)local_a0 * fVar33 + fVar25 * fVar67 * 0.0 +
           auVar84._0_4_ * auVar45._0_4_ * fVar67) - auVar28._0_4_ * fVar23;
  fVar52 = (local_a0._4_4_ * fVar33 + fVar52 * fVar79 * 0.0 + auVar84._4_4_ * auVar45._4_4_ * fVar79
           ) - auVar28._4_4_ * auVar83._4_4_;
  fVar54 = (fStack_98 * fVar33 + fVar31 * fVar80 * 0.0 + auVar84._8_4_ * auVar45._8_4_ * fVar80) -
           auVar28._8_4_ * fVar54;
  fVar56 = (fVar33 * 0.0 + (float)local_a0 * fVar25 * fVar56 +
           auVar84._12_4_ * auVar45._12_4_ * fVar56) - auVar28._12_4_ * auVar83._12_4_;
  auVar78 = NEON_ext(auVar42,auVar77,4,1);
  auVar29._4_4_ = fVar54;
  auVar29._0_4_ = fVar54;
  auVar29._8_4_ = fVar54;
  auVar29._12_4_ = fVar54;
  auVar81._4_4_ = fVar52;
  auVar81._0_4_ = fVar52;
  auVar81._8_4_ = fVar52;
  auVar81._12_4_ = fVar52;
  auVar5._4_4_ = fVar52;
  auVar5._0_4_ = fVar50;
  auVar5._8_4_ = fVar54;
  auVar5._12_4_ = fVar56;
  auVar28 = NEON_ext(auVar29,auVar5,0xc,1);
  auVar45 = NEON_ext(auVar61,auVar61,8,1);
  fVar23 = auVar45._0_4_;
  auVar62._4_12_ = auVar61._4_12_;
  auVar62._0_4_ = fVar23;
  auVar64._0_8_ = auVar62._0_8_;
  auVar64._8_4_ = auVar45._8_4_;
  auVar64._12_4_ = fVar38;
  auVar63._8_8_ = auVar64._8_8_;
  auVar63._4_4_ = fVar34;
  auVar63._0_4_ = fVar23;
  auVar65._0_12_ = auVar63._0_12_;
  auVar65._12_4_ = fVar37;
  auVar82 = NEON_ext(auVar81,auVar28,0xc,1);
  auVar66 = NEON_ext(auVar65,auVar45,8,1);
  auVar66 = NEON_ext(auVar66,auVar66,0xc,1);
  auVar42 = NEON_ext(auVar42,auVar42,8,1);
  auVar42 = NEON_ext(auVar78,auVar42,0xc,1);
  *(undefined1 *)(lVar11 + 0xe0) = 1;
  auVar30._0_8_ =
       CONCAT44(auVar42._4_4_ *
                (((fVar37 * fVar56 + fVar33 * fVar52 * fVar79 +
                  auVar66._4_4_ * auVar82._4_4_ * fVar79) - auVar28._4_4_ * auVar45._4_4_) -
                ((fVar36 * fVar55 + fVar32 * fVar51 * fVar79 +
                 auVar27._4_4_ * auVar39._4_4_ * fVar79) - auVar43._4_4_ * auVar48._4_4_)),
                auVar42._0_4_ *
                (((fVar34 * fVar56 + fVar33 * fVar50 * fVar67 +
                  auVar66._0_4_ * auVar82._0_4_ * fVar67) - auVar28._0_4_ * fVar23) -
                ((auVar35._0_4_ * fVar55 + fVar32 * fVar49 * fVar67 +
                 auVar27._0_4_ * auVar39._0_4_ * fVar67) - auVar43._0_4_ * fVar24)));
  auVar30._8_4_ =
       auVar42._8_4_ *
       (((fVar38 * fVar56 + fVar33 * fVar54 * fVar80 + auVar66._8_4_ * auVar82._8_4_ * fVar80) -
        auVar28._8_4_ * auVar45._8_4_) -
       ((auVar75._8_4_ * fVar55 + fVar32 * fVar53 * fVar80 + auVar27._8_4_ * auVar39._8_4_ * fVar80)
       - auVar43._8_4_ * auVar48._8_4_));
  auVar30._12_4_ = auVar42._12_4_ * 0.0;
  *(long *)(lVar11 + 0x98) = auVar30._8_8_;
  *(undefined8 *)(lVar11 + 0x90) = auVar30._0_8_;
LAB_022247b4:
  (**(code **)(*plVar13 + 0x60))(plVar13);
LAB_022247c8:
  if (local_40 == (undefined8 *)0x0) {
    return;
  }
  goto LAB_022247cc;
LAB_022246c0:
  local_b0 = plVar20[6];
  lStack_a8 = plVar20[7];
  goto LAB_022246c8;
}


