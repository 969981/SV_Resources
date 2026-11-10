/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c8b348; name: FUN_00c8b348
 */


long * FUN_00c8b348(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong local_50;
  ulong uStack_48;
  
  plVar8 = (long *)(param_1 + 0x30);
  lVar4 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_00c8b388;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00c8b388;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00c8b388:
  puVar5 = (undefined8 *)(param_1 + 0xf8);
  puVar7 = (undefined8 *)*puVar5;
  if (puVar7 == (undefined8 *)0x0) {
LAB_00c8b7d8:
    uVar10 = 0;
    puVar12 = puVar5;
  }
  else {
    lVar4 = 0x10;
    puVar12 = puVar5;
    if (param_2 <= (ulong)puVar7[5]) {
      lVar4 = 8;
      puVar12 = puVar7;
    }
    puVar7 = *(undefined8 **)((long)puVar7 + lVar4);
    if (puVar7 != (undefined8 *)0x0) {
      lVar4 = 0x10;
      if (param_2 <= (ulong)puVar7[5]) {
        lVar4 = 8;
        puVar12 = puVar7;
      }
      puVar7 = *(undefined8 **)((long)puVar7 + lVar4);
      if (puVar7 != (undefined8 *)0x0) {
        lVar4 = 0x10;
        if (param_2 <= (ulong)puVar7[5]) {
          lVar4 = 8;
          puVar12 = puVar7;
        }
        for (puVar7 = *(undefined8 **)((long)puVar7 + lVar4); puVar7 != (undefined8 *)0x0;
            puVar7 = *(undefined8 **)((long)puVar7 + lVar4)) {
          lVar4 = 0x10;
          if (param_2 <= (ulong)puVar7[5]) {
            lVar4 = 8;
            puVar12 = puVar7;
          }
        }
      }
    }
    if (puVar12 == puVar5) {
      uVar10 = 0;
    }
    else {
      while( true ) {
        lVar4 = puVar12[5] + puVar12[4];
        uVar10 = lVar4 - param_2 & -param_3;
        if ((long)puVar12[4] <= (long)uVar10) break;
        puVar7 = (undefined8 *)puVar12[2];
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)*puVar12;
          if (puVar12 == (undefined8 *)puVar7[2]) {
            puVar11 = (undefined8 *)*puVar7;
            puVar12 = puVar7;
            if (puVar7 == (undefined8 *)puVar11[2]) {
              do {
                puVar12 = puVar11;
                puVar11 = (undefined8 *)*puVar12;
              } while (puVar12 == (undefined8 *)puVar11[2]);
            }
          }
          else {
            puVar11 = puVar7;
          }
          puVar7 = puVar12;
          if ((undefined8 *)puVar12[2] != puVar11) {
            puVar7 = puVar11;
          }
        }
        else {
          puVar12 = (undefined8 *)puVar7[1];
          if (puVar12 != (undefined8 *)0x0) {
            puVar7 = puVar12;
            for (puVar12 = (undefined8 *)puVar12[1]; puVar12 != (undefined8 *)0x0;
                puVar12 = (undefined8 *)puVar12[1]) {
              puVar7 = puVar12;
            }
          }
        }
        puVar12 = puVar7;
        if (puVar7 == puVar5) goto LAB_00c8b7d8;
      }
      if (puVar12 != puVar5) {
        param_2 = lVar4 - uVar10;
      }
    }
  }
  puVar5 = (undefined8 *)(param_1 + 0xf8);
  if (puVar5 == puVar12) {
    plVar8 = (long *)0x0;
    goto LAB_00c8b634;
  }
  plVar8 = puVar12 + -2;
  if (puVar12[5] == param_2) {
    lVar4 = puVar12[2];
    if (lVar4 == 0) {
      plVar9 = (long *)*puVar12;
      if (((undefined8 *)plVar9[2] == puVar12) &&
         (plVar6 = (long *)*plVar9, plVar9 == (long *)((long *)*plVar9)[2])) {
        do {
          bVar3 = plVar6 == (long *)((long *)*plVar6)[2];
          plVar6 = (long *)*plVar6;
        } while (bVar3);
      }
    }
    else {
      do {
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != 0);
    }
    FUN_00d28960(puVar5,puVar12);
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = 0;
    goto LAB_00c8b634;
  }
  lVar4 = *plVar8;
  plVar8 = *(long **)(param_1 + 0xe0);
  local_50 = param_2;
  uStack_48 = uVar10;
  if ((plVar8 == (long *)0x0) || (plVar8 == (long *)(param_1 + 0xe0))) {
    FUN_00c8b7ec(param_1 + 0x48,&uStack_48,&local_50);
    uVar10 = (*(long *)(param_1 + 0x90) + *(long *)(param_1 + 0x88)) - 1;
    plVar8 = (long *)(*(long *)(*(long *)(param_1 + 0x50) + (uVar10 >> 3 & 0x1ffffffffffffff8)) +
                     (uVar10 & 0x3f) * 0x40);
  }
  else {
    plVar8 = *(long **)(param_1 + 0xe8);
    plVar8[6] = uVar10;
    plVar8[7] = param_2;
    plVar6 = *(long **)(param_1 + 0xe8);
    lVar1 = *plVar6;
    plVar9 = (long *)plVar6[1];
    *plVar9 = lVar1;
    *(long **)(lVar1 + 8) = plVar9;
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + -1;
    *plVar6 = 0;
    plVar6[1] = 0;
  }
  puVar7 = *(undefined8 **)(lVar4 + 8);
  *plVar8 = lVar4;
  plVar8[1] = (long)puVar7;
  *(long **)(lVar4 + 8) = plVar8;
  *puVar7 = plVar8;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  lVar4 = puVar12[2];
  if (lVar4 == 0) {
    plVar9 = (long *)*puVar12;
    if (((undefined8 *)plVar9[2] == puVar12) &&
       (plVar6 = (long *)*plVar9, plVar9 == (long *)((long *)*plVar9)[2])) {
      do {
        bVar3 = plVar6 == (long *)((long *)*plVar6)[2];
        plVar6 = (long *)*plVar6;
      } while (bVar3);
    }
  }
  else {
    do {
      lVar4 = *(long *)(lVar4 + 8);
    } while (lVar4 != 0);
  }
  FUN_00d28960(puVar5,puVar12);
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[5] = puVar12[5] - param_2;
  puVar7 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar7 == (undefined8 *)0x0) {
LAB_00c8b604:
    *(undefined8 **)(param_1 + 0x108) = puVar12;
    *(undefined8 **)(param_1 + 0xf8) = puVar12;
    puVar7 = puVar5;
LAB_00c8b610:
    *(undefined8 **)(param_1 + 0x100) = puVar12;
  }
  else {
    uVar10 = puVar12[5];
    bVar3 = uVar10 < (ulong)puVar7[5];
    lVar4 = 8;
    if (!bVar3) {
      lVar4 = 0x10;
    }
    puVar11 = *(undefined8 **)((long)puVar7 + lVar4);
    if (puVar11 != (undefined8 *)0x0) {
      bVar3 = uVar10 < (ulong)puVar11[5];
      lVar4 = 8;
      if (!bVar3) {
        lVar4 = 0x10;
      }
      puVar7 = *(undefined8 **)((long)puVar11 + lVar4);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = puVar11;
      }
      else {
        bVar3 = uVar10 < (ulong)puVar7[5];
        lVar4 = 8;
        if (!bVar3) {
          lVar4 = 0x10;
        }
        for (puVar11 = *(undefined8 **)((long)puVar7 + lVar4); puVar11 != (undefined8 *)0x0;
            puVar11 = *(undefined8 **)((long)puVar11 + lVar4)) {
          bVar3 = uVar10 < (ulong)puVar11[5];
          lVar4 = 8;
          if (!bVar3) {
            lVar4 = 0x10;
          }
          puVar7 = puVar11;
        }
      }
    }
    if (puVar7 == puVar5) goto LAB_00c8b604;
    if (bVar3) {
      puVar7[1] = puVar12;
      if (puVar7 != *(undefined8 **)(param_1 + 0x100)) goto LAB_00c8b614;
      goto LAB_00c8b610;
    }
    puVar7[2] = puVar12;
    if (puVar7 == *(undefined8 **)(param_1 + 0x108)) {
      *(undefined8 **)(param_1 + 0x108) = puVar12;
    }
  }
LAB_00c8b614:
  puVar12[2] = 0;
  *puVar12 = puVar7;
  puVar12[1] = 0;
  FUN_00d287fc(puVar5,puVar12);
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
LAB_00c8b634:
  *(undefined8 *)(param_1 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
  return plVar8;
}


