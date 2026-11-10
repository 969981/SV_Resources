/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0147f17c; name: FUN_0147f17c
 */


void FUN_0147f17c(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  int *piVar2;
  short *psVar3;
  undefined8 *puVar4;
  long **pplVar5;
  short sVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_158;
  undefined8 local_150;
  long *local_148;
  long *local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long *local_110;
  ulong *local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  long *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  undefined8 *local_a8;
  char *local_a0;
  long *local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  
  local_d8 = *(ulong *)(param_2 + 0x110);
  local_d0 = *(undefined8 *)(param_2 + 0x118);
  local_c8 = *(undefined8 *)(param_2 + 0x120);
  plVar16 = *(long **)(param_2 + 0x128);
  local_c0 = plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    plVar17 = (long *)0x0;
    local_a8 = (undefined8 *)0x0;
    local_a0 = (char *)0x0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_a8,param_2 + 0x30,&local_d8);
    puVar18 = local_a8;
    if (local_a8 == (undefined8 *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_a8 + 0x1a) != 0) {
        psVar3 = (short *)((long)local_a8 + 0x1a);
        sVar15 = *(short *)((long)local_a8 + 0x1a);
        do {
          sVar6 = *psVar3;
          if (sVar6 == sVar15) {
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar11) {
              *psVar3 = sVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_0147f94c;
            bVar11 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0147f94c:
            bVar11 = false;
          }
          if (bVar11) {
            plVar17 = (long *)0x0;
            if (local_a8[2] != 0) {
              plVar17 = (long *)(local_a8[2] + -0x28);
            }
            goto LAB_0147f9c8;
          }
          sVar15 = sVar6;
        } while (sVar6 != 0);
      }
      plVar17 = (long *)0x0;
