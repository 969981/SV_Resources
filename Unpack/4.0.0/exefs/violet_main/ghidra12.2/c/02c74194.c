/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c74194; name: FUN_02c74194
 */


bool FUN_02c74194(long param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar8 = (long *)(param_1 + 0x128);
  lVar4 = nn::os::GetCurrentThread();
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
        while (*plVar8 == 0) {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_02c741cc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_02c741cc:
  uVar5 = *(ulong *)(param_1 + 0x10);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar9 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar6 = (ulong)param_2;
    if (uVar9 < 2) {
      uVar7 = uVar5 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar5 <= uVar6) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        uVar7 = uVar6 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar8[1] == uVar6) {
            if ((int)plVar8[2] == param_2) goto LAB_02c74318;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar6) {
            if ((int)plVar8[2] == param_2) goto LAB_02c74318;
          }
          else {
            if (uVar5 <= uVar9) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar9 / uVar5;
              }
              uVar9 = uVar9 - uVar2 * uVar5;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  bVar3 = false;
LAB_02c742f0:
  *(undefined8 *)(param_1 + 0x128) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  return bVar3;
LAB_02c74318:
  bVar3 = (char)plVar8[5] != '\0';
  goto LAB_02c742f0;
}


