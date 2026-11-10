/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019ce5c0; name: FUN_019ce5c0
 */


void FUN_019ce5c0(undefined8 param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  short sVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0 [2];
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  puVar6 = (undefined8 *)FUN_0140f310();
  local_78 = *puVar6;
  uStack_70 = puVar6[1];
  local_68 = puVar6[2];
  local_60 = (long *)puVar6[3];
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x18))();
  }
  FUN_0140f318(local_58,param_1,&local_78);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_01340a44(&local_b0,param_1,1);
  if ((char)local_b0 != '\0') {
    local_e0 = local_a8;
    uStack_d8 = uStack_a0;
    local_d0 = local_98;
    local_c8 = local_90;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x18))();
    }
    FUN_0140f318(local_c0,param_1,&local_e0);
    FUN_00d0a34c(&local_88,local_c0);
    if (local_c0[0] != (undefined8 *)0x0) {
      psVar2 = (short *)(local_c0[0] + 3);
      do {
        sVar13 = *psVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar13 == 1) {
        piVar1 = (int *)((long)local_c0[0] + 0x1c);
        do {
          iVar5 = *piVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar5 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_48 = *local_c0[0];
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar13 == 0) goto LAB_019ce70c;
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if ((char)local_b0 != '\0') {
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      local_b0 = (long *)((ulong)local_b0 & 0xffffffffffffff00);
    }
  }
  if ((local_58[0] != (undefined8 *)0x0) && (*(short *)((long)local_58[0] + 0x1a) != 0)) {
    psVar2 = (short *)((long)local_58[0] + 0x1a);
    sVar13 = *(short *)((long)local_58[0] + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar12) {
          *psVar2 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_019ce8dc;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019ce8dc:
        bVar12 = false;
      }
      if (bVar12) {
        lVar10 = local_58[0][2];
        if (lVar10 != 0) {
          lVar7 = FUN_01491340(lVar10 + 0xe0,&local_b0);
          if (((lVar7 == 0) || (local_88 == (undefined8 *)0x0)) ||
             (*(short *)((long)local_88 + 0x1a) == 0)) goto LAB_019ce91c;
          psVar2 = (short *)((long)local_88 + 0x1a);
          sVar13 = *(short *)((long)local_88 + 0x1a);
          goto LAB_019ce9f8;
        }
        break;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
  goto LAB_019ce6a0;
LAB_019cea60:
  if (*plVar9 == 0) goto code_r0x019cea68;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar12) {
            *plVar9 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_019cea70;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar12) {
      *plVar9 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_019cea70:
  bVar12 = false;
LAB_019cea74:
  plVar9 = (long *)FUN_02249110(*(undefined8 *)(lVar11 + 0x100),*(undefined8 *)(lVar11 + 0x108));
  if ((*(long **)(lVar11 + 0x108) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_02249110(*(undefined8 *)(lVar11 + 0x138),*(undefined8 *)(lVar11 + 0x140));
    if (*(long **)(lVar11 + 0x140) == plVar9) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)0x0;
      if (*plVar9 != 0) {
        plVar15 = (long *)(*plVar9 + -0x20);
      }
    }
  }
  else {
    plVar15 = (long *)(*plVar9 + -0x20);
  }
  if (!bVar12) {
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
  }
  if (plVar15 != (long *)0x0) {
    local_b0 = plVar15;
    (**(code **)(*plVar15 + 0x58))(plVar15);
    FUN_018eb12c(lVar7,&local_b0);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x60))();
    }
  }
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))((long *)(lVar11 + -0x28));
  goto LAB_019ce91c;
code_r0x019cea68:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar12) {
    *plVar9 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_019cea70;
  goto LAB_019cea60;
  while (sVar13 = sVar3, sVar3 != 0) {
LAB_019ce9f8:
    sVar3 = *psVar2;
    if (sVar3 == sVar13) {
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar12) {
        *psVar2 = sVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_019cea1c;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_019cea1c:
      bVar12 = false;
    }
    if (bVar12) {
      lVar11 = local_88[2];
      if (lVar11 != 0) {
        plVar9 = (long *)(lVar11 + 0xe8);
        lVar14 = *plVar9;
        lVar8 = nn::os::GetCurrentThread();
        if (lVar8 == lVar14) {
          bVar12 = true;
          goto LAB_019cea74;
        }
        lVar8 = nn::os::GetCurrentThread();
        goto LAB_019cea60;
      }
      break;
    }
  }
LAB_019ce91c:
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
LAB_019ce6a0:
  puVar6 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar13 = *psVar2;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar12) {
        *psVar2 = sVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar13 == 1) {
      piVar1 = (int *)((long)local_88 + 0x1c);
      do {
        iVar5 = *piVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_b0 = (long *)*puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_b0);
      }
    }
    else if (sVar13 == 0) goto LAB_019ce70c;
  }
  if (local_58[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58[0] + 3);
    do {
      sVar13 = *psVar2;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar12) {
        *psVar2 = sVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar13 == 1) {
      piVar1 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar5 = *piVar1;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_b0 = (long *)*local_58[0];
        FUN_00c44438(lVar10 + 0x8040,&local_b0);
      }
    }
    else if (sVar13 == 0) {
LAB_019ce70c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


