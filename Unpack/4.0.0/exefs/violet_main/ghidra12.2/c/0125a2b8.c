/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125a2b8; name: FUN_0125a2b8
 */


void FUN_0125a2b8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar8;
  undefined8 *puVar7;
  long *plVar9;
  undefined8 local_48;
  
  uVar3 = (**(code **)(*param_1 + 0x70))();
  if ((uVar3 & 1) == 0) {
    plVar9 = param_1 + 1;
    lVar6 = *plVar9;
    lVar4 = nn::os::GetCurrentThread();
    if (lVar4 != lVar6) {
      lVar4 = nn::os::GetCurrentThread();
LAB_0125a304:
      if (*plVar9 == 0) goto code_r0x0125a30c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
      do {
        if (*plVar9 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
            while (*plVar9 == 0) {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = lVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_0125a314;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *plVar9 = lVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_0125a314:
      bVar5 = false;
      goto LAB_0125a318;
    }
    plVar9 = (long *)0x0;
    bVar5 = true;
LAB_0125a318:
    puVar1 = (undefined8 *)param_1[5];
    if ((undefined8 *)param_1[4] != puVar1) {
      puVar7 = (undefined8 *)param_1[4];
      do {
        puVar8 = puVar7 + 1;
        local_48 = *puVar7;
        (*(code *)*param_2)(param_2 + 4,&local_48);
        puVar7 = puVar8;
      } while (puVar1 != puVar8);
    }
    if (!bVar5) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
  }
  return;
code_r0x0125a30c:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar5) {
    *plVar9 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_0125a314;
  goto LAB_0125a304;
}


