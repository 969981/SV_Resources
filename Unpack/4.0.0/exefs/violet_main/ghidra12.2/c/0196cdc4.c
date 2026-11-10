/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0196cdc4; name: FUN_0196cdc4
 */


void FUN_0196cdc4(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
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
    if (cVar1 == '\0') goto LAB_0196ce04;
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
          if (cVar1 == '\0') goto LAB_0196ce04;
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
LAB_0196ce04:
  lVar5 = *(long *)(param_1 + 0x198);
  lVar2 = *(long *)(param_1 + 0x1b8);
  lVar10 = *(long *)(param_1 + 0x1d8);
  lVar9 = *(long *)(param_1 + 0x1f8);
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(lVar5 + 0xb0);
    if (((lVar2 == 0) && (lVar10 == 0)) && (lVar9 == 0)) {
      if (uVar6 != 0) {
        if ((*(long *)(lVar5 + 0x48) == 0) || ((**(byte **)(lVar5 + 0x40) & 1) == 0)) {
          local_78 = *param_2;
          (*(code *)**(undefined8 **)(lVar5 + 8))(*(undefined8 **)(lVar5 + 8) + 4,&local_78);
          uVar6 = *(ulong *)(lVar5 + 0xb0);
        }
        if (1 < uVar6) {
          if ((*(ulong *)(lVar5 + 0x48) < 2) || ((**(byte **)(lVar5 + 0x40) >> 1 & 1) == 0)) {
            local_78 = *param_2;
            (**(code **)(*(long *)(lVar5 + 8) + 0x80))(*(long *)(lVar5 + 8) + 0xa0,&local_78);
            uVar6 = *(ulong *)(lVar5 + 0xb0);
          }
          if (2 < uVar6) {
            uVar13 = 2;
            lVar15 = 0x100;
            do {
              if ((uVar13 < uVar6) &&
                 ((*(ulong *)(lVar5 + 0x48) <= uVar13 ||
                  ((*(ulong *)(*(long *)(lVar5 + 0x40) + (uVar13 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar13 & 0x3f) & 1) == 0)))) {
                puVar12 = (undefined8 *)(*(long *)(lVar5 + 8) + lVar15);
                local_78 = *param_2;
                (*(code *)*puVar12)(puVar12 + 4,&local_78);
                uVar6 = *(ulong *)(lVar5 + 0xb0);
              }
              uVar13 = uVar13 + 1;
              lVar15 = lVar15 + 0x80;
            } while (uVar13 < uVar6);
          }
        }
      }
    }
    else if (uVar6 != 0) {
      if ((*(long *)(lVar5 + 0x48) == 0) || ((**(byte **)(lVar5 + 0x40) & 1) == 0)) {
        local_78 = *param_2;
        (*(code *)**(undefined8 **)(lVar5 + 8))(*(undefined8 **)(lVar5 + 8) + 4,&local_78);
        uVar6 = *(ulong *)(lVar5 + 0xb0);
      }
      if (1 < uVar6) {
        if ((*(ulong *)(lVar5 + 0x48) < 2) || ((**(byte **)(lVar5 + 0x40) >> 1 & 1) == 0)) {
          local_78 = *param_2;
          (**(code **)(*(long *)(lVar5 + 8) + 0x80))(*(long *)(lVar5 + 8) + 0xa0,&local_78);
          uVar6 = *(ulong *)(lVar5 + 0xb0);
        }
        if (2 < uVar6) {
          uVar13 = 2;
          lVar15 = 0x100;
          do {
            if ((uVar13 < uVar6) &&
               ((*(ulong *)(lVar5 + 0x48) <= uVar13 ||
                ((*(ulong *)(*(long *)(lVar5 + 0x40) + (uVar13 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar13 & 0x3f) & 1) == 0)))) {
              puVar12 = (undefined8 *)(*(long *)(lVar5 + 8) + lVar15);
              local_78 = *param_2;
              (*(code *)*puVar12)(puVar12 + 4,&local_78);
              uVar6 = *(ulong *)(lVar5 + 0xb0);
            }
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + 0x80;
          } while (uVar13 < uVar6);
        }
      }
    }
  }
  if ((lVar2 != 0) && (lVar2 = *(long *)(param_1 + 0x1b8), *(long *)(lVar2 + 0xb0) != 0)) {
    uVar6 = 0;
    do {
      FUN_0196d550(lVar2,uVar6,param_2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ulong *)(lVar2 + 0xb0));
  }
  if (lVar10 != 0) {
    FUN_0196d60c(*(undefined8 *)(param_1 + 0x1d8),param_2);
  }
  if ((lVar9 != 0) && (lVar2 = *(long *)(param_1 + 0x1f8), *(long *)(lVar2 + 0x130) != 0)) {
    uVar6 = **(ulong **)(lVar2 + 0xf8);
    if ((((*(char *)(*(long *)(lVar2 + 0xc0) + uVar6 * 0x18) != '\0') ||
         (*(long *)(*(long *)(lVar2 + 0xc0) + uVar6 * 0x18 + 8) != 0)) &&
        (uVar6 < *(ulong *)(lVar2 + 0xb0))) &&
       ((*(ulong *)(lVar2 + 0x48) <= uVar6 ||
        ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar6 >> 3 & 0x1ffffffffffffff8)) >> (uVar6 & 0x3f)
         & 1) == 0)))) {
      puVar12 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar6 * 0x80);
      local_78 = *param_2;
      (*(code *)*puVar12)(puVar12 + 4,&local_78);
      plVar7 = (long *)(*(long *)(lVar2 + 0xc0) + uVar6 * 0x18 + 8);
      lVar5 = *plVar7;
      if (lVar5 != 0) {
        *plVar7 = lVar5 + -1;
      }
    }
    if (1 < *(ulong *)(lVar2 + 0x130)) {
      uVar6 = *(ulong *)(*(long *)(lVar2 + 0xf8) + 0x10);
      if ((((*(char *)(*(long *)(lVar2 + 0xc0) + uVar6 * 0x18) != '\0') ||
           (*(long *)(*(long *)(lVar2 + 0xc0) + uVar6 * 0x18 + 8) != 0)) &&
          (uVar6 < *(ulong *)(lVar2 + 0xb0))) &&
         ((*(ulong *)(lVar2 + 0x48) <= uVar6 ||
          ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar6 >> 3 & 0x1ffffffffffffff8)) >>
            (uVar6 & 0x3f) & 1) == 0)))) {
        puVar12 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar6 * 0x80);
        local_78 = *param_2;
        (*(code *)*puVar12)(puVar12 + 4,&local_78);
        plVar7 = (long *)(*(long *)(lVar2 + 0xc0) + uVar6 * 0x18 + 8);
        lVar5 = *plVar7;
        if (lVar5 != 0) {
          *plVar7 = lVar5 + -1;
        }
      }
      if (2 < *(ulong *)(lVar2 + 0x130)) {
        uVar6 = 2;
        lVar5 = 0x20;
        do {
          uVar13 = *(ulong *)(*(long *)(lVar2 + 0xf8) + lVar5);
          if (((*(char *)(*(long *)(lVar2 + 0xc0) + uVar13 * 0x18) != '\0') ||
              (*(long *)(*(long *)(lVar2 + 0xc0) + uVar13 * 0x18 + 8) != 0)) &&
             ((uVar13 < *(ulong *)(lVar2 + 0xb0) &&
              ((*(ulong *)(lVar2 + 0x48) <= uVar13 ||
               ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar13 >> 3 & 0x1ffffffffffffff8)) >>
                 (uVar13 & 0x3f) & 1) == 0)))))) {
            puVar12 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar13 * 0x80);
            local_78 = *param_2;
            (*(code *)*puVar12)(puVar12 + 4,&local_78);
            plVar7 = (long *)(*(long *)(lVar2 + 0xc0) + uVar13 * 0x18 + 8);
            lVar9 = *plVar7;
            if (lVar9 != 0) {
              *plVar7 = lVar9 + -1;
            }
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x10;
        } while (uVar6 < *(ulong *)(lVar2 + 0x130));
      }
    }
  }
  plVar7 = (long *)(param_1 + 0x48);
  lVar5 = *plVar7;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar5) {
    lVar2 = nn::os::GetCurrentThread();
LAB_0196ce40:
    if (*plVar7 == 0) goto code_r0x0196ce48;
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
            if (cVar1 == '\0') goto LAB_0196ce50;
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
LAB_0196ce50:
    bVar8 = false;
    goto LAB_0196ce54;
  }
  plVar7 = (long *)0x0;
  bVar8 = true;
