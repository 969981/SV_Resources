/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028e70c0; name: FUN_028e70c0
 */


bool FUN_028e70c0(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  plVar8 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_028e70fc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar8 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028e70fc;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028e70fc:
  lVar9 = *(long *)(param_1 + 0x1b8);
  lVar7 = *(long *)(param_1 + 0x1d8);
  lVar2 = *(long *)(param_1 + 0x1f8);
  if (*(long *)(param_1 + 0x198) != 0) {
    lVar3 = FUN_028e7928();
    plVar8 = (long *)(ulong)*(byte *)(lVar3 + 8);
  }
  if (lVar9 != 0) {
    FUN_028e7974(*(undefined8 *)(param_1 + 0x1b8));
  }
  if (lVar7 != 0) {
    FUN_028e79bc(*(undefined8 *)(param_1 + 0x1d8));
  }
  if (lVar2 != 0) {
    FUN_028e7a24(*(undefined8 *)(param_1 + 0x1f8));
  }
  plVar10 = (long *)(param_1 + 0x48);
  lVar7 = *plVar10;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar7) {
    lVar2 = nn::os::GetCurrentThread();
LAB_028e7158:
    if (*plVar10 == 0) goto code_r0x028e7160;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar10 == 0) {
            cVar1 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_028e7168;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_028e7168:
    bVar5 = false;
    goto LAB_028e716c;
  }
  plVar10 = (long *)0x0;
  bVar5 = true;
LAB_028e716c:
  plVar6 = (long *)(param_1 + 0x60);
  puVar11 = (undefined8 *)*plVar6;
  puVar13 = *(undefined8 **)(param_1 + 0x68);
  if (puVar11 == puVar13) {
    puVar13 = puVar11;
  }
  else {
    do {
      (*(code *)*puVar11)(puVar11 + 4);
      puVar11 = puVar11 + 0x20;
    } while (puVar11 != puVar13);
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    puVar11 = *(undefined8 **)(param_1 + 0x68);
    if (puVar11 != puVar13) {
      puVar12 = puVar13;
      if (puVar13 != puVar11) {
        do {
          pcVar4 = (code *)puVar11[-0x1f];
          puVar12 = puVar11 + -0x20;
          if (pcVar4 != (code *)0x0) {
            puVar11[-0x1e] = 0;
            puVar11[-0x1d] = 0;
            puVar11[-0x20] = 0;
            puVar11[-0x1f] = 0;
            (*pcVar4)(puVar11 + -0x1c);
          }
          puVar11 = puVar12;
        } while (puVar13 != puVar12);
        puVar12 = (undefined8 *)*plVar6;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar13;
      puVar11 = puVar13;
      puVar13 = puVar12;
    }
  }
  lVar2 = (long)puVar11 - (long)puVar13;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar13 >> 8)) {
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
    FUN_0103b38c(plVar6,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar5) {
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
  }
  plVar10 = (long *)(param_1 + 0x98);
  lVar7 = *plVar10;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar7) {
    plVar10 = (long *)0x0;
    bVar5 = true;
LAB_028e71fc:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar11 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_0244f998(param_1,*puVar11);
        lVar2 = lVar2 + -1;
        puVar11 = puVar11 + 1;
      } while (lVar2 != 0);
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar5) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    return ((ulong)plVar8 & 0xff) != 0;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_028e71f8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
        while (*plVar10 == 0) {
          cVar1 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_028e71f8;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_028e71f8:
  bVar5 = false;
  goto LAB_028e71fc;
code_r0x028e7160:
  cVar1 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar5) {
    *plVar10 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_028e7168;
  goto LAB_028e7158;
}


