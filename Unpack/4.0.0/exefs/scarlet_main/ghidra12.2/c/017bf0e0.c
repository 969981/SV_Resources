/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017bf0e0; name: FUN_017bf0e0
 */


void FUN_017bf0e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  long *plVar10;
  undefined2 local_48;
  
  *param_1 = &DAT_045a57e8;
  plVar10 = param_1 + 0xf;
  param_1[4] = &PTR_LAB_045a5898;
  param_1[5] = &DAT_045a58e8;
  lVar7 = *plVar10;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar7) {
    plVar10 = (long *)0x0;
    bVar9 = true;
LAB_017bf144:
    uVar8 = param_1[1];
    lVar6 = tpidr_el0;
    if (*(long *)(lVar6 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(undefined8 *)(lVar6 + 0x30) = DAT_04859430;
    }
    puVar1 = (undefined8 *)(lVar6 + 0x30);
    uVar2 = *puVar1;
    uVar3 = *(undefined8 *)(lVar6 + 0x38);
    *puVar1 = uVar8;
    *(undefined2 *)(lVar6 + 0x38) = 1;
    FUN_017bf360(param_1 + 0x12);
    *puVar1 = uVar2;
    local_48 = (undefined2)uVar3;
    *(undefined2 *)(lVar6 + 0x38) = local_48;
    if (!bVar9) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    FUN_017bf298(param_1 + 0x12);
    nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x10));
    FUN_017bf5c4(param_1);
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_017bf140;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar9) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_017bf140;
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
LAB_017bf140:
  bVar9 = false;
  goto LAB_017bf144;
}


