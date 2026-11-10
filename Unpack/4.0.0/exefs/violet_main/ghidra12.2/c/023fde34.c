/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023fde34; name: FUN_023fde34
 */


undefined8 FUN_023fde34(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  if (*(long *)(param_2 + 0x1f8) == 0) {
    local_58 = *(undefined8 *)(param_2 + 8);
    FUN_00fd8ee0(&local_b0,local_58,&local_58);
    lVar6 = local_b0;
    local_b0 = 0;
    lVar8 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x1f8) = lVar6;
    if (lVar8 == 0) {
      *(undefined8 *)(param_2 + 0x210) = local_98;
      *(long *)(param_2 + 0x208) = local_a0;
      *(undefined8 *)(param_2 + 0x200) = local_a8;
    }
    else {
      FUN_01091d2c(param_2 + 0x200);
      lVar6 = local_b0;
      *(undefined8 *)(param_2 + 0x210) = local_98;
      *(long *)(param_2 + 0x208) = local_a0;
      *(undefined8 *)(param_2 + 0x200) = local_a8;
      local_b0 = 0;
      if (lVar6 != 0) {
        FUN_01091d2c(&local_a8);
      }
    }
  }
  local_b0 = -0xfffffffd;
  uVar5 = FUN_0103b2e0(param_2 + 0xe8,&local_b0);
  plVar10 = (long *)(param_2 + 0x48);
  lVar8 = *plVar10;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar8) {
    plVar10 = (long *)0x0;
    bVar9 = true;
LAB_023fdeb8:
    local_90 = 0;
    local_98 = 0;
    local_b0 = param_2;
    local_a8 = uVar5;
    local_a0 = param_2;
    FUN_00d32adc(&local_98,param_3);
    local_88 = *(long *)(param_3 + 0x10);
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
    FUN_00c43ef0(&local_80,param_3 + 0x18);
    local_70 = param_1;
    local_68 = param_4;
    FUN_0240487c(param_2 + 0x60,&local_b0);
    FUN_023fc4cc(&local_98);
    if (!bVar9) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    return uVar5;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_023fdeb4;
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
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_023fdeb4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_023fdeb4:
  bVar9 = false;
  goto LAB_023fdeb8;
}


