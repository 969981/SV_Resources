/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3b7d0; name: FUN_01e3b7d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3b7d0(long *param_1,long param_2,long *param_3,undefined8 param_4,undefined8 *param_5)

{
  short *psVar1;
  int *piVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  short sVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *local_148;
  undefined8 uStack_140;
  long local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 *local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_a0 [7];
  undefined8 local_68;
  undefined8 local_48;
  
  lVar13 = *param_3;
  if ((lVar13 != 0) && (*(short *)(lVar13 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar15 = *(short *)(lVar13 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar15) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01e3b864;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e3b864:
        bVar6 = false;
      }
      if (bVar6) {
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 != 0) {
          plVar17 = (long *)(lVar13 + -0x28);
          if (((*PTR_DAT_047d8c00 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8c00);
          }
          lVar11 = *(long *)PTR_DAT_047d8c08;
          *(long *)PTR_DAT_047d8c10 = lVar11;
          local_68 = *(undefined8 *)(lVar11 + 0x70);
          plVar9 = (long *)FUN_01328fa0(plVar17,*(undefined8 *)(lVar13 + -0x20));
          lVar11 = _DAT_03caaa90;
          plVar9[0x25] = _UNK_03caaa98;
          plVar9[0x24] = lVar11;
          FUN_01401c64(&local_120,param_4,&local_68);
          if (local_120 == (undefined8 *)0x0) {
            *param_1 = 0;
            goto LAB_01e3b904;
          }
          if (*(short *)((long)local_120 + 0x1a) == 0) goto LAB_01e3bdf8;
          psVar1 = (short *)((long)local_120 + 0x1a);
          sVar15 = *(short *)((long)local_120 + 0x1a);
          goto LAB_01e3bdc4;
        }
        break;
      }
      sVar15 = sVar4;
    } while (sVar4 != 0);
  }
  *param_1 = 0;
  return;
  while (sVar15 = sVar4, sVar4 != 0) {
LAB_01e3bdc4:
    sVar4 = *psVar1;
    if (sVar4 == sVar15) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01e3bde8;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e3bde8:
      bVar6 = false;
    }
    if (bVar6) {
      lVar11 = 0;
      if (local_120[2] != 0) {
        lVar11 = local_120[2] + -0x28;
      }
      *param_1 = lVar11;
      goto LAB_01e3be14;
    }
  }
LAB_01e3bdf8:
  *param_1 = 0;
LAB_01e3be14:
  psVar1 = (short *)(local_120 + 3);
  do {
    sVar15 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar15 == 1) {
    piVar2 = (int *)((long)local_120 + 0x1c);
    do {
      iVar8 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar11 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar11;
      local_a0[0] = *local_120;
      FUN_00c44438(lVar11 + 0x8040,local_a0);
    }
  }
  else if (sVar15 == 0) goto LAB_01e3bc1c;
