/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011643b8; name: FUN_011643b8
 */


undefined8 FUN_011643b8(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  long *plVar12;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x1f8) == 0) {
    local_38 = *(undefined8 *)(param_1 + 8);
    FUN_00f79000(&local_90,local_38,&local_38);
    lVar9 = local_90;
    local_90 = 0;
    lVar10 = *(long *)(param_1 + 0x1f8);
    *(long *)(param_1 + 0x1f8) = lVar9;
    if (lVar10 == 0) {
      *(undefined8 *)(param_1 + 0x210) = local_78;
      *(long *)(param_1 + 0x208) = local_80;
      *(undefined8 *)(param_1 + 0x200) = local_88;
    }
    else {
      FUN_00f1122c(param_1 + 0x200);
      lVar9 = local_90;
      *(undefined8 *)(param_1 + 0x210) = local_78;
      *(long *)(param_1 + 0x208) = local_80;
      *(undefined8 *)(param_1 + 0x200) = local_88;
      local_90 = 0;
      if (lVar9 != 0) {
        FUN_00f1122c(&local_88);
      }
    }
  }
  local_90 = -0xfffffffd;
  uVar8 = FUN_0103b2e0(param_1 + 0xe8,&local_90);
  plVar12 = (long *)(param_1 + 0x48);
  lVar10 = *plVar12;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar10) {
    plVar12 = (long *)0x0;
    bVar11 = true;
LAB_01164430:
    local_78 = *param_2;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    local_90 = param_1;
    local_88 = uVar8;
    local_80 = param_1;
    FUN_01160880(&local_70,param_2 + 1);
    local_60 = 0;
    local_58 = 0;
    FUN_0217fe50(param_1 + 0x60,&local_90);
    puVar6 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (!bVar11) {
      *plVar12 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
    }
    return uVar8;
  }
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar11) {
      *plVar12 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_0116442c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
        while (*plVar12 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar11) {
            *plVar12 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0116442c;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar11) {
      *plVar12 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0116442c:
  bVar11 = false;
  goto LAB_01164430;
}


