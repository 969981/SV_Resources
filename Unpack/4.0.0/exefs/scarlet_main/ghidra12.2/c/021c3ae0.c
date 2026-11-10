/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021c3ae0; name: FUN_021c3ae0
 */


undefined8 FUN_021c3ae0(undefined4 param_1,long param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  if (*(long *)(param_2 + 0x1d8) == 0) {
    local_58 = *(undefined8 *)(param_2 + 8);
    FUN_021c45a0(&local_b0,local_58,&local_58);
    lVar6 = local_b0;
    local_b0 = 0;
    lVar9 = *(long *)(param_2 + 0x1d8);
    *(long *)(param_2 + 0x1d8) = lVar6;
    if (lVar9 == 0) {
      *(long *)(param_2 + 0x1e8) = local_a0;
      *(undefined8 *)(param_2 + 0x1f0) = local_98;
      *(undefined8 *)(param_2 + 0x1e0) = local_a8;
    }
    else {
      FUN_021c46b4(param_2 + 0x1e0);
      lVar6 = local_b0;
      *(undefined8 *)(param_2 + 0x1e0) = local_a8;
      *(long *)(param_2 + 0x1e8) = local_a0;
      *(undefined8 *)(param_2 + 0x1f0) = local_98;
      local_b0 = 0;
      if (lVar6 != 0) {
        FUN_021c46b4(&local_a8);
      }
    }
  }
  local_b0 = -0xfffffffe;
  uVar5 = FUN_0103b2e0(param_2 + 0xe8,&local_b0);
  plVar10 = (long *)(param_2 + 0x48);
  lVar9 = *plVar10;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar9) {
    plVar10 = (long *)0x0;
    bVar8 = true;
LAB_021c3b64:
    local_90 = 0;
    local_98 = 0;
    local_b0 = param_2;
    local_a8 = uVar5;
    local_a0 = param_2;
    FUN_021c4af4(&local_98,param_3);
    local_88 = *(undefined8 *)(param_3 + 0x10);
    local_80 = *(undefined8 *)(param_3 + 0x18);
    uStack_78 = *(undefined8 *)(param_3 + 0x20);
    local_70 = *(undefined8 *)(param_3 + 0x28);
    local_68 = *(long **)(param_3 + 0x30);
    if (local_68 != (long *)0x0) {
      lVar6 = local_68[6];
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
    local_60 = param_1;
    FUN_021c4d54(param_2 + 0x60,&local_b0);
    if (local_68 != (long *)0x0) {
      lVar6 = local_68[6];
      psVar1 = (short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    FUN_021c39d0(&local_98);
    if (!bVar8) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    return uVar5;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_021c3b60;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x50));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_021c3b60;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_021c3b60:
  bVar8 = false;
  goto LAB_021c3b64;
}


