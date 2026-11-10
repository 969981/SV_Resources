/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c8f2f0; name: FUN_00c8f2f0
 */


void FUN_00c8f2f0(long param_1,long *param_2,undefined1 *param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  undefined1 local_34 [4];
  
  plVar9 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00c8f334;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar10) {
            *plVar9 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00c8f334;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00c8f334:
  lVar2 = *(long *)(param_1 + 0x198);
  lVar12 = *(long *)(param_1 + 0x1b8);
  lVar8 = *(long *)(param_1 + 0x1d8);
  lVar11 = *(long *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    if (((lVar12 == 0) && (lVar8 == 0)) && (lVar11 == 0)) {
      FUN_02258c60(lVar2,param_2,param_3);
    }
    else {
      FUN_00c9042c(lVar2,param_2,param_3);
    }
  }
  if (lVar12 != 0) {
    if ((lVar8 == 0) && (lVar11 == 0)) {
      FUN_02258cc8(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3);
    }
    else {
      FUN_00c90494(*(undefined8 *)(param_1 + 0x1b8),param_2,param_3);
    }
  }
  if (lVar8 == 0) {
LAB_00c8f350:
    if (lVar11 != 0) {
LAB_00c8f7e4:
      FUN_00c905ec(*(undefined8 *)(param_1 + 0x1f8),param_2,param_3);
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x1d8);
    if (lVar11 != 0) {
      FUN_02258d30(lVar2,param_2,param_3);
      goto LAB_00c8f7e4;
    }
    uVar3 = *(ulong *)(lVar2 + 0x130);
    if (uVar3 != 0) {
      uVar4 = **(ulong **)(lVar2 + 0xf8);
      if ((uVar4 < *(ulong *)(lVar2 + 0xb0)) &&
         ((*(ulong *)(lVar2 + 0x48) <= uVar4 ||
          ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar4 >> 3 & 0x1ffffffffffffff8)) >>
            (uVar4 & 0x3f) & 1) == 0)))) {
        local_78 = 0;
        if (*param_2 != 0) {
          local_78 = *param_2 + 0x20;
        }
        local_34[0] = *param_3;
        puVar14 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar4 * 0x80);
        (*(code *)*puVar14)(puVar14 + 4,&local_78,local_34);
        uVar3 = *(ulong *)(lVar2 + 0x130);
      }
      if (1 < uVar3) {
        uVar4 = *(ulong *)(*(long *)(lVar2 + 0xf8) + 0x10);
        if ((uVar4 < *(ulong *)(lVar2 + 0xb0)) &&
           ((*(ulong *)(lVar2 + 0x48) <= uVar4 ||
            ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar4 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar4 & 0x3f) & 1) == 0)))) {
          local_78 = 0;
          if (*param_2 != 0) {
            local_78 = *param_2 + 0x20;
          }
          local_34[0] = *param_3;
          puVar14 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar4 * 0x80);
          (*(code *)*puVar14)(puVar14 + 4,&local_78,local_34);
          uVar3 = *(ulong *)(lVar2 + 0x130);
        }
        if (2 < uVar3) {
          uVar4 = 2;
          lVar8 = 0x20;
          do {
            uVar5 = *(ulong *)(*(long *)(lVar2 + 0xf8) + lVar8);
            if ((uVar5 < *(ulong *)(lVar2 + 0xb0)) &&
               ((*(ulong *)(lVar2 + 0x48) <= uVar5 ||
                ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar5 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar5 & 0x3f) & 1) == 0)))) {
              local_78 = 0;
              if (*param_2 != 0) {
                local_78 = *param_2 + 0x20;
              }
              local_34[0] = *param_3;
              puVar14 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar5 * 0x80);
              (*(code *)*puVar14)(puVar14 + 4,&local_78,local_34);
              uVar3 = *(ulong *)(lVar2 + 0x130);
            }
            uVar4 = uVar4 + 1;
            lVar8 = lVar8 + 0x10;
          } while (uVar4 < uVar3);
        }
      }
      goto LAB_00c8f350;
    }
  }
  plVar9 = (long *)(param_1 + 0x48);
  lVar8 = *plVar9;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar8) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00c8f370:
    if (*plVar9 == 0) goto code_r0x00c8f378;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar9 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar9 == 0) {
            cVar1 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar10) {
              *plVar9 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00c8f380;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *plVar9 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00c8f380:
    bVar10 = false;
    goto LAB_00c8f384;
  }
  plVar9 = (long *)0x0;
  bVar10 = true;
LAB_00c8f384:
  plVar7 = (long *)(param_1 + 0x60);
  puVar14 = (undefined8 *)*plVar7;
  puVar13 = *(undefined8 **)(param_1 + 0x68);
  puVar15 = puVar14;
  if (puVar14 != puVar13) {
    (*(code *)*puVar14)(puVar14 + 4);
    while (puVar15 = puVar14 + 0x20, puVar15 != puVar13) {
      (*(code *)*puVar15)(puVar14 + 0x24);
      puVar14 = puVar15;
    }
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    puVar14 = *(undefined8 **)(param_1 + 0x68);
    puVar15 = puVar13;
    if (puVar14 == puVar13) {
    }
    else {
      if (puVar13 != puVar14) {
        do {
          pcVar6 = (code *)puVar14[-0x1f];
          puVar15 = puVar14 + -0x20;
          if (pcVar6 != (code *)0x0) {
            puVar14[-0x1e] = 0;
            puVar14[-0x1d] = 0;
            puVar14[-0x20] = 0;
            puVar14[-0x1f] = 0;
            (*pcVar6)(puVar14 + -0x1c);
          }
          puVar14 = puVar15;
        } while (puVar13 != puVar15);
        puVar15 = (undefined8 *)*plVar7;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar13;
      puVar14 = puVar13;
    }
  }
  lVar2 = (long)puVar14 - (long)puVar15;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar15 >> 8)) {
    puVar14 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar14;
    if (lVar2 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*puVar14 + 0x10))((long *)*puVar14,lVar2,0x10);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*puVar14 + 0xe8))();
      }
    }
    lStack_70 = lVar8 + (lVar2 >> 8) * 0x100;
    local_78 = lVar8;
    local_68 = lStack_70;
    local_60 = lStack_70;
    FUN_0103b38c(plVar7,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar10) {
    *plVar9 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
  }
  plVar9 = (long *)(param_1 + 0x98);
  lVar8 = *plVar9;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar8) {
    plVar9 = (long *)0x0;
    bVar10 = true;
LAB_00c8f3f4:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar14 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_00c901fc(param_1,*puVar14);
        lVar2 = lVar2 + -1;
        puVar14 = puVar14 + 1;
      } while (lVar2 != 0);
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar10) {
      *plVar9 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00c8f3f0;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
        while (*plVar9 == 0) {
          cVar1 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar10) {
            *plVar9 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00c8f3f0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar10) {
      *plVar9 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00c8f3f0:
  bVar10 = false;
  goto LAB_00c8f3f4;
code_r0x00c8f378:
  cVar1 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar10) {
    *plVar9 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00c8f380;
  goto LAB_00c8f370;
}


