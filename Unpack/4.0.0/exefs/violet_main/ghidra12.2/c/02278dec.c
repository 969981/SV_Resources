/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02278dec; name: FUN_02278dec
 */


void FUN_02278dec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar2 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *plVar7 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_02278e34;
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
          if (cVar2 == '\0') goto LAB_02278e34;
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
LAB_02278e34:
  lVar3 = *(long *)(param_1 + 0x198);
  lVar12 = *(long *)(param_1 + 0x1b8);
  lVar10 = *(long *)(param_1 + 0x1d8);
  lVar9 = *(long *)(param_1 + 0x1f8);
  if (lVar3 != 0) {
    if (((lVar12 == 0) && (lVar10 == 0)) && (lVar9 == 0)) {
      FUN_0227923c(lVar3,param_2,param_3,param_4);
    }
    else {
      FUN_022791c4(lVar3,param_2,param_3,param_4);
    }
  }
  if (lVar12 != 0) {
    if ((lVar10 == 0) && (lVar9 == 0)) {
      FUN_0227932c(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3,param_4);
    }
    else {
      FUN_022792b4(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3,param_4);
    }
  }
  if (lVar10 == 0) {
    if (lVar9 != 0) goto LAB_02278ea0;
  }
  else if (lVar9 == 0) {
    FUN_02279438(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4);
  }
  else {
    FUN_022793a4(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4);
LAB_02278ea0:
    FUN_022794cc(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3,param_4);
  }
  plVar7 = (long *)(param_1 + 0x48);
  lVar9 = *plVar7;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar9) {
    lVar3 = nn::os::GetCurrentThread();
LAB_02278ed0:
    if (*plVar7 == 0) goto code_r0x02278ed8;
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
            if (cVar2 == '\0') goto LAB_02278ee0;
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
LAB_02278ee0:
    bVar8 = false;
    goto LAB_02278ee4;
  }
  plVar7 = (long *)0x0;
  bVar8 = true;
LAB_02278ee4:
  plVar5 = (long *)(param_1 + 0x60);
  puVar11 = (undefined8 *)*plVar5;
  puVar6 = *(undefined8 **)(param_1 + 0x68);
  if (puVar11 == puVar6) {
    puVar6 = puVar11;
  }
  else {
    do {
      (*(code *)*puVar11)(puVar11 + 4);
      puVar11 = puVar11 + 0x20;
    } while (puVar11 != puVar6);
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    puVar11 = *(undefined8 **)(param_1 + 0x68);
    puVar6 = puVar1;
    if (puVar11 == puVar1) {
    }
    else {
      if (puVar1 != puVar11) {
        do {
          pcVar4 = (code *)puVar11[-0x1f];
          puVar6 = puVar11 + -0x20;
          if (pcVar4 != (code *)0x0) {
            puVar11[-0x1e] = 0;
            puVar11[-0x1d] = 0;
            puVar11[-0x20] = 0;
            puVar11[-0x1f] = 0;
            (*pcVar4)(puVar11 + -0x1c);
          }
          puVar11 = puVar6;
        } while (puVar1 != puVar6);
        puVar6 = (undefined8 *)*plVar5;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar1;
      puVar11 = puVar1;
    }
  }
  lVar3 = (long)puVar11 - (long)puVar6;
  if ((ulong)(lVar3 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar6 >> 8)) {
    puVar11 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar11;
    if (lVar3 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,lVar3,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar11 + 0xe8))();
      }
    }
    lStack_70 = local_78 + (lVar3 >> 8) * 0x100;
    local_68 = lStack_70;
    local_60 = lStack_70;
    FUN_0103b38c(plVar5,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar8) {
    *plVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
  }
  plVar7 = (long *)(param_1 + 0x98);
  lVar9 = *plVar7;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar9) {
    plVar7 = (long *)0x0;
    bVar8 = true;
LAB_02278f7c:
    lVar3 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar3 != 0) {
      lVar3 = lVar3 >> 3;
      puVar11 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_02275650(param_1,*puVar11);
        lVar3 = lVar3 + -1;
        puVar11 = puVar11 + 1;
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
    if (cVar2 == '\0') goto LAB_02278f78;
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
          if (cVar2 == '\0') goto LAB_02278f78;
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
LAB_02278f78:
  bVar8 = false;
  goto LAB_02278f7c;
code_r0x02278ed8:
  cVar2 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar8) {
    *plVar7 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_02278ee0;
  goto LAB_02278ed0;
}


