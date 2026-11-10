/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01539410; name: FUN_01539410
 */


undefined8 FUN_01539410(undefined4 param_1,long param_2,long param_3)

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
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  if (*(long *)(param_2 + 0x1d8) == 0) {
    local_58 = *(undefined8 *)(param_2 + 8);
    FUN_0142ce50(&local_d0,local_58,&local_58);
    lVar9 = local_d0;
    local_d0 = 0;
    lVar11 = *(long *)(param_2 + 0x1d8);
    *(long *)(param_2 + 0x1d8) = lVar9;
    if (lVar11 == 0) {
      *(long *)(param_2 + 0x1e8) = local_c0;
      *(undefined8 **)(param_2 + 0x1f0) = local_b8;
      *(undefined8 *)(param_2 + 0x1e0) = local_c8;
    }
    else {
      FUN_01277d04(param_2 + 0x1e0);
      lVar9 = local_d0;
      *(undefined8 *)(param_2 + 0x1e0) = local_c8;
      *(long *)(param_2 + 0x1e8) = local_c0;
      *(undefined8 **)(param_2 + 0x1f0) = local_b8;
      local_d0 = 0;
      if (lVar9 != 0) {
        FUN_01277d04(&local_c8);
      }
    }
  }
  local_d0 = -0xfffffffe;
  uVar8 = FUN_0103b2e0(param_2 + 0xe8,&local_d0);
  plVar13 = (long *)(param_2 + 0x48);
  lVar11 = *plVar13;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 == lVar11) {
    plVar13 = (long *)0x0;
    bVar12 = true;
LAB_01539494:
    local_b0 = 0;
    local_b8 = (undefined8 *)0x0;
    local_d0 = param_2;
    local_c8 = uVar8;
    local_c0 = param_2;
    FUN_02204460(&local_b8,param_3);
    local_a8 = *(undefined8 *)(param_3 + 0x10);
    uStack_a0 = *(undefined8 *)(param_3 + 0x18);
    local_98 = *(undefined8 *)(param_3 + 0x20);
    local_88 = 0;
    uStack_90 = 0;
    FUN_00d32adc(&uStack_90,param_3 + 0x28);
    local_80 = *(long *)(param_3 + 0x38);
    if (local_80 != 0) {
      lVar9 = *(long *)(local_80 + 0x30);
      if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar10;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_00c43ef0(&local_78,param_3 + 0x40);
    local_68 = *(undefined8 *)(param_3 + 0x50);
    local_60 = param_1;
    FUN_0253763c(param_2 + 0x60,&local_d0);
    FUN_01538750(&uStack_90);
    puVar6 = local_b8;
    if (local_b8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_b8 + 3);
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
        piVar2 = (int *)((long)local_b8 + 0x1c);
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
    if (!bVar12) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
    return uVar8;
  }
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar12) {
      *plVar13 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01539490;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar13 == 0) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar12) {
            *plVar13 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01539490;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar12) {
      *plVar13 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01539490:
  bVar12 = false;
  goto LAB_01539494;
}


