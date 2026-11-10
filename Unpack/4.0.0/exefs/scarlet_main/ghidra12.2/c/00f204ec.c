/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f204ec; name: FUN_00f204ec
 */


/* WARNING: Removing unreachable block (ram,0x00f20638) */
/* WARNING: Removing unreachable block (ram,0x00f20668) */
/* WARNING: Removing unreachable block (ram,0x00f20678) */
/* WARNING: Removing unreachable block (ram,0x00f20698) */

void FUN_00f204ec(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long local_50;
  undefined1 local_48;
  
  plVar8 = (long *)(param_1 + 0xb490);
  lVar7 = *plVar8;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar7) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00f20534:
    if (*plVar8 == 0) goto code_r0x00f2053c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb498));
    do {
      if (*plVar8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb498));
          while (*plVar8 == 0) {
            cVar1 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00f20544;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00f20544:
    bVar6 = false;
    goto LAB_00f20548;
  }
  plVar8 = (long *)0x0;
  bVar6 = true;
LAB_00f20548:
  plVar5 = *(long **)(param_1 + 0xb0d0);
  plVar3 = *(long **)(param_1 + 0xb0d8);
  if (plVar5 != *(long **)(param_1 + 0xb0d8)) {
    do {
      if (*plVar5 == param_2) {
        plVar4 = plVar3 + -2;
        *plVar5 = *plVar4;
        *(char *)(plVar5 + 1) = (char)plVar3[-1];
      }
      else {
        plVar5 = plVar5 + 2;
        plVar4 = plVar3;
      }
      plVar3 = plVar4;
    } while (plVar5 != plVar4);
    if (*(long **)(param_1 + 0xb0d8) != plVar5) {
      *(long **)(param_1 + 0xb0d8) = plVar4;
      goto LAB_00f2058c;
    }
  }
  local_48 = 0;
  local_50 = param_2;
  FUN_00e5b268((long *)(param_1 + 0xb0d0),&local_50);
LAB_00f2058c:
  if (bVar6) {
    return;
  }
  *plVar8 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
  return;
code_r0x00f2053c:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar6) {
    *plVar8 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00f20544;
  goto LAB_00f20534;
}


