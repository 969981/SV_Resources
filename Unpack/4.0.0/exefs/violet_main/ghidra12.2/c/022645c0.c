/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022645c0; name: FUN_022645c0
 */


void FUN_022645c0(undefined4 param_1,undefined4 param_2,long *param_3,undefined8 param_4,
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
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  if ((((*param_3 == 0) || (*(short *)(*param_3 + 0x1a) == 0)) || (lVar12 = *param_3, lVar12 == 0))
     || (*(short *)(lVar12 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar12 + 0x1a);
  sVar14 = *(short *)(lVar12 + 0x1a);
LAB_02264630:
  sVar5 = *psVar1;
  if (sVar5 == sVar14) {
    cVar7 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar14 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 != '\0') goto LAB_02264658;
    bVar17 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02264658:
    bVar17 = false;
  }
  if (!bVar17) {
    sVar14 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_02264630;
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
  local_68 = param_2;
  uStack_64 = param_1;
  local_60 = param_5;
  uStack_58 = param_4;
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
          goto LAB_022646e8;
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
LAB_022646e8:
      lVar9 = lVar4;
      lVar13 = *(long *)(lVar12 + 0x60);
    } while (!bVar17);
    bVar17 = false;
  }
  plVar11 = *(long **)(lVar12 + 0x188);
  if (plVar11 == (long *)0x0) {
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
  }
  else {
    (**(code **)(*plVar11 + 0x18))(&local_80);
    puVar15 = (undefined8 *)CONCAT71(uStack_7f,local_80);
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    if ((long *)puVar15[2] == plVar11 + 5) {
      FUN_00cbc6dc(&local_90,&local_80);
      puVar15 = (undefined8 *)CONCAT71(uStack_7f,local_80);
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
          local_38 = *puVar15;
          FUN_00c44438(lVar10 + 0x8040,&local_38);
        }
      }
      else if (sVar14 == 0) goto LAB_02264824;
    }
  }
  local_80 = 2;
  local_78 = 0;
  uStack_70 = 0;
  FUN_00ca1ea4(&local_78,&local_90);
  FUN_02264a88(plVar16,param_3 + 2,&local_80,&uStack_58,&local_60,&uStack_64,&local_68);
  FUN_00cecfd8(&local_80);
  puVar15 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
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
      piVar3 = (int *)((long)local_90 + 0x1c);
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
        local_38 = *puVar15;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar14 == 0) {
LAB_02264824:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
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
        goto joined_r0x02264854;
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
joined_r0x02264854:
    if (!bVar17) {
      do {
        lVar10 = *plVar2;
        lVar9 = *(long *)(lVar12 + 0x60);
        if (lVar10 != lVar13 || lVar9 != lVar4) {
          bVar17 = false;
          ClearExclusiveLocal();
          lVar13 = lVar10;
          lVar4 = lVar9;
          goto joined_r0x02264854;
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
      goto joined_r0x02264854;
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
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


