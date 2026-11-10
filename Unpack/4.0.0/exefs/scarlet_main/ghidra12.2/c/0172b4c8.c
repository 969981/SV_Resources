/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0172b4c8; name: FUN_0172b4c8
 */


void FUN_0172b4c8(undefined8 param_1,long param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *local_60;
  undefined8 *local_58 [3];
  
  plVar4 = (long *)(param_2 + 0x338);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar4 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_0172b50c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x340));
  do {
    if (*plVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x340));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0172b50c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0172b50c:
  plVar4 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  (**(code **)(*plVar4 + 0x10))(param_1,plVar4,param_3);
  puVar7 = (undefined8 *)(param_2 + 0x2d0);
  if (*(undefined8 **)(param_2 + 0x2d0) == (undefined8 *)0x0) {
    puVar5 = puVar7;
    goto LAB_0172b5c4;
  }
  puVar5 = *(undefined8 **)(param_2 + 0x2d0);
  do {
    if (*param_3 < (ulong)puVar5[4]) {
      puVar6 = (undefined8 *)*puVar5;
      puVar7 = puVar5;
      if (puVar6 == (undefined8 *)0x0) {
        goto LAB_0172b5c4;
      }
    }
    else {
      if (*param_3 <= (ulong)puVar5[4]) {
LAB_0172b5c4:
        puVar6 = (undefined8 *)*puVar7;
        local_60 = param_3;
        if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
          plVar4 = (long *)(param_2 + 0x2c8);
          FUN_0172b370(local_58,plVar4,&local_60);
          *local_58[0] = 0;
          local_58[0][1] = 0;
          local_58[0][2] = puVar5;
          *puVar7 = local_58[0];
          puVar5 = local_58[0];
          if (*(long *)*plVar4 != 0) {
            *plVar4 = *(long *)*plVar4;
            puVar5 = (undefined8 *)*puVar7;
          }
          FUN_010108e0(*(undefined8 *)(param_2 + 0x2d0),puVar5);
          *(long *)(param_2 + 0x2f8) = *(long *)(param_2 + 0x2f8) + 1;
          puVar6 = local_58[0];
        }
        *(int *)(puVar6 + 8) = (int)param_1;
        *(undefined8 *)(param_2 + 0x338) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x340));
        return;
      }
      puVar7 = puVar5 + 1;
      puVar6 = (undefined8 *)*puVar7;
      if (puVar6 == (undefined8 *)0x0) goto LAB_0172b5c4;
    }
    puVar5 = puVar6;
  } while( true );
}


