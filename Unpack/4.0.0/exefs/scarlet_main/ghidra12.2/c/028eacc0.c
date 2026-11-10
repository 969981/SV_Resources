/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028eacc0; name: FUN_028eacc0
 */


void FUN_028eacc0(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  plVar9 = (long *)(param_1 + 0x30);
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_028eacfc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar9 == 0) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028eacfc;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_028eacfc:
  lVar3 = *(long *)(param_1 + 0x198);
  lVar12 = *(long *)(param_1 + 0x1b8);
  lVar10 = *(long *)(param_1 + 0x1d8);
  lVar8 = *(long *)(param_1 + 0x1f8);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0xb0) != 0)) {
    uVar7 = 0;
    do {
      FUN_028eb054(lVar3,uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulong *)(lVar3 + 0xb0));
  }
  if ((lVar12 != 0) && (lVar3 = *(long *)(param_1 + 0x1b8), *(long *)(lVar3 + 0xb0) != 0)) {
    uVar7 = 0;
    do {
      FUN_028eb098(lVar3,uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulong *)(lVar3 + 0xb0));
  }
  if (lVar10 != 0) {
    FUN_028eb13c(*(undefined8 *)(param_1 + 0x1d8));
  }
  if (lVar8 != 0) {
    FUN_028eb1a0(*(undefined8 *)(param_1 + 0x1f8));
  }
  plVar9 = (long *)(param_1 + 0x48);
  lVar8 = *plVar9;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 != lVar8) {
    lVar3 = nn::os::GetCurrentThread();
LAB_028ead9c:
    if (*plVar9 == 0) goto code_r0x028eada4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar9 == 0) {
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar6) {
              *plVar9 = lVar3;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_028eadac;
          }
        } while( true );
      }
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar3;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_028eadac:
    bVar6 = false;
    goto LAB_028eadb0;
  }
  plVar9 = (long *)0x0;
  bVar6 = true;
LAB_028eadb0:
  plVar5 = (long *)(param_1 + 0x60);
  puVar13 = (undefined8 *)*plVar5;
  puVar11 = *(undefined8 **)(param_1 + 0x68);
  if (puVar13 == puVar11) {
    puVar11 = puVar13;
  }
  else {
    do {
      (*(code *)*puVar13)(puVar13 + 4);
      puVar13 = puVar13 + 0x20;
    } while (puVar13 != puVar11);
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    puVar13 = *(undefined8 **)(param_1 + 0x68);
    puVar11 = puVar1;
    if (puVar13 == puVar1) {
    }
    else {
      if (puVar1 != puVar13) {
        do {
          pcVar4 = (code *)puVar13[-0x1f];
          puVar11 = puVar13 + -0x20;
          if (pcVar4 != (code *)0x0) {
            puVar13[-0x1e] = 0;
            puVar13[-0x1d] = 0;
            puVar13[-0x20] = 0;
            puVar13[-0x1f] = 0;
            (*pcVar4)(puVar13 + -0x1c);
          }
          puVar13 = puVar11;
        } while (puVar1 != puVar11);
        puVar11 = (undefined8 *)*plVar5;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar1;
      puVar13 = puVar1;
    }
  }
  lVar3 = (long)puVar13 - (long)puVar11;
  if ((ulong)(lVar3 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar11 >> 8)) {
    puVar13 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar13;
    if (lVar3 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,lVar3,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar13 + 0xe8))();
      }
    }
    lStack_70 = local_78 + (lVar3 >> 8) * 0x100;
    local_68 = lStack_70;
    local_60 = lStack_70;
    FUN_0103b38c(plVar5,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar6) {
    *plVar9 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
  }
  plVar9 = (long *)(param_1 + 0x98);
  lVar8 = *plVar9;
  lVar3 = nn::os::GetCurrentThread();
  if (lVar3 == lVar8) {
    plVar9 = (long *)0x0;
    bVar6 = true;
LAB_028eae48:
    lVar3 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar3 != 0) {
      lVar3 = lVar3 >> 3;
      puVar13 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_012848b0(param_1,*puVar13);
        lVar3 = lVar3 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar3 != 0);
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar6) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    return;
  }
  lVar3 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB_028eae44;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
        while (*plVar9 == 0) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar3;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028eae44;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = lVar3;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_028eae44:
  bVar6 = false;
  goto LAB_028eae48;
code_r0x028eada4:
  cVar2 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar6) {
    *plVar9 = lVar3;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_028eadac;
  goto LAB_028ead9c;
}


