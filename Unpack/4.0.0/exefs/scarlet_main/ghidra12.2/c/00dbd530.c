/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dbd530; name: FUN_00dbd530
 */


void FUN_00dbd530(long param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  code *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  do {
    lVar10 = param_1;
    param_1 = lVar10;
    if (*(long *)(lVar10 + 0x1a8) != 0) {
      param_1 = *(long *)(lVar10 + 0x1a8);
    }
  } while (param_1 != lVar10);
  if ((*(byte *)(lVar10 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  plVar1 = (long *)(lVar10 + 0x270);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00dbd588;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x278));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x278));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00dbd588;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00dbd588:
  local_e0 = (undefined8 *)0x0;
  uStack_d8 = 0;
  FUN_00dddfdc(&local_e0,param_2);
  local_d0 = (undefined8 *)0x0;
  uStack_c8 = 0;
  FUN_00ca1a48(&local_d0,param_2 + 0x10);
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = (code *)0x0;
  pcStack_a8 = (code *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code *)0x0;
  FUN_00dbd160(&local_a0,&local_e0);
  local_90 = 0;
  uStack_88 = 0;
  FUN_00ca1ea4(&local_90,&local_d0);
  local_c0 = &LAB_021a40c4;
  local_b8 = FUN_021a4234;
  local_b0 = FUN_021a4418;
  pcStack_a8 = FUN_021a4458;
  FUN_00f3b238(lVar10 + 0x230,&local_c0);
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    pcStack_a8 = (code *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(&local_a0);
  }
  puVar7 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_d0 + 3);
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
      piVar3 = (int *)((long)local_d0 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_c0 = (undefined1 *)*puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_c0);
      }
    }
    else if (sVar4 == 0) goto LAB_00dbd720;
  }
  puVar7 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_e0 + 3);
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
      piVar3 = (int *)((long)local_e0 + 0x1c);
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_c0 = (undefined1 *)*puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_c0);
      }
    }
    else if (sVar4 == 0) {
LAB_00dbd720:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(lVar10 + 0x268) = 1;
  *(undefined1 *)(lVar10 + 0x288) = 1;
  *(undefined8 *)(lVar10 + 0x270) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0x278));
  return;
}


