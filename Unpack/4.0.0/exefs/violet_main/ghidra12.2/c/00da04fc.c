/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da04fc; name: FUN_00da04fc
 */


void FUN_00da04fc(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  plVar10 = (long *)(param_1 + 8);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00da0538;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00da0538;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00da0538:
  uVar4 = *(ulong *)(param_1 + 600);
  uVar6 = 1L << (param_3 & 0x3f);
  uVar1 = uVar4 | uVar6;
  if ((param_2 & 1) == 0) {
    uVar1 = uVar4 & (uVar6 ^ 0xffffffffffffffff);
  }
  *(ulong *)(param_1 + 600) = uVar1;
  if (((uVar4 & 7) == 0) && ((uVar1 & 7) != 0)) {
    pcVar5 = *(code **)(param_1 + 0xa8);
    if ((*(ulong *)(param_1 + 0xb0) & 1) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xb0) >> 1)));
    }
    (*pcVar5)();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  plVar10 = (long *)(param_1 + 0x208);
  lVar8 = *plVar10;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar8) {
    plVar10 = (long *)0x0;
    bVar7 = true;
LAB_00da05c0:
    puVar9 = *(undefined8 **)(param_1 + 0x220);
    puVar11 = *(undefined8 **)(param_1 + 0x228);
    if (puVar9 != puVar11) {
      FUN_00da04fc(*puVar9,(*(ulong *)(param_1 + 600) & 7) != 0,1);
      while (puVar9 = puVar9 + 1, puVar9 != puVar11) {
        FUN_00da04fc(*puVar9,(*(ulong *)(param_1 + 600) & 7) != 0,1);
      }
    }
    if (bVar7) {
      return;
    }
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00da05bc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x210));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00da05bc;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar7) {
      *plVar10 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00da05bc:
  bVar7 = false;
  goto LAB_00da05c0;
}


