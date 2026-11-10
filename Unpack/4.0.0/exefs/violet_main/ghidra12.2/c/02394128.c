/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02394128; name: FUN_02394128
 */


undefined8 FUN_02394128(undefined8 param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  long *plVar10;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  
  plVar10 = (long *)(param_2 + 0x30);
  lVar8 = *plVar10;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar8) {
    if (*(long *)(param_2 + 0x1f8) == 0) {
      local_58[0] = *(undefined8 *)(param_2 + 8);
      FUN_0103caf0(&local_c8,local_58[0],local_58);
      lVar5 = local_c8;
      local_c8 = 0;
      lVar8 = *(long *)(param_2 + 0x1f8);
      *(long *)(param_2 + 0x1f8) = lVar5;
      if (lVar8 == 0) {
        *(undefined8 *)(param_2 + 0x210) = local_b0;
        *(long *)(param_2 + 0x208) = local_b8;
        *(undefined8 *)(param_2 + 0x200) = local_c0;
      }
      else {
        FUN_0103e9d8(param_2 + 0x200);
        lVar5 = local_c8;
        *(undefined8 *)(param_2 + 0x210) = local_b0;
        *(long *)(param_2 + 0x208) = local_b8;
        *(undefined8 *)(param_2 + 0x200) = local_c0;
        local_c8 = 0;
        if (lVar5 != 0) {
          FUN_0103e9d8(&local_c0);
        }
      }
    }
    local_c8 = -0xfffffffd;
    uVar6 = FUN_0103b2e0(param_2 + 0xe8,&local_c8);
    plVar10 = (long *)(param_2 + 0x48);
    lVar8 = *plVar10;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 == lVar8) {
      plVar10 = (long *)0x0;
      bVar9 = true;
LAB_023942a0:
      local_b0 = *param_3;
      local_a8 = param_3[1];
      local_a0 = param_3[2];
      uStack_98 = param_3[3];
      local_90 = 0;
      uStack_88 = 0;
      local_c8 = param_2;
      local_c0 = uVar6;
      local_b8 = param_2;
      FUN_00d32adc(&local_90,param_3 + 4);
      local_80 = param_3[6];
      if (local_80 != 0) {
        lVar5 = *(long *)(local_80 + 0x30);
        if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar5 + 0x1a);
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
          uVar7 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
          *(undefined8 *)(lVar5 + 8) = uVar7;
          *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      local_78 = 0;
      uStack_70 = 0;
      FUN_00c43ef0(&local_78,param_3 + 7);
      local_68 = (undefined4)param_1;
      local_60 = 1;
      FUN_02394618(param_2 + 0x60,&local_c8);
      FUN_023923d0(&local_90);
      if (!bVar9) {
        *plVar10 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
      }
      return uVar6;
    }
    lVar5 = nn::os::GetCurrentThread();
    while (*plVar10 == 0) {
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_0239429c;
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
              *plVar10 = lVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_0239429c;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar9) {
        *plVar10 = lVar5;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_0239429c:
    bVar9 = false;
    goto LAB_023942a0;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02394178;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x38));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02394178;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02394178:
  uVar6 = FUN_023944ac(param_1,param_2,param_3);
  *(undefined8 *)(param_2 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x38));
  return uVar6;
}


