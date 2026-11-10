/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024125fc; name: FUN_024125fc
 */


undefined8 FUN_024125fc(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  bool bVar11;
  long *plVar12;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  plVar12 = (long *)(param_2 + 0x30);
  lVar10 = *plVar12;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar10) {
    if (*(long *)(param_2 + 0x1f8) == 0) {
      local_58 = *(undefined8 *)(param_2 + 8);
      FUN_00f79000(&local_c0,local_58,&local_58);
      lVar8 = local_c0;
      local_c0 = 0;
      lVar10 = *(long *)(param_2 + 0x1f8);
      *(long *)(param_2 + 0x1f8) = lVar8;
      if (lVar10 == 0) {
        *(undefined8 *)(param_2 + 0x210) = local_a8;
        *(long *)(param_2 + 0x208) = local_b0;
        *(undefined8 *)(param_2 + 0x200) = local_b8;
      }
      else {
        FUN_00f1122c(param_2 + 0x200);
        lVar8 = local_c0;
        *(undefined8 *)(param_2 + 0x210) = local_a8;
        *(long *)(param_2 + 0x208) = local_b0;
        *(undefined8 *)(param_2 + 0x200) = local_b8;
        local_c0 = 0;
        if (lVar8 != 0) {
          FUN_00f1122c(&local_b8);
        }
      }
    }
    local_c0 = -0xfffffffd;
    uVar9 = FUN_0103b2e0(param_2 + 0xe8,&local_c0);
    plVar12 = (long *)(param_2 + 0x48);
    lVar10 = *plVar12;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 == lVar10) {
      plVar12 = (long *)0x0;
      bVar11 = true;
LAB_02412784:
      local_a8 = *param_3;
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      local_c0 = param_2;
      local_b8 = uVar9;
      local_b0 = param_2;
      FUN_00c43ef0(&local_a0,param_3 + 1);
      local_90 = param_3[3];
      uStack_88 = param_3[4];
      local_80 = param_3[5];
      local_78 = (long *)param_3[6];
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
      local_70 = (undefined4)param_1;
      local_68 = param_4;
      FUN_02414b50(param_2 + 0x60,&local_c0);
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_58 = *puVar6;
            FUN_00c44438(lVar8 + 0x8040,&local_58);
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
      return uVar9;
    }
    lVar8 = nn::os::GetCurrentThread();
    while (*plVar12 == 0) {
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar11) {
        *plVar12 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') goto LAB_02412780;
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
              *plVar12 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02412780;
          }
        } while( true );
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar11) {
        *plVar12 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02412780:
    bVar11 = false;
    goto LAB_02412784;
  }
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar11) {
      *plVar12 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_02412650;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
        while (*plVar12 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar11) {
            *plVar12 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02412650;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar11) {
      *plVar12 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02412650:
  uVar9 = FUN_024129e0(param_1,param_2,param_3,param_4);
  *(undefined8 *)(param_2 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x38));
  return uVar9;
}


