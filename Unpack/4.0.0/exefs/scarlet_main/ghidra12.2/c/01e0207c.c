/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0207c; name: FUN_01e0207c
 */


void FUN_01e0207c(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long local_a0;
  undefined1 *puStack_98;
  
  plVar1 = (long *)(param_1 + 0x2d8);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01e020b8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e020b8;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e020b8:
  lVar7 = *param_2;
  if ((lVar7 == 0) || (*(short *)(lVar7 + 0x1a) == 0)) goto LAB_01e020c0;
  psVar2 = (short *)(lVar7 + 0x1a);
  sVar9 = *(short *)(lVar7 + 0x1a);
  do {
    sVar3 = *psVar2;
    if (sVar3 == sVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e02160;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e02160:
      bVar5 = false;
    }
    if (bVar5) {
      lVar7 = *(long *)(lVar7 + 0x10);
      if (lVar7 != 0) {
        local_c0 = FUN_01e09be4;
        local_b8 = FUN_00a92ab0;
        local_b0 = &LAB_00a92ab4;
        puStack_a8 = &LAB_00a92ac0;
        local_a0 = param_1;
        puStack_98 = (undefined1 *)&local_c0;
        FUN_00dec528(lVar7 + 0x520,&local_c0);
        pcVar6 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (undefined1 *)0x0;
          puStack_a8 = (undefined1 *)0x0;
          local_c0 = (code *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar6)(&local_a0);
        }
        lVar8 = *(long *)(lVar7 + 8);
        psVar2 = (short *)(lVar8 + 0x1a);
        do {
          sVar9 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
        }
        else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      goto LAB_01e020c0;
    }
    sVar9 = sVar3;
    if (sVar3 == 0) {
LAB_01e020c0:
      *(undefined8 *)(param_1 + 0x2d8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2e0));
      return;
    }
  } while( true );
}


