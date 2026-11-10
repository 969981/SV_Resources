/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c8f848; name: FUN_00c8f848
 */


void FUN_00c8f848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
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
    if (cVar1 == '\0') goto LAB_00c8f890;
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
          if (cVar1 == '\0') goto LAB_00c8f890;
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
LAB_00c8f890:
  lVar2 = *(long *)(param_1 + 0x198);
  lVar10 = *(long *)(param_1 + 0x1b8);
  lVar8 = *(long *)(param_1 + 0x1d8);
  lVar7 = *(long *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    if (((lVar10 == 0) && (lVar8 == 0)) && (lVar7 == 0)) {
      FUN_02258db4(lVar2,param_2,param_3,param_4);
    }
    else {
      FUN_00c904fc(lVar2,param_2,param_3,param_4);
    }
  }
  if (lVar10 != 0) {
    if ((lVar8 == 0) && (lVar7 == 0)) {
      FUN_02258e2c(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3,param_4);
    }
    else {
      FUN_00c90574(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3,param_4);
    }
  }
  if (lVar8 == 0) {
    if (lVar7 != 0) {
LAB_00c8fbe8:
      FUN_00c90704(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3,param_4);
    }
  }
  else {
    if (lVar7 != 0) {
      FUN_02258ea4(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4);
      goto LAB_00c8fbe8;
    }
    FUN_00c90670(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4);
  }
  plVar5 = (long *)(param_1 + 0x48);
  lVar7 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar7) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00c8f8cc:
    if (*plVar5 == 0) goto code_r0x00c8f8d4;
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
            if (cVar1 == '\0') goto LAB_00c8f8dc;
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
LAB_00c8f8dc:
    bVar6 = false;
    goto LAB_00c8f8e0;
  }
  plVar5 = (long *)0x0;
  bVar6 = true;
LAB_00c8f8e0:
  plVar4 = (long *)(param_1 + 0x60);
  puVar11 = (undefined8 *)*plVar4;
  puVar9 = *(undefined8 **)(param_1 + 0x68);
  puVar12 = puVar11;
  if (puVar11 != puVar9) {
    (*(code *)*puVar11)(puVar11 + 4);
    while (puVar12 = puVar11 + 0x20, puVar12 != puVar9) {
      (*(code *)*puVar12)(puVar11 + 0x24);
      puVar11 = puVar12;
    }
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    puVar11 = *(undefined8 **)(param_1 + 0x68);
    puVar12 = puVar9;
    if (puVar11 == puVar9) {
    }
    else {
      if (puVar9 != puVar11) {
        do {
          pcVar3 = (code *)puVar11[-0x1f];
          puVar12 = puVar11 + -0x20;
          if (pcVar3 != (code *)0x0) {
            puVar11[-0x1e] = 0;
            puVar11[-0x1d] = 0;
            puVar11[-0x20] = 0;
            puVar11[-0x1f] = 0;
            (*pcVar3)(puVar11 + -0x1c);
          }
          puVar11 = puVar12;
        } while (puVar9 != puVar12);
        puVar12 = (undefined8 *)*plVar4;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar9;
      puVar11 = puVar9;
    }
  }
  lVar2 = (long)puVar11 - (long)puVar12;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar12 >> 8)) {
    puVar11 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar11;
    if (lVar2 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,lVar2,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar11 + 0xe8))();
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
LAB_00c8f950:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar11 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_00c90314(param_1,*puVar11);
        lVar2 = lVar2 + -1;
        puVar11 = puVar11 + 1;
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
    if (cVar1 == '\0') goto LAB_00c8f94c;
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
          if (cVar1 == '\0') goto LAB_00c8f94c;
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
LAB_00c8f94c:
  bVar6 = false;
  goto LAB_00c8f950;
code_r0x00c8f8d4:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar6) {
    *plVar5 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00c8f8dc;
  goto LAB_00c8f8cc;
}


