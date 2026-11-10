/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c74330; name: FUN_02c74330
 */


undefined4 FUN_02c74330(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_48;
  undefined8 local_28;
  
  plVar10 = (long *)(param_1 + 0x128);
  lVar4 = nn::os::GetCurrentThread();
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x130));
        while (*plVar10 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_02c7436c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_02c7436c:
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar9 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar7 = (ulong)param_2;
    if (uVar9 < 2) {
      uVar8 = uVar6 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar6 <= uVar7) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar7 / uVar6;
        }
        uVar8 = uVar7 - uVar8 * uVar6;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 8) + uVar8 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar10[1] == uVar7) {
            if ((int)plVar10[2] == param_2) goto LAB_02c74490;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar8) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar10[1];
          if (uVar9 == uVar7) {
            if ((int)plVar10[2] == param_2) goto LAB_02c74490;
          }
          else {
            if (uVar6 <= uVar9) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar9 / uVar6;
              }
              uVar9 = uVar9 - uVar3 * uVar6;
            }
            if (uVar9 != uVar8) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
LAB_02c74498:
  uVar5 = 0;
LAB_02c7449c:
  *(undefined8 *)(param_1 + 0x128) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x130));
  return uVar5;
LAB_02c74490:
  if (*(char *)((long)plVar10 + 0x29) == '\0') {
    if (((char)plVar10[5] == '\0') || (*(long *)(param_1 + 0xa0) == 0)) {
      uVar5 = 1;
    }
    else if ((*(long *)(plVar10[6] + 8) == 0) ||
            ((*(byte *)(*(long *)(plVar10[6] + 8) + 0x1e8) & 1) == 0)) {
      uVar5 = 2;
    }
    else {
      local_28 = (**(code **)(**(long **)(plVar10[6] + 8) + 0x70))();
      local_48 = 0;
      if (*(long *)(plVar10[6] + 8) != 0) {
        local_48 = *(undefined8 *)(*(long *)(plVar10[6] + 8) + 0x1d8);
      }
      uVar6 = (**(code **)(param_1 + 0xa0))(param_1 + 0xc0,&local_28,&local_48);
      uVar5 = 2;
      if ((uVar6 & 1) != 0) {
        uVar5 = 3;
      }
    }
    goto LAB_02c7449c;
  }
  goto LAB_02c74498;
}


