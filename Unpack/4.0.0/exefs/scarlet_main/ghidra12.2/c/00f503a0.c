/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f503a0; name: FUN_00f503a0
 */


void FUN_00f503a0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  plVar12 = (long *)(param_1 + 0x78);
  lVar10 = *plVar12;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 != lVar10) {
    lVar4 = nn::os::GetCurrentThread();
LAB_00f503d8:
    if (*plVar12 == 0) goto code_r0x00f503e0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x80));
          while (*plVar12 == 0) {
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar9) {
              *plVar12 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00f503e8;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *plVar12 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00f503e8:
    bVar9 = false;
    goto LAB_00f503ec;
  }
  plVar12 = (long *)0x0;
  bVar9 = true;
LAB_00f503ec:
  uVar5 = *(ulong *)(param_1 + 0x98);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & param_2;
    }
    else {
      uVar7 = param_2;
      if (uVar5 <= param_2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = param_2 / uVar5;
        }
        uVar7 = param_2 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x90) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == param_2) {
            if (plVar8[2] == param_2) goto LAB_00f50498;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == param_2) {
            if (plVar8[2] == param_2) goto LAB_00f50498;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar3 * uVar5;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
LAB_00f504e4:
  if (bVar9) {
    return;
  }
  *plVar12 = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
  return;
code_r0x00f503e0:
  cVar2 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar9) {
    *plVar12 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00f503e8;
  goto LAB_00f503d8;
LAB_00f50498:
  puVar11 = (undefined8 *)plVar8[3];
  puVar1 = (undefined8 *)plVar8[4];
  if ((puVar11 != puVar1) &&
     (FUN_00f505cc(*puVar11,*(char *)(param_1 + 0xf8) == '\0'), puVar11 + 1 != puVar1)) {
    FUN_00f505cc(puVar11[1],*(char *)(param_1 + 0xf8) == '\0');
    for (puVar11 = puVar11 + 2; puVar11 != puVar1; puVar11 = puVar11 + 1) {
      FUN_00f505cc(*puVar11,*(char *)(param_1 + 0xf8) == '\0');
    }
  }
  goto LAB_00f504e4;
}


