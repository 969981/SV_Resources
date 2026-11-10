/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d1e5c; name: FUN_021d1e5c
 */


void FUN_021d1e5c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  undefined8 *puVar14;
  
  plVar13 = (long *)(param_1 + 0x78);
  lVar11 = *plVar13;
  lVar5 = nn::os::GetCurrentThread();
  if (lVar5 != lVar11) {
    lVar5 = nn::os::GetCurrentThread();
LAB_021d1e98:
    if (*plVar13 == 0) goto code_r0x021d1ea0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      if (*plVar13 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
          while (*plVar13 == 0) {
            cVar2 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar12) {
              *plVar13 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_021d1ea8;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar12) {
        *plVar13 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_021d1ea8:
    bVar12 = false;
    goto LAB_021d1eac;
  }
  plVar13 = (long *)0x0;
  bVar12 = true;
LAB_021d1eac:
  uVar6 = *(ulong *)(param_1 + 0x98);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & param_2;
    }
    else {
      uVar8 = param_2;
      if (uVar6 <= param_2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = param_2 / uVar6;
        }
        uVar8 = param_2 - uVar8 * uVar6;
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x90) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == param_2) {
            if (plVar9[2] == param_2) goto LAB_021d1f58;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == param_2) {
            if (plVar9[2] == param_2) goto LAB_021d1f58;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar4 * uVar6;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
LAB_021d2090:
  if (bVar12) {
    return;
  }
  *plVar13 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  return;
code_r0x021d1ea0:
  cVar2 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar12) {
    *plVar13 = lVar5;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_021d1ea8;
  goto LAB_021d1e98;
LAB_021d1f58:
  puVar1 = (undefined8 *)plVar9[4];
  for (puVar14 = (undefined8 *)plVar9[3]; puVar14 != puVar1; puVar14 = puVar14 + 1) {
    plVar10 = (long *)*puVar14;
    plVar9 = plVar10 + 0xb;
    lVar5 = nn::os::GetCurrentThread();
    while (*plVar9 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_021d1f84;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar10 + 0xc));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar10 + 0xc));
          while (*plVar9 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_021d1f84;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_021d1f84:
    if ((plVar10[8] != 0) && (lVar5 = *(long *)(plVar10[8] + 0x10), lVar5 != 0)) {
      (**(code **)(*plVar10 + 0x80))(plVar10,lVar5 + -0x28);
    }
    *(undefined1 *)(plVar10 + 10) = 0;
    plVar10[0xb] = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 0xc));
  }
  goto LAB_021d2090;
}


