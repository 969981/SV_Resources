/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9d72c; name: FUN_00e9d72c
 */


bool FUN_00e9d72c(long param_1,ulong param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  int local_6c;
  undefined1 auStack_68 [8];
  int *local_60;
  undefined8 *local_58 [3];
  
  plVar13 = (long *)(param_1 + 0x2d8);
  local_6c = param_3;
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00e9d76c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
        while (*plVar13 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00e9d76c;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar2) {
      *plVar13 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00e9d76c:
  local_60 = &local_6c;
  plVar13 = (long *)(param_1 + 0x90);
  plVar6 = (long *)*plVar13;
  plVar12 = (long *)(param_1 + 0x88);
  if (plVar6 == (long *)0x0) {
    plVar7 = plVar13;
    plVar11 = plVar13;
  }
  else {
    plVar11 = (long *)(param_1 + 0x90);
    do {
      while( true ) {
        plVar7 = plVar6;
        if ((int)plVar6[4] <= local_6c) break;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_00e9d808;
        plVar6 = (long *)*plVar6;
      }
      if (local_6c <= (int)plVar6[4]) break;
      plVar11 = plVar6 + 1;
      plVar6 = (long *)*plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
  }
LAB_00e9d808:
  puVar5 = (undefined8 *)*plVar11;
  if ((undefined8 *)*plVar11 == (undefined8 *)0x0) {
    FUN_00dec8e8(local_58,plVar12,&DAT_03d30400,&local_60,auStack_68);
    *local_58[0] = 0;
    local_58[0][1] = 0;
    local_58[0][2] = plVar7;
    *plVar11 = (long)local_58[0];
    puVar5 = local_58[0];
    if (*(long *)*plVar12 != 0) {
      *plVar12 = *(long *)*plVar12;
      puVar5 = (undefined8 *)*plVar11;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),puVar5);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
    puVar5 = local_58[0];
  }
  uVar8 = puVar5[6];
  plVar6 = (long *)0x0;
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & param_2;
    }
    else if (param_2 < uVar8) {
      uVar10 = param_2;
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = param_2 / uVar8;
      }
      uVar10 = param_2 - uVar10 * uVar8;
    }
    plVar11 = *(long **)(puVar5[5] + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == param_2) {
            plVar6 = plVar11;
            if (plVar11[2] == param_2) break;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) goto LAB_00e9d86c;
          plVar11 = (long *)*plVar11;
          plVar6 = (long *)0x0;
        } while (plVar11 != (long *)0x0);
        goto LAB_00e9d870;
      }
      do {
        uVar9 = plVar11[1];
        if (uVar9 == param_2) {
          plVar6 = plVar11;
          if (plVar11[2] == param_2) goto LAB_00e9d870;
        }
        else {
          if (uVar8 <= uVar9) {
            uVar3 = 0;
            if (uVar8 != 0) {
              uVar3 = uVar9 / uVar8;
            }
            uVar9 = uVar9 - uVar3 * uVar8;
          }
          if (uVar9 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
LAB_00e9d86c:
    plVar6 = (long *)0x0;
  }
LAB_00e9d870:
  local_60 = &local_6c;
  plVar11 = (long *)*plVar13;
  if (plVar11 == (long *)0x0) {
    plVar11 = plVar13;
    goto LAB_00e9d8c0;
  }
  plVar13 = (long *)(param_1 + 0x90);
  while (local_6c < (int)plVar11[4]) {
    plVar13 = plVar11;
    if ((long *)*plVar11 == (long *)0x0) {
      goto LAB_00e9d8c0;
    }
    plVar7 = (long *)*plVar11;
LAB_00e9d8a4:
    plVar11 = plVar7;
  }
  if ((int)plVar11[4] < local_6c) {
    plVar13 = plVar11 + 1;
    plVar7 = (long *)*plVar13;
    if ((long *)*plVar13 != (long *)0x0) goto LAB_00e9d8a4;
  }
LAB_00e9d8c0:
  if (*plVar13 == 0) {
    FUN_00dec8e8(local_58,plVar12,&DAT_03d30400,&local_60,auStack_68);
    *local_58[0] = 0;
    local_58[0][1] = 0;
    local_58[0][2] = plVar11;
    *plVar13 = (long)local_58[0];
    if (*(long *)*plVar12 != 0) {
      *plVar12 = *(long *)*plVar12;
      local_58[0] = (undefined8 *)*plVar13;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x90),local_58[0]);
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 1;
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2e0));
  return plVar6 != (long *)0x0;
}


