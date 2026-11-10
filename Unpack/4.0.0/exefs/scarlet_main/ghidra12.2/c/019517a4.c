/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019517a4; name: FUN_019517a4
 */


void FUN_019517a4(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long local_88;
  long lStack_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  plVar6 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar8) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_019517e8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar8) {
            *plVar6 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_019517e8;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar8) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_019517e8:
  lVar5 = *(long *)(param_1 + 0x198);
  lVar2 = *(long *)(param_1 + 0x1b8);
  lVar10 = *(long *)(param_1 + 0x1d8);
  lVar9 = *(long *)(param_1 + 0x1f8);
  if (lVar5 != 0) {
    uVar7 = *(ulong *)(lVar5 + 0xb0);
    if (((lVar2 == 0) && (lVar10 == 0)) && (lVar9 == 0)) {
      if (uVar7 != 0) {
        uVar7 = 0;
        do {
          FUN_028c4a68(lVar5,uVar7,param_2);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulong *)(lVar5 + 0xb0));
      }
    }
    else if (uVar7 != 0) {
      if ((*(long *)(lVar5 + 0x48) == 0) || ((**(byte **)(lVar5 + 0x40) & 1) == 0)) {
        local_88 = *param_2;
        (*(code *)**(undefined8 **)(lVar5 + 8))(*(undefined8 **)(lVar5 + 8) + 4,&local_88);
        uVar7 = *(ulong *)(lVar5 + 0xb0);
      }
      if (1 < uVar7) {
        if ((*(ulong *)(lVar5 + 0x48) < 2) || ((**(byte **)(lVar5 + 0x40) >> 1 & 1) == 0)) {
          local_88 = *param_2;
          (**(code **)(*(long *)(lVar5 + 8) + 0x80))(*(long *)(lVar5 + 8) + 0xa0,&local_88);
          uVar7 = *(ulong *)(lVar5 + 0xb0);
        }
        if (2 < uVar7) {
          uVar14 = 2;
          lVar15 = 0x100;
          do {
            if ((uVar14 < uVar7) &&
               ((*(ulong *)(lVar5 + 0x48) <= uVar14 ||
                ((*(ulong *)(*(long *)(lVar5 + 0x40) + (uVar14 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar14 & 0x3f) & 1) == 0)))) {
              puVar12 = (undefined8 *)(*(long *)(lVar5 + 8) + lVar15);
              local_88 = *param_2;
              (*(code *)*puVar12)(puVar12 + 4,&local_88);
              uVar7 = *(ulong *)(lVar5 + 0xb0);
            }
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 0x80;
          } while (uVar14 < uVar7);
        }
      }
    }
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 0x1b8);
    if ((lVar10 == 0) && (lVar9 == 0)) {
      if (*(long *)(lVar2 + 0xb0) != 0) {
        uVar7 = 0;
        do {
          FUN_028c4ad0(lVar2,uVar7,param_2);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (*(long *)(lVar2 + 0xb0) != 0) {
      uVar7 = 0;
      do {
        FUN_01951e2c(lVar2,uVar7,param_2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar10 == 0) {
    if (lVar9 != 0) {
LAB_01951c18:
      lVar2 = *(long *)(param_1 + 0x1f8);
      if (*(long *)(lVar2 + 0x130) != 0) {
        uVar7 = **(ulong **)(lVar2 + 0xf8);
        if ((((*(char *)(*(long *)(lVar2 + 0xc0) + uVar7 * 0x18) != '\0') ||
             (*(long *)(*(long *)(lVar2 + 0xc0) + uVar7 * 0x18 + 8) != 0)) &&
            (uVar7 < *(ulong *)(lVar2 + 0xb0))) &&
           ((*(ulong *)(lVar2 + 0x48) <= uVar7 ||
            ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar7 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar7 & 0x3f) & 1) == 0)))) {
          puVar12 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar7 * 0x80);
          local_88 = *param_2;
          (*(code *)*puVar12)(puVar12 + 4,&local_88);
          plVar6 = (long *)(*(long *)(lVar2 + 0xc0) + uVar7 * 0x18 + 8);
          lVar5 = *plVar6;
          if (lVar5 != 0) {
            *plVar6 = lVar5 + -1;
          }
        }
        if (1 < *(ulong *)(lVar2 + 0x130)) {
          uVar7 = 1;
          lVar5 = 0x10;
          do {
            uVar14 = *(ulong *)(*(long *)(lVar2 + 0xf8) + lVar5);
            if (((*(char *)(*(long *)(lVar2 + 0xc0) + uVar14 * 0x18) != '\0') ||
                (*(long *)(*(long *)(lVar2 + 0xc0) + uVar14 * 0x18 + 8) != 0)) &&
               ((uVar14 < *(ulong *)(lVar2 + 0xb0) &&
                ((*(ulong *)(lVar2 + 0x48) <= uVar14 ||
                 ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar14 >> 3 & 0x1ffffffffffffff8)) >>
                   (uVar14 & 0x3f) & 1) == 0)))))) {
              puVar12 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar14 * 0x80);
              local_88 = *param_2;
              (*(code *)*puVar12)(puVar12 + 4,&local_88);
              plVar6 = (long *)(*(long *)(lVar2 + 0xc0) + uVar14 * 0x18 + 8);
              lVar9 = *plVar6;
              if (lVar9 != 0) {
                *plVar6 = lVar9 + -1;
              }
            }
            uVar7 = uVar7 + 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar7 < *(ulong *)(lVar2 + 0x130));
        }
      }
    }
  }
  else {
    if (lVar9 != 0) {
      FUN_028c4b8c(*(undefined8 *)(param_1 + 0x1d8),param_2);
      goto LAB_01951c18;
    }
    FUN_01951ee8(*(undefined8 *)(param_1 + 0x1d8),param_2);
  }
  plVar6 = (long *)(param_1 + 0x48);
  lVar5 = *plVar6;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar5) {
    lVar2 = nn::os::GetCurrentThread();
LAB_01951824:
    if (*plVar6 == 0) goto code_r0x0195182c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar6 == 0) {
            cVar1 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar8) {
              *plVar6 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_01951834;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar8) {
        *plVar6 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_01951834:
    bVar8 = false;
    goto LAB_01951838;
  }
  plVar6 = (long *)0x0;
  bVar8 = true;
