/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0219a8d0; name: FUN_0219a8d0
 */


void FUN_0219a8d0(long param_1,ulong param_2,long *param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long *plVar11;
  long *plVar12;
  
  plVar9 = (long *)(param_1 + 0xb360);
  lVar8 = *plVar9;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar8) {
    lVar3 = nn::os::GetCurrentThread();
LAB_0219a910:
    if (*plVar9 == 0) goto code_r0x0219a918;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb368));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb368));
          while (*plVar9 == 0) {
            cVar1 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar10) {
              *plVar9 = lVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0219a920;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_0219a920:
    bVar10 = false;
    goto LAB_0219a928;
  }
  plVar9 = (long *)0x0;
  bVar10 = true;
LAB_0219a928:
  uVar7 = *(ulong *)(param_1 + 0xb380);
  if (uVar7 != 0) {
    uVar4 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar6 = uVar7 - 1 & param_2;
    }
    else {
      uVar6 = param_2;
      if (uVar7 <= param_2) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = param_2 / uVar7;
        }
        uVar6 = param_2 - uVar6 * uVar7;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0xb378) + uVar6 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar5[1] == param_2) {
            if (plVar5[2] == param_2) goto LAB_0219a9a8;
          }
          else if ((plVar5[1] & uVar7 - 1) != uVar6) goto LAB_0219aa54;
          plVar5 = (long *)*plVar5;
          plVar12 = (long *)0x0;
          plVar11 = (long *)0x0;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar5[1];
          if (uVar4 == param_2) {
            if (plVar5[2] == param_2) goto LAB_0219a9a8;
          }
          else {
            if (uVar7 <= uVar4) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar4 / uVar7;
              }
              uVar4 = uVar4 - uVar2 * uVar7;
            }
            if (uVar4 != uVar6) goto LAB_0219aa54;
          }
          plVar5 = (long *)*plVar5;
          plVar12 = (long *)0x0;
          plVar11 = (long *)0x0;
        } while (plVar5 != (long *)0x0);
      }
      goto LAB_0219aabc;
    }
  }
LAB_0219aa54:
  plVar12 = (long *)0x0;
  plVar11 = (long *)0x0;
  goto LAB_0219aabc;
code_r0x0219a918:
  cVar1 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar10) {
    *plVar9 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0219a920;
  goto LAB_0219a910;
LAB_0219a9a8:
  plVar11 = plVar5;
  do {
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) break;
  } while (plVar11[2] == param_2);
  plVar12 = plVar5;
LAB_0219aabc:
  for (; plVar12 != plVar11; plVar12 = (long *)*plVar12) {
    (**(code **)*param_3)((undefined8 *)*param_3 + 4,plVar12 + 3);
  }
  if (bVar10) {
    return;
  }
  *plVar9 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
  return;
}


