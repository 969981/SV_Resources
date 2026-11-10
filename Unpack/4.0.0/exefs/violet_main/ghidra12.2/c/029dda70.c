/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029dda70; name: FUN_029dda70
 */


undefined4 FUN_029dda70(long param_1,ulong *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 uVar11;
  
  plVar10 = (long *)(param_1 + 0x140);
  lVar5 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_029ddab0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x148));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_029ddab0;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_029ddab0:
  plVar10 = *(long **)(param_1 + 0x178);
  plVar1 = *(long **)(param_1 + 0x180);
  uVar11 = 0x3f800000;
  if (plVar10 != plVar1) {
    while (*(long *)(*plVar10 + 0x1d0) != *param_3) {
      plVar10 = plVar10 + 1;
      if (plVar1 == plVar10) goto LAB_029ddc0c;
    }
  }
  if (((plVar10 == plVar1) || (lVar5 = *plVar10, lVar5 == 0)) ||
     (uVar7 = *(ulong *)(lVar5 + 0x168), uVar7 == 0)) goto LAB_029ddc0c;
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
  plVar10 = *(long **)(*(long *)(lVar5 + 0x160) + uVar9 * 8);
  if ((plVar10 == (long *)0x0) || (plVar10 = (long *)*plVar10, plVar10 == (long *)0x0))
  goto LAB_029ddc0c;
  if (uVar8 < 2) {
    do {
      if (plVar10[1] == uVar6) {
        if (plVar10[2] == uVar6) {
LAB_029ddc08:
          uVar11 = (undefined4)plVar10[6];
          break;
        }
      }
      else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  else {
    do {
      uVar8 = plVar10[1];
      if (uVar8 == uVar6) {
        if (plVar10[2] == uVar6) goto LAB_029ddc08;
      }
      else {
        if (uVar7 <= uVar8) {
          uVar4 = 0;
          if (uVar7 != 0) {
            uVar4 = uVar8 / uVar7;
          }
          uVar8 = uVar8 - uVar4 * uVar7;
        }
        if (uVar8 != uVar9) break;
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
LAB_029ddc0c:
  *(undefined8 *)(param_1 + 0x140) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x148));
  return uVar11;
}


