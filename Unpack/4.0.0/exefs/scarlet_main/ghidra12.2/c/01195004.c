/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01195004; name: FUN_01195004
 */


void FUN_01195004(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long local_50;
  long lStack_48;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)(param_1 + 0x30);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01195044;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01195044;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01195044:
  lStack_48 = param_2[6];
  local_50 = param_2[7];
  plVar9 = (long *)(param_1 + 0xe0);
  if (((long *)*plVar9 == (long *)0x0) || ((long *)*plVar9 == plVar9)) {
    FUN_00c8b7ec(param_1 + 0x48,&lStack_48,&local_50);
    uVar7 = (*(long *)(param_1 + 0x90) + *(long *)(param_1 + 0x88)) - 1;
    puVar10 = (undefined8 *)
              (*(long *)(*(long *)(param_1 + 0x50) + (uVar7 >> 3 & 0x1ffffffffffffff8)) +
              (uVar7 & 0x3f) * 0x40);
  }
  else {
    puVar10 = *(undefined8 **)(param_1 + 0xe8);
    puVar10[6] = lStack_48;
    puVar10[7] = local_50;
    plVar4 = *(long **)(param_1 + 0xe8);
    lVar3 = *plVar4;
    plVar11 = (long *)plVar4[1];
    *plVar11 = lVar3;
    *(long **)(lVar3 + 8) = plVar11;
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + -1;
    *plVar4 = 0;
    plVar4[1] = 0;
  }
  if ((param_2 != *(long **)(param_1 + 200)) && (plVar11 = (long *)param_2[1], plVar11[2] != 0)) {
    plVar4 = plVar11 + 2;
    puVar10[7] = puVar10[7] + plVar11[7];
    puVar10[6] = plVar11[6];
    lVar3 = plVar11[4];
    if (lVar3 == 0) {
      plVar8 = (long *)*plVar4;
      if ((plVar4 == (long *)plVar8[2]) &&
         (plVar6 = (long *)*plVar8, plVar8 == (long *)((long *)*plVar8)[2])) {
        do {
          bVar2 = plVar6 == (long *)((long *)*plVar6)[2];
          plVar6 = (long *)*plVar6;
        } while (bVar2);
      }
    }
    else {
      do {
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar3 != 0);
    }
    FUN_00d28960(param_1 + 0xf8,plVar4);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
    plVar11[3] = 0;
    plVar11[4] = 0;
    *plVar4 = 0;
    lVar3 = *plVar11;
    plVar4 = (long *)plVar11[1];
    *plVar4 = lVar3;
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
    *plVar11 = 0;
    plVar11[1] = 0;
    puVar5 = *(undefined8 **)(param_1 + 0xe8);
    *plVar11 = (long)plVar9;
    plVar11[1] = (long)puVar5;
    *(long **)(param_1 + 0xe8) = plVar11;
    *puVar5 = plVar11;
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  }
  plVar11 = (long *)*param_2;
  if (((long *)(param_1 + 200) != plVar11) && (plVar11[2] != 0)) {
    plVar4 = plVar11 + 2;
    puVar10[7] = puVar10[7] + plVar11[7];
    lVar3 = plVar11[4];
    if (lVar3 == 0) {
      plVar8 = (long *)*plVar4;
      if ((plVar4 == (long *)plVar8[2]) &&
         (plVar6 = (long *)*plVar8, plVar8 == (long *)((long *)*plVar8)[2])) {
        do {
          bVar2 = plVar6 == (long *)((long *)*plVar6)[2];
          plVar6 = (long *)*plVar6;
        } while (bVar2);
      }
    }
    else {
      do {
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar3 != 0);
    }
    FUN_00d28960(param_1 + 0xf8,plVar4);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
    plVar11[3] = 0;
    plVar11[4] = 0;
    *plVar4 = 0;
    lVar3 = *plVar11;
    plVar4 = (long *)plVar11[1];
    *plVar4 = lVar3;
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
    *plVar11 = 0;
    plVar11[1] = 0;
    puVar5 = *(undefined8 **)(param_1 + 0xe8);
    *plVar11 = (long)plVar9;
    plVar11[1] = (long)puVar5;
    *(long **)(param_1 + 0xe8) = plVar11;
    *puVar5 = plVar11;
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  }
  puVar5 = (undefined8 *)param_2[1];
  *puVar10 = param_2;
  puVar10[1] = puVar5;
  param_2[1] = (long)puVar10;
  *puVar5 = puVar10;
  plVar4 = (long *)(param_1 + 0xf8);
  plVar11 = (long *)*plVar4;
  puVar5 = puVar10 + 2;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  if (plVar11 == (long *)0x0) {
LAB_01195188:
    *(undefined8 **)(param_1 + 0x108) = puVar5;
    *(undefined8 **)(param_1 + 0xf8) = puVar5;
    plVar11 = plVar4;
  }
  else {
    uVar7 = puVar10[7];
    bVar2 = uVar7 < (ulong)plVar11[5];
    lVar3 = 8;
    if (!bVar2) {
      lVar3 = 0x10;
    }
    plVar8 = *(long **)((long)plVar11 + lVar3);
    if (plVar8 != (long *)0x0) {
      bVar2 = uVar7 < (ulong)plVar8[5];
      lVar3 = 8;
      if (!bVar2) {
        lVar3 = 0x10;
      }
      plVar11 = *(long **)((long)plVar8 + lVar3);
      if (plVar11 == (long *)0x0) {
        plVar11 = plVar8;
      }
      else {
        bVar2 = uVar7 < (ulong)plVar11[5];
        lVar3 = 8;
        if (!bVar2) {
          lVar3 = 0x10;
        }
        for (plVar8 = *(long **)((long)plVar11 + lVar3); plVar8 != (long *)0x0;
            plVar8 = *(long **)((long)plVar8 + lVar3)) {
          bVar2 = uVar7 < (ulong)plVar8[5];
          lVar3 = 8;
          if (!bVar2) {
            lVar3 = 0x10;
          }
          plVar11 = plVar8;
        }
      }
    }
    if (plVar11 == plVar4) goto LAB_01195188;
    if (!bVar2) {
      plVar11[2] = (long)puVar5;
      if (plVar11 == *(long **)(param_1 + 0x108)) {
        *(undefined8 **)(param_1 + 0x108) = puVar5;
      }
      goto LAB_01195198;
    }
    plVar11[1] = (long)puVar5;
    if (plVar11 != *(long **)(param_1 + 0x100)) goto LAB_01195198;
  }
  *(undefined8 **)(param_1 + 0x100) = puVar5;
LAB_01195198:
  puVar10[2] = plVar11;
  puVar10[3] = 0;
  puVar10[4] = 0;
  FUN_00d287fc();
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
  lVar3 = *param_2;
  plVar11 = (long *)param_2[1];
  *plVar11 = lVar3;
  *(long **)(lVar3 + 8) = plVar11;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
  *param_2 = 0;
  param_2[1] = 0;
  puVar10 = *(undefined8 **)(param_1 + 0xe8);
  *param_2 = (long)plVar9;
  param_2[1] = (long)puVar10;
  *(long **)(param_1 + 0xe8) = param_2;
  *puVar10 = param_2;
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
  return;
}


