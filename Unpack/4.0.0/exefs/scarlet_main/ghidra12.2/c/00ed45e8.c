/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ed45e8; name: FUN_00ed45e8
 */


void FUN_00ed45e8(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  
  if (((*(long *)(param_1 + 0x40) != 0) || (*(long *)(param_1 + 0x48) != 0)) &&
     (*(char *)(param_1 + 0x68) == '\0')) {
    plVar9 = (long *)(param_1 + 0x200);
    lVar8 = *plVar9;
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar8) {
      lVar5 = nn::os::GetCurrentThread();
LAB_00ed4630:
      if (*plVar9 == 0) goto code_r0x00ed4638;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x208));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x208));
            while (*plVar9 == 0) {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00ed4640;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00ed4640:
      bVar7 = false;
      plVar6 = plVar9;
      goto LAB_00ed4648;
    }
    plVar6 = (long *)0x0;
    bVar7 = true;
LAB_00ed4648:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x218) + param_2 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    if (!bVar7) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    FUN_00ed47b0(param_1,uVar2);
    FUN_00ed49d8(param_1,uVar3);
    lVar8 = *(long *)(param_1 + 0x200);
    lVar5 = nn::os::GetCurrentThread();
    if (lVar5 != lVar8) {
      lVar5 = nn::os::GetCurrentThread();
LAB_00ed468c:
      if (*plVar9 == 0) goto code_r0x00ed4694;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x208));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x208));
            while (*plVar9 == 0) {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = lVar5;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00ed469c;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00ed469c:
      bVar7 = false;
      goto LAB_00ed46a0;
    }
    plVar9 = (long *)0x0;
    bVar7 = true;
LAB_00ed46a0:
    if (param_2 < (ulong)(*(long *)(param_1 + 0x220) - *(long *)(param_1 + 0x218) >> 4)) {
      FUN_00d7640c(param_1 + 0x218,param_2);
    }
    if (!bVar7) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
      return;
    }
  }
  return;
code_r0x00ed4638:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar7) {
    *plVar9 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00ed4640;
  goto LAB_00ed4630;
code_r0x00ed4694:
  cVar4 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar7) {
    *plVar9 = lVar5;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00ed469c;
  goto LAB_00ed468c;
}


