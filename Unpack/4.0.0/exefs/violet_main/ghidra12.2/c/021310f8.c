/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021310f8; name: FUN_021310f8
 */


void FUN_021310f8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
  uVar5 = (**(code **)(*param_1 + 0x70))();
  if ((uVar5 & 1) == 0) {
    plVar1 = param_1 + 1;
    lVar7 = *plVar1;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar7) {
      lVar6 = nn::os::GetCurrentThread();
      while (*plVar1 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_02131164;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
      do {
        if (*plVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar6;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_02131164;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_02131164:
      puVar2 = (undefined8 *)param_1[5];
      for (puVar8 = (undefined8 *)param_1[4]; puVar8 != puVar2; puVar8 = puVar8 + 1) {
        FUN_0213120c(param_2,*puVar8);
      }
      param_1[1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 2));
      return;
    }
    puVar2 = (undefined8 *)param_1[5];
    for (puVar8 = (undefined8 *)param_1[4]; puVar8 != puVar2; puVar8 = puVar8 + 1) {
      FUN_0213120c(param_2,*puVar8);
    }
  }
  return;
}


