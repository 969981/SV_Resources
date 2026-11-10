/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019beef4; name: FUN_019beef4
 */


void FUN_019beef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar5 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar6) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_019bef40;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar6) {
            *plVar5 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_019bef40;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar6) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_019bef40:
  lVar2 = *(long *)(param_1 + 0x198);
  lVar13 = *(long *)(param_1 + 0x1b8);
  lVar12 = *(long *)(param_1 + 0x1d8);
  lVar9 = *(long *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    if (((lVar13 == 0) && (lVar12 == 0)) && (lVar9 == 0)) {
      if (*(long *)(lVar2 + 0xb0) != 0) {
        uVar8 = 0;
        do {
          FUN_01f52b1c(lVar2,uVar8,param_2,param_3,param_4);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (*(long *)(lVar2 + 0xb0) != 0) {
      uVar8 = 0;
      do {
        FUN_019bf378(lVar2,uVar8,param_2,param_3,param_4);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar13 != 0) {
    lVar2 = *(long *)(param_1 + 0x1b8);
    if ((lVar12 == 0) && (lVar9 == 0)) {
      if (*(long *)(lVar2 + 0xb0) != 0) {
        uVar8 = 0;
        do {
          FUN_01f52b68(lVar2,uVar8,param_2,param_3,param_4);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (*(long *)(lVar2 + 0xb0) != 0) {
      uVar8 = 0;
      do {
        FUN_019bf4d8(lVar2,uVar8,param_2,param_3,param_4);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar12 == 0) {
    if (lVar9 != 0) {
LAB_019bf23c:
      FUN_019bf968(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3,param_4);
    }
  }
  else {
    if (lVar9 != 0) {
      FUN_01f52c18(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4);
      goto LAB_019bf23c;
    }
    FUN_019bf588(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4);
  }
  plVar5 = (long *)(param_1 + 0x48);
  lVar9 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar9) {
    lVar2 = nn::os::GetCurrentThread();
LAB_019bef7c:
    if (*plVar5 == 0) goto code_r0x019bef84;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar5 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar5 == 0) {
            cVar1 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar6) {
              *plVar5 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_019bef8c;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar6) {
        *plVar5 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_019bef8c:
    bVar6 = false;
    goto LAB_019bef90;
  }
  plVar5 = (long *)0x0;
  bVar6 = true;
LAB_019bef90:
  plVar4 = (long *)(param_1 + 0x60);
  puVar10 = (undefined8 *)*plVar4;
  puVar7 = *(undefined8 **)(param_1 + 0x68);
  puVar11 = puVar10;
  if (puVar10 != puVar7) {
    (*(code *)*puVar10)(puVar10 + 4);
    while (puVar11 = puVar10 + 0x20, puVar11 != puVar7) {
      (*(code *)*puVar11)(puVar10 + 0x24);
      puVar10 = puVar11;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    puVar11 = puVar7;
    if (puVar10 == puVar7) {
    }
    else {
      if (puVar7 != puVar10) {
        do {
          pcVar3 = (code *)puVar10[-0x1f];
          puVar11 = puVar10 + -0x20;
          if (pcVar3 != (code *)0x0) {
            puVar10[-0x1e] = 0;
            puVar10[-0x1d] = 0;
            puVar10[-0x20] = 0;
            puVar10[-0x1f] = 0;
            (*pcVar3)(puVar10 + -0x1c);
          }
          puVar10 = puVar11;
        } while (puVar7 != puVar11);
        puVar11 = (undefined8 *)*plVar4;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar7;
      puVar10 = puVar7;
    }
  }
  lVar2 = (long)puVar10 - (long)puVar11;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar11 >> 8)) {
    puVar10 = (undefined8 *)(param_1 + 0x78);
    local_70 = 0;
    puStack_68 = puVar10;
    if (lVar2 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar2,0x10);
      if (local_88 == 0) {
        (**(code **)(*(long *)*puVar10 + 0xe8))();
      }
    }
    lStack_80 = local_88 + (lVar2 >> 8) * 0x100;
    local_78 = lStack_80;
    local_70 = lStack_80;
    FUN_0103b38c(plVar4,&local_88);
    FUN_0103bbd0(&local_88);
  }
  if (!bVar6) {
    *plVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
  }
  plVar5 = (long *)(param_1 + 0x98);
  lVar9 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar9) {
    plVar5 = (long *)0x0;
    bVar6 = true;
LAB_019bf000:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar10 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_019bf3c4(param_1,*puVar10);
        lVar2 = lVar2 + -1;
        puVar10 = puVar10 + 1;
      } while (lVar2 != 0);
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar6) {
      *plVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar6) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_019beffc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
  do {
    if (*plVar5 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar6) {
            *plVar5 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_019beffc;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar6) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_019beffc:
  bVar6 = false;
  goto LAB_019bf000;
code_r0x019bef84:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar6) {
    *plVar5 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_019bef8c;
  goto LAB_019bef7c;
}


