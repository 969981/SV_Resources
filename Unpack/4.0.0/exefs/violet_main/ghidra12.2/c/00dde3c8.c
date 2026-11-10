/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dde3c8; name: FUN_00dde3c8
 */


void FUN_00dde3c8(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  plVar10 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar11) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00dde408;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar10 == 0) {
          cVar1 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar11) {
            *plVar10 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00dde408;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar11) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00dde408:
  lVar8 = *(long *)(param_1 + 0x198);
  lVar13 = *(long *)(param_1 + 0x1b8);
  lVar2 = *(long *)(param_1 + 0x1d8);
  lVar12 = *(long *)(param_1 + 0x1f8);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb0) != 0)) {
    uVar4 = 0;
    do {
      FUN_00dde8a4(lVar8,uVar4,param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulong *)(lVar8 + 0xb0));
  }
  if ((lVar13 != 0) && (lVar8 = *(long *)(param_1 + 0x1b8), *(long *)(lVar8 + 0xb0) != 0)) {
    uVar4 = 0;
    do {
      FUN_00dde8ec(lVar8,uVar4,param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulong *)(lVar8 + 0xb0));
  }
  if (lVar2 == 0) {
LAB_00dde424:
    if (lVar12 != 0) {
LAB_00dde88c:
      FUN_00dde994(*(undefined8 *)(param_1 + 0x1f8),param_2);
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x1d8);
    uVar4 = *(ulong *)(lVar2 + 0x130);
    if (lVar12 != 0) {
      if (uVar4 != 0) {
        lVar8 = 0;
        uVar15 = 0;
        do {
          uVar6 = *(ulong *)(*(long *)(lVar2 + 0xf8) + lVar8);
          if ((uVar6 < *(ulong *)(lVar2 + 0xb0)) &&
             ((*(ulong *)(lVar2 + 0x48) <= uVar6 ||
              ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar6 >> 3 & 0x1ffffffffffffff8)) >>
                (uVar6 & 0x3f) & 1) == 0)))) {
            puVar3 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar6 * 0x80);
            (*(code *)*puVar3)(puVar3 + 4,param_2);
            uVar4 = *(ulong *)(lVar2 + 0x130);
          }
          uVar15 = uVar15 + 1;
          lVar8 = lVar8 + 0x10;
        } while (uVar15 < uVar4);
        goto LAB_00dde424;
      }
      goto LAB_00dde88c;
    }
    if (uVar4 != 0) {
      lVar8 = 0;
      uVar15 = 0;
      do {
        uVar6 = *(ulong *)(*(long *)(lVar2 + 0xf8) + lVar8);
        if ((uVar6 < *(ulong *)(lVar2 + 0xb0)) &&
           ((*(ulong *)(lVar2 + 0x48) <= uVar6 ||
            ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar6 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar6 & 0x3f) & 1) == 0)))) {
          puVar3 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar6 * 0x80);
          (*(code *)*puVar3)(puVar3 + 4,param_2);
          uVar4 = *(ulong *)(lVar2 + 0x130);
        }
        uVar15 = uVar15 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar15 < uVar4);
      goto LAB_00dde424;
    }
  }
  plVar10 = (long *)(param_1 + 0x48);
  lVar8 = *plVar10;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar8) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00dde444:
    if (*plVar10 == 0) goto code_r0x00dde44c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar10 == 0) {
            cVar1 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar11) {
              *plVar10 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00dde454;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar11) {
        *plVar10 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00dde454:
    bVar11 = false;
    goto LAB_00dde458;
  }
  plVar10 = (long *)0x0;
  bVar11 = true;
LAB_00dde458:
  plVar7 = (long *)(param_1 + 0x60);
  puVar3 = (undefined8 *)*plVar7;
  puVar14 = *(undefined8 **)(param_1 + 0x68);
  puVar9 = puVar3;
  if (puVar3 != puVar14) {
    do {
      (*(code *)*puVar3)(puVar3 + 4);
      puVar3 = puVar3 + 0x20;
    } while (puVar3 != puVar14);
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    puVar14 = *(undefined8 **)(param_1 + 0x68);
    puVar3 = puVar9;
    if (puVar14 == puVar9) {
      puVar9 = puVar14;
    }
    else {
      if (puVar9 != puVar14) {
        do {
          pcVar5 = (code *)puVar14[-0x1f];
          puVar3 = puVar14 + -0x20;
          if (pcVar5 != (code *)0x0) {
            puVar14[-0x1e] = 0;
            puVar14[-0x1d] = 0;
            puVar14[-0x20] = 0;
            puVar14[-0x1f] = 0;
            (*pcVar5)(puVar14 + -0x1c);
          }
          puVar14 = puVar3;
        } while (puVar9 != puVar3);
        puVar3 = (undefined8 *)*plVar7;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar9;
    }
  }
  lVar2 = (long)puVar9 - (long)puVar3;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar3 >> 8)) {
    puVar3 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar3;
    if (lVar2 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,lVar2,0x10);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar3 + 0xe8))();
      }
    }
    lStack_70 = local_78 + (lVar2 >> 8) * 0x100;
    local_68 = lStack_70;
    local_60 = lStack_70;
    FUN_0103b38c(plVar7,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar11) {
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
  }
  plVar10 = (long *)(param_1 + 0x98);
  lVar8 = *plVar10;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar8) {
    plVar10 = (long *)0x0;
    bVar11 = true;
LAB_00dde4c8:
    puVar3 = *(undefined8 **)(param_1 + 0xb0);
    lVar2 = *(long *)(param_1 + 0xb8) - (long)puVar3;
    if (lVar2 != 0) {
      FUN_010b49b4(param_1,*puVar3);
      if ((lVar2 != 8) && (FUN_010b49b4(param_1,puVar3[1]), lVar2 != 0x10)) {
        lVar2 = (lVar2 >> 3) + -2;
        puVar3 = puVar3 + 2;
        do {
          FUN_010b49b4(param_1,*puVar3);
          lVar2 = lVar2 + -1;
          puVar3 = puVar3 + 1;
        } while (lVar2 != 0);
      }
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar11) {
      *plVar10 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar11) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00dde4c4;
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
          bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar11) {
            *plVar10 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00dde4c4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar11) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00dde4c4:
  bVar11 = false;
  goto LAB_00dde4c8;
code_r0x00dde44c:
  cVar1 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar11) {
    *plVar10 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00dde454;
  goto LAB_00dde444;
}


