/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01059940; name: FUN_01059940
 */


void FUN_01059940(long *param_1,byte param_2)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  byte local_e0;
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  byte local_a0;
  long local_98;
  
  lVar10 = *param_1;
  if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar10 + 0x1a);
  sVar12 = *(short *)(lVar10 + 0x1a);
LAB_01059994:
  sVar5 = *psVar1;
  if (sVar5 == sVar12) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar12 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_010599b8;
    bVar7 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_010599b8:
    bVar7 = false;
  }
  if (!bVar7) {
    sVar12 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_01059994;
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    return;
  }
  param_2 = param_2 & 1;
  local_f0 = (undefined8 *)0x0;
  uStack_e8 = 0;
  lVar11 = 0x1c8;
  if ((int)param_1[2] != 0) {
    lVar11 = 0x268;
  }
  FUN_00e9a898(&local_f0,param_1 + 3);
  local_d8 = (long *)param_1[5];
  local_e0 = param_2;
  if (local_d8 != (long *)0x0) {
    lVar13 = *(long *)((long)local_d8 + 0x30);
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar14;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  lVar11 = lVar10 + lVar11;
  plVar2 = (long *)(lVar11 + 0x80);
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_01059a60;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x88));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x88));
        while (*plVar2 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01059a60;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar13;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01059a60:
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  local_d0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  FUN_00e27c6c(&local_b0,&local_f0);
  local_a0 = local_e0;
  local_98 = (long)local_d8;
  local_d0 = &LAB_021a051c;
  local_c8 = FUN_021a0a08;
  local_d8 = (long *)0x0;
  local_c0 = FUN_021a0b78;
  local_b8 = FUN_021a0c58;
  puVar4 = *(undefined8 **)(lVar11 + 0x48);
  if (puVar4 < *(undefined8 **)(lVar11 + 0x50)) {
    uVar14 = *(undefined8 *)(lVar11 + 0x58);
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar13 != 0) {
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar14;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    }
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    if (local_b8 != (code *)0x0) {
      (*local_b8)(&local_b0,puVar4 + 4);
      pcVar8 = local_c8;
      puVar4[3] = local_b8;
      *puVar4 = local_d0;
      puVar4[1] = local_c8;
      puVar4[2] = local_c0;
      if (local_c8 != (code *)0x0) {
        local_c0 = (code *)0x0;
        local_b8 = (code *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar8)(&local_b0);
      }
    }
    if (lVar13 != 0) {
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    }
    *(undefined8 **)(lVar11 + 0x48) = puVar4 + 0x10;
  }
  else {
    FUN_01a6138c(lVar11 + 0x40,&local_d0);
  }
  pcVar8 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar8)(&local_b0);
  }
  *(undefined1 *)(lVar11 + 0x78) = 1;
  *(undefined1 *)(lVar11 + 0x98) = 1;
  *(undefined8 *)(lVar11 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x88));
  if (local_d8 != (long *)0x0) {
    lVar11 = local_d8[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_d8 + 0x50))();
    }
    else if (sVar12 == 0) goto LAB_01059c08;
  }
  puVar4 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f0 + 3);
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_d0 = (undefined1 *)*puVar4;
        FUN_00c44438(lVar11 + 0x8040,&local_d0);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar11 = *(long *)(lVar10 + 8);
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar12 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))((long *)(lVar10 + -0x28));
    return;
  }
  if (sVar12 != 0) {
    return;
  }
LAB_01059c08:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