LAB_0196ce54:
  plVar4 = (long *)(param_1 + 0x60);
  puVar12 = (undefined8 *)*plVar4;
  puVar11 = *(undefined8 **)(param_1 + 0x68);
  puVar14 = puVar12;
  if (puVar12 != puVar11) {
    (*(code *)*puVar12)(puVar12 + 4);
    while (puVar14 = puVar12 + 0x20, puVar14 != puVar11) {
      (*(code *)*puVar14)(puVar12 + 0x24);
      puVar12 = puVar14;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    puVar12 = *(undefined8 **)(param_1 + 0x68);
    puVar14 = puVar11;
    if (puVar12 == puVar11) {
    }
    else {
      if (puVar11 != puVar12) {
        do {
          pcVar3 = (code *)puVar12[-0x1f];
          puVar14 = puVar12 + -0x20;
          if (pcVar3 != (code *)0x0) {
            puVar12[-0x1e] = 0;
            puVar12[-0x1d] = 0;
            puVar12[-0x20] = 0;
            puVar12[-0x1f] = 0;
            (*pcVar3)(puVar12 + -0x1c);
          }
          puVar12 = puVar14;
        } while (puVar11 != puVar14);
        puVar14 = (undefined8 *)*plVar4;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar11;
      puVar12 = puVar11;
    }
  }
  lVar2 = (long)puVar12 - (long)puVar14;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar14 >> 8)) {
    puVar12 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar12;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,lVar2,0x10);
      if (lVar5 == 0) {
        (**(code **)(*(long *)*puVar12 + 0xe8))();
      }
    }
    lStack_70 = lVar5 + (lVar2 >> 8) * 0x100;
    local_78 = lVar5;
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
  lVar5 = *plVar7;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar5) {
    plVar7 = (long *)0x0;
    bVar8 = true;
LAB_0196cec4:
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
    if (cVar1 == '\0') goto LAB_0196cec0;
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
          if (cVar1 == '\0') goto LAB_0196cec0;
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
LAB_0196cec0:
  bVar8 = false;
  goto LAB_0196cec4;
code_r0x0196ce48:
  cVar1 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
  if (bVar8) {
    *plVar7 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_0196ce50;
  goto LAB_0196ce40;
}


