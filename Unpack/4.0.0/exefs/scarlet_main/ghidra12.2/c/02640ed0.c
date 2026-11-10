/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02640ed0; name: FUN_02640ed0
 */


undefined8 FUN_02640ed0(undefined4 param_1,long param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_58;
  
  if (*(long *)(param_2 + 0x1d8) == 0) {
    local_58 = *(undefined8 *)(param_2 + 8);
    FUN_02641960(&local_d8,local_58,&local_58);
    lVar6 = local_d8;
    local_d8 = 0;
    lVar8 = *(long *)(param_2 + 0x1d8);
    *(long *)(param_2 + 0x1d8) = lVar6;
    if (lVar8 == 0) {
      *(long *)(param_2 + 0x1e8) = local_c8;
      *(undefined8 *)(param_2 + 0x1f0) = local_c0;
      *(undefined8 *)(param_2 + 0x1e0) = local_d0;
    }
    else {
      FUN_02641a74(param_2 + 0x1e0);
      lVar6 = local_d8;
      *(undefined8 *)(param_2 + 0x1e0) = local_d0;
      *(long *)(param_2 + 0x1e8) = local_c8;
      *(undefined8 *)(param_2 + 0x1f0) = local_c0;
      local_d8 = 0;
      if (lVar6 != 0) {
        FUN_02641a74(&local_d0);
      }
    }
  }
  local_d8 = -0xfffffffe;
  uVar5 = FUN_0103b2e0(param_2 + 0xe8,&local_d8);
  plVar9 = (long *)(param_2 + 0x48);
  lVar8 = *plVar9;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    plVar9 = (long *)0x0;
    bVar10 = true;
LAB_02640f54:
    local_b8 = 0;
    local_c0 = 0;
    local_d8 = param_2;
    local_d0 = uVar5;
    local_c8 = param_2;
    FUN_02641fe4(&local_c0,param_3);
    local_b0 = *(undefined8 *)(param_3 + 0x10);
    uStack_a8 = *(undefined8 *)(param_3 + 0x18);
    local_a0 = *(undefined8 *)(param_3 + 0x20);
    local_90 = 0;
    uStack_98 = 0;
    FUN_00d32adc(&uStack_98,param_3 + 0x28);
    local_88 = *(long *)(param_3 + 0x38);
    if (local_88 != 0) {
      lVar6 = *(long *)(local_88 + 0x30);
      if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        *(undefined8 *)(lVar6 + 8) = uVar7;
        *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_80 = 0;
    uStack_78 = 0;
    FUN_00c43ef0(&local_80,param_3 + 0x40);
    local_70 = *(undefined8 *)(param_3 + 0x50);
    local_68 = param_1;
    FUN_02642244(param_2 + 0x60,&local_d8);
    FUN_026407f8(&uStack_98);
    FUN_02640dc0(&local_c0);
    if (!bVar10) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
    return uVar5;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02640f50;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar10) {
            *plVar9 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02640f50;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02640f50:
  bVar10 = false;
  goto LAB_02640f54;
}


