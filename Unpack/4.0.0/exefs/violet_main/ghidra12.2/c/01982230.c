/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01982230; name: FUN_01982230
 */


void FUN_01982230(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  undefined8 *puVar15;
  long *plVar16;
  bool bVar17;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) || (lVar12 = *param_1, lVar12 == 0))
     || (*(short *)(lVar12 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar12 + 0x1a);
  sVar14 = *(short *)(lVar12 + 0x1a);
LAB_019822a0:
  sVar5 = *psVar1;
  if (sVar5 == sVar14) {
    cVar7 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar14 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 != '\0') goto LAB_019822cc;
    bVar17 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_019822cc:
    bVar17 = false;
  }
  if (!bVar17) {
    sVar14 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_019822a0;
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    return;
  }
  plVar16 = (long *)(lVar12 + -0x28);
  plVar2 = (long *)(lVar12 + 0x58);
  do {
    lVar10 = *plVar2;
    cVar7 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar17) {
      *plVar2 = lVar10;
      *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(lVar12 + 0x60);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  local_70 = param_3;
  local_68 = param_2;
  uStack_60 = param_5;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar10) {
    bVar17 = true;
  }
  else {
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar9 = *plVar2;
      lVar13 = *(long *)(lVar12 + 0x60);
      cVar7 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *plVar2 = lVar9;
        *(long *)(lVar12 + 0x60) = lVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      while ((lVar9 != 0 && (lVar10 != lVar9))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x68));
        do {
          lVar9 = *plVar2;
          lVar13 = *(long *)(lVar12 + 0x60);
          cVar7 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar17) {
            *plVar2 = lVar9;
            *(long *)(lVar12 + 0x60) = lVar13;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      do {
        lVar4 = *plVar2;
        if (lVar4 != lVar9 || *(long *)(lVar12 + 0x60) != lVar13) {
          bVar17 = false;
          ClearExclusiveLocal();
          goto LAB_0198236c;
        }
        cVar7 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar17) {
          *plVar2 = lVar9;
          *(long *)(lVar12 + 0x5c) = lVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar17 = true;
LAB_0198236c:
      lVar9 = lVar4;
      lVar13 = *(long *)(lVar12 + 0x60);
    } while (!bVar17);
    bVar17 = false;
  }
  plVar11 = *(long **)(lVar12 + 0x188);
  if (plVar11 == (long *)0x0) {
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
  }
  else {
    (**(code **)(*plVar11 + 0x18))(&local_88);
    puVar15 = (undefined8 *)CONCAT71(uStack_87,local_88);
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    if ((long *)puVar15[2] == plVar11 + 5) {
      FUN_00cbc6dc(&local_98,&local_88);
      puVar15 = (undefined8 *)CONCAT71(uStack_87,local_88);
    }
    if (puVar15 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar15 + 3);
      do {
        sVar14 = *psVar1;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar14 == 1) {
        piVar3 = (int *)((long)puVar15 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_58 = *puVar15;
          FUN_00c44438(lVar10 + 0x8040,&local_58);
        }
      }
      else if (sVar14 == 0) goto LAB_019824a8;
    }
  }
  local_88 = 2;
  local_80 = 0;
  uStack_78 = 0;
  FUN_00ca1ea4(&local_80,&local_98);
  FUN_018b8770(plVar16,param_1 + 2,&local_88,&local_68,&local_70,param_4,&uStack_60);
  FUN_00cecfd8(&local_88);
  puVar15 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar14 = *psVar1;
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_98 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_58 = *puVar15;
        FUN_00c44438(lVar10 + 0x8040,&local_58);
      }
    }
    else if (sVar14 == 0) {
LAB_019824a8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar17) {
    do {
      lVar10 = *plVar2;
      lVar9 = *(long *)(lVar12 + 0x60);
      cVar7 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *plVar2 = lVar10;
        *(long *)(lVar12 + 0x60) = lVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    do {
      lVar13 = *plVar2;
      lVar4 = *(long *)(lVar12 + 0x60);
      if (lVar13 != lVar10 || lVar4 != lVar9) {
        bVar17 = false;
        ClearExclusiveLocal();
        goto joined_r0x019824d8;
      }
      cVar7 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *plVar2 = lVar10;
        *(long *)(lVar12 + 0x5c) = lVar9 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar17 = true;
joined_r0x019824d8:
    if (!bVar17) {
      do {
        lVar10 = *plVar2;
        lVar9 = *(long *)(lVar12 + 0x60);
        if (lVar10 != lVar13 || lVar9 != lVar4) {
          bVar17 = false;
          ClearExclusiveLocal();
          lVar13 = lVar10;
          lVar4 = lVar9;
          goto joined_r0x019824d8;
        }
        cVar7 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar17) {
          *plVar2 = lVar13;
          *(long *)(lVar12 + 0x5c) = lVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar17 = true;
      lVar13 = lVar10;
      lVar4 = lVar9;
      goto joined_r0x019824d8;
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x68));
  }
  lVar12 = *(long *)(lVar12 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar7 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar14 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16);
    return;
  }
  if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


