/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133f79c; name: FUN_0133f79c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133f79c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  char *pcVar8;
  ushort uVar9;
  int iVar10;
  undefined8 *puVar11;
  float *pfVar12;
  long lVar13;
  int *piVar14;
  uint *puVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  uint *puVar19;
  ushort *puVar20;
  long *plVar21;
  bool bVar22;
  short sVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  int iVar64;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar67 [12];
  int iVar65;
  int iVar72;
  undefined1 in_q3 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  int iVar73;
  undefined1 auVar66 [12];
  int iVar74;
  undefined1 auVar71 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  undefined1 auVar107 [12];
  float fVar114;
  float fVar115;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar116;
  float fVar122;
  float fVar123;
  undefined1 auVar117 [16];
  float fVar124;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar125;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar126 [16];
  int iVar135;
  int iVar136;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar137;
  float fVar138;
  float fVar139;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  code *local_1b8;
  undefined1 auStack_1a0 [96];
  char local_140;
  undefined7 uStack_13f;
  char *pcStack_138;
  char *local_130;
  long *local_128;
  long *local_120;
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  char *local_d8;
  long *local_d0;
  long *local_c8;
  char *local_c0;
  char *pcStack_b8;
  long *local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined2 local_58;
  undefined1 local_56;
  
  local_1b8 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_1a0);
    local_1b8 = *(code **)(param_3 + 8);
  }
  local_90 = param_2[0x22];
  uStack_88 = param_2[0x23];
  local_80 = param_2[0x24];
  local_78 = (long *)param_2[0x25];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  if ((code *)param_2[2] == (code *)0x0) {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
  }
  else {
    (*(code *)param_2[2])(&local_70,param_2 + 6,&local_90);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_01340a44(&local_140,param_2,1);
  if (local_140 != '\0') {
    local_c0 = pcStack_138;
    pcStack_b8 = local_130;
    local_b0 = local_128;
    local_a8 = local_120;
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x18))();
    }
    if ((code *)param_2[2] == (code *)0x0) {
      local_e0 = (char *)0x0;
      local_d8 = (char *)0x0;
    }
    else {
      (*(code *)param_2[2])(&local_e0,param_2 + 6,&local_c0);
    }
    FUN_00d0a34c(&local_a0,&local_e0);
    pcVar8 = local_e0;
    if (local_e0 != (char *)0x0) {
      psVar1 = (short *)(local_e0 + 0x18);
      do {
        sVar23 = *psVar1;
        cVar4 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar22) {
          *psVar1 = sVar23 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar23 == 1) {
        piVar14 = (int *)(local_e0 + 0x1c);
        do {
          iVar10 = *piVar14;
          cVar4 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(piVar14,0x10);
          if (bVar22) {
            *piVar14 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_f0 = *(undefined8 **)pcVar8;
          FUN_00c44438(lVar13 + 0x8040,&local_f0);
        }
      }
      else if (sVar23 == 0) goto LAB_0133fa10;
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_140 != '\0') {
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      local_140 = '\0';
    }
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_e0 = *(char **)PTR_DAT_047d3e30;
  local_d8 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_d0 = *(long **)(PTR_DAT_047d3e30 + 0x10);
  local_c8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))();
  }
  FUN_01340a44(&local_140,param_2,0x100000001);
  plVar17 = local_120;
  if (local_140 != '\0') {
    local_e0 = pcStack_138;
    local_d8 = local_130;
    local_d0 = local_128;
    if (local_120 != (long *)0x0) {
      (**(code **)(*local_120 + 0x18))(local_120);
    }
    plVar21 = local_c8;
    local_c8 = plVar17;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x20))();
    }
    if (local_140 != '\0') {
      if (local_120 != (long *)0x0) {
        (**(code **)(*local_120 + 0x20))();
      }
      local_140 = '\0';
    }
  }
  if ((local_70 != (undefined8 *)0x0) && (*(short *)((long)local_70 + 0x1a) != 0)) {
    psVar1 = (short *)((long)local_70 + 0x1a);
    sVar23 = *(short *)((long)local_70 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar23) {
        cVar4 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar22) {
          *psVar1 = sVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0133fc4c;
        bVar22 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0133fc4c:
        bVar22 = false;
      }
      if (bVar22) {
        plVar17 = (long *)(local_70[2] + -0x28);
        if (local_70[2] != 0) {
          piVar14 = (int *)*param_2;
          fStack_1c8 = 0.0;
          fStack_1c4 = 0.0;
          local_1d0 = 0.0;
          fStack_1cc = 0.0;
          if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0x17) ||
             (uVar18 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[0xb], uVar18 == 0)) {
LAB_0133fd4c:
            iVar10 = 0;
          }
          else {
            puVar15 = (uint *)((long)piVar14 + uVar18);
            if (*(uint *)((long)puVar15 + (ulong)*puVar15) < 3) {
              auVar117 = ZEXT816(0);
            }
            else {
              puVar19 = (uint *)((long)puVar15 + (ulong)*puVar15) + 3;
              piVar14 = (int *)((long)puVar19 + (ulong)*puVar19);
              puVar19 = (uint *)((long)piVar14 +
                                (ulong)*(ushort *)((long)piVar14 + (8 - (long)*piVar14)));
              piVar14 = (int *)((long)puVar19 + (ulong)*puVar19);
              auVar117._12_4_ = 0;
              auVar117._0_12_ =
                   *(undefined1 (*) [12])
                    ((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
            }
            fStack_1c8 = auVar117._8_4_;
            fStack_1c4 = auVar117._12_4_;
            local_1d0 = auVar117._0_4_;
            fStack_1cc = auVar117._4_4_;
            if (*(uint *)((long)puVar15 + (ulong)*puVar15) < 4) goto LAB_0133fd4c;
            puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15) + 4;
            piVar14 = (int *)((long)puVar15 + (ulong)*puVar15);
            puVar15 = (uint *)((long)piVar14 +
                              (ulong)*(ushort *)((long)piVar14 + (8 - (long)*piVar14)));
            piVar14 = (int *)((long)puVar15 + (ulong)*puVar15);
            if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
               (uVar18 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar18 == 0))
            goto LAB_0133fd4c;
            iVar10 = *(int *)((long)piVar14 + uVar18);
          }
          local_140 = '\f';
          uStack_13f = 0x309fc46d91599d;
          pcStack_138 = "IsAdjustScale";
          local_130 = (char *)0xd;
          local_128 = (long *)0x0;
          uVar9 = FUN_0141f968(param_2,&local_140);
          if (local_128 != (long *)0x0) {
            (**(code **)(*local_128 + 0x20))();
          }
          if ((uVar9 & 0xff) != 0 && 0xff < uVar9) {
            fVar137 = (float)FUN_01548c60(param_2,&local_a0);
            local_1d0 = local_1d0 * fVar137;
            fStack_1cc = fStack_1cc * fVar137;
            fStack_1c8 = fStack_1c8 * fVar137;
            fStack_1c4 = fStack_1c4 * fVar137;
          }
          if (iVar10 != 0) goto LAB_0133fda8;
          if ((local_a0 == (undefined8 *)0x0) || (*(short *)((long)local_a0 + 0x1a) == 0))
          goto LAB_01340124;
          psVar1 = (short *)((long)local_a0 + 0x1a);
          sVar23 = *(short *)((long)local_a0 + 0x1a);
          goto LAB_0134023c;
        }
        break;
      }
      sVar23 = sVar3;
    } while (sVar3 != 0);
  }
