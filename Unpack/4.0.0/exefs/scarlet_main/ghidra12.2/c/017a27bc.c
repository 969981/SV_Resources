/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a27bc; name: FUN_017a27bc
 */


void FUN_017a27bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
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
  
  plVar5 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar5 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar6) {
      *plVar5 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_017a280c;
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
          if (cVar1 == '\0') goto LAB_017a280c;
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
LAB_017a280c:
  lVar2 = *(long *)(param_1 + 0x198);
  lVar13 = *(long *)(param_1 + 0x1b8);
  lVar12 = *(long *)(param_1 + 0x1d8);
  lVar11 = *(long *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    if (((lVar13 == 0) && (lVar12 == 0)) && (lVar11 == 0)) {
      if (*(long *)(lVar2 + 0xb0) != 0) {
        uVar9 = 0;
        do {
          FUN_028e58cc(lVar2,uVar9,param_2,param_3,param_4,param_5);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (*(long *)(lVar2 + 0xb0) != 0) {
      uVar9 = 0;
      do {
        FUN_017a2c60(lVar2,uVar9,param_2,param_3,param_4,param_5);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar13 != 0) {
    lVar2 = *(long *)(param_1 + 0x1b8);
    if ((lVar12 == 0) && (lVar11 == 0)) {
      if (*(long *)(lVar2 + 0xb0) != 0) {
        uVar9 = 0;
        do {
          FUN_028e591c(lVar2,uVar9,param_2,param_3,param_4,param_5);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (*(long *)(lVar2 + 0xb0) != 0) {
      uVar9 = 0;
      do {
        FUN_017a2cb0(lVar2,uVar9,param_2,param_3,param_4,param_5);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar12 == 0) {
    if (lVar11 != 0) {
LAB_017a2b18:
      FUN_017a3044(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3,param_4,param_5);
    }
  }
  else {
    if (lVar11 != 0) {
      FUN_028e59cc(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4,param_5);
      goto LAB_017a2b18;
    }
    FUN_017a2fb0(*(undefined8 *)(param_1 + 0x1d8),param_2,param_3,param_4,param_5);
  }
  plVar5 = (long *)(param_1 + 0x48);
  lVar11 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar11) {
    lVar2 = nn::os::GetCurrentThread();
LAB_017a2848:
    if (*plVar5 == 0) goto code_r0x017a2850;
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
            if (cVar1 == '\0') goto LAB_017a2858;
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
LAB_017a2858:
    bVar6 = false;
    goto LAB_017a285c;
  }
  plVar5 = (long *)0x0;
  bVar6 = true;
LAB_017a285c:
  plVar4 = (long *)(param_1 + 0x60);
  puVar8 = (undefined8 *)*plVar4;
  puVar7 = *(undefined8 **)(param_1 + 0x68);
  puVar10 = puVar8;
  if (puVar8 != puVar7) {
    (*(code *)*puVar8)(puVar8 + 4);
    while (puVar10 = puVar8 + 0x20, puVar10 != puVar7) {
      (*(code *)*puVar10)(puVar8 + 0x24);
      puVar8 = puVar10;
    }
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    puVar8 = *(undefined8 **)(param_1 + 0x68);
    puVar10 = puVar7;
    if (puVar8 == puVar7) {
    }
    else {
      if (puVar7 != puVar8) {
        do {
          pcVar3 = (code *)puVar8[-0x1f];
          puVar10 = puVar8 + -0x20;
          if (pcVar3 != (code *)0x0) {
            puVar8[-0x1e] = 0;
            puVar8[-0x1d] = 0;
            puVar8[-0x20] = 0;
            puVar8[-0x1f] = 0;
            (*pcVar3)(puVar8 + -0x1c);
          }
          puVar8 = puVar10;
        } while (puVar7 != puVar10);
        puVar10 = (undefined8 *)*plVar4;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar7;
      puVar8 = puVar7;
    }
  }
  lVar2 = (long)puVar8 - (long)puVar10;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar10 >> 8)) {
    puVar8 = (undefined8 *)(param_1 + 0x78);
    local_70 = 0;
    puStack_68 = puVar8;
    if (lVar2 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*puVar8 + 0x10))((long *)*puVar8,lVar2,0x10);
      if (local_88 == 0) {
        (**(code **)(*(long *)*puVar8 + 0xe8))();
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
  lVar11 = *plVar5;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar11) {
    plVar5 = (long *)0x0;
    bVar6 = true;
LAB_017a28cc:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar8 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_00f88668(param_1,*puVar8);
        lVar2 = lVar2 + -1;
        puVar8 = puVar8 + 1;
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
    if (cVar1 == '\0') goto LAB_017a28c8;
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
          if (cVar1 == '\0') goto LAB_017a28c8;
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
LAB_017a28c8:
  bVar6 = false;
  goto LAB_017a28cc;
code_r0x017a2850:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar5,0x10);
  if (bVar6) {
    *plVar5 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_017a2858;
  goto LAB_017a2848;
}


