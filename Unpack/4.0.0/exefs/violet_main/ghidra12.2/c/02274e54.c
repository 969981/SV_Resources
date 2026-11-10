/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02274e54; name: FUN_02274e54
 */


void FUN_02274e54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *plVar7 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02274ea0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar8) {
            *plVar7 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02274ea0;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *plVar7 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02274ea0:
  lVar3 = *(long *)(param_1 + 0x198);
  lVar13 = *(long *)(param_1 + 0x1b8);
  lVar12 = *(long *)(param_1 + 0x1d8);
  lVar11 = *(long *)(param_1 + 0x1f8);
  if (lVar3 != 0) {
    if (((lVar13 == 0) && (lVar12 == 0)) && (lVar11 == 0)) {
      if (*(long *)(lVar3 + 0xb0) != 0) {
        uVar9 = 0;
        do {
          FUN_02275308(lVar3,uVar9,param_2,param_3,param_4);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(lVar3 + 0xb0));
      }
    }
    else if (*(long *)(lVar3 + 0xb0) != 0) {
      uVar9 = 0;
      do {
        FUN_022752bc(lVar3,uVar9,param_2,param_3,param_4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulong *)(lVar3 + 0xb0));
    }
  }
  if (lVar13 != 0) {
    lVar3 = *(long *)(param_1 + 0x1b8);
    if ((lVar12 == 0) && (lVar11 == 0)) {
      if (*(long *)(lVar3 + 0xb0) != 0) {
        uVar9 = 0;
        do {
          FUN_02275400(lVar3,uVar9,param_2,param_3,param_4);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(lVar3 + 0xb0));
      }
    }
    else if (*(long *)(lVar3 + 0xb0) != 0) {
      uVar9 = 0;
      do {
        FUN_02275354(lVar3,uVar9,param_2,param_3,param_4);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulong *)(lVar3 + 0xb0));
    }
  }
  if (lVar12 == 0) {
    if (lVar11 != 0) goto LAB_02275000;
  }
  else if (lVar11 == 0) {
    FUN_02275538(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4);
  }
  else {
    FUN_022754ac(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4);
LAB_02275000:
    FUN_022755c4(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3,param_4);
  }
  plVar7 = (long *)(param_1 + 0x48);
  lVar11 = *plVar7;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar11) {
    lVar3 = nn::os::GetCurrentThread();
LAB_02275030:
    if (*plVar7 == 0) goto code_r0x02275038;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar7 == 0) {
            cVar2 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar8) {
              *plVar7 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_02275040;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar8) {
        *plVar7 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_02275040:
    bVar8 = false;
    goto LAB_02275044;
  }
  plVar7 = (long *)0x0;
  bVar8 = true;
LAB_02275044:
  plVar5 = (long *)(param_1 + 0x60);
  puVar10 = (undefined8 *)*plVar5;
  puVar6 = *(undefined8 **)(param_1 + 0x68);
  if (puVar10 == puVar6) {
    puVar6 = puVar10;
  }
  else {
    do {
      (*(code *)*puVar10)(puVar10 + 4);
      puVar10 = puVar10 + 0x20;
    } while (puVar10 != puVar6);
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    puVar6 = puVar1;
    if (puVar10 == puVar1) {
    }
    else {
      if (puVar1 != puVar10) {
        do {
          pcVar4 = (code *)puVar10[-0x1f];
          puVar6 = puVar10 + -0x20;
          if (pcVar4 != (code *)0x0) {
            puVar10[-0x1e] = 0;
            puVar10[-0x1d] = 0;
            puVar10[-0x20] = 0;
            puVar10[-0x1f] = 0;
            (*pcVar4)(puVar10 + -0x1c);
          }
          puVar10 = puVar6;
        } while (puVar1 != puVar6);
        puVar6 = (undefined8 *)*plVar5;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar1;
      puVar10 = puVar1;
    }
  }
  lVar3 = (long)puVar10 - (long)puVar6;
  if ((ulong)(lVar3 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar6 >> 8)) {
    puVar10 = (undefined8 *)(param_1 + 0x78);
    local_70 = 0;
    puStack_68 = puVar10;
    if (lVar3 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar3,0x10);
      if (local_88 == 0) {
        (**(code **)(*(long *)*puVar10 + 0xe8))();
      }
    }
    lStack_80 = local_88 + (lVar3 >> 8) * 0x100;
    local_78 = lStack_80;
    local_70 = lStack_80;
    FUN_0103b38c(plVar5,&local_88);
    FUN_0103bbd0(&local_88);
  }
  if (!bVar8) {
    *plVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
  }
  plVar7 = (long *)(param_1 + 0x98);
  lVar11 = *plVar7;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar11) {
    plVar7 = (long *)0x0;
    bVar8 = true;
LAB_022750dc:
    lVar3 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar3 != 0) {
      lVar3 = lVar3 >> 3;
      puVar10 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_02275650(param_1,*puVar10);
        lVar3 = lVar3 + -1;
        puVar10 = puVar10 + 1;
      } while (lVar3 != 0);
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar8) {
      *plVar7 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *plVar7 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_022750d8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar8) {
            *plVar7 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_022750d8;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *plVar7 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_022750d8:
  bVar8 = false;
  goto LAB_022750dc;
code_r0x02275038:
  cVar2 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar8) {
    *plVar7 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_02275040;
  goto LAB_02275030;
}


