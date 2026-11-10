/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f59ce8; name: FUN_00f59ce8
 */


void FUN_00f59ce8(long param_1,long param_2,byte param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  byte local_4c [4];
  byte *local_48;
  
  plVar9 = (long *)(param_1 + 0x2d8);
  local_4c[0] = param_3;
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00f59d28;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2e0));
        while (*plVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00f59d28;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00f59d28:
  local_48 = local_4c;
  puVar14 = (undefined8 *)(param_1 + 0x58);
  puVar6 = (undefined8 *)*puVar14;
  if (puVar6 == (undefined8 *)0x0) {
    puVar10 = puVar14;
    puVar11 = puVar14;
  }
  else {
    puVar11 = (undefined8 *)(param_1 + 0x58);
    puVar10 = puVar6;
    while( true ) {
      if (*(byte *)(puVar10 + 4) <= local_4c[0]) {
        if (*(byte *)(puVar10 + 4) < local_4c[0]) {
          puVar11 = puVar10 + 1;
          puVar8 = (undefined8 *)*puVar11;
          if ((undefined8 *)*puVar11 != (undefined8 *)0x0) goto LAB_00f59d74;
        }
        goto LAB_00f59dc4;
      }
      puVar11 = puVar10;
      if ((undefined8 *)*puVar10 == (undefined8 *)0x0) break;
      puVar8 = (undefined8 *)*puVar10;
LAB_00f59d74:
      puVar10 = puVar8;
    }
  }
LAB_00f59dc4:
  puVar8 = (undefined8 *)*puVar11;
  if (puVar8 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(param_1 + 0x60);
    puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,0x60,8);
    if (puVar8 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar6 + 0xe8))();
    }
    FUN_00d75208(puVar6,puVar8 + 4,&local_48);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar10;
    *puVar11 = puVar8;
    puVar6 = puVar8;
    if (**(long **)(param_1 + 0x50) != 0) {
      *(long *)(param_1 + 0x50) = **(long **)(param_1 + 0x50);
      puVar6 = (undefined8 *)*puVar11;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x58),puVar6);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
    puVar6 = *(undefined8 **)(param_1 + 0x58);
  }
  plVar9 = (long *)puVar8[6];
  local_48 = local_4c;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = puVar14;
    puVar11 = puVar14;
  }
  else {
    puVar11 = (undefined8 *)(param_1 + 0x58);
    while( true ) {
      if (*(byte *)(puVar6 + 4) <= local_4c[0]) {
        if (*(byte *)(puVar6 + 4) < local_4c[0]) {
          puVar11 = puVar6 + 1;
          puVar10 = (undefined8 *)*puVar11;
          if ((undefined8 *)*puVar11 != (undefined8 *)0x0) goto LAB_00f59e10;
        }
        goto LAB_00f59e9c;
      }
      puVar11 = puVar6;
      if ((undefined8 *)*puVar6 == (undefined8 *)0x0) break;
      puVar10 = (undefined8 *)*puVar6;
LAB_00f59e10:
      puVar6 = puVar10;
    }
  }
LAB_00f59e9c:
  puVar10 = (undefined8 *)*puVar11;
  if (puVar10 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)(param_1 + 0x60);
    puVar10 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,0x60,8);
    if (puVar10 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar8 + 0xe8))();
    }
    FUN_00d75208(puVar8,puVar10 + 4,&local_48);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = puVar6;
    *puVar11 = puVar10;
    puVar6 = puVar10;
    if (**(long **)(param_1 + 0x50) != 0) {
      *(long *)(param_1 + 0x50) = **(long **)(param_1 + 0x50);
      puVar6 = (undefined8 *)*puVar11;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x58),puVar6);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  }
  plVar1 = puVar10 + 5;
  if (plVar1 == plVar9) {
LAB_00f59f2c:
    if (plVar9 != plVar1) {
      for (plVar12 = (long *)plVar9[1]; plVar12 != plVar1; plVar12 = (long *)plVar12[1]) {
        lVar4 = 0;
        if (plVar12[2] != 0) {
          lVar7 = *(long *)(plVar12[2] + 0x10);
          lVar4 = 0;
          if (lVar7 != 0) {
            lVar4 = lVar7 + -0x28;
          }
        }
        if (lVar4 != param_2) {
          FUN_00d0a34c(plVar9 + 2);
          plVar9[4] = plVar12[4];
          FUN_00c93a38(plVar9 + 5,plVar12 + 5);
          plVar9[7] = plVar12[7];
          FUN_00f5a410(plVar9 + 8,plVar12 + 8);
          plVar9[10] = plVar12[10];
          FUN_00f5a7e0(plVar9 + 0xb,plVar12 + 0xb);
          *(char *)(plVar9 + 0xd) = (char)plVar12[0xd];
          plVar9 = (long *)plVar9[1];
        }
      }
    }
  }
  else {
    do {
      lVar4 = 0;
      if (plVar9[2] != 0) {
        lVar7 = *(long *)(plVar9[2] + 0x10);
        lVar4 = 0;
        if (lVar7 != 0) {
          lVar4 = lVar7 + -0x28;
        }
      }
      if (lVar4 == param_2) goto LAB_00f59f2c;
      plVar9 = (long *)plVar9[1];
    } while (plVar1 != plVar9);
  }
  local_48 = local_4c;
  puVar6 = (undefined8 *)*puVar14;
  if (puVar6 == (undefined8 *)0x0) {
    puVar10 = puVar14;
    puVar11 = puVar14;
  }
  else {
    puVar11 = (undefined8 *)(param_1 + 0x58);
    puVar10 = puVar6;
    while( true ) {
      if (*(byte *)(puVar10 + 4) <= local_4c[0]) {
        if (*(byte *)(puVar10 + 4) < local_4c[0]) {
          puVar11 = puVar10 + 1;
          puVar8 = (undefined8 *)*puVar11;
          if ((undefined8 *)*puVar11 != (undefined8 *)0x0) goto LAB_00f59f24;
        }
        goto LAB_00f5a040;
      }
      puVar11 = puVar10;
      if ((undefined8 *)*puVar10 == (undefined8 *)0x0) break;
      puVar8 = (undefined8 *)*puVar10;
LAB_00f59f24:
      puVar10 = puVar8;
    }
  }
