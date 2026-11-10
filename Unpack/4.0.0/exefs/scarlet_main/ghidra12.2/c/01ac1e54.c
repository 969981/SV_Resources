/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ac1e54; name: FUN_01ac1e54
 */


void FUN_01ac1e54(long param_1,undefined1 *param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  plVar10 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01ac1e94;
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
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01ac1e94;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01ac1e94:
  lVar8 = *(long *)(param_1 + 0x198);
  lVar7 = *(long *)(param_1 + 0x1b8);
  lVar4 = *(long *)(param_1 + 0x1d8);
  lVar2 = *(long *)(param_1 + 0x1f8);
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 0xb0);
    if (((lVar7 == 0) && (lVar4 == 0)) && (lVar2 == 0)) {
      if (uVar9 != 0) {
        if ((*(long *)(lVar8 + 0x48) == 0) || ((**(byte **)(lVar8 + 0x40) & 1) == 0)) {
          local_78 = CONCAT71(local_78._1_7_,*param_2);
          (*(code *)**(undefined8 **)(lVar8 + 8))(*(undefined8 **)(lVar8 + 8) + 4,&local_78);
          uVar9 = *(ulong *)(lVar8 + 0xb0);
        }
        if (1 < uVar9) {
          if ((*(ulong *)(lVar8 + 0x48) < 2) || ((**(byte **)(lVar8 + 0x40) >> 1 & 1) == 0)) {
            local_78 = CONCAT71(local_78._1_7_,*param_2);
            (**(code **)(*(long *)(lVar8 + 8) + 0x80))(*(long *)(lVar8 + 8) + 0xa0,&local_78);
            uVar9 = *(ulong *)(lVar8 + 0xb0);
          }
          if (2 < uVar9) {
            uVar14 = 2;
            lVar12 = 0x100;
            do {
              if ((uVar14 < uVar9) &&
                 ((*(ulong *)(lVar8 + 0x48) <= uVar14 ||
                  ((*(ulong *)(*(long *)(lVar8 + 0x40) + (uVar14 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar14 & 0x3f) & 1) == 0)))) {
                puVar13 = (undefined8 *)(*(long *)(lVar8 + 8) + lVar12);
                local_78 = CONCAT71(local_78._1_7_,*param_2);
                (*(code *)*puVar13)(puVar13 + 4,&local_78);
                uVar9 = *(ulong *)(lVar8 + 0xb0);
              }
              uVar14 = uVar14 + 1;
              lVar12 = lVar12 + 0x80;
            } while (uVar14 < uVar9);
          }
        }
      }
    }
    else if (uVar9 != 0) {
      if ((*(long *)(lVar8 + 0x48) == 0) || ((**(byte **)(lVar8 + 0x40) & 1) == 0)) {
        local_78 = CONCAT71(local_78._1_7_,*param_2);
        (*(code *)**(undefined8 **)(lVar8 + 8))(*(undefined8 **)(lVar8 + 8) + 4,&local_78);
        uVar9 = *(ulong *)(lVar8 + 0xb0);
      }
      if (1 < uVar9) {
        if ((*(ulong *)(lVar8 + 0x48) < 2) || ((**(byte **)(lVar8 + 0x40) >> 1 & 1) == 0)) {
          local_78 = CONCAT71(local_78._1_7_,*param_2);
          (**(code **)(*(long *)(lVar8 + 8) + 0x80))(*(long *)(lVar8 + 8) + 0xa0,&local_78);
          uVar9 = *(ulong *)(lVar8 + 0xb0);
        }
        if (2 < uVar9) {
          uVar14 = 2;
          lVar12 = 0x100;
          do {
            if ((uVar14 < uVar9) &&
               ((*(ulong *)(lVar8 + 0x48) <= uVar14 ||
                ((*(ulong *)(*(long *)(lVar8 + 0x40) + (uVar14 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar14 & 0x3f) & 1) == 0)))) {
              puVar13 = (undefined8 *)(*(long *)(lVar8 + 8) + lVar12);
              local_78 = CONCAT71(local_78._1_7_,*param_2);
              (*(code *)*puVar13)(puVar13 + 4,&local_78);
              uVar9 = *(ulong *)(lVar8 + 0xb0);
            }
            uVar14 = uVar14 + 1;
            lVar12 = lVar12 + 0x80;
          } while (uVar14 < uVar9);
        }
      }
    }
  }
  if ((lVar7 != 0) && (lVar7 = *(long *)(param_1 + 0x1b8), *(long *)(lVar7 + 0xb0) != 0)) {
    uVar9 = 0;
    do {
      FUN_018f5af0(lVar7,uVar9,param_2);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ulong *)(lVar7 + 0xb0));
  }
  if (lVar4 != 0) {
    FUN_01ac264c(*(undefined8 *)(param_1 + 0x1d8),param_2);
  }
  if ((lVar2 != 0) && (lVar2 = *(long *)(param_1 + 0x1f8), *(long *)(lVar2 + 0x130) != 0)) {
    uVar9 = **(ulong **)(lVar2 + 0xf8);
    if ((((*(char *)(*(long *)(lVar2 + 0xc0) + uVar9 * 0x18) != '\0') ||
         (*(long *)(*(long *)(lVar2 + 0xc0) + uVar9 * 0x18 + 8) != 0)) &&
        (uVar9 < *(ulong *)(lVar2 + 0xb0))) &&
       ((*(ulong *)(lVar2 + 0x48) <= uVar9 ||
        ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar9 >> 3 & 0x1ffffffffffffff8)) >> (uVar9 & 0x3f)
         & 1) == 0)))) {
      puVar13 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar9 * 0x80);
      local_78._1_7_ = (undefined7)((ulong)local_78 >> 8);
      local_78 = CONCAT71(local_78._1_7_,*param_2);
      (*(code *)*puVar13)(puVar13 + 4,&local_78);
      plVar10 = (long *)(*(long *)(lVar2 + 0xc0) + uVar9 * 0x18 + 8);
      lVar4 = *plVar10;
      if (lVar4 != 0) {
        *plVar10 = lVar4 + -1;
      }
    }
    if (1 < *(ulong *)(lVar2 + 0x130)) {
      uVar9 = *(ulong *)(*(long *)(lVar2 + 0xf8) + 0x10);
      if ((((*(char *)(*(long *)(lVar2 + 0xc0) + uVar9 * 0x18) != '\0') ||
           (*(long *)(*(long *)(lVar2 + 0xc0) + uVar9 * 0x18 + 8) != 0)) &&
          (uVar9 < *(ulong *)(lVar2 + 0xb0))) &&
         ((*(ulong *)(lVar2 + 0x48) <= uVar9 ||
          ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar9 >> 3 & 0x1ffffffffffffff8)) >>
            (uVar9 & 0x3f) & 1) == 0)))) {
        puVar13 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar9 * 0x80);
        local_78 = CONCAT71(local_78._1_7_,*param_2);
        (*(code *)*puVar13)(puVar13 + 4,&local_78);
        plVar10 = (long *)(*(long *)(lVar2 + 0xc0) + uVar9 * 0x18 + 8);
        lVar4 = *plVar10;
        if (lVar4 != 0) {
          *plVar10 = lVar4 + -1;
        }
      }
      if (2 < *(ulong *)(lVar2 + 0x130)) {
        uVar9 = 2;
        lVar4 = 0x20;
        do {
          uVar14 = *(ulong *)(*(long *)(lVar2 + 0xf8) + lVar4);
          if (((*(char *)(*(long *)(lVar2 + 0xc0) + uVar14 * 0x18) != '\0') ||
              (*(long *)(*(long *)(lVar2 + 0xc0) + uVar14 * 0x18 + 8) != 0)) &&
             ((uVar14 < *(ulong *)(lVar2 + 0xb0) &&
              ((*(ulong *)(lVar2 + 0x48) <= uVar14 ||
               ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar14 >> 3 & 0x1ffffffffffffff8)) >>
                 (uVar14 & 0x3f) & 1) == 0)))))) {
            puVar13 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar14 * 0x80);
            local_78 = CONCAT71(local_78._1_7_,*param_2);
            (*(code *)*puVar13)(puVar13 + 4,&local_78);
            plVar10 = (long *)(*(long *)(lVar2 + 0xc0) + uVar14 * 0x18 + 8);
            lVar7 = *plVar10;
            if (lVar7 != 0) {
              *plVar10 = lVar7 + -1;
            }
          }
          uVar9 = uVar9 + 1;
          lVar4 = lVar4 + 0x10;
        } while (uVar9 < *(ulong *)(lVar2 + 0x130));
      }
    }
  }
  plVar10 = (long *)(param_1 + 0x48);
  lVar4 = *plVar10;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar4) {
    lVar2 = nn::os::GetCurrentThread();
LAB_01ac1ed0:
    if (*plVar10 == 0) goto code_r0x01ac1ed8;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar10 == 0) {
            cVar1 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *plVar10 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_01ac1ee0;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *plVar10 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_01ac1ee0:
    bVar6 = false;
    goto LAB_01ac1ee4;
  }
  plVar10 = (long *)0x0;
  bVar6 = true;
