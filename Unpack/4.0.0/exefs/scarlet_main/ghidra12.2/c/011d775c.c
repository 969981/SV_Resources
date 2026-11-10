/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011d775c; name: FUN_011d775c
 */


uint FUN_011d775c(long *param_1)

{
  long *plVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  uint uVar12;
  
  plVar1 = param_1 + 0x24;
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && param_1[0x25] == 0) {
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      param_1[0x25] = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_011d7790;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x26));
  do {
    if (*plVar1 != 0 || param_1[0x25] != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x26));
        while (*plVar1 == 0 && param_1[0x25] == 0) {
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar9;
            param_1[0x25] = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_011d7790;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      param_1[0x25] = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_011d7790:
  if (param_1[0x23] == 0) {
    uVar8 = 0;
    uVar12 = 0;
  }
  else {
    uVar8 = (**(code **)(*param_1 + 0x70))(param_1,PTR_s_S1C2AA00ADAC52EC5_047d99f8);
    uVar8 = uVar8 & 1;
    plVar10 = (long *)param_1[0x23];
    *(undefined4 *)(param_1 + 8) = 5;
    *(undefined1 *)(param_1 + 0x28) = 0;
    param_1[0x23] = 0;
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar11) {
          *psVar2 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar12 = 0x100;
  }
  do {
    lVar9 = *plVar1;
    lVar6 = param_1[0x25];
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar9;
      param_1[0x25] = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = param_1[0x25];
    if (lVar3 != lVar9 || lVar4 != lVar6) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_011d7858;
    }
    cVar7 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = 0;
      *(long *)((long)param_1 + 0x124) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar11 = true;
LAB_011d7858:
  if (!bVar11) {
    do {
      lVar9 = *plVar1;
      lVar6 = param_1[0x25];
      if (lVar9 != lVar3 || lVar6 != lVar4) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x011d7910;
      }
      cVar7 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = 0;
        *(long *)((long)param_1 + 0x124) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar11 = true;
joined_r0x011d7910:
    if (!bVar11) {
      do {
        lVar3 = *plVar1;
        lVar4 = param_1[0x25];
        if (lVar3 != lVar9 || lVar4 != lVar6) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar9 = lVar3;
          lVar6 = lVar4;
          goto joined_r0x011d7910;
        }
        cVar7 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = 0;
          *(long *)((long)param_1 + 0x124) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar11 = true;
      lVar9 = lVar3;
      lVar6 = lVar4;
      goto joined_r0x011d7910;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x26));
  return uVar12 | uVar8;
}