LAB_0133f954:
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  puVar11 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a0 + 3);
    do {
      sVar23 = *psVar1;
      cVar4 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar22) {
        *psVar1 = sVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar23 == 1) {
      piVar14 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar10 = *piVar14;
        cVar4 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar22) {
          *piVar14 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_140 = (char)*puVar11;
        uStack_13f = (undefined7)((ulong)*puVar11 >> 8);
        FUN_00c44438(lVar13 + 0x8040,&local_140);
      }
    }
    else if (sVar23 == 0) goto LAB_0133fa10;
  }
  puVar11 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar23 = *psVar1;
      cVar4 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar22) {
        *psVar1 = sVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar23 == 1) {
      piVar14 = (int *)((long)local_70 + 0x1c);
      do {
        iVar10 = *piVar14;
        cVar4 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar22) {
          *piVar14 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_140 = (char)*puVar11;
        uStack_13f = (undefined7)((ulong)*puVar11 >> 8);
        FUN_00c44438(lVar13 + 0x8040,&local_140);
      }
    }
    else if (sVar23 == 0) {
LAB_0133fa10:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_1b8 != (code *)0x0) {
    (*local_1b8)(auStack_1a0);
  }
  return;
LAB_0134023c:
  sVar3 = *psVar1;
  if (sVar3 == sVar23) {
    cVar4 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar22) {
      *psVar1 = sVar23 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01340260;
    bVar22 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01340260:
    bVar22 = false;
  }
  if (!bVar22) goto code_r0x01340268;
  if (local_a0[2] == 0) goto LAB_01340124;
  (**(code **)(*(long *)(local_a0[2] + -0x28) + 0x60))();
