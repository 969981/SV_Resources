/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021cbb2c; name: FUN_021cbb2c
 */


void FUN_021cbb2c(long *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined4 param_5,undefined4 param_6)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  short sVar14;
  long *plVar15;
  bool bVar16;
  undefined8 *puVar17;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined4 uStack_68;
  byte local_64 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_38;
  
  local_64[0] = param_4 & 1;
  if ((((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) || (lVar10 = *param_1, lVar10 == 0))
     || (*(short *)(lVar10 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  sVar14 = *(short *)(lVar10 + 0x1a);
LAB_021cbba4:
  sVar5 = *psVar1;
  if (sVar5 == sVar14) {
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar14 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_021cbbcc;
    bVar13 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_021cbbcc:
    bVar13 = false;
  }
  if (!bVar13) {
    sVar14 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_021cbba4;
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  plVar15 = (long *)(lVar10 + -0x28);
  plVar2 = (long *)(lVar10 + 0x58);
  do {
    lVar11 = *plVar2;
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar13) {
      *plVar2 = lVar11;
      *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar10 + 0x60);
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_6c = param_6;
  uStack_68 = param_5;
  local_60 = param_3;
  uStack_58 = param_2;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar11) {
    bVar16 = true;
  }
  else {
    lVar11 = nn::os::GetCurrentThread();
    do {
      lVar8 = *plVar2;
      lVar12 = *(long *)(lVar10 + 0x60);
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar8;
        *(long *)(lVar10 + 0x60) = lVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      while ((lVar8 != 0 && (lVar11 != lVar8))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x68));
        do {
          lVar8 = *plVar2;
          lVar12 = *(long *)(lVar10 + 0x60);
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar13) {
            *plVar2 = lVar8;
            *(long *)(lVar10 + 0x60) = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      do {
        lVar4 = *plVar2;
        if (lVar4 != lVar8 || *(long *)(lVar10 + 0x60) != lVar12) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto LAB_021cbf90;
        }
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *plVar2 = lVar8;
          *(long *)(lVar10 + 0x5c) = lVar12 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar13 = true;
LAB_021cbf90:
      bVar16 = false;
      lVar8 = lVar4;
      lVar12 = *(long *)(lVar10 + 0x60);
    } while (!bVar13);
  }
  plVar9 = *(long **)(lVar10 + 0x188);
  if (plVar9 == (long *)0x0) {
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
  }
  else {
    (**(code **)(*plVar9 + 0x18))(&local_88);
    puVar17 = (undefined8 *)CONCAT71(uStack_87,local_88);
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    if ((long *)puVar17[2] == plVar9 + 5) {
      FUN_00cbc6dc(&local_98,&local_88);
      puVar17 = (undefined8 *)CONCAT71(uStack_87,local_88);
    }
    if (puVar17 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar17 + 3);
      do {
        sVar14 = *psVar1;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        piVar3 = (int *)((long)puVar17 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = *puVar17;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar14 == 0) goto LAB_021cbd24;
    }
  }
  local_88 = 2;
  local_80 = 0;
  uStack_78 = 0;
  FUN_00ca1ea4(&local_80,&local_98);
  FUN_01108e10(plVar15,param_1 + 2,&local_88,&uStack_58,&local_60,local_64,&uStack_68,&local_6c);
  FUN_00cecfd8(&local_88);
  puVar17 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_98 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar17;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar14 == 0) {
LAB_021cbd24:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (!bVar16) {
    do {
      lVar11 = *plVar2;
      lVar8 = *(long *)(lVar10 + 0x60);
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar11;
        *(long *)(lVar10 + 0x60) = lVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar12 = *plVar2;
      lVar4 = *(long *)(lVar10 + 0x60);
      if (lVar12 != lVar11 || lVar4 != lVar8) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto joined_r0x021cbd54;
      }
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar13) {
        *plVar2 = lVar11;
        *(long *)(lVar10 + 0x5c) = lVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar13 = true;
joined_r0x021cbd54:
    if (!bVar13) {
      do {
        lVar11 = *plVar2;
        lVar8 = *(long *)(lVar10 + 0x60);
        if (lVar11 != lVar12 || lVar8 != lVar4) {
          bVar13 = false;
          ClearExclusiveLocal();
          lVar12 = lVar11;
          lVar4 = lVar8;
          goto joined_r0x021cbd54;
        }
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *plVar2 = lVar12;
          *(long *)(lVar10 + 0x5c) = lVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar13 = true;
      lVar12 = lVar11;
      lVar4 = lVar8;
      goto joined_r0x021cbd54;
    }
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x68));
  }
  lVar10 = *(long *)(lVar10 + 8);
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar6 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar14 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
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


