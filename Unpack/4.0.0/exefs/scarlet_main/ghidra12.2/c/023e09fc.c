/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023e09fc; name: FUN_023e09fc
 */


undefined8 FUN_023e09fc(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

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
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  if (*(long *)(param_2 + 0x1f8) == 0) {
    local_58 = *(undefined8 *)(param_2 + 8);
    FUN_00fd8ee0(&local_b8,local_58,&local_58);
    lVar9 = local_b8;
    local_b8 = 0;
    lVar10 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x1f8) = lVar9;
    if (lVar10 == 0) {
      *(undefined8 **)(param_2 + 0x210) = local_a0;
      *(long *)(param_2 + 0x208) = local_a8;
      *(undefined8 *)(param_2 + 0x200) = local_b0;
    }
    else {
      FUN_01091d2c(param_2 + 0x200);
      lVar9 = local_b8;
      *(undefined8 **)(param_2 + 0x210) = local_a0;
      *(long *)(param_2 + 0x208) = local_a8;
      *(undefined8 *)(param_2 + 0x200) = local_b0;
      local_b8 = 0;
      if (lVar9 != 0) {
        FUN_01091d2c(&local_b0);
      }
    }
  }
  local_b8 = -0xfffffffd;
  uVar8 = FUN_0103b2e0(param_2 + 0xe8,&local_b8);
  plVar12 = (long *)(param_2 + 0x48);
  lVar10 = *plVar12;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar10) {
    plVar12 = (long *)0x0;
    bVar11 = true;
LAB_023e0a80:
    local_98 = 0;
    local_a0 = (undefined8 *)0x0;
    local_b8 = param_2;
    local_b0 = uVar8;
    local_a8 = param_2;
    FUN_00c43ef0(&local_a0,param_3);
    local_90 = *(undefined8 *)(param_3 + 0x10);
    uStack_88 = *(undefined8 *)(param_3 + 0x18);
    local_80 = *(undefined8 *)(param_3 + 0x20);
    local_78 = *(long **)(param_3 + 0x28);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
    local_70 = param_1;
    local_68 = param_4;
    FUN_023e2d88(param_2 + 0x60,&local_b8);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    puVar6 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0 + 3);
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
        piVar2 = (int *)((long)local_a0 + 0x1c);
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
          local_58 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_58);
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
    if (cVar5 == '\0') goto LAB_023e0a7c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar12 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar11) {
            *plVar12 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_023e0a7c;
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
LAB_023e0a7c:
  bVar11 = false;
  goto LAB_023e0a80;
}


