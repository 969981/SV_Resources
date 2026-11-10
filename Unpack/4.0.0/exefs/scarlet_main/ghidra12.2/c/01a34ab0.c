/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a34ab0; name: FUN_01a34ab0
 */


void FUN_01a34ab0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 local_40;
  long *plStack_38;
  
  local_40 = param_2;
  plStack_38 = param_1;
  uVar3 = (**(code **)(*param_1 + 0x70))();
  if ((uVar3 & 1) == 0) {
    plVar8 = param_1 + 1;
    lVar6 = *plVar8;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar6) {
      lVar4 = nn::os::GetCurrentThread();
LAB_01a34af8:
      if (*plVar8 == 0) goto code_r0x01a34b00;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
      do {
        if (*plVar8 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
            while (*plVar8 == 0) {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar5) {
                *plVar8 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01a34b08;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01a34b08:
      bVar5 = false;
      goto LAB_01a34b0c;
    }
    plVar8 = (long *)0x0;
    bVar5 = true;
LAB_01a34b0c:
    puVar1 = (undefined8 *)param_1[5];
    for (puVar7 = (undefined8 *)param_1[4]; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      FUN_01a34ba4(&local_40,*puVar7);
    }
    if (!bVar5) {
      *plVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar8 + 1));
    }
  }
  return;
code_r0x01a34b00:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar5) {
    *plVar8 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_01a34b08;
  goto LAB_01a34af8;
}