LAB_01951838:
  plVar4 = (long *)(param_1 + 0x60);
  puVar12 = (undefined8 *)*plVar4;
  puVar11 = *(undefined8 **)(param_1 + 0x68);
  puVar13 = puVar12;
  if (puVar12 != puVar11) {
    (*(code *)*puVar12)(puVar12 + 4);
    while (puVar13 = puVar12 + 0x20, puVar13 != puVar11) {
      (*(code *)*puVar13)(puVar12 + 0x24);
      puVar12 = puVar13;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    puVar12 = *(undefined8 **)(param_1 + 0x68);
    puVar13 = puVar11;
    if (puVar12 == puVar11) {
    }
    else {
      if (puVar11 != puVar12) {
        do {
          pcVar3 = (code *)puVar12[-0x1f];
          puVar13 = puVar12 + -0x20;
          if (pcVar3 != (code *)0x0) {
            puVar12[-0x1e] = 0;
            puVar12[-0x1d] = 0;
            puVar12[-0x20] = 0;
            puVar12[-0x1f] = 0;
            (*pcVar3)(puVar12 + -0x1c);
          }
          puVar12 = puVar13;
        } while (puVar11 != puVar13);
        puVar13 = (undefined8 *)*plVar4;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar11;
      puVar12 = puVar11;
    }
  }
  lVar2 = (long)puVar12 - (long)puVar13;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar13 >> 8)) {
    puVar12 = (undefined8 *)(param_1 + 0x78);
    local_70 = 0;
    puStack_68 = puVar12;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,lVar2,0x10);
      if (lVar5 == 0) {
        (**(code **)(*(long *)*puVar12 + 0xe8))();
      }
    }
    lStack_80 = lVar5 + (lVar2 >> 8) * 0x100;
    local_88 = lVar5;
    local_78 = lStack_80;
    local_70 = lStack_80;
    FUN_0103b38c(plVar4,&local_88);
    FUN_0103bbd0(&local_88);
  }
  if (!bVar8) {
    *plVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
  }
  plVar6 = (long *)(param_1 + 0x98);
  lVar5 = *plVar6;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar5) {
    plVar6 = (long *)0x0;
    bVar8 = true;
LAB_019518a8:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar12 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_00ffb754(param_1,*puVar12);
        lVar2 = lVar2 + -1;
        puVar12 = puVar12 + 1;
      } while (lVar2 != 0);
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar8) {
      *plVar6 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
    return;
  }
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar8) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_019518a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
  do {
    if (*plVar6 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa0));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar8) {
            *plVar6 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_019518a4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar8) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_019518a4:
  bVar8 = false;
  goto LAB_019518a8;
code_r0x0195182c:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar8) {
    *plVar6 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01951834;
  goto LAB_01951824;
}


