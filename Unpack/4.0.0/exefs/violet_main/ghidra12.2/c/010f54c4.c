/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f54c4; name: FUN_010f54c4
 */


void FUN_010f54c4(long *param_1,undefined8 param_2,undefined4 param_3)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  long lVar14;
  undefined8 *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  code *pcStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  
  lVar11 = *param_1;
  if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar11 + 0x1a);
  sVar13 = *(short *)(lVar11 + 0x1a);
LAB_010f5518:
  sVar4 = *psVar1;
  if (sVar4 == sVar13) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar13 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_010f553c;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_010f553c:
    bVar6 = false;
  }
  if (!bVar6) {
    sVar13 = sVar4;
    if (sVar4 == 0) {
      return;
    }
    goto LAB_010f5518;
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if (lVar11 == 0) {
    return;
  }
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  lVar12 = 0x1c8;
  if ((int)param_1[2] != 0) {
    lVar12 = 0x268;
  }
  FUN_00ca1a48(&local_100,param_1 + 3);
  local_f0 = param_1[5];
  local_d8 = (long *)param_1[6];
  local_e8 = param_2;
  local_e0 = param_3;
  if (local_d8 != (long *)0x0) {
    lVar14 = *(long *)((long)local_d8 + 0x30);
    if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar10;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  lVar12 = lVar11 + lVar12;
  plVar2 = (long *)(lVar12 + 0x80);
  lVar14 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_010f55fc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x88));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x88));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar14;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_010f55fc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_010f55fc:
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (code *)0x0;
  pcStack_b8 = (code *)0x0;
  local_d0 = (undefined1 *)0x0;
  local_c8 = (code *)0x0;
  FUN_00ca1ea4(&local_b0,&local_100);
  local_90 = local_e0;
  local_88 = (long)local_d8;
  local_a0 = local_f0;
  uStack_98 = local_e8;
  local_d0 = &LAB_021ac298;
  local_c8 = FUN_021ac63c;
  local_d8 = (long *)0x0;
  local_c0 = FUN_021ac7ac;
  pcStack_b8 = FUN_021ac89c;
  FUN_01579364(lVar12 + 0x40,&local_d0);
  pcVar8 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar8)(&local_b0);
  }
  *(undefined1 *)(lVar12 + 0x78) = 1;
  *(undefined1 *)(lVar12 + 0x98) = 1;
  *(undefined8 *)(lVar12 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x88));
  if (local_d8 != (long *)0x0) {
    lVar12 = local_d8[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_d8 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_010f5708;
  }
  puVar7 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_100 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_100 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_d0 = (undefined1 *)*puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_d0);
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
  lVar12 = *(long *)(lVar11 + 8);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar13 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
    return;
  }
  if (sVar13 != 0) {
    return;
  }
LAB_010f5708:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


