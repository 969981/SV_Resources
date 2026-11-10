/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025efca8; name: FUN_025efca8
 */


undefined8 FUN_025efca8(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  
  plVar9 = (long *)(param_1 + 0x28);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_025efce0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x30));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_025efce0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_025efce0:
  uVar6 = *(ulong *)(param_1 + 0xb8);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar5;
    }
    else {
      uVar8 = uVar5;
      if (uVar6 <= uVar5) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar5 / uVar6;
        }
        uVar8 = uVar5 - uVar8 * uVar6;
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0xb0) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (1 < uVar7) {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_025efdc8;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar3 * uVar6;
            }
            if (uVar7 != uVar8) goto LAB_025efe5c;
          }
          plVar9 = (long *)*plVar9;
          uVar10 = 0;
        } while (plVar9 != (long *)0x0);
        goto LAB_025efdd8;
      }
      do {
        if (plVar9[1] == uVar5) {
          if (plVar9[2] == uVar5) {
LAB_025efdc8:
            uVar10 = FUN_025ef7c8(plVar9[6] + 0x28);
            break;
          }
        }
        else if ((plVar9[1] & uVar6 - 1) != uVar8) goto LAB_025efe5c;
        plVar9 = (long *)*plVar9;
        uVar10 = 0;
      } while (plVar9 != (long *)0x0);
      goto LAB_025efdd8;
    }
  }
LAB_025efe5c:
  uVar10 = 0;
LAB_025efdd8:
  *(undefined8 *)(param_1 + 0x28) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x30));
  return uVar10;
}


