/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013e14ac; name: FUN_013e14ac
 */


void FUN_013e14ac(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  plVar7 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *plVar7 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_013e14ec;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar8) {
            *plVar7 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_013e14ec;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *plVar7 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_013e14ec:
  lVar2 = *(long *)(param_1 + 0x198);
  lVar12 = *(long *)(param_1 + 0x1b8);
  lVar10 = *(long *)(param_1 + 0x1d8);
  lVar9 = *(long *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    uVar6 = *(ulong *)(lVar2 + 0xb0);
    if (((lVar12 == 0) && (lVar10 == 0)) && (lVar9 == 0)) {
      if (uVar6 != 0) {
        if ((*(long *)(lVar2 + 0x48) == 0) || ((**(byte **)(lVar2 + 0x40) & 1) == 0)) {
          local_78 = *param_2;
          (*(code *)**(undefined8 **)(lVar2 + 8))(*(undefined8 **)(lVar2 + 8) + 4,&local_78);
          uVar6 = *(ulong *)(lVar2 + 0xb0);
        }
        if (1 < uVar6) {
          if ((*(ulong *)(lVar2 + 0x48) < 2) || ((**(byte **)(lVar2 + 0x40) >> 1 & 1) == 0)) {
            local_78 = *param_2;
            (**(code **)(*(long *)(lVar2 + 8) + 0x40))(*(long *)(lVar2 + 8) + 0x60,&local_78);
            uVar6 = *(ulong *)(lVar2 + 0xb0);
          }
          if (2 < uVar6) {
            uVar5 = 2;
            lVar15 = 0x80;
            do {
              if ((uVar5 < uVar6) &&
                 ((*(ulong *)(lVar2 + 0x48) <= uVar5 ||
                  ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar5 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar5 & 0x3f) & 1) == 0)))) {
                puVar13 = (undefined8 *)(*(long *)(lVar2 + 8) + lVar15);
                local_78 = *param_2;
                (*(code *)*puVar13)(puVar13 + 4,&local_78);
                uVar6 = *(ulong *)(lVar2 + 0xb0);
              }
              uVar5 = uVar5 + 1;
              lVar15 = lVar15 + 0x40;
            } while (uVar5 < uVar6);
          }
        }
      }
    }
    else if (uVar6 != 0) {
      uVar6 = 0;
      do {
        FUN_021d3aac(lVar2,uVar6,param_2);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar12 != 0) {
    lVar2 = *(long *)(param_1 + 0x1b8);
    if ((lVar10 == 0) && (lVar9 == 0)) {
      if (*(long *)(lVar2 + 0xb0) != 0) {
        uVar6 = 0;
        do {
          FUN_021d3b14(lVar2,uVar6,param_2);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (*(long *)(lVar2 + 0xb0) != 0) {
      uVar6 = 0;
      do {
        FUN_013e19ac(lVar2,uVar6,param_2);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar10 == 0) {
    if (lVar9 != 0) {
LAB_013e1878:
      FUN_013e1adc(*(undefined8 *)(param_1 + 0x1f8),param_2);
    }
  }
  else {
    if (lVar9 != 0) {
      FUN_021d3bd0(*(undefined8 *)(param_1 + 0x1d8),param_2);
      goto LAB_013e1878;
    }
    FUN_013e1a68(*(undefined8 *)(param_1 + 0x1d8),param_2);
  }
  plVar7 = (long *)(param_1 + 0x48);
  lVar9 = *plVar7;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar9) {
    lVar2 = nn::os::GetCurrentThread();
LAB_013e1528:
    if (*plVar7 == 0) goto code_r0x013e1530;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar7 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar7 == 0) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar8) {
              *plVar7 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_013e1538;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar8) {
        *plVar7 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_013e1538:
    bVar8 = false;
    goto LAB_013e153c;
  }
  plVar7 = (long *)0x0;
  bVar8 = true;
LAB_013e153c:
  plVar4 = (long *)(param_1 + 0x60);
  puVar13 = (undefined8 *)*plVar4;
  puVar11 = *(undefined8 **)(param_1 + 0x68);
  puVar14 = puVar13;
  if (puVar13 != puVar11) {
    (*(code *)*puVar13)(puVar13 + 4);
    while (puVar14 = puVar13 + 0x20, puVar14 != puVar11) {
      (*(code *)*puVar14)(puVar13 + 0x24);
      puVar13 = puVar14;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    puVar13 = *(undefined8 **)(param_1 + 0x68);
    puVar14 = puVar11;
    if (puVar13 == puVar11) {
    }
    else {
      if (puVar11 != puVar13) {
        do {
          pcVar3 = (code *)puVar13[-0x1f];
          puVar14 = puVar13 + -0x20;
          if (pcVar3 != (code *)0x0) {
            puVar13[-0x1e] = 0;
            puVar13[-0x1d] = 0;
            puVar13[-0x20] = 0;
            puVar13[-0x1f] = 0;
            (*pcVar3)(puVar13 + -0x1c);
          }
          puVar13 = puVar14;
        } while (puVar11 != puVar14);
        puVar14 = (undefined8 *)*plVar4;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar11;
      puVar13 = puVar11;
    }
  }
  lVar2 = (long)puVar13 - (long)puVar14;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar14 >> 8)) {
    puVar13 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar13;
    if (lVar2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,lVar2,0x10);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*puVar13 + 0xe8))();
      }
    }
    lStack_70 = lVar9 + (lVar2 >> 8) * 0x100;
    local_78 = lVar9;
    local_68 = lStack_70;
    local_60 = lStack_70;
    FUN_0103b38c(plVar4,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar8) {
    *plVar7 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar7 + 1));
  }
  plVar7 = (long *)(param_1 + 0x98);
  lVar9 = *plVar7;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar9) {
    plVar7 = (long *)0x0;
    bVar8 = true;
LAB_013e15ac:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar13 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_012a946c(param_1,*puVar13);
        lVar2 = lVar2 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar2 != 0);
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
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *plVar7 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_013e15a8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar8) {
            *plVar7 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_013e15a8;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *plVar7 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_013e15a8:
  bVar8 = false;
  goto LAB_013e15ac;
code_r0x013e1530:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar8) {
    *plVar7 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_013e1538;
  goto LAB_013e1528;
}


