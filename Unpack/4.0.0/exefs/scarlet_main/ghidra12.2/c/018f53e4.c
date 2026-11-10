/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f53e4; name: FUN_018f53e4
 */


void FUN_018f53e4(long param_1,undefined1 *param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  plVar6 = (long *)(param_1 + 0x30);
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar6 == 0) {
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar7) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_018f5424;
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
          bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar7) {
            *plVar6 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_018f5424;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar7) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_018f5424:
  lVar2 = *(long *)(param_1 + 0x198);
  lVar11 = *(long *)(param_1 + 0x1b8);
  lVar9 = *(long *)(param_1 + 0x1d8);
  lVar8 = *(long *)(param_1 + 0x1f8);
  if (lVar2 != 0) {
    uVar5 = *(ulong *)(lVar2 + 0xb0);
    if (((lVar11 == 0) && (lVar9 == 0)) && (lVar8 == 0)) {
      if (uVar5 != 0) {
        uVar5 = 0;
        do {
          FUN_028c4910(lVar2,uVar5,param_2);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (uVar5 != 0) {
      if ((*(long *)(lVar2 + 0x48) == 0) || ((**(byte **)(lVar2 + 0x40) & 1) == 0)) {
        local_78 = CONCAT71(local_78._1_7_,*param_2);
        (*(code *)**(undefined8 **)(lVar2 + 8))(*(undefined8 **)(lVar2 + 8) + 4,&local_78);
        uVar5 = *(ulong *)(lVar2 + 0xb0);
      }
      if (1 < uVar5) {
        if ((*(ulong *)(lVar2 + 0x48) < 2) || ((**(byte **)(lVar2 + 0x40) >> 1 & 1) == 0)) {
          local_78 = CONCAT71(local_78._1_7_,*param_2);
          (**(code **)(*(long *)(lVar2 + 8) + 0x80))(*(long *)(lVar2 + 8) + 0xa0,&local_78);
          uVar5 = *(ulong *)(lVar2 + 0xb0);
        }
        if (2 < uVar5) {
          uVar13 = 2;
          lVar15 = 0x100;
          do {
            if ((uVar13 < uVar5) &&
               ((*(ulong *)(lVar2 + 0x48) <= uVar13 ||
                ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar13 >> 3 & 0x1ffffffffffffff8)) >>
                  (uVar13 & 0x3f) & 1) == 0)))) {
              puVar12 = (undefined8 *)(*(long *)(lVar2 + 8) + lVar15);
              local_78 = CONCAT71(local_78._1_7_,*param_2);
              (*(code *)*puVar12)(puVar12 + 4,&local_78);
              uVar5 = *(ulong *)(lVar2 + 0xb0);
            }
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + 0x80;
          } while (uVar13 < uVar5);
        }
      }
    }
  }
  if (lVar11 != 0) {
    lVar2 = *(long *)(param_1 + 0x1b8);
    if ((lVar9 == 0) && (lVar8 == 0)) {
      if (*(long *)(lVar2 + 0xb0) != 0) {
        uVar5 = 0;
        do {
          FUN_028c4978(lVar2,uVar5,param_2);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (*(long *)(lVar2 + 0xb0) != 0) {
      uVar5 = 0;
      do {
        FUN_018f5af0(lVar2,uVar5,param_2);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar9 == 0) {
    if (lVar8 != 0) {
LAB_018f57a4:
      lVar2 = *(long *)(param_1 + 0x1f8);
      if (*(long *)(lVar2 + 0x130) != 0) {
        uVar5 = **(ulong **)(lVar2 + 0xf8);
        if ((((*(char *)(*(long *)(lVar2 + 0xc0) + uVar5 * 0x18) != '\0') ||
             (*(long *)(*(long *)(lVar2 + 0xc0) + uVar5 * 0x18 + 8) != 0)) &&
            (uVar5 < *(ulong *)(lVar2 + 0xb0))) &&
           ((*(ulong *)(lVar2 + 0x48) <= uVar5 ||
            ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar5 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar5 & 0x3f) & 1) == 0)))) {
          puVar12 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar5 * 0x80);
          local_78 = CONCAT71(local_78._1_7_,*param_2);
          (*(code *)*puVar12)(puVar12 + 4,&local_78);
          plVar6 = (long *)(*(long *)(lVar2 + 0xc0) + uVar5 * 0x18 + 8);
          lVar8 = *plVar6;
          if (lVar8 != 0) {
            *plVar6 = lVar8 + -1;
          }
        }
        if (1 < *(ulong *)(lVar2 + 0x130)) {
          uVar5 = *(ulong *)(*(long *)(lVar2 + 0xf8) + 0x10);
          if (((*(char *)(*(long *)(lVar2 + 0xc0) + uVar5 * 0x18) != '\0') ||
              (*(long *)(*(long *)(lVar2 + 0xc0) + uVar5 * 0x18 + 8) != 0)) &&
             ((uVar5 < *(ulong *)(lVar2 + 0xb0) &&
              ((*(ulong *)(lVar2 + 0x48) <= uVar5 ||
               ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar5 >> 3 & 0x1ffffffffffffff8)) >>
                 (uVar5 & 0x3f) & 1) == 0)))))) {
            puVar12 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar5 * 0x80);
            local_78 = CONCAT71(local_78._1_7_,*param_2);
            (*(code *)*puVar12)(puVar12 + 4,&local_78);
            plVar6 = (long *)(*(long *)(lVar2 + 0xc0) + uVar5 * 0x18 + 8);
            lVar8 = *plVar6;
            if (lVar8 != 0) {
              *plVar6 = lVar8 + -1;
            }
          }
          if (2 < *(ulong *)(lVar2 + 0x130)) {
            uVar5 = 2;
            lVar8 = 0x20;
            do {
              uVar13 = *(ulong *)(*(long *)(lVar2 + 0xf8) + lVar8);
              if ((((*(char *)(*(long *)(lVar2 + 0xc0) + uVar13 * 0x18) != '\0') ||
                   (*(long *)(*(long *)(lVar2 + 0xc0) + uVar13 * 0x18 + 8) != 0)) &&
                  (uVar13 < *(ulong *)(lVar2 + 0xb0))) &&
                 ((*(ulong *)(lVar2 + 0x48) <= uVar13 ||
                  ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar13 >> 3 & 0x1ffffffffffffff8)) >>
                    (uVar13 & 0x3f) & 1) == 0)))) {
                puVar12 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar13 * 0x80);
                local_78 = CONCAT71(local_78._1_7_,*param_2);
                (*(code *)*puVar12)(puVar12 + 4,&local_78);
                plVar6 = (long *)(*(long *)(lVar2 + 0xc0) + uVar13 * 0x18 + 8);
                lVar9 = *plVar6;
                if (lVar9 != 0) {
                  *plVar6 = lVar9 + -1;
                }
              }
              uVar5 = uVar5 + 1;
              lVar8 = lVar8 + 0x10;
            } while (uVar5 < *(ulong *)(lVar2 + 0x130));
          }
        }
      }
    }
  }
  else {
    if (lVar8 != 0) {
      FUN_01ac264c(*(undefined8 *)(param_1 + 0x1d8),param_2);
      goto LAB_018f57a4;
    }
    FUN_018f5bac(*(undefined8 *)(param_1 + 0x1d8),param_2);
  }
  plVar6 = (long *)(param_1 + 0x48);
  lVar8 = *plVar6;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar8) {
    lVar2 = nn::os::GetCurrentThread();
LAB_018f5460:
    if (*plVar6 == 0) goto code_r0x018f5468;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
    do {
      if (*plVar6 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          while (*plVar6 == 0) {
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar7) {
              *plVar6 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_018f5470;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar7) {
        *plVar6 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_018f5470:
    bVar7 = false;
    goto LAB_018f5474;
  }
  plVar6 = (long *)0x0;
  bVar7 = true;
LAB_018f5474:
  plVar4 = (long *)(param_1 + 0x60);
  puVar12 = (undefined8 *)*plVar4;
  puVar10 = *(undefined8 **)(param_1 + 0x68);
  puVar14 = puVar12;
  if (puVar12 != puVar10) {
    (*(code *)*puVar12)(puVar12 + 4);
    while (puVar14 = puVar12 + 0x20, puVar14 != puVar10) {
      (*(code *)*puVar14)(puVar12 + 0x24);
      puVar12 = puVar14;
    }
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    puVar12 = *(undefined8 **)(param_1 + 0x68);
    puVar14 = puVar10;
    if (puVar12 == puVar10) {
    }
    else {
      if (puVar10 != puVar12) {
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
        } while (puVar10 != puVar14);
        puVar14 = (undefined8 *)*plVar4;
      }
      *(undefined8 **)(param_1 + 0x68) = puVar10;
      puVar12 = puVar10;
    }
  }
  lVar2 = (long)puVar12 - (long)puVar14;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(param_1 + 0x70) - (long)puVar14 >> 8)) {
    puVar12 = (undefined8 *)(param_1 + 0x78);
    local_60 = 0;
    puStack_58 = puVar12;
    if (lVar2 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*puVar12 + 0x10))((long *)*puVar12,lVar2,0x10);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*puVar12 + 0xe8))();
      }
    }
    lStack_70 = lVar8 + (lVar2 >> 8) * 0x100;
    local_78 = lVar8;
    local_68 = lStack_70;
    local_60 = lStack_70;
    FUN_0103b38c(plVar4,&local_78);
    FUN_0103bbd0(&local_78);
  }
  if (!bVar7) {
    *plVar6 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar6 + 1));
  }
  plVar6 = (long *)(param_1 + 0x98);
  lVar8 = *plVar6;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 == lVar8) {
    plVar6 = (long *)0x0;
    bVar7 = true;
LAB_018f54e4:
    lVar2 = *(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0);
    if (lVar2 != 0) {
      lVar2 = lVar2 >> 3;
      puVar12 = *(undefined8 **)(param_1 + 0xb0);
      do {
        FUN_00e2b668(param_1,*puVar12);
        lVar2 = lVar2 + -1;
        puVar12 = puVar12 + 1;
      } while (lVar2 != 0);
      if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xb0)) {
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
      }
    }
    if (!bVar7) {
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
    bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar7) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_018f54e0;
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
          bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar7) {
            *plVar6 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_018f54e0;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar7) {
      *plVar6 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_018f54e0:
  bVar7 = false;
  goto LAB_018f54e4;
code_r0x018f5468:
  cVar1 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar6,0x10);
  if (bVar7) {
    *plVar6 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_018f5470;
  goto LAB_018f5460;
}


