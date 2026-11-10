/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3ce40; name: FUN_00f3ce40
 */


void FUN_00f3ce40(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 extraout_x1;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 auVar20 [16];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long *local_a0 [12];
  long local_28;
  
  local_a0[0] = &local_28;
  local_c0 = &LAB_02b55de4;
  local_b8 = FUN_02b55e00;
  local_b0 = &LAB_02b55e04;
  puStack_a8 = &LAB_02b55e10;
  local_28 = param_2;
  FUN_00ddb1e0(param_1 + 0xb400,&local_c0);
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(local_a0);
  }
  plVar9 = (long *)FUN_00d1e658(local_28);
  if ((*plVar9 != 0) && (**(char **)(*plVar9 + 0x38) != '\0')) {
    auVar20 = FUN_00d1e658(local_28);
    plVar9 = (long *)*auVar20._0_8_;
    if (plVar9 == (long *)0x0) {
      FUN_00f3d3b0(param_1,auVar20._8_8_,local_28);
    }
    else {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      FUN_00f3d3b0(param_1,extraout_x1,local_28);
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  plVar9 = (long *)(param_1 + 0xb200);
  lVar10 = nn::os::GetCurrentThread();
  while (*plVar9 == 0 && *(long *)(param_1 + 0xb208) == 0) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar11) {
      *plVar9 = lVar10;
      *(undefined8 *)(param_1 + 0xb208) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00f3cf04;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb210));
  do {
    if (*plVar9 != 0 || *(long *)(param_1 + 0xb208) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb210));
        while (*plVar9 == 0 && *(long *)(param_1 + 0xb208) == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar11) {
            *plVar9 = lVar10;
            *(undefined8 *)(param_1 + 0xb208) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00f3cf04;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar11) {
      *plVar9 = lVar10;
      *(undefined8 *)(param_1 + 0xb208) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00f3cf04:
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (*(long *)(local_28 + 0x68) != 0) {
    puVar1 = (ulong *)(*(long *)(local_28 + 0x68) + 0x30);
  }
  uVar17 = *(ulong *)(param_1 + 0xb228);
  if (uVar17 == 0) {
LAB_00f3cfbc:
    plVar15 = (long *)0x0;
    plVar19 = (long *)0x0;
  }
  else {
    uVar13 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar12 = *puVar1;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar18 = uVar17 - 1 & uVar12;
    }
    else if (uVar12 < uVar17) {
      uVar18 = uVar12;
    }
    else {
      uVar18 = 0;
      if (uVar17 != 0) {
        uVar18 = uVar12 / uVar17;
      }
      uVar18 = uVar12 - uVar18 * uVar17;
    }
    puVar14 = *(undefined8 **)(*(long *)(param_1 + 0xb220) + uVar18 * 8);
    if ((puVar14 == (undefined8 *)0x0) || (plVar15 = (long *)*puVar14, plVar15 == (long *)0x0))
    goto LAB_00f3cfbc;
    plVar16 = plVar15;
    if (uVar13 < 2) {
      do {
        if (plVar15[1] == uVar12) {
          if (plVar15[2] == uVar12) goto LAB_00f3d0b0;
        }
        else if ((plVar15[1] & uVar17 - 1) != uVar18) break;
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
      goto LAB_00f3cfbc;
    }
LAB_00f3d068:
    plVar15 = plVar16;
    uVar13 = plVar15[1];
    if (uVar13 != uVar12) goto LAB_00f3d084;
    if (plVar15[2] != uVar12) goto LAB_00f3d09c;
LAB_00f3d0b0:
    plVar19 = plVar15;
    while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
      if (plVar19[2] != uVar12) break;
    }
  }
LAB_00f3d0cc:
  do {
    if (plVar15 == plVar19) goto LAB_00f3d100;
    if (plVar15[3] == local_28) {
      FUN_00f3d250(&local_c0,(long *)(param_1 + 0xb220));
      puVar7 = local_c0;
      local_c0 = (undefined1 *)0x0;
      if (puVar7 != (undefined1 *)0x0) {
        plVar15 = *(long **)local_b8;
        uVar17 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar17 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,puVar7,0x20,8);
        }
        else {
          FUN_00c48fe8(plVar15,puVar7,0x20,8);
        }
      }
      goto LAB_00f3d100;
    }
    plVar15 = (long *)*plVar15;
  } while( true );
LAB_00f3d084:
  if (uVar17 <= uVar13) {
    uVar6 = 0;
    if (uVar17 != 0) {
      uVar6 = uVar13 / uVar17;
    }
    uVar13 = uVar13 - uVar6 * uVar17;
  }
  if (uVar13 != uVar18) goto LAB_00f3cfbc;
LAB_00f3d09c:
  plVar16 = (long *)*plVar15;
  plVar15 = (long *)0x0;
  plVar19 = (long *)0x0;
  if (plVar16 == (long *)0x0) goto LAB_00f3d0cc;
  goto LAB_00f3d068;
LAB_00f3d100:
  do {
    lVar10 = *plVar9;
    lVar4 = *(long *)(param_1 + 0xb208);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar11) {
      *plVar9 = lVar10;
      *(long *)(param_1 + 0xb208) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar2 = *plVar9;
    lVar3 = *(long *)(param_1 + 0xb208);
    if (lVar2 != lVar10 || lVar3 != lVar4) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00f3d13c;
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar11) {
      *plVar9 = 0;
      *(long *)(param_1 + 0xb204) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar11 = true;
LAB_00f3d13c:
  if (!bVar11) {
    do {
      lVar10 = *plVar9;
      lVar4 = *(long *)(param_1 + 0xb208);
      if (lVar10 != lVar2 || lVar4 != lVar3) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f3d208;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar11) {
        *plVar9 = 0;
        *(long *)(param_1 + 0xb204) = lVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
joined_r0x00f3d208:
    if (!bVar11) {
      do {
        lVar2 = *plVar9;
        lVar3 = *(long *)(param_1 + 0xb208);
        if (lVar2 != lVar10 || lVar3 != lVar4) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar10 = lVar2;
          lVar4 = lVar3;
          goto joined_r0x00f3d208;
        }
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar11) {
          *plVar9 = 0;
          *(long *)(param_1 + 0xb204) = lVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar11 = true;
      lVar10 = lVar2;
      lVar4 = lVar3;
      goto joined_r0x00f3d208;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb210));
  return;
}