LAB_01ac1ee4:
  plVar5 = (long *)(param_1 + 0x60);
  puVar13 = (undefined8 *)*plVar5;
  puVar11 = *(undefined8 **)(param_1 + 0x68);
  puVar15 = puVar13;
  if (puVar13 != puVar11) {
    (*(code *)*puVar13)(puVar13 + 4);
    while (puVar15 = puVar13 + 0x20, puVar15 != puVar11) {
      (*(code *)*puVar15)(puVar13 + 0x24);
      puVar13 = puVar15;
    }
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    puVar13 = *(undefined8 **)(param_1 + 0x68);
    puVar15 = puVar11;
    if (puVar13 == puVar11) {
    }
    else {
      if (puVar11 != puVar13) {
        do {
          pcVar3 = (code *)puVar13[-0x1f];
          puVar15 = puVar13 + -0x20;
          if (pcVar3 != (code *)0x0) {
            puVar13[-0x1e] = 0;
            puVar13[-0x1d] = 0;
            puVar13[-0x20] = 0;
            puVar13[-0x1f] = 0;
            (*pcVar3)(puVar13 + -0x1c);
          }
          puVar13 = puVar15;
        } while (puVar11 != puVar15);
        puVar15 = (undefined8 *)*plVar5;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar11;
      puVar13 = puVar11;
    }
  }
  lVar2 = (long)puVar13 - (long)puVar15;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar15 >> 8)) {
    puVar13 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar13;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,lVar2,0x10);
      if (lVar4 == 0) {
        (**(code **)(*(long *)*puVar13 + 0xe8))();
      }
    }
    lStack_70 = lVar4 + (lVar2 >> 8) * 0x100;
    local_78 = lVar4;
    local_68 = lStack_70;
    local_60 = lStack_70;
    FUN_0103b38c(plVar5,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar6) {
    *plVar10 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar10 + 1));
  }
  plVar10 = (long *)(param_1 + 0x98);
  lVar4 = *plVar10;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar4) {
    plVar10 = (long *)0x0;
    bVar6 = true;
LAB_01ac1f54:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar13 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_00e2b668(param_1,*puVar13);
        lVar2 = lVar2 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar2 != 0);
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar6) {
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
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01ac1f50;
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
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01ac1f50;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar6) {
      *plVar10 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01ac1f50:
  bVar6 = false;
  goto LAB_01ac1f54;
code_r0x01ac1ed8:
  cVar1 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar6) {
    *plVar10 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01ac1ee0;
  goto LAB_01ac1ed0;
}


