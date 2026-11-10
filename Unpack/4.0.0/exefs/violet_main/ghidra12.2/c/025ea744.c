/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025ea744; name: FUN_025ea744
 */


long FUN_025ea744(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar10 = (long *)(param_1 + 0x28);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_025ea77c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
        while (*plVar10 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_025ea77c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_025ea77c:
  uVar7 = *(ulong *)(param_1 + 0xb8);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar6 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else {
      uVar9 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar9 = uVar6 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0xb0) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (1 < uVar8) {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_025ea864;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar3 * uVar7;
            }
            if (uVar8 != uVar9) goto LAB_025ea894;
          }
          plVar10 = (long *)*plVar10;
          lVar4 = 0;
        } while (plVar10 != (long *)0x0);
        goto LAB_025ea898;
      }
      while( true ) {
        if (plVar10[1] != uVar6) {
          if ((plVar10[1] & uVar7 - 1) == uVar9) goto LAB_025ea810;
          goto LAB_025ea894;
        }
        if (plVar10[2] == uVar6) break;
LAB_025ea810:
        plVar10 = (long *)*plVar10;
        lVar4 = 0;
        if (plVar10 == (long *)0x0) goto LAB_025ea898;
      }
LAB_025ea864:
      lVar4 = plVar10[6];
      plVar10 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x28))((undefined8 *)(lVar4 + 0x28));
      lVar5 = FUN_01dac5b0();
      for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (plVar10 == (long *)lVar5) goto LAB_025ea898;
      }
    }
  }
LAB_025ea894:
  lVar4 = 0;
LAB_025ea898:
  *(undefined8 *)(param_1 + 0x28) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x30));
  return lVar4;
}


