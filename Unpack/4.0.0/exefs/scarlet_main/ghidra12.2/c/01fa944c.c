/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa944c; name: FUN_01fa944c
 */


void FUN_01fa944c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  lVar8 = *(long *)(param_1 + 200);
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + 0x110);
    lVar7 = *plVar6;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar7) {
      lVar5 = nn::os::GetCurrentThread();
      bVar9 = false;
LAB_01fa95e8:
      if (*plVar6 == 0) goto code_r0x01fa95f0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
      bVar9 = false;
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x118));
            while (*plVar6 == 0) {
              cVar3 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar9) {
                *plVar6 = lVar5;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar9 = false;
              if (cVar3 == '\0') goto LAB_01fa9484;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_01fa9484;
    }
    bVar9 = true;
LAB_01fa9484:
    plVar6 = (long *)FUN_013e0df0(*(undefined8 *)(lVar8 + 0x128),*(undefined8 *)(lVar8 + 0x130));
    if ((*(long **)(lVar8 + 0x130) == plVar6) || (*plVar6 == 0)) {
      plVar6 = (long *)FUN_013e0df0(*(undefined8 *)(lVar8 + 0x160),*(undefined8 *)(lVar8 + 0x168));
      if (*(long **)(lVar8 + 0x168) == plVar6) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        if (*plVar6 != 0) {
          lVar5 = *plVar6 + -0x20;
        }
      }
    }
    else {
      lVar5 = *plVar6 + -0x20;
    }
    if (!bVar9) {
      *(undefined8 *)(lVar8 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x118));
    }
    if (lVar5 == 0) {
      return;
    }
    FUN_010b70f8(lVar5);
    (**(code **)(**(long **)(param_1 + 200) + 0x120))(*(long **)(param_1 + 200),1);
    plVar6 = *(long **)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01fa9534;
    }
    plVar6 = *(long **)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (plVar6 != (long *)0x0) {
      lVar8 = plVar6[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01fa95c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x50))();
        return;
      }
      if (sVar2 == 0) {
LAB_01fa9534:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01fa95f0:
  cVar3 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar4) {
    *plVar6 = lVar5;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_01fa9484;
  goto LAB_01fa95e8;
}