LAB_00f5a040:
  puVar8 = (undefined8 *)*puVar11;
  if (puVar8 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)(param_1 + 0x60);
    puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x10))((long *)*puVar6,0x60,8);
    if (puVar8 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar6 + 0xe8))();
    }
    FUN_00d75208(puVar6,puVar8 + 4,&local_48);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = puVar10;
    *puVar11 = puVar8;
    puVar6 = puVar8;
    if (**(long **)(param_1 + 0x50) != 0) {
      *(long *)(param_1 + 0x50) = **(long **)(param_1 + 0x50);
      puVar6 = (undefined8 *)*puVar11;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x58),puVar6);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
    puVar6 = *(undefined8 **)(param_1 + 0x58);
  }
  local_48 = local_4c;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = puVar14;
    goto LAB_00f5a094;
  }
  puVar14 = (undefined8 *)(param_1 + 0x58);
  while (local_4c[0] < *(byte *)(puVar6 + 4)) {
    puVar14 = puVar6;
    if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
      goto LAB_00f5a094;
    }
    puVar11 = (undefined8 *)*puVar6;
LAB_00f5a088:
    puVar6 = puVar11;
  }
  if (*(byte *)(puVar6 + 4) < local_4c[0]) {
    puVar14 = puVar6 + 1;
    puVar11 = (undefined8 *)*puVar14;
    if ((undefined8 *)*puVar14 != (undefined8 *)0x0) goto LAB_00f5a088;
  }
LAB_00f5a094:
  puVar11 = (undefined8 *)*puVar14;
  if (puVar11 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)(param_1 + 0x60);
    puVar11 = (undefined8 *)(**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,0x60,8);
    if (puVar11 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar10 + 0xe8))();
    }
    FUN_00d75208(puVar10,puVar11 + 4,&local_48);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = puVar6;
    *puVar14 = puVar11;
    puVar6 = puVar11;
    if (**(long **)(param_1 + 0x50) != 0) {
      *(long *)(param_1 + 0x50) = **(long **)(param_1 + 0x50);
      puVar6 = (undefined8 *)*puVar14;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x58),puVar6);
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
  }
  plVar1 = puVar11 + 5;
  if (plVar1 != plVar9) {
    lVar4 = *plVar1;
    *(undefined8 *)(*plVar9 + 8) = *(undefined8 *)(lVar4 + 8);
    **(long **)(lVar4 + 8) = *plVar9;
    plVar12 = (long *)plVar9[1];
    puVar8[7] = puVar8[7] + -1;
    FUN_01174d44(plVar9 + 2);
    plVar13 = (long *)puVar8[8];
    uVar5 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar9,0x70,8);
    }
    else {
      FUN_00c48fe8(plVar13,plVar9,0x70,8);
    }
    if (plVar1 != plVar12) {
      plVar9 = (long *)plVar12[1];
      puVar8[7] = puVar8[7] + -1;
      FUN_01174d44(plVar12 + 2);
      plVar13 = (long *)puVar8[8];
      uVar5 = (**(code **)(*plVar13 + 0xf8))(plVar13);
      if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x70,8);
      }
      else {
        FUN_00c48fe8(plVar13,plVar12,0x70,8);
      }
      while (plVar1 != plVar9) {
        plVar13 = (long *)plVar9[1];
        puVar8[7] = puVar8[7] + -1;
        FUN_01174d44(plVar9 + 2);
        plVar12 = (long *)puVar8[8];
        uVar5 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,plVar9,0x70,8);
          plVar9 = plVar13;
        }
        else {
          FUN_00c48fe8(plVar12,plVar9,0x70,8);
          plVar9 = plVar13;
        }
      }
    }
  }
  if ((*(long *)(param_1 + 0x410) != 0) && (local_4c[0] - 3 < 3)) {
    FUN_00f5abb0();
  }
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2e0));
  return;
}


