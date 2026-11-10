/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b51d68; name: FUN_02b51d68
 */


void FUN_02b51d68(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar9;
  undefined8 *puVar8;
  undefined1 auStack_a0 [96];
  undefined8 local_28;
  
  lVar7 = *param_2;
  if (*(char *)(lVar7 + 0x448) == '\x01') {
    *(undefined1 *)(lVar7 + 0x448) = 2;
    plVar6 = (long *)(lVar7 + 0x1d8);
    lVar4 = *plVar6;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar4) {
      lVar3 = nn::os::GetCurrentThread();
LAB_02b51df4:
      if (*plVar6 == 0) goto code_r0x02b51dfc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1e0));
      do {
        if (*plVar6 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1e0));
            while (*plVar6 == 0) {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar5) {
                *plVar6 = lVar3;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_02b51e04;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = lVar3;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_02b51e04:
      bVar5 = false;
      goto LAB_02b51e08;
    }
    plVar6 = (long *)0x0;
    bVar5 = true;
LAB_02b51e08:
    puVar1 = *(undefined8 **)(lVar7 + 0x1f8);
    if (*(undefined8 **)(lVar7 + 0x1f0) != puVar1) {
      puVar8 = *(undefined8 **)(lVar7 + 0x1f0);
      do {
        puVar9 = puVar8 + 1;
        local_28 = *puVar8;
        FUN_02b51d68(auStack_a0,&local_28);
        puVar8 = puVar9;
      } while (puVar1 != puVar9);
    }
    if (!bVar5) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    FUN_02b51ebc(auStack_a0);
  }
  return;
code_r0x02b51dfc:
  cVar2 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar5) {
    *plVar6 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_02b51e04;
  goto LAB_02b51df4;
}