LAB_0133fda8:
  if ((local_a0 != (undefined8 *)0x0) && (*(short *)((long)local_a0 + 0x1a) != 0)) {
    psVar1 = (short *)((long)local_a0 + 0x1a);
    sVar23 = *(short *)((long)local_a0 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar23) {
        cVar4 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar22) {
          *psVar1 = sVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0134061c;
        bVar22 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0134061c:
        bVar22 = false;
      }
      if (bVar22) {
        lVar13 = local_a0[2];
        plVar21 = (long *)(lVar13 + -0x28);
        if (lVar13 == 0) break;
        lVar16 = FUN_01104bd8(lVar13 + 0xe0,&local_140);
        plVar2 = (long *)(lVar13 + 0xd0);
        if (lVar16 != 0) {
          plVar2 = (long *)(lVar16 + 0x128);
        }
        if (iVar10 == 2) {
          pfVar12 = (float *)(**(code **)(*plVar21 + 0x68))(plVar21);
          fVar137 = *pfVar12;
          fVar138 = pfVar12[1];
          fVar139 = pfVar12[2];
          fVar31 = pfVar12[3];
          fVar106 = pfVar12[4];
          fVar30 = pfVar12[5];
          fVar114 = pfVar12[6];
          fVar115 = pfVar12[7];
          auVar24._0_4_ = fVar137 * fVar137 + fVar138 * fVar138;
          auVar24._4_4_ = fVar139 * fVar139 + fVar31 * fVar31;
          auVar24._8_4_ = fVar137 * fVar137 + fVar138 * fVar138;
          auVar24._12_4_ = fVar139 * fVar139 + fVar31 * fVar31;
          auVar117 = NEON_ext(auVar24,auVar24,4,1);
          auVar25._0_4_ = auVar117._0_4_ + auVar117._4_4_;
          auVar25._4_4_ = auVar117._8_4_ + auVar117._12_4_;
          auVar25._8_4_ = auVar117._0_4_ + auVar117._4_4_;
          auVar25._12_4_ = auVar117._8_4_ + auVar117._12_4_;
          auVar117 = NEON_frsqrte(auVar25,4);
          auVar75._0_4_ = auVar25._0_4_ * auVar117._0_4_;
          auVar75._4_4_ = auVar25._4_4_ * auVar117._4_4_;
          auVar75._8_4_ = auVar25._8_4_ * auVar117._8_4_;
          auVar75._12_4_ = auVar25._12_4_ * auVar117._12_4_;
          auVar109 = NEON_frsqrts(auVar117,auVar75,4);
          auVar70._0_4_ = auVar117._0_4_ * auVar109._0_4_;
          auVar70._4_4_ = auVar117._4_4_ * auVar109._4_4_;
          auVar70._8_4_ = auVar117._8_4_ * auVar109._8_4_;
          auVar70._12_4_ = auVar117._12_4_ * auVar109._12_4_;
          auVar76._0_4_ = auVar25._0_4_ * auVar70._0_4_;
          auVar76._4_4_ = auVar25._4_4_ * auVar70._4_4_;
          auVar76._8_4_ = auVar25._8_4_ * auVar70._8_4_;
          auVar76._12_4_ = auVar25._12_4_ * auVar70._12_4_;
          iVar10 = -(uint)(auVar25._0_4_ == 0.0);
          iVar135 = -(uint)(auVar25._4_4_ == 0.0);
          iVar136 = -(uint)(auVar25._8_4_ == 0.0);
          iVar64 = -(uint)(auVar25._12_4_ == 0.0);
          auVar117 = NEON_frsqrts(auVar70,auVar76,4);
          fVar137 = fVar137 * auVar70._0_4_ * auVar117._0_4_;
          fVar138 = fVar138 * auVar70._4_4_ * auVar117._4_4_;
          fVar139 = fVar139 * auVar70._8_4_ * auVar117._8_4_;
          fVar31 = fVar31 * auVar70._12_4_ * auVar117._12_4_;
          auVar26._0_4_ = fVar106 * fVar106 + fVar30 * fVar30;
          auVar26._4_4_ = fVar114 * fVar114 + fVar115 * fVar115;
          auVar26._8_4_ = fVar106 * fVar106 + fVar30 * fVar30;
          auVar26._12_4_ = fVar114 * fVar114 + fVar115 * fVar115;
          auVar117 = NEON_ext(auVar26,auVar26,4,1);
          auVar27._0_4_ = auVar117._0_4_ + auVar117._4_4_;
          auVar27._4_4_ = auVar117._8_4_ + auVar117._12_4_;
          auVar27._8_4_ = auVar117._0_4_ + auVar117._4_4_;
          auVar27._12_4_ = auVar117._8_4_ + auVar117._12_4_;
          auVar117 = NEON_frsqrte(auVar27,4);
          auVar88._0_4_ = auVar27._0_4_ * auVar117._0_4_;
          auVar88._4_4_ = auVar27._4_4_ * auVar117._4_4_;
          auVar88._8_4_ = auVar27._8_4_ * auVar117._8_4_;
          auVar88._12_4_ = auVar27._12_4_ * auVar117._12_4_;
          auVar109 = NEON_frsqrts(auVar117,auVar88,4);
          auVar77._0_4_ = auVar117._0_4_ * auVar109._0_4_;
          auVar77._4_4_ = auVar117._4_4_ * auVar109._4_4_;
          auVar77._8_4_ = auVar117._8_4_ * auVar109._8_4_;
          auVar77._12_4_ = auVar117._12_4_ * auVar109._12_4_;
          auVar89._0_4_ = auVar27._0_4_ * auVar77._0_4_;
          auVar89._4_4_ = auVar27._4_4_ * auVar77._4_4_;
          auVar89._8_4_ = auVar27._8_4_ * auVar77._8_4_;
          auVar89._12_4_ = auVar27._12_4_ * auVar77._12_4_;
          iVar65 = -(uint)(auVar27._0_4_ == 0.0);
          iVar72 = -(uint)(auVar27._4_4_ == 0.0);
          iVar73 = -(uint)(auVar27._8_4_ == 0.0);
          iVar74 = -(uint)(auVar27._12_4_ == 0.0);
          auVar117 = NEON_frsqrts(auVar77,auVar89,4);
          fVar106 = fVar106 * auVar77._0_4_ * auVar117._0_4_;
          fVar30 = fVar30 * auVar77._4_4_ * auVar117._4_4_;
          fVar114 = fVar114 * auVar77._8_4_ * auVar117._8_4_;
          fVar115 = fVar115 * auVar77._12_4_ * auVar117._12_4_;
          fVar116 = pfVar12[8];
          fVar122 = pfVar12[9];
          fVar123 = pfVar12[10];
          fVar124 = pfVar12[0xb] * pfVar12[0xb];
          auVar28._0_4_ = fVar116 * fVar116 + fVar122 * fVar122;
          auVar28._4_4_ = fVar123 * fVar123 + fVar124;
          auVar28._8_4_ = fVar116 * fVar116 + fVar122 * fVar122;
          auVar28._12_4_ = fVar123 * fVar123 + fVar124;
          auVar117 = NEON_ext(auVar28,auVar28,4,1);
          auVar29._0_4_ = auVar117._0_4_ + auVar117._4_4_;
          auVar29._4_4_ = auVar117._8_4_ + auVar117._12_4_;
          auVar29._8_4_ = auVar117._0_4_ + auVar117._4_4_;
          auVar29._12_4_ = auVar117._8_4_ + auVar117._12_4_;
          auVar117 = NEON_frsqrte(auVar29,4);
          auVar110._0_4_ = auVar29._0_4_ * auVar117._0_4_;
          auVar110._4_4_ = auVar29._4_4_ * auVar117._4_4_;
          auVar110._8_4_ = auVar29._8_4_ * auVar117._8_4_;
          auVar110._12_4_ = auVar29._12_4_ * auVar117._12_4_;
          auVar109 = NEON_frsqrts(auVar117,auVar110,4);
          auVar102._0_4_ = auVar117._0_4_ * auVar109._0_4_;
          auVar102._4_4_ = auVar117._4_4_ * auVar109._4_4_;
          auVar102._8_4_ = auVar117._8_4_ * auVar109._8_4_;
          auVar102._12_4_ = auVar117._12_4_ * auVar109._12_4_;
          auVar111._0_4_ = auVar29._0_4_ * auVar102._0_4_;
          auVar111._4_4_ = auVar29._4_4_ * auVar102._4_4_;
          auVar111._8_4_ = auVar29._8_4_ * auVar102._8_4_;
          auVar111._12_4_ = auVar29._12_4_ * auVar102._12_4_;
          auVar117 = NEON_frsqrts(auVar102,auVar111,4);
          fVar125 = (float)CONCAT13((byte)((uint)fVar137 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                                    CONCAT12((byte)((uint)fVar137 >> 0x10) &
                                             ~(byte)((uint)iVar10 >> 0x10),
                                             CONCAT11((byte)((uint)fVar137 >> 8) &
                                                      ~(byte)((uint)iVar10 >> 8),
                                                      SUB41(fVar137,0) & ~(byte)iVar10)));
          auVar107._0_8_ =
               CONCAT17((byte)((uint)fVar138 >> 0x18) & ~(byte)((uint)iVar135 >> 0x18),
                        CONCAT16((byte)((uint)fVar138 >> 0x10) & ~(byte)((uint)iVar135 >> 0x10),
                                 CONCAT15((byte)((uint)fVar138 >> 8) & ~(byte)((uint)iVar135 >> 8),
                                          CONCAT14(SUB41(fVar138,0) & ~(byte)iVar135,fVar125))));
          auVar107[8] = SUB41(fVar139,0) & ~(byte)iVar136;
          auVar107[9] = (byte)((uint)fVar139 >> 8) & ~(byte)((uint)iVar136 >> 8);
          auVar107[10] = (byte)((uint)fVar139 >> 0x10) & ~(byte)((uint)iVar136 >> 0x10);
          auVar107[0xb] = (byte)((uint)fVar139 >> 0x18) & ~(byte)((uint)iVar136 >> 0x18);
          auVar112[0xc] = SUB41(fVar31,0) & ~(byte)iVar64;
          auVar112._0_12_ = auVar107;
          auVar112[0xd] = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar64 >> 8);
          auVar112[0xe] = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
          auVar112[0xf] = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
          iVar10 = -(uint)(auVar29._0_4_ == 0.0);
          iVar135 = -(uint)(auVar29._4_4_ == 0.0);
          iVar136 = -(uint)(auVar29._8_4_ == 0.0);
          fVar124 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                                    CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                             ~(byte)((uint)iVar65 >> 0x10),
                                             CONCAT11((byte)((uint)fVar106 >> 8) &
                                                      ~(byte)((uint)iVar65 >> 8),
                                                      SUB41(fVar106,0) & ~(byte)iVar65)));
          auVar53._0_8_ =
               CONCAT17((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                        CONCAT16((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                                 CONCAT15((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar72 >> 8),
                                          CONCAT14(SUB41(fVar30,0) & ~(byte)iVar72,fVar124))));
          auVar53[8] = SUB41(fVar114,0) & ~(byte)iVar73;
          auVar53[9] = (byte)((uint)fVar114 >> 8) & ~(byte)((uint)iVar73 >> 8);
          auVar53[10] = (byte)((uint)fVar114 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10);
          auVar53[0xb] = (byte)((uint)fVar114 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18);
          auVar53[0xc] = SUB41(fVar115,0) & ~(byte)iVar74;
          auVar53[0xd] = (byte)((uint)fVar115 >> 8) & ~(byte)((uint)iVar74 >> 8);
          auVar53[0xe] = (byte)((uint)fVar115 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
          auVar53[0xf] = (byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
          fVar116 = fVar116 * auVar102._0_4_ * auVar117._0_4_;
          fVar122 = fVar122 * auVar102._4_4_ * auVar117._4_4_;
          fVar123 = fVar123 * auVar102._8_4_ * auVar117._8_4_;
          fVar30 = (float)CONCAT13((byte)((uint)fVar116 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                                   CONCAT12((byte)((uint)fVar116 >> 0x10) &
                                            ~(byte)((uint)iVar10 >> 0x10),
                                            CONCAT11((byte)((uint)fVar116 >> 8) &
                                                     ~(byte)((uint)iVar10 >> 8),
                                                     SUB41(fVar116,0) & ~(byte)iVar10)));
          auVar66._0_8_ =
               CONCAT17((byte)((uint)fVar122 >> 0x18) & ~(byte)((uint)iVar135 >> 0x18),
                        CONCAT16((byte)((uint)fVar122 >> 0x10) & ~(byte)((uint)iVar135 >> 0x10),
                                 CONCAT15((byte)((uint)fVar122 >> 8) & ~(byte)((uint)iVar135 >> 8),
                                          CONCAT14(SUB41(fVar122,0) & ~(byte)iVar135,fVar30))));
          auVar66[8] = SUB41(fVar123,0) & ~(byte)iVar136;
          auVar66[9] = (byte)((uint)fVar123 >> 8) & ~(byte)((uint)iVar136 >> 8);
          auVar66[10] = (byte)((uint)fVar123 >> 0x10) & ~(byte)((uint)iVar136 >> 0x10);
          auVar66[0xb] = (byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar136 >> 0x18);
          auVar117 = NEON_fmov(0x3f800000,4);
          fVar137 = (float)((ulong)auVar53._0_8_ >> 0x20);
          fVar106 = auVar66._8_4_;
          fVar138 = auVar117._0_4_ + (float)_DAT_03cab3a0 * fVar125 + (float)_DAT_03cac210 * fVar137
                    + (float)_DAT_03cabb00 * fVar106;
          fVar139 = auVar117._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar125 +
                    (float)((ulong)_DAT_03cac210 >> 0x20) * fVar137 +
                    (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar106;
          fVar31 = auVar117._8_4_ + (float)_UNK_03cab3a8 * fVar125 + (float)_UNK_03cac218 * fVar137
                   + (float)_UNK_03cabb08 * fVar106;
          fVar106 = auVar117._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar125 +
                    (float)((ulong)_UNK_03cac218 >> 0x20) * fVar137 +
                    (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar106;
          fVar114 = (float)((ulong)auVar66._0_8_ >> 0x20);
          auVar117 = NEON_fmov(0x40800000,4);
          auVar78._0_4_ = SQRT(fVar138) * 0.5 * auVar117._0_4_;
          auVar78._4_4_ = SQRT(fVar139) * 0.5 * auVar117._4_4_;
          auVar78._8_4_ = SQRT(fVar31) * 0.5 * auVar117._8_4_;
          auVar78._12_4_ = SQRT(fVar106) * 0.5 * auVar117._12_4_;
          auVar117 = NEON_frecpe(auVar78,4);
          auVar119 = NEON_ext(auVar53,auVar53,8,1);
          auVar131 = NEON_ext(auVar112,auVar112,8,1);
          auVar109 = NEON_frecps(auVar117,auVar78,4);
          auVar90._0_4_ = auVar117._0_4_ * auVar109._0_4_;
          auVar90._4_4_ = auVar117._4_4_ * auVar109._4_4_;
          auVar90._8_4_ = auVar117._8_4_ * auVar109._8_4_;
          auVar90._12_4_ = auVar117._12_4_ * auVar109._12_4_;
          fVar137 = auVar119._0_4_;
          auVar117 = NEON_frecps(auVar90,auVar78,4);
          fVar115 = auVar90._0_4_ * auVar117._0_4_;
          fVar116 = auVar90._4_4_ * auVar117._4_4_;
          fVar122 = auVar90._8_4_ * auVar117._8_4_;
          fVar123 = auVar90._12_4_ * auVar117._12_4_;
          fVar127 = (float)((ulong)auVar107._0_8_ >> 0x20);
          fVar125 = auVar131._0_4_ + fVar30;
          auVar67._8_4_ = fVar137 + -fVar114;
          auVar67._4_4_ = fVar125;
          auVar120._4_4_ = fVar138;
          auVar120._0_4_ = fVar138;
          auVar120._8_4_ = fVar138;
          auVar120._12_4_ = fVar138;
          auVar109._4_4_ = fVar139;
          auVar109._0_4_ = fVar139;
          auVar109._8_4_ = fVar139;
          auVar109._12_4_ = fVar139;
          auVar119._4_4_ = -(uint)(fVar138 <= fVar139);
          auVar119._0_4_ = -(uint)(fVar138 <= fVar139);
          auVar119._8_4_ = -(uint)(fVar138 <= fVar139);
          auVar119._12_4_ = -(uint)(fVar138 <= fVar139);
          auVar120 = auVar120 ^ (auVar120 ^ auVar109) & auVar119;
          auVar126._4_4_ = fVar31;
          auVar126._0_4_ = fVar31;
          auVar126._8_4_ = fVar31;
          auVar126._12_4_ = fVar31;
          auVar67._0_4_ = (fVar127 + fVar124) * fVar115;
          auVar103._0_8_ = auVar67._0_8_ << 0x20;
          auVar103._8_4_ = fVar125 * fVar115;
          auVar103._12_4_ = (fVar137 + -fVar114) * fVar115;
          auVar132._0_4_ = (fVar127 + fVar124) * fVar116;
          auVar132._4_4_ = fVar116 * 0.0;
          auVar132._8_4_ = (fVar137 + fVar114) * fVar116;
          auVar132._12_4_ = (fVar30 + -auVar107._8_4_) * fVar116;
          fVar125 = (float)_UNK_03cab648;
          fVar128 = (float)((ulong)_UNK_03cab648 >> 0x20);
          fVar115 = (float)_DAT_03cab640;
          fVar116 = (float)((ulong)_DAT_03cab640 >> 0x20);
          auVar104._4_12_ = auVar103._4_12_;
          auVar104._0_4_ = SQRT(fVar138) * 0.5;
          auVar71._0_4_ = (auVar131._0_4_ + fVar30) * fVar122;
          auVar71._4_4_ = (fVar137 + fVar114) * fVar122;
          auVar71._12_4_ = (fVar127 - fVar124) * fVar122;
          auVar133._8_8_ = auVar132._8_8_;
          auVar133._4_4_ = SQRT(fVar139) * 0.5;
          auVar133._0_4_ = auVar132._0_4_;
          auVar71._8_4_ = SQRT(fVar31) * 0.5;
          auVar54._0_4_ = (fVar137 - fVar114) * fVar123;
          auVar54._4_4_ = (fVar30 - auVar107._8_4_) * fVar123;
          auVar54._8_4_ = (fVar127 - fVar124) * fVar123;
          auVar131._4_4_ = -(uint)(fVar138 <= fVar139);
          auVar131._0_4_ = -(uint)(fVar138 <= fVar139);
          auVar131._8_4_ = -(uint)(fVar138 <= fVar139);
          auVar131._12_4_ = -(uint)(fVar138 <= fVar139);
          auVar134._0_4_ = -(uint)(auVar120._0_4_ <= fVar31);
          auVar134._4_4_ = -(uint)(auVar120._4_4_ <= fVar31);
          auVar134._8_4_ = -(uint)(auVar120._8_4_ <= fVar31);
          auVar134._12_4_ = -(uint)(auVar120._12_4_ <= fVar31);
          auVar120 = auVar120 ^ (auVar120 ^ auVar126) & auVar134;
          auVar54._12_4_ = SQRT(fVar106) * 0.5;
          auVar71 = auVar71 ^ (auVar71 ^ auVar104 ^ (auVar104 ^ auVar133) & auVar131) & ~auVar134;
          auVar33._0_4_ = -(uint)(auVar120._0_4_ <= fVar106);
          auVar33._4_4_ = -(uint)(auVar120._4_4_ <= fVar106);
          auVar33._8_4_ = -(uint)(auVar120._8_4_ <= fVar106);
          auVar33._12_4_ = -(uint)(auVar120._12_4_ <= fVar106);
          auVar91._4_4_ = fStack_1c8;
          auVar91._0_4_ = fStack_1c8;
          auVar91._8_4_ = fStack_1c8;
          auVar91._12_4_ = fStack_1c8;
          auVar71 = auVar71 ^ (auVar71 ^ auVar54) & auVar33;
          fVar138 = auVar71._0_4_;
          auVar56._0_4_ = -fVar138;
          fVar139 = auVar71._4_4_;
          fVar30 = -fVar139;
          fVar31 = auVar71._8_4_;
          auVar55._8_4_ = -fVar31;
          fVar106 = auVar71._12_4_;
          auVar92._4_12_ = auVar91._4_12_;
          auVar92._0_4_ = local_1d0;
          auVar94._0_8_ = auVar92._0_8_;
          auVar94._8_4_ = fStack_1cc;
          auVar94._12_4_ = fStack_1c8;
          auVar93._8_8_ = auVar94._8_8_;
          auVar93._4_4_ = fStack_1c8;
          auVar93._0_4_ = local_1d0;
          auVar95._0_12_ = auVar93._0_12_;
          auVar95._12_4_ = fStack_1c8;
          auVar113._4_4_ = fVar31;
          auVar113._0_4_ = fVar31;
          auVar113._8_4_ = fVar31;
          auVar113._12_4_ = fVar31;
          auVar109 = NEON_ext(auVar113,auVar71,0xc,1);
          auVar121._4_4_ = fVar139;
          auVar121._0_4_ = fVar139;
          auVar121._8_4_ = fVar139;
          auVar121._12_4_ = fVar139;
          auVar131 = NEON_ext(auVar95,auVar95,8,1);
          fVar137 = auVar131._0_4_;
          auVar96._4_12_ = auVar95._4_12_;
          auVar96._0_4_ = fVar137;
          auVar98._0_8_ = auVar96._0_8_;
          auVar98._8_4_ = auVar131._8_4_;
          auVar98._12_4_ = fStack_1c8;
          auVar97._8_8_ = auVar98._8_8_;
          auVar97._4_4_ = local_1d0;
          auVar97._0_4_ = fVar137;
          auVar99._0_12_ = auVar97._0_12_;
          auVar99._12_4_ = fStack_1cc;
          auVar119 = NEON_ext(auVar121,auVar109,0xc,1);
          auVar117 = NEON_ext(auVar99,auVar131,8,1);
          auVar117 = NEON_ext(auVar117,auVar117,0xc,1);
          auVar105._0_4_ =
               (local_1d0 * fVar106 + fVar138 * fVar115 * 0.0 +
               auVar117._0_4_ * auVar119._0_4_ * fVar115) - auVar109._0_4_ * fVar137;
          auVar105._4_4_ =
               (fStack_1cc * fVar106 + fVar139 * fVar116 * 0.0 +
               auVar117._4_4_ * auVar119._4_4_ * fVar116) - auVar109._4_4_ * auVar131._4_4_;
          auVar105._8_4_ =
               (fStack_1c8 * fVar106 + fVar31 * fVar125 * 0.0 +
               auVar117._8_4_ * auVar119._8_4_ * fVar125) - auVar109._8_4_ * auVar131._8_4_;
          auVar105._12_4_ =
               (fVar106 * 0.0 + local_1d0 * fVar138 * fVar128 +
               auVar117._12_4_ * auVar119._12_4_ * fVar128) - auVar109._12_4_ * auVar131._12_4_;
          auVar55._4_4_ = auVar55._8_4_;
          auVar55._0_4_ = auVar55._8_4_;
          auVar55._12_4_ = auVar55._8_4_;
          auVar34._4_4_ = auVar105._8_4_;
          auVar34._0_4_ = auVar105._8_4_;
          auVar34._8_4_ = auVar105._8_4_;
          auVar34._12_4_ = auVar105._8_4_;
          auVar40._4_4_ = auVar105._4_4_;
          auVar40._0_4_ = auVar105._4_4_;
          auVar40._8_4_ = auVar105._4_4_;
          auVar40._12_4_ = auVar105._4_4_;
          auVar117 = NEON_ext(auVar34,auVar105,0xc,1);
          auVar109 = NEON_ext(auVar40,auVar117,0xc,1);
          auVar56._4_12_ = auVar55._4_12_;
          auVar58._0_8_ = auVar56._0_8_;
          auVar58._8_4_ = fVar30;
          auVar58._12_4_ = auVar55._8_4_;
          auVar57._8_8_ = auVar58._8_8_;
          auVar57._4_4_ = auVar55._8_4_;
          auVar57._0_4_ = auVar56._0_4_;
          auVar59._0_12_ = auVar57._0_12_;
          auVar59._12_4_ = auVar55._8_4_;
          in_q3 = NEON_ext(auVar59,auVar59,8,1);
          fVar137 = in_q3._0_4_;
          auVar60._4_12_ = auVar59._4_12_;
          auVar60._0_4_ = fVar137;
          auVar62._0_8_ = auVar60._0_8_;
          auVar62._8_4_ = in_q3._8_4_;
          auVar62._12_4_ = auVar55._8_4_;
          auVar61._8_8_ = auVar62._8_8_;
          auVar61._4_4_ = auVar56._0_4_;
          auVar61._0_4_ = fVar137;
          auVar63._0_12_ = auVar61._0_12_;
          auVar63._12_4_ = fVar30;
          auVar119 = NEON_ext(auVar63,in_q3,8,1);
          auVar119 = NEON_ext(auVar119,auVar119,0xc,1);
          local_1d0 = (auVar56._0_4_ * auVar105._12_4_ + fVar106 * auVar105._0_4_ * fVar115 +
                      auVar119._0_4_ * auVar109._0_4_ * fVar115) - auVar117._0_4_ * fVar137;
          fStack_1cc = (fVar30 * auVar105._12_4_ + fVar106 * auVar105._4_4_ * fVar116 +
                       auVar119._4_4_ * auVar109._4_4_ * fVar116) - auVar117._4_4_ * in_q3._4_4_;
          fStack_1c8 = (auVar55._8_4_ * auVar105._12_4_ + fVar106 * auVar105._8_4_ * fVar125 +
                       auVar119._8_4_ * auVar109._8_4_ * fVar125) - auVar117._8_4_ * in_q3._8_4_;
          fStack_1c4 = 0.0;
        }
        if (*local_d8 == '\0') {
          lVar13 = (**(code **)(*plVar21 + 0x68))(plVar21);
          auVar67 = SUB1612(*(undefined1 (*) [16])(lVar13 + 0x30),0);
        }
        else {
          (**(code **)(*plVar2 + 0x50))(plVar2,&local_e0);
          auVar67 = in_q3._0_12_;
        }
        local_1d0 = local_1d0 + auVar67._0_4_;
        fStack_1cc = fStack_1cc + auVar67._4_4_;
        fStack_1c8 = fStack_1c8 + auVar67._8_4_;
        fStack_1c4 = fStack_1c4 + 0.0;
        (**(code **)(*plVar21 + 0x60))(plVar21);
        goto LAB_01340124;
      }
      sVar23 = sVar3;
      if (sVar3 == 0) break;
    } while( true );
  }
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  FUN_00d0a71c(&local_f0,&local_70);
  lVar13 = FUN_01180e7c(param_2,&local_f0);
  puVar11 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f0 + 3);
    do {
      sVar23 = *psVar1;
      cVar4 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar22) {
        *psVar1 = sVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar23 == 1) {
      piVar14 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar135 = *piVar14;
        cVar4 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar22) {
          *piVar14 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar135 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar135 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar135 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = (char)*puVar11;
        uStack_13f = (undefined7)((ulong)*puVar11 >> 8);
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar23 == 0) goto LAB_0133fa10;
  }
  if (lVar13 != 0) {
    if (iVar10 == 2) {
      fVar31 = *(float *)(lVar13 + 0xc4);
      fVar106 = *(float *)(lVar13 + 200);
      fVar138 = *(float *)(lVar13 + 0xd4);
      fVar139 = *(float *)(lVar13 + 0xd8);
      fVar30 = fmodf(*(float *)(lVar13 + 0xd0) + *(float *)(lVar13 + 0xc0),360.0);
      fVar137 = fVar30 + 360.0;
      if (0.0 <= fVar30) {
        fVar137 = fVar30;
      }
      fVar31 = fmodf(fVar138 + fVar31,360.0);
      fVar138 = fVar31 + 360.0;
      if (0.0 <= fVar31) {
        fVar138 = fVar31;
      }
      fVar31 = fmodf(fVar139 + fVar106,360.0);
      fVar139 = fVar31 + 360.0;
      if (0.0 <= fVar31) {
        fVar139 = fVar31;
      }
      fVar31 = *(float *)PTR_FloatPi_047d23a0 / *(float *)PTR_FloatDegree180_047d2390;
      fVar106 = fVar139 * fVar31 * 0.5;
      fVar30 = fVar137 * fVar31 * 0.5;
      fVar114 = fVar138 * fVar31 * 0.5;
      iVar10 = -(uint)(fVar106 == 0.0);
      iVar135 = -(uint)(fVar30 == 0.0);
      iVar136 = -(uint)(fVar114 == 0.0);
      auVar130[0] = ~(byte)iVar10;
      auVar130[1] = ~(byte)((uint)iVar10 >> 8);
      auVar130[2] = ~(byte)((uint)iVar10 >> 0x10);
      auVar130[3] = ~(byte)((uint)iVar10 >> 0x18);
      auVar130[4] = ~(byte)iVar135;
      auVar130[5] = ~(byte)((uint)iVar135 >> 8);
      auVar130[6] = ~(byte)((uint)iVar135 >> 0x10);
      auVar130[7] = ~(byte)((uint)iVar135 >> 0x18);
      auVar130[8] = ~(byte)iVar136;
      auVar130[9] = ~(byte)((uint)iVar136 >> 8);
      auVar130[10] = ~(byte)((uint)iVar136 >> 0x10);
      auVar130[0xb] = ~(byte)((uint)iVar136 >> 0x18);
      auVar130._12_4_ = 0;
      iVar10 = -(uint)(ABS(fVar106) == INFINITY);
      iVar135 = -(uint)(ABS(fVar30) == INFINITY);
      iVar136 = -(uint)(ABS(fVar114) == INFINITY);
      auVar35[0] = ~(byte)iVar10;
      auVar35[1] = ~(byte)((uint)iVar10 >> 8);
      auVar35[2] = ~(byte)((uint)iVar10 >> 0x10);
      auVar35[3] = ~(byte)((uint)iVar10 >> 0x18);
      auVar35[4] = ~(byte)iVar135;
      auVar35[5] = ~(byte)((uint)iVar135 >> 8);
      auVar35[6] = ~(byte)((uint)iVar135 >> 0x10);
      auVar35[7] = ~(byte)((uint)iVar135 >> 0x18);
      auVar35[8] = ~(byte)iVar136;
      auVar35[9] = ~(byte)((uint)iVar136 >> 8);
      auVar35[10] = ~(byte)((uint)iVar136 >> 0x10);
      auVar35[0xb] = ~(byte)((uint)iVar136 >> 0x18);
      auVar35[0xc] = 0xff;
      auVar35[0xd] = 0xff;
      auVar35[0xe] = 0xff;
      auVar35[0xf] = 0xff;
      auVar100._0_4_ =
           (int)((float)(-(uint)(0.0 <= fVar106) & 0x80000000 ^ 0xbf000000) + fVar106 * 0.15915494);
      auVar100._4_4_ =
           (int)((float)(-(uint)(0.0 <= fVar30) & 0x80000000 ^ 0xbf000000) + fVar30 * 0.15915494);
      auVar100._8_4_ =
           (int)((float)(-(uint)(0.0 <= fVar114) & 0x80000000 ^ 0xbf000000) + fVar114 * 0.15915494);
      auVar100._12_4_ = 0;
      auVar117 = NEON_scvtf(auVar100,4);
      fVar137 = fVar106 + 1.5707964;
      fVar138 = fVar30 + 1.5707964;
      fVar139 = fVar114 + 1.5707964;
      fVar106 = fVar106 - auVar117._0_4_ * 6.2831855;
      fVar30 = fVar30 - auVar117._4_4_ * 6.2831855;
      fVar114 = fVar114 - auVar117._8_4_ * 6.2831855;
      fVar115 = 0.0 - auVar117._12_4_ * 6.2831855;
      iVar10 = -(uint)(ABS(fVar137) == INFINITY);
      iVar135 = -(uint)(ABS(fVar138) == INFINITY);
      iVar136 = -(uint)(ABS(fVar139) == INFINITY);
      auVar68[0] = ~(byte)iVar10;
      auVar68[1] = ~(byte)((uint)iVar10 >> 8);
      auVar68[2] = ~(byte)((uint)iVar10 >> 0x10);
      auVar68[3] = ~(byte)((uint)iVar10 >> 0x18);
      auVar68[4] = ~(byte)iVar135;
      auVar68[5] = ~(byte)((uint)iVar135 >> 8);
      auVar68[6] = ~(byte)((uint)iVar135 >> 0x10);
      auVar68[7] = ~(byte)((uint)iVar135 >> 0x18);
      auVar68[8] = ~(byte)iVar136;
      auVar68[9] = ~(byte)((uint)iVar136 >> 8);
      auVar68[10] = ~(byte)((uint)iVar136 >> 0x10);
      auVar68[0xb] = ~(byte)((uint)iVar136 >> 0x18);
      auVar68[0xc] = 0xff;
      auVar68[0xd] = 0xff;
      auVar68[0xe] = 0xff;
      auVar68[0xf] = 0xff;
      fVar106 = (float)((uint)fVar106 ^
                       ((uint)fVar106 ^ (uint)(-3.1415927 - fVar106)) &
                       -(uint)(fVar106 < -1.5707964));
      fVar30 = (float)((uint)fVar30 ^
                      ((uint)fVar30 ^ (uint)(-3.1415927 - fVar30)) & -(uint)(fVar30 < -1.5707964));
      fVar114 = (float)((uint)fVar114 ^
                       ((uint)fVar114 ^ (uint)(-3.1415927 - fVar114)) &
                       -(uint)(fVar114 < -1.5707964));
      fVar115 = (float)((uint)fVar115 ^
                       ((uint)fVar115 ^ (uint)(-3.1415927 - fVar115)) &
                       -(uint)(fVar115 < -1.5707964));
      auVar41._0_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar137) & 0x80000000 ^ 0x3f000000) + fVar137 * 0.15915494)
      ;
      auVar41._4_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar138) & 0x80000000 ^ 0x3f000000) + fVar138 * 0.15915494)
      ;
      auVar41._8_4_ =
           (int)((float)(~-(uint)(0.0 <= fVar139) & 0x80000000 ^ 0x3f000000) + fVar139 * 0.15915494)
      ;
      auVar41._12_4_ = 0;
      auVar117 = NEON_scvtf(auVar41,4);
      fVar137 = fVar137 - auVar117._0_4_ * 6.2831855;
      fVar138 = fVar138 - auVar117._4_4_ * 6.2831855;
      fVar139 = fVar139 - auVar117._8_4_ * 6.2831855;
      fVar31 = 1.5707964 - auVar117._12_4_ * 6.2831855;
      fVar106 = (float)((uint)fVar106 ^
                       ((uint)fVar106 ^ (uint)(3.1415927 - fVar106)) & -(uint)(1.5707964 < fVar106))
      ;
      fVar30 = (float)((uint)fVar30 ^
                      ((uint)fVar30 ^ (uint)(3.1415927 - fVar30)) & -(uint)(1.5707964 < fVar30));
      fVar114 = (float)((uint)fVar114 ^
                       ((uint)fVar114 ^ (uint)(3.1415927 - fVar114)) & -(uint)(1.5707964 < fVar114))
      ;
      fVar115 = (float)((uint)fVar115 ^
                       ((uint)fVar115 ^ (uint)(3.1415927 - fVar115)) & -(uint)(1.5707964 < fVar115))
      ;
      fVar116 = fVar106 * fVar106;
      fVar122 = fVar30 * fVar30;
      fVar123 = fVar114 * fVar114;
      fVar124 = fVar115 * fVar115;
      fVar137 = (float)((uint)fVar137 ^
                       ((uint)fVar137 ^ (uint)(-3.1415927 - fVar137)) &
                       -(uint)(fVar137 < -1.5707964));
      fVar138 = (float)((uint)fVar138 ^
                       ((uint)fVar138 ^ (uint)(-3.1415927 - fVar138)) &
                       -(uint)(fVar138 < -1.5707964));
      fVar139 = (float)((uint)fVar139 ^
                       ((uint)fVar139 ^ (uint)(-3.1415927 - fVar139)) &
                       -(uint)(fVar139 < -1.5707964));
      fVar31 = (float)((uint)fVar31 ^
                      ((uint)fVar31 ^ (uint)(-3.1415927 - fVar31)) & -(uint)(fVar31 < -1.5707964));
      auVar36._8_4_ = 0x7fc00000;
      auVar36._0_8_ = 0x7fc000007fc00000;
      auVar36._12_4_ = 0x7fc00000;
      fVar137 = (float)((uint)fVar137 ^
                       ((uint)fVar137 ^ (uint)(3.1415927 - fVar137)) & -(uint)(1.5707964 < fVar137))
      ;
      fVar138 = (float)((uint)fVar138 ^
                       ((uint)fVar138 ^ (uint)(3.1415927 - fVar138)) & -(uint)(1.5707964 < fVar138))
      ;
      fVar139 = (float)((uint)fVar139 ^
                       ((uint)fVar139 ^ (uint)(3.1415927 - fVar139)) & -(uint)(1.5707964 < fVar139))
      ;
      fVar31 = (float)((uint)fVar31 ^
                      ((uint)fVar31 ^ (uint)(3.1415927 - fVar31)) & -(uint)(1.5707964 < fVar31));
      auVar117 = NEON_fmov(0x3f800000,4);
      fVar125 = fVar137 * fVar137;
      fVar127 = fVar138 * fVar138;
      fVar128 = fVar139 * fVar139;
      fVar129 = fVar31 * fVar31;
      auVar42._0_4_ =
           fVar137 * (auVar117._0_4_ +
                     fVar125 * (fVar125 * (fVar125 * (fVar125 * (fVar125 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar42._4_4_ =
           fVar138 * (auVar117._4_4_ +
                     fVar127 * (fVar127 * (fVar127 * (fVar127 * (fVar127 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar42._8_4_ =
           fVar139 * (auVar117._8_4_ +
                     fVar128 * (fVar128 * (fVar128 * (fVar128 * (fVar128 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar42._12_4_ =
           fVar31 * (auVar117._12_4_ +
                    fVar129 * (fVar129 * (fVar129 * (fVar129 * (fVar129 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar42 = auVar42 ^ (auVar42 ^ auVar36) & ~auVar68;
      auVar69._0_4_ =
           fVar106 * (auVar117._0_4_ +
                     fVar116 * (fVar116 * (fVar116 * (fVar116 * (fVar116 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar69._4_4_ =
           fVar30 * (auVar117._4_4_ +
                    fVar122 * (fVar122 * (fVar122 * (fVar122 * (fVar122 * -2.5052108e-08 +
                                                               2.7557319e-06) + -0.0001984127) +
                                         0.008333334) + -0.16666667));
      auVar69._8_4_ =
           fVar114 * (auVar117._8_4_ +
                     fVar123 * (fVar123 * (fVar123 * (fVar123 * (fVar123 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar69._12_4_ =
           fVar115 * (auVar117._12_4_ +
                     fVar124 * (fVar124 * (fVar124 * (fVar124 * (fVar124 * -2.5052108e-08 +
                                                                2.7557319e-06) + -0.0001984127) +
                                          0.008333334) + -0.16666667));
      auVar69 = auVar69 ^ (auVar69 ^ auVar36) & ~auVar35;
      fVar31 = auVar69._0_4_;
      auVar36 = auVar36 ^ (auVar36 ^ auVar42 ^ (auVar42 ^ auVar117) & ~auVar130) & auVar35;
      fVar137 = auVar36._0_4_;
      fVar138 = auVar36._4_4_;
      fVar106 = auVar69._4_4_;
      fVar139 = auVar36._8_4_;
      fVar30 = auVar69._8_4_;
      auVar79._4_4_ = fStack_1c8;
      auVar79._0_4_ = fStack_1c8;
      auVar79._8_4_ = fStack_1c8;
      auVar79._12_4_ = fStack_1c8;
      auVar80._4_12_ = auVar79._4_12_;
      auVar80._0_4_ = local_1d0;
      auVar82._0_8_ = auVar80._0_8_;
      auVar82._8_4_ = fStack_1cc;
      auVar82._12_4_ = fStack_1c8;
      auVar81._8_8_ = auVar82._8_8_;
      auVar81._4_4_ = fStack_1c8;
      auVar81._0_4_ = local_1d0;
      auVar83._0_12_ = auVar81._0_12_;
      auVar83._12_4_ = fStack_1c8;
      fVar116 = (float)_UNK_03cab648;
      fVar122 = (float)((ulong)_UNK_03cab648 >> 0x20);
      fVar114 = (float)_DAT_03cab640;
      fVar115 = (float)((ulong)_DAT_03cab640 >> 0x20);
      auVar131 = NEON_ext(auVar83,auVar83,8,1);
      auVar37._0_4_ = fVar139 * fVar137 * fVar106 + fVar30 * fVar138 * fVar31 * (float)_DAT_03cab3a0
      ;
      auVar37._4_4_ =
           fVar30 * fVar137 * fVar138 +
           fVar139 * fVar106 * fVar31 * (float)((ulong)_DAT_03cab3a0 >> 0x20);
      auVar37._8_4_ = fVar139 * fVar31 * fVar138 + fVar30 * fVar106 * fVar137 * (float)_UNK_03cab3a8
      ;
      auVar37._12_4_ =
           fVar139 * fVar137 * fVar138 +
           fVar30 * fVar106 * fVar31 * (float)((ulong)_UNK_03cab3a8 >> 0x20);
      fVar137 = auVar131._0_4_;
      auVar84._4_12_ = auVar83._4_12_;
      auVar84._0_4_ = fVar137;
      auVar86._0_8_ = auVar84._0_8_;
      auVar86._8_4_ = auVar131._8_4_;
      auVar86._12_4_ = fStack_1c8;
      auVar85._8_8_ = auVar86._8_8_;
      auVar85._4_4_ = local_1d0;
      auVar85._0_4_ = fVar137;
      auVar87._0_12_ = auVar85._0_12_;
      auVar87._12_4_ = fStack_1cc;
      auVar44._0_4_ = -auVar37._0_4_;
      fVar138 = -auVar37._4_4_;
      auVar43._8_4_ = -auVar37._8_4_;
      auVar108._4_4_ = auVar37._8_4_;
      auVar108._0_4_ = auVar37._8_4_;
      auVar108._8_4_ = auVar37._8_4_;
      auVar108._12_4_ = auVar37._8_4_;
      auVar109 = NEON_ext(auVar108,auVar37,0xc,1);
      auVar118._4_4_ = auVar37._4_4_;
      auVar118._0_4_ = auVar37._4_4_;
      auVar118._8_4_ = auVar37._4_4_;
      auVar118._12_4_ = auVar37._4_4_;
      auVar119 = NEON_ext(auVar118,auVar109,0xc,1);
      auVar117 = NEON_ext(auVar87,auVar131,8,1);
      auVar117 = NEON_ext(auVar117,auVar117,0xc,1);
      auVar101._0_4_ =
           (local_1d0 * auVar37._12_4_ + auVar37._0_4_ * fVar114 * 0.0 +
           auVar117._0_4_ * auVar119._0_4_ * fVar114) - auVar109._0_4_ * fVar137;
      auVar101._4_4_ =
           (fStack_1cc * auVar37._12_4_ + auVar37._4_4_ * fVar115 * 0.0 +
           auVar117._4_4_ * auVar119._4_4_ * fVar115) - auVar109._4_4_ * auVar131._4_4_;
      auVar101._8_4_ =
           (fStack_1c8 * auVar37._12_4_ + auVar37._8_4_ * fVar116 * 0.0 +
           auVar117._8_4_ * auVar119._8_4_ * fVar116) - auVar109._8_4_ * auVar131._8_4_;
      auVar101._12_4_ =
           (auVar37._12_4_ * 0.0 + local_1d0 * auVar37._0_4_ * fVar122 +
           auVar117._12_4_ * auVar119._12_4_ * fVar122) - auVar109._12_4_ * auVar131._12_4_;
      auVar43._4_4_ = auVar43._8_4_;
      auVar43._0_4_ = auVar43._8_4_;
      auVar43._12_4_ = auVar43._8_4_;
      auVar32._4_4_ = auVar101._8_4_;
      auVar32._0_4_ = auVar101._8_4_;
      auVar32._8_4_ = auVar101._8_4_;
      auVar32._12_4_ = auVar101._8_4_;
      auVar38._4_4_ = auVar101._4_4_;
      auVar38._0_4_ = auVar101._4_4_;
      auVar38._8_4_ = auVar101._4_4_;
      auVar38._12_4_ = auVar101._4_4_;
      auVar117 = NEON_ext(auVar32,auVar101,0xc,1);
      auVar109 = NEON_ext(auVar38,auVar117,0xc,1);
      auVar44._4_12_ = auVar43._4_12_;
      auVar46._0_8_ = auVar44._0_8_;
      auVar46._8_4_ = fVar138;
      auVar46._12_4_ = auVar43._8_4_;
      auVar45._8_8_ = auVar46._8_8_;
      auVar45._4_4_ = auVar43._8_4_;
      auVar45._0_4_ = auVar44._0_4_;
      auVar47._0_12_ = auVar45._0_12_;
      auVar47._12_4_ = auVar43._8_4_;
      auVar131 = NEON_ext(auVar47,auVar47,8,1);
      fVar137 = auVar131._0_4_;
      auVar48._4_12_ = auVar47._4_12_;
      auVar48._0_4_ = fVar137;
      auVar50._0_8_ = auVar48._0_8_;
      auVar50._8_4_ = auVar131._8_4_;
      auVar50._12_4_ = auVar43._8_4_;
      auVar49._8_8_ = auVar50._8_8_;
      auVar49._4_4_ = auVar44._0_4_;
      auVar49._0_4_ = fVar137;
      auVar51._0_12_ = auVar49._0_12_;
      auVar51._12_4_ = fVar138;
      auVar119 = NEON_ext(auVar51,auVar131,8,1);
      auVar119 = NEON_ext(auVar119,auVar119,0xc,1);
      local_1d0 = (auVar44._0_4_ * auVar101._12_4_ + auVar37._12_4_ * auVar101._0_4_ * fVar114 +
                  auVar119._0_4_ * auVar109._0_4_ * fVar114) - auVar117._0_4_ * fVar137;
      fStack_1cc = (fVar138 * auVar101._12_4_ + auVar37._12_4_ * auVar101._4_4_ * fVar115 +
                   auVar119._4_4_ * auVar109._4_4_ * fVar115) - auVar117._4_4_ * auVar131._4_4_;
      fStack_1c8 = (auVar43._8_4_ * auVar101._12_4_ + auVar37._12_4_ * auVar101._8_4_ * fVar116 +
                   auVar119._8_4_ * auVar109._8_4_ * fVar116) - auVar117._8_4_ * auVar131._8_4_;
      fStack_1c4 = 0.0;
    }
    auVar117 = *(undefined1 (*) [16])(lVar13 + 0x50);
    local_1d0 = local_1d0 + auVar117._0_4_;
    fStack_1cc = fStack_1cc + auVar117._4_4_;
    fStack_1c8 = fStack_1c8 + auVar117._8_4_;
    fStack_1c4 = fStack_1c4 + auVar117._12_4_;
  }
LAB_01340124:
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_00d0a71c(&local_100,&local_70);
  lVar13 = FUN_01180e7c(param_2,&local_100);
  puVar11 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_100 + 3);
    do {
      sVar23 = *psVar1;
      cVar4 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar22) {
        *psVar1 = sVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar23 == 1) {
      piVar14 = (int *)((long)local_100 + 0x1c);
      do {
        iVar10 = *piVar14;
        cVar4 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(piVar14,0x10);
        if (bVar22) {
          *piVar14 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_140 = (char)*puVar11;
        uStack_13f = (undefined7)((ulong)*puVar11 >> 8);
        FUN_00c44438(lVar16 + 0x8040,&local_140);
      }
    }
    else if (sVar23 == 0) goto LAB_0133fa10;
  }
  if (lVar13 != 0) {
    piVar14 = (int *)*param_2;
    puVar20 = (ushort *)((long)piVar14 - (long)*piVar14);
    uVar9 = *puVar20;
    if (uVar9 < 0xb) {
      iVar136 = 0;
      iVar10 = 0;
      iVar135 = 0;
      if (8 < uVar9) goto LAB_01340174;
    }
    else {
      iVar135 = 0;
      if ((ulong)puVar20[5] != 0) {
        iVar135 = *(int *)((long)piVar14 + (ulong)puVar20[5]);
      }
LAB_01340174:
      iVar136 = iVar135;
      iVar10 = 0;
      if ((ulong)puVar20[4] != 0) {
        iVar10 = *(int *)((long)piVar14 + (ulong)puVar20[4]);
      }
    }
    if (iVar136 - iVar10 == 1) {
      if (((0x16 < uVar9) && ((ulong)puVar20[0xb] != 0)) &&
         (puVar15 = (uint *)((long)piVar14 + (ulong)puVar20[0xb]),
         puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15), 5 < *puVar15)) {
        puVar15 = puVar15 + 6;
        piVar14 = (int *)((long)puVar15 + (ulong)*puVar15);
        puVar15 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (8 - (long)*piVar14)))
        ;
        piVar14 = (int *)((long)puVar15 + (ulong)*puVar15);
        if (((4 < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
            (uVar18 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar18 != 0)) &&
           (*(char *)((long)piVar14 + uVar18) != '\0')) {
          local_108 = 0;
          if (((*PTR_DAT_047d8c00 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8c00);
          }
          lVar16 = *(long *)PTR_DAT_047d8c08;
          *(long *)PTR_DAT_047d8c10 = lVar16;
          auVar52._4_4_ = fStack_1cc;
          auVar52._0_4_ = local_1d0;
          local_56 = 0;
          local_58 = 0;
          uVar18 = FUN_00c7a0cc(*(undefined8 *)(lVar16 + 0x70),0xffffffff,&local_140,0,&local_58);
          auVar6._1_7_ = uStack_13f;
          auVar6[0] = local_140;
          auVar6._8_8_ = pcStack_138;
          iVar10 = -(uint)((uVar18 & 1) != 0);
          auVar39._4_4_ = iVar10;
          auVar39._0_4_ = iVar10;
          auVar39._8_4_ = iVar10;
          auVar39._12_4_ = iVar10;
          auVar52._8_4_ = fStack_1c8;
          auVar52._12_4_ = fStack_1c4;
          auVar52 = auVar52 ^ (auVar52 ^ auVar6) & auVar39;
          fStack_1c8 = auVar52._8_4_;
          fStack_1c4 = auVar52._12_4_;
          local_1d0 = auVar52._0_4_;
          fStack_1cc = auVar52._4_4_;
          FUN_012c7df0(&local_108);
        }
      }
      auVar5._8_4_ = fStack_1c8;
      auVar5._0_8_ = CONCAT44(fStack_1cc,local_1d0);
      auVar5._12_4_ = fStack_1c4;
      *(undefined1 *)(lVar13 + 0xe0) = 1;
      *(long *)(lVar13 + 0x58) = auVar5._8_8_;
      *(ulong *)(lVar13 + 0x50) = CONCAT44(fStack_1cc,local_1d0);
    }
    else {
      local_140 = -1;
      uStack_13f = 0x17ea73508677cd;
      puVar11 = (undefined8 *)FUN_01235878(param_2 + 0x2b,&local_140);
      puVar7 = PTR_LAB_047dcdd0;
      *puVar11 = PTR_LAB_047dcdd0;
      puVar11[3] = CONCAT44(fStack_1c4,fStack_1c8);
      puVar11[2] = CONCAT44(fStack_1cc,local_1d0);
      local_140 = '\x0f';
      uStack_13f = 0x55c0d7a581349f;
      auVar117 = *(undefined1 (*) [16])(lVar13 + 0x50);
      puVar11 = (undefined8 *)FUN_01235878(param_2 + 0x2b,&local_140);
      *puVar11 = puVar7;
      puVar11[3] = auVar117._8_8_;
      puVar11[2] = auVar117._0_8_;
    }
  }
  (**(code **)(*plVar17 + 0x60))(plVar17);
  goto LAB_0133f954;
code_r0x01340268:
  sVar23 = sVar3;
  if (sVar3 == 0) goto LAB_01340124;
  goto LAB_0134023c;
}


