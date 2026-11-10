/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226635c; name: FUN_0226635c
 */


undefined8 FUN_0226635c(long param_1,long param_2)

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
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long *local_60;
  undefined4 local_58;
  undefined1 auStack_54 [20];
  
  plVar10 = (long *)(param_1 + 0x30);
  lVar8 = *plVar10;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 == lVar8) {
    if (*(long *)(param_1 + 0x1d8) == 0) {
      FUN_017fc270(&local_a8,*(undefined8 *)(param_1 + 8),auStack_54 + 0x1c);
      lVar5 = local_a8;
      local_a8 = 0;
      lVar8 = *(long *)(param_1 + 0x1d8);
      *(long *)(param_1 + 0x1d8) = lVar5;
      if (lVar8 == 0) {
        *(long *)(param_1 + 0x1e8) = local_98;
        *(undefined8 *)(param_1 + 0x1f0) = local_90;
        *(undefined8 *)(param_1 + 0x1e0) = local_a0;
      }
      else {
        FUN_0225e3e4(param_1 + 0x1e0);
        lVar5 = local_a8;
        *(undefined8 *)(param_1 + 0x1e0) = local_a0;
        *(long *)(param_1 + 0x1e8) = local_98;
        *(undefined8 *)(param_1 + 0x1f0) = local_90;
        local_a8 = 0;
        if (lVar5 != 0) {
          FUN_0225e3e4(&local_a0);
        }
      }
    }
    local_a8 = -0xfffffffe;
    uVar6 = FUN_0103b2e0(param_1 + 0xe8,&local_a8);
    plVar10 = (long *)(param_1 + 0x48);
    lVar8 = *plVar10;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 == lVar8) {
      plVar10 = (long *)0x0;
      bVar9 = true;
LAB_022664b8:
      local_88 = 0;
      local_90 = 0;
      local_a8 = param_1;
      local_a0 = uVar6;
      local_98 = param_1;
      FUN_0225e824(&local_90,param_2);
      local_80 = *(undefined8 *)(param_2 + 0x10);
      local_78 = *(undefined8 *)(param_2 + 0x18);
      uStack_70 = *(undefined8 *)(param_2 + 0x20);
      local_68 = *(undefined8 *)(param_2 + 0x28);
      local_60 = *(long **)(param_2 + 0x30);
      if (local_60 != (long *)0x0) {
        lVar5 = local_60[6];
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
      local_58 = 0;
      FUN_02266854(param_1 + 0x60,&local_a8);
      if (local_60 != (long *)0x0) {
        lVar5 = local_60[6];
        psVar1 = (short *)(lVar5 + 0x1a);
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
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*local_60 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      FUN_017fbe90(&local_90);
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
      if (cVar4 == '\0') goto LAB_022664b4;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar10 == 0) {
            cVar4 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar9) {
              *plVar10 = lVar5;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_022664b4;
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
LAB_022664b4:
    bVar9 = false;
    goto LAB_022664b8;
  }
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_022663a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = lVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_022663a4;
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
LAB_022663a4:
  uVar6 = FUN_02266700(param_1,param_2);
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
  return uVar6;
}


