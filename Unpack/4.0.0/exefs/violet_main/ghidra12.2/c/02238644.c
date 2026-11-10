/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02238644; name: FUN_02238644
 */


void FUN_02238644(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  long lVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_78 = *(undefined8 *)(param_1 + 0x110);
  uStack_70 = *(undefined8 *)(param_1 + 0x118);
  local_68 = *(undefined8 *)(param_1 + 0x120);
  plVar9 = *(long **)(param_1 + 0x128);
  local_60 = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_58,param_1 + 0x30,&local_78);
    plVar9 = local_60;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_58 != (undefined8 *)0x0) {
    if (*(short *)((long)local_58 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_58 + 0x1a);
      sVar13 = *(short *)((long)local_58 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar13) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_02238718;
          bVar12 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02238718:
          bVar12 = false;
        }
        if (bVar12) {
          lVar11 = local_58[2];
          if (lVar11 == 0) goto LAB_022387d8;
          plVar9 = (long *)(lVar11 + 0xe8);
          lVar14 = *plVar9;
          lVar8 = nn::os::GetCurrentThread();
          if (lVar8 == lVar14) {
            bVar12 = true;
            goto LAB_02238758;
          }
          lVar8 = nn::os::GetCurrentThread();
          bVar12 = false;
          goto LAB_022388ec;
        }
        sVar13 = sVar3;
      } while (sVar3 != 0);
LAB_022387d4:
      if (local_58 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_022387d8:
    puVar6 = local_58;
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *puVar6;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_022388ec:
  if (*plVar9 == 0) goto code_r0x022388f4;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
  bVar12 = false;
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
        while (*plVar9 == 0) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar12) {
            *plVar9 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar12 = false;
          if (cVar5 == '\0') goto LAB_02238758;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02238758:
  plVar9 = (long *)FUN_022380d0(*(undefined8 *)(lVar11 + 0x100),*(undefined8 *)(lVar11 + 0x108));
  if ((*(long **)(lVar11 + 0x108) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_022380d0(*(undefined8 *)(lVar11 + 0x138),*(undefined8 *)(lVar11 + 0x140));
    if (*(long **)(lVar11 + 0x140) == plVar9) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + -0x20;
      }
    }
  }
  else {
    lVar8 = *plVar9 + -0x20;
  }
  if (!bVar12) {
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
  }
  if ((lVar8 != 0) && (uVar10 = FUN_021237ec(param_1,1), (uVar10 & 0xff) != 0)) {
    FUN_0213a320((int)(uVar10 >> 0x20),lVar8);
  }
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
  goto LAB_022387d4;
code_r0x022388f4:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar4) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_02238758;
  goto LAB_022388ec;
}


