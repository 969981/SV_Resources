/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f84c44; name: FUN_00f84c44
 */


void FUN_00f84c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  plVar5 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar6) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00f84c90;
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
          if (cVar1 == '\0') goto LAB_00f84c90;
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
LAB_00f84c90:
  lVar2 = *(long *)(param_1 + 0x198);
  lVar12 = *(long *)(param_1 + 0x1b8);
  lVar9 = *(long *)(param_1 + 0x1d8);
  lVar7 = *(long *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    if (((lVar12 == 0) && (lVar9 == 0)) && (lVar7 == 0)) {
      FUN_028e7a8c(lVar2,param_2,param_3,param_4,param_5);
    }
    else {
      FUN_00f88ac8(lVar2,param_2,param_3,param_4,param_5);
    }
  }
  if (lVar12 != 0) {
    if ((lVar9 == 0) && (lVar7 == 0)) {
      FUN_028e7b0c(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3,param_4,param_5);
    }
    else {
      FUN_00f88b48(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3,param_4,param_5);
    }
  }
  if (lVar9 == 0) {
    if (lVar7 != 0) {
LAB_00f8500c:
      FUN_00f88cec(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3,param_4,param_5);
    }
  }
  else {
    if (lVar7 != 0) {
      FUN_028e7b8c(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4,param_5);
      goto LAB_00f8500c;
    }
    FUN_00f88c50(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4,param_5);
  }
  plVar5 = (long *)(param_1 + 0x48);
  lVar7 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar7) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00f84ccc:
    if (*plVar5 == 0) goto code_r0x00f84cd4;
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
            if (cVar1 == '\0') goto LAB_00f84cdc;
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
LAB_00f84cdc:
    bVar6 = false;
    goto LAB_00f84ce0;
  }
  plVar5 = (long *)0x0;
  bVar6 = true;
LAB_00f84ce0:
  plVar4 = (long *)(param_1 + 0x60);
  puVar10 = (undefined8 *)*plVar4;
  puVar8 = *(undefined8 **)(param_1 + 0x68);
  puVar11 = puVar10;
  if (puVar10 != puVar8) {
    (*(code *)*puVar10)(puVar10 + 4);
    while (puVar11 = puVar10 + 0x20, puVar11 != puVar8) {
      (*(code *)*puVar11)(puVar10 + 0x24);
      puVar10 = puVar11;
    }
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    puVar11 = puVar8;
    if (puVar10 == puVar8) {
    }
    else {
      if (puVar8 != puVar10) {
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
        } while (puVar8 != puVar11);
        puVar11 = (undefined8 *)*plVar4;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar8;
      puVar10 = puVar8;
    }
  }
  lVar2 = (long)puVar10 - (long)puVar11;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar11 >> 8)) {
    puVar10 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar10;
    if (lVar2 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar2,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar10 + 0xe8))();
      }
    }
    lStack_70 = local_78 + (lVar2 >> 8) * 0x100;
    local_68 = lStack_70;
    local_60 = lStack_70;
    FUN_0103b38c(plVar4,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar6) {
    *plVar5 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar5 + 1));
  }
  plVar5 = (long *)(param_1 + 0x98);
  lVar7 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar7) {
    plVar5 = (long *)0x0;
    bVar6 = true;
LAB_00f84d50:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar10 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_00f88668(param_1,*puVar10);
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
    if (cVar1 == '\0') goto LAB_00f84d4c;
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
          if (cVar1 == '\0') goto LAB_00f84d4c;
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
LAB_00f84d4c:
  bVar6 = false;
  goto LAB_00f84d50;
code_r0x00f84cd4:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar6) {
    *plVar5 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00f84cdc;
  goto LAB_00f84ccc;
}


