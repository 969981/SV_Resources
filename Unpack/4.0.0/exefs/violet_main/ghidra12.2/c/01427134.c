/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01427134; name: FUN_01427134
 */


void FUN_01427134(long param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_80;
  
  do {
    lVar9 = param_1;
    param_1 = lVar9;
    if (*(long *)(lVar9 + 0x1a8) != 0) {
      param_1 = *(long *)(lVar9 + 0x1a8);
    }
  } while (param_1 != lVar9);
  if ((*(byte *)(lVar9 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  plVar1 = (long *)(lVar9 + 0x270);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0142718c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x278));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x278));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0142718c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0142718c:
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  FUN_00ca0ae4(&local_e8,param_2);
  local_d8 = *(undefined8 *)(param_2 + 0x10);
  uStack_d0 = *(undefined8 *)(param_2 + 0x18);
  local_c8 = *(long **)(param_2 + 0x20);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x18))();
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (code *)0x0;
  local_a8 = (code *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  FUN_00d95f1c(&local_a0,&local_e8);
  local_90 = local_d8;
  uStack_88 = uStack_d0;
  local_80 = local_c8;
  local_c0 = &LAB_021bf664;
  local_b8 = FUN_021bf9f0;
  local_c8 = (long *)0x0;
  local_b0 = FUN_021bfb10;
  local_a8 = FUN_021bfb68;
  puVar11 = *(undefined8 **)(lVar9 + 0x238);
  if (puVar11 < *(undefined8 **)(lVar9 + 0x240)) {
    uVar12 = *(undefined8 *)(lVar9 + 0x248);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 != 0) {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar12;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    }
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    if (local_a8 != (code *)0x0) {
      (*local_a8)(&local_a0,puVar11 + 4);
      pcVar7 = local_b8;
      puVar11[3] = local_a8;
      *puVar11 = local_c0;
      puVar11[1] = local_b8;
      puVar11[2] = local_b0;
      if (local_b8 != (code *)0x0) {
        local_b0 = (code *)0x0;
        local_a8 = (code *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar7)(&local_a0);
      }
    }
    if (lVar10 != 0) {
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    *(undefined8 **)(lVar9 + 0x238) = puVar11 + 0x10;
  }
  else {
    FUN_01428300(lVar9 + 0x230,&local_c0);
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (code *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(&local_a0);
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  puVar11 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_e8 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_e8 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_c0 = (undefined1 *)*puVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_c0);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(lVar9 + 0x268) = 1;
  *(undefined1 *)(lVar9 + 0x288) = 1;
  *(undefined8 *)(lVar9 + 0x270) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x278));
  return;
}


