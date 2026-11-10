/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172b650; name: FUN_0172b650
 */


undefined4 FUN_0172b650(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  ulong *local_60;
  undefined8 *local_58 [3];
  
  plVar1 = (long *)(param_1 + 0x338);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_0172b690;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x340));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x340));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0172b690;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0172b690:
  puVar8 = *(undefined8 **)(param_1 + 0x308);
  uVar9 = 0xbf800000;
  if (puVar8 == (undefined8 *)0x0) goto LAB_0172b77c;
  uVar5 = *param_2;
  puVar7 = (undefined8 *)(param_1 + 0x308);
  if ((ulong)puVar8[4] >= uVar5) {
    puVar7 = puVar8;
  }
  for (puVar6 = (undefined8 *)puVar8[(ulong)puVar8[4] < uVar5]; puVar6 != (undefined8 *)0x0;
      puVar6 = (undefined8 *)puVar6[(ulong)puVar6[4] < uVar5]) {
    if ((ulong)puVar6[4] >= uVar5) {
      puVar7 = puVar6;
    }
  }
  if ((puVar7 == (undefined8 *)(param_1 + 0x308)) || (uVar5 < (ulong)puVar7[4])) goto LAB_0172b77c;
  plVar1 = (long *)(param_1 + 0x300);
  puVar7 = (undefined8 *)(param_1 + 0x308);
  while( true ) {
    if ((ulong)puVar8[4] <= uVar5) {
      if ((ulong)puVar8[4] < uVar5) {
        puVar7 = puVar8 + 1;
        puVar6 = (undefined8 *)*puVar7;
        if (puVar6 != (undefined8 *)0x0) goto LAB_0172b710;
      }
      break;
    }
    puVar6 = (undefined8 *)*puVar8;
    puVar7 = puVar8;
    if (puVar6 == (undefined8 *)0x0) break;
LAB_0172b710:
    puVar8 = puVar6;
  }
  puVar6 = (undefined8 *)*puVar7;
  local_60 = param_2;
  if ((undefined8 *)*puVar7 == (undefined8 *)0x0) {
    FUN_0172b370(local_58,plVar1,&local_60);
    *local_58[0] = 0;
    local_58[0][1] = 0;
    local_58[0][2] = puVar8;
    *puVar7 = local_58[0];
    puVar8 = local_58[0];
    if (*(long *)*plVar1 != 0) {
      *plVar1 = *(long *)*plVar1;
      puVar8 = (undefined8 *)*puVar7;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x308),puVar8);
    *(long *)(param_1 + 0x330) = *(long *)(param_1 + 0x330) + 1;
    puVar6 = local_58[0];
  }
  uVar9 = *(undefined4 *)(puVar6 + 8);
LAB_0172b77c:
  *(undefined8 *)(param_1 + 0x338) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x340));
  return uVar9;
}