LAB_0147f9c8:
      psVar3 = (short *)(local_a8 + 3);
      do {
        sVar15 = *psVar3;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar11) {
          *psVar3 = sVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_f8 = (undefined1 *)*puVar18;
          FUN_00c44438(lVar13 + 0x8040,&local_f8);
        }
      }
      else if (sVar15 == 0) goto LAB_0147fa24;
    }
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  local_b0 = plVar17;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  local_e8 = 6;
  local_e0 = (long *)0x0;
  local_f8 = &DAT_94ed70272cac328;
  pcStack_f0 = "Target";
  FUN_01315eac(&local_d8,param_2,&local_f8);
  puVar8 = PTR_DAT_047d3e28;
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar9 = PTR_DAT_047d3e30;
  bVar11 = (char)local_d8 != '\0';
  puVar18 = (undefined8 *)PTR_DAT_047d3e30;
  if (bVar11) {
    puVar18 = &local_d0;
  }
  puVar18 = (undefined8 *)*puVar18;
  puVar4 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
  if (bVar11) {
    puVar4 = &local_c8;
  }
  pcVar19 = (char *)*puVar4;
  pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x10);
  if (bVar11) {
    pplVar5 = &local_c0;
  }
  local_98 = *pplVar5;
  pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar11) {
    pplVar5 = &local_b8;
  }
  plVar16 = *pplVar5;
  local_90 = plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    local_a8 = puVar18;
    local_a0 = pcVar19;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puVar18 = local_a8;
    pcVar19 = local_a0;
  }
  local_a0 = pcVar19;
  local_a8 = puVar18;
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    plVar17 = (long *)0x0;
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_88,param_2 + 0x30,&local_a8);
    puVar18 = local_88;
    if (local_88 == (undefined8 *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      if (*(short *)((long)local_88 + 0x1a) != 0) {
        psVar3 = (short *)((long)local_88 + 0x1a);
        sVar15 = *(short *)((long)local_88 + 0x1a);
        do {
          sVar6 = *psVar3;
          if (sVar6 == sVar15) {
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar11) {
              *psVar3 = sVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_0147f9a0;
            bVar11 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_0147f9a0:
            bVar11 = false;
          }
          if (bVar11) {
            plVar17 = (long *)0x0;
            if (local_88[2] != 0) {
              plVar17 = (long *)(local_88[2] + -0x28);
            }
            goto LAB_0147fa00;
          }
          sVar15 = sVar6;
        } while (sVar6 != 0);
      }
      plVar17 = (long *)0x0;
LAB_0147fa00:
      psVar3 = (short *)(local_88 + 3);
      do {
        sVar15 = *psVar3;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar11) {
          *psVar3 = sVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_68 = *puVar18;
          FUN_00c44438(lVar13 + 0x8040,&local_68);
        }
      }
      else if (sVar15 == 0) goto LAB_0147fa24;
    }
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if ((char)local_d8 != '\0') {
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    local_d8 = local_d8 & 0xffffffffffffff00;
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_b0 == (long *)0x0) {
    if (plVar17 == (long *)0x0) {
      return;
    }
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = local_b0;
    if (plVar17 == (long *)0x0) goto LAB_0147f638;
    local_f8 = (undefined1 *)0x83f932aa5abe94ed;
    pcStack_f0 = "Node";
    local_e8 = 4;
    local_e0 = (long *)0x0;
    FUN_01315eac(&local_d8,param_2,&local_f8);
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    bVar11 = (char)local_d8 != '\0';
    puVar18 = (undefined8 *)puVar9;
    if (bVar11) {
      puVar18 = &local_d0;
    }
    local_a8 = (undefined8 *)*puVar18;
    puVar18 = (undefined8 *)(puVar9 + 8);
    if (bVar11) {
      puVar18 = &local_c8;
    }
    local_a0 = (char *)*puVar18;
    pplVar5 = (long **)(puVar9 + 0x10);
    if (bVar11) {
      pplVar5 = &local_c0;
    }
    local_98 = *pplVar5;
    pplVar5 = (long **)(puVar9 + 0x18);
    if (bVar11) {
      pplVar5 = &local_b8;
    }
    local_90 = *pplVar5;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))();
    }
    if ((char)local_d8 != '\0') {
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      local_d8 = local_d8 & 0xffffffffffffff00;
    }
    if (local_e0 != (long *)0x0) {
      (**(code **)(*local_e0 + 0x20))();
    }
    lVar13 = (**(code **)(*local_b0 + 0x68))();
    uVar20 = *(undefined8 *)(lVar13 + 0x30);
    local_128 = *(undefined8 *)(param_2 + 0x110);
    uStack_120 = *(undefined8 *)(param_2 + 0x118);
    local_118 = *(undefined8 *)(param_2 + 0x120);
    local_110 = *(long **)(param_2 + 0x128);
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x18))();
    }
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      local_108 = (ulong *)0x0;
      uStack_100 = 0;
    }
    else {
      (**(code **)(param_2 + 0x10))(&local_108,param_2 + 0x30,&local_128);
    }
    lVar13 = FUN_01180e7c(param_2,&local_108);
    puVar10 = local_108;
    if (local_108 != (ulong *)0x0) {
      puVar1 = local_108 + 3;
      do {
        sVar15 = (short)*puVar1;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar11) {
          *(short *)puVar1 = sVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_108 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_d8 = *puVar10;
          FUN_00c44438(lVar14 + 0x8040,&local_d8);
        }
      }
      else if (sVar15 == 0) goto LAB_0147fa24;
    }
    if (local_110 == (long *)0x0) {
      if (lVar13 != 0) goto LAB_0147f488;
    }
    else {
      (**(code **)(*local_110 + 0x20))();
      if (lVar13 != 0) {
LAB_0147f488:
        uVar20 = FUN_0211a080(lVar13);
      }
    }
    lVar13 = (**(code **)(*plVar17 + 0x68))(plVar17);
    uVar21 = *(undefined8 *)(lVar13 + 0x30);
    local_e8 = 6;
    local_e0 = (long *)0x0;
    local_f8 = &DAT_94ed70272cac328;
    pcStack_f0 = "Target";
    FUN_01315eac(&local_d8,param_2,&local_f8);
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    bVar11 = (char)local_d8 != '\0';
    puVar18 = (undefined8 *)puVar9;
    if (bVar11) {
      puVar18 = &local_d0;
    }
    local_158 = *puVar18;
    puVar18 = (undefined8 *)(puVar9 + 8);
    if (bVar11) {
      puVar18 = &local_c8;
    }
    local_150 = *puVar18;
    pplVar5 = (long **)(puVar9 + 0x10);
    if (bVar11) {
      pplVar5 = &local_c0;
    }
    local_148 = *pplVar5;
    pplVar5 = (long **)(puVar9 + 0x18);
    if (bVar11) {
      pplVar5 = &local_b8;
    }
    local_140 = *pplVar5;
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x18))();
    }
    if (*(code **)(param_2 + 0x10) == (code *)0x0) {
      local_138 = (undefined8 *)0x0;
      uStack_130 = 0;
    }
    else {
      (**(code **)(param_2 + 0x10))(&local_138,param_2 + 0x30,&local_158);
    }
    lVar13 = FUN_01180e7c(param_2,&local_138);
    puVar18 = local_138;
    if (local_138 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_138 + 3);
      do {
        sVar15 = *psVar3;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar11) {
          *psVar3 = sVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)local_138 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar11) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_88 = (undefined8 *)*puVar18;
          FUN_00c44438(lVar14 + 0x8040,&local_88);
        }
      }
      else if (sVar15 == 0) {
LAB_0147fa24:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if ((char)local_d8 != '\0') {
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      local_d8 = local_d8 & 0xffffffffffffff00;
    }
    if (local_e0 == (long *)0x0) {
      if (lVar13 != 0) goto LAB_0147f5b4;
LAB_0147f71c:
      uVar22 = 0;
    }
    else {
      (**(code **)(*local_e0 + 0x20))();
      if (lVar13 == 0) goto LAB_0147f71c;
LAB_0147f5b4:
      uVar22 = FUN_0211a080(lVar13);
      uVar21 = uVar22;
    }
    if (*local_a0 != '\0') {
      lVar13 = FUN_01104bd8(uVar22,plVar17 + 0x21,&local_d8);
      plVar16 = plVar17 + 0x1f;
      if (lVar13 != 0) {
        plVar16 = (long *)(lVar13 + 0x128);
      }
      (**(code **)(*plVar16 + 0x50))(plVar16,&local_a8);
    }
    FUN_0146e648(CONCAT44((float)((ulong)uVar21 >> 0x20) - (float)((ulong)uVar20 >> 0x20),
                          (float)uVar21 - (float)uVar20),param_1,param_2,&local_b0);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    plVar16 = local_b0;
  }
  (**(code **)(*plVar17 + 0x60))(plVar17);
  if (plVar16 == (long *)0x0) {
    return;
  }
LAB_0147f638:
  (**(code **)(*plVar16 + 0x60))(plVar16);
  return;
}


