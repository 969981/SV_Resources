/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f8bd4; name: FUN_013f8bd4
 */


long * FUN_013f8bd4(long *param_1)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long *local_50;
  undefined1 auStack_48 [8];
  
  plVar5 = (long *)FUN_013f8e38(auStack_48);
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0x13];
    if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar7;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar2 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 4;
  }
  plVar10 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar10 = plVar2 + -4;
  }
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_1);
  (**(code **)(plVar10[4] + 0x68))(plVar10 + 4);
  local_50 = plVar5;
  FUN_00df8c30(param_1 + 0x21,&local_50);
  if (local_50 != (long *)0x0) {
    lVar6 = local_50[0x13];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*param_1 + 0x100))(param_1,plVar2);
  plVar10 = param_1 + 0x88;
  lVar9 = *plVar10;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar9) {
    plVar10 = (long *)0x0;
    bVar8 = true;
LAB_013f8c94:
    if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(param_1,0,0);
    }
    else {
      (**(code **)(*plVar2 + 0xf8))(plVar2);
    }
    if (!bVar8) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    return plVar5;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar8) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_013f8c90;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x89));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_013f8c90;
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
LAB_013f8c90:
  bVar8 = false;
  goto LAB_013f8c94;
}


