/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f379e4; name: FUN_00f379e4
 */


void FUN_00f379e4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  bool bVar12;
  
  plVar9 = (long *)(param_1 + 0x330);
  lVar4 = nn::os::GetCurrentThread();
LAB_00f37a08:
  if (*plVar9 == 0) goto code_r0x00f37a10;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x338));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x338));
        while (*plVar9 == 0) {
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar12) {
            *plVar9 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00f37a1c;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar12) {
      *plVar9 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00f37a1c:
  if (*(long *)(param_1 + 0x5f8) == 0) goto LAB_00f37a24;
  puVar1 = (ulong *)(*(long *)(*(long *)(param_1 + 0x5b8) +
                              (*(ulong *)(param_1 + 0x5f0) >> 4 & 0xffffffffffffff8)) +
                    (*(ulong *)(param_1 + 0x5f0) & 0x7f) * 0x20);
  uVar10 = *puVar1;
  plVar9 = (long *)puVar1[3];
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  uVar5 = *(ulong *)(param_1 + 0x4e8);
  if (uVar5 == 0) goto LAB_00f37c10;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar6 < 2) {
    uVar8 = uVar5 - 1 & uVar10;
  }
  else if (uVar10 < uVar5) {
    uVar8 = uVar10;
  }
  else {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar10 / uVar5;
    }
    uVar8 = uVar10 - uVar8 * uVar5;
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x4e0) + uVar8 * 8);
  if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0))
  goto LAB_00f37c10;
  if (uVar6 < 2) {
    do {
      if (plVar7[1] == uVar10) {
        if (plVar7[2] == uVar10) goto LAB_00f37ba0;
      }
      else if ((plVar7[1] & uVar5 - 1) != uVar8) goto LAB_00f37c10;
      plVar7 = (long *)*plVar7;
      bVar12 = true;
    } while (plVar7 != (long *)0x0);
  }
  else {
    do {
      uVar6 = plVar7[1];
      if (uVar6 == uVar10) {
        if (plVar7[2] == uVar10) goto LAB_00f37ba0;
      }
      else {
        if (uVar5 <= uVar6) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar6 / uVar5;
          }
          uVar6 = uVar6 - uVar3 * uVar5;
        }
        if (uVar6 != uVar8) goto LAB_00f37c10;
      }
      plVar7 = (long *)*plVar7;
      bVar12 = true;
    } while (plVar7 != (long *)0x0);
  }
  goto LAB_00f37bac;
code_r0x00f37a10:
  cVar2 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar12) {
    *plVar9 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_00f37a1c;
  goto LAB_00f37a08;
LAB_00f37ba0:
  if ((plVar7[8] == 0) || ((*(byte *)(plVar7[8] + 0x1e8) & 1) == 0)) {
    bVar12 = false;
  }
  else {
    FUN_00f37cdc(plVar7[6],plVar7 + 7);
    uVar10 = *(ulong *)(param_1 + 0x5f0);
    plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x5b8) + (uVar10 >> 4 & 0xffffffffffffff8)) +
                        (uVar10 & 0x7f) * 0x20 + 0x18);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
      uVar10 = *(ulong *)(param_1 + 0x5f0);
    }
    *(ulong *)(param_1 + 0x5f0) = uVar10 + 1;
    *(long *)(param_1 + 0x5f8) = *(long *)(param_1 + 0x5f8) + -1;
    if (0xff < uVar10 + 1) {
      plVar7 = *(long **)(param_1 + 0x600);
      uVar11 = **(undefined8 **)(param_1 + 0x5b8);
      uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar10 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar11,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar7,uVar11,0x1000,8);
      }
      *(long *)(param_1 + 0x5b8) = *(long *)(param_1 + 0x5b8) + 8;
      *(long *)(param_1 + 0x5f0) = *(long *)(param_1 + 0x5f0) + -0x80;
    }
LAB_00f37c10:
    bVar12 = true;
  }
LAB_00f37bac:
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (!bVar12) {
LAB_00f37a24:
    *(undefined8 *)(param_1 + 0x330) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x338));
    return;
  }
  goto LAB_00f37a1c;
}