LAB_01e3b904:
  lVar11 = *param_1;
  *(undefined8 *)(lVar11 + 0x40) = *param_5;
  *(undefined8 *)(lVar11 + 0x48) = param_5[1];
  *(undefined8 *)(lVar11 + 0x50) = param_5[2];
  plVar16 = (long *)param_5[3];
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar10 = *(long **)(lVar11 + 0x58);
  *(long **)(lVar11 + 0x58) = plVar16;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined4 *)(lVar11 + 0xa0) = *(undefined4 *)(param_5 + 4);
  if ((*(int *)(lVar11 + 0x74) == 2) && (*(long *)(lVar11 + 0xb8) != 0)) {
    FUN_01e3bfc4(*(long *)(lVar11 + 0xb8),*(undefined8 *)(lVar11 + 0xb0));
  }
  uVar3 = *(undefined1 *)((long)param_5 + 0x24);
  *(undefined1 *)(lVar11 + 0x331) = 1;
  *(undefined1 *)(lVar11 + 0x330) = uVar3;
  *(undefined4 *)(lVar11 + 0x334) = *(undefined4 *)(param_5 + 5);
  *(undefined4 *)(lVar11 + 0x270) = 3;
  FUN_0140f7d8(local_a0,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
               *(undefined4 *)(param_2 + 0x48),1);
  memcpy((void *)(lVar11 + 0x2a0),local_a0,0x28);
  if (*(int *)(lVar11 + 0x74) == 0) {
    *(undefined4 *)(lVar11 + 0x74) = 1;
  }
  local_120 = (undefined8 *)&LAB_00aa64f8;
  local_118 = FUN_00aa6504;
  local_110 = FUN_00aa6508;
  local_108 = (code *)&LAB_00aa650c;
  pcVar14 = *(code **)(lVar11 + 0x178);
  if (pcVar14 == (code *)0x0) {
LAB_01e3b9e8:
    (*local_110)(&local_100,lVar11 + 400);
    *(code **)(lVar11 + 0x188) = local_108;
    *(undefined8 *)(lVar11 + 0x170) = local_120;
    *(code **)(lVar11 + 0x178) = local_118;
    *(code **)(lVar11 + 0x180) = local_110;
  }
  else {
    *(undefined8 *)(lVar11 + 0x180) = 0;
    *(undefined8 *)(lVar11 + 0x188) = 0;
    *(undefined8 *)(lVar11 + 0x170) = 0;
    *(undefined8 *)(lVar11 + 0x178) = 0;
    (*pcVar14)(lVar11 + 400);
    if (local_110 != (code *)0x0) goto LAB_01e3b9e8;
  }
  pcVar14 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    local_120 = (undefined8 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar14)(&local_100);
  }
  (**(code **)(*plVar9 + 0x18))(&local_120,plVar9);
  local_148 = (undefined8 *)0x0;
  uStack_140 = 0;
  plVar16 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 5;
  }
  if ((long *)local_120[2] == plVar16) {
    FUN_019e13bc(&local_148,&local_120);
  }
  puVar7 = local_120;
  if (local_120 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_120 + 3);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_120 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_48 = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_48);
      }
    }
    else if (sVar15 == 0) goto LAB_01e3bc1c;
  }
  local_128 = 0;
  local_130 = (undefined8 *)0x0;
  local_138 = param_2;
  FUN_00ca1a48(&local_130,param_3);
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = (code *)0x0;
  local_108 = (code *)0x0;
  local_120 = (undefined8 *)0x0;
  local_118 = (code *)0x0;
  FUN_013dc70c(&local_100,&local_148);
  local_f0 = local_138;
  uStack_e8 = 0;
  local_e0 = 0;
  FUN_00ca1ea4(&uStack_e8,&local_130);
  local_120 = (undefined8 *)&LAB_00aa6510;
  local_118 = FUN_00aa6bc8;
  local_110 = FUN_00aa6da8;
  local_108 = FUN_00aa6df0;
  pcVar14 = *(code **)(lVar11 + 0x1f8);
  if (pcVar14 == (code *)0x0) {
LAB_01e3bb18:
    (*local_110)(&local_100,lVar11 + 0x210);
    *(code **)(lVar11 + 0x208) = local_108;
    *(undefined8 *)(lVar11 + 0x1f0) = local_120;
    *(code **)(lVar11 + 0x1f8) = local_118;
    *(code **)(lVar11 + 0x200) = local_110;
  }
  else {
    *(undefined8 *)(lVar11 + 0x200) = 0;
    *(undefined8 *)(lVar11 + 0x208) = 0;
    *(undefined8 *)(lVar11 + 0x1f0) = 0;
    *(undefined8 *)(lVar11 + 0x1f8) = 0;
    (*pcVar14)(lVar11 + 0x210);
    if (local_110 != (code *)0x0) goto LAB_01e3bb18;
  }
  pcVar14 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = (code *)0x0;
    local_108 = (code *)0x0;
    local_120 = (undefined8 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar14)(&local_100);
  }
  puVar7 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_130 + 3);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_130 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar15 == 0) goto LAB_01e3bc1c;
  }
  puVar7 = local_148;
  if (local_148 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_148 + 3);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_148 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar15 == 0) {
LAB_01e3bc1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar13 = *(long *)(lVar13 + 8);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar15 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
  }
  else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


