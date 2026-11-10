/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a717c; name: FUN_012a717c
 */


bool FUN_012a717c(long param_1,ulong *param_2)

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
  long *plVar10;
  
  plVar9 = (long *)(param_1 + 0xd0);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_012a71b4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xd8));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_012a71b4;
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
LAB_012a71b4:
  uVar6 = *(ulong *)(param_1 + 0x50);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar5;
    }
    else if (uVar5 < uVar6) {
      uVar8 = uVar5;
    }
    else {
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar5 / uVar6;
      }
      uVar8 = uVar5 - uVar8 * uVar6;
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x48) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar5) {
            if (plVar9[2] == uVar5) goto LAB_012a723c;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) goto LAB_012a7324;
          plVar9 = (long *)*plVar9;
          plVar10 = (long *)0x0;
        } while (plVar9 != (long *)0x0);
        goto LAB_012a7240;
      }
      do {
        uVar7 = plVar9[1];
        if (uVar7 == uVar5) {
          if (plVar9[2] == uVar5) {
LAB_012a723c:
            plVar10 = plVar9;
            break;
          }
        }
        else {
          if (uVar6 <= uVar7) {
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = uVar7 / uVar6;
            }
            uVar7 = uVar7 - uVar3 * uVar6;
          }
          if (uVar7 != uVar8) goto LAB_012a7324;
        }
        plVar9 = (long *)*plVar9;
        plVar10 = (long *)0x0;
      } while (plVar9 != (long *)0x0);
      goto LAB_012a7240;
    }
  }
LAB_012a7324:
  plVar10 = (long *)0x0;
LAB_012a7240:
  *(undefined8 *)(param_1 + 0xd0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xd8));
  return plVar10 != (long *)0x0;
}


