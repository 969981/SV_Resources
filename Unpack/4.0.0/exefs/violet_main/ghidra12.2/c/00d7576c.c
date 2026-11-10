/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d7576c; name: FUN_00d7576c
 */


void FUN_00d7576c(long *param_1)

{
  char cVar1;
  long lVar2;
  LightEventType *pLVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  size_t __n;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  long lVar13;
  long *plVar14;
  bool bVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *local_90;
  long *local_88;
  long *plStack_80;
  long *local_78;
  long *local_70;
  undefined8 *puStack_68;
  
  plVar14 = param_1 + 0x33;
  lVar7 = *plVar14;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar7) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00d757ac:
    if (*plVar14 == 0) goto code_r0x00d757b4;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x34));
    do {
      if (*plVar14 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x34));
          while (*plVar14 == 0) {
            cVar1 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar15) {
              *plVar14 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00d757bc;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar15) {
        *plVar14 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00d757bc:
    bVar15 = false;
    goto LAB_00d757c0;
  }
  plVar14 = (long *)0x0;
  bVar15 = true;
LAB_00d757c0:
  lVar7 = *param_1;
  plVar17 = (long *)(lVar7 + 0x30);
  local_90 = param_1;
  lVar2 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar1 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar12) {
      *plVar17 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d757e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x38));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x38));
        while (*plVar17 == 0) {
          cVar1 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar12) {
            *plVar17 = lVar2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d757e4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar12) {
      *plVar17 = lVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d757e4:
  lVar2 = *(long *)(lVar7 + 0x198);
  lVar16 = *(long *)(lVar7 + 0x1b8);
  lVar13 = *(long *)(lVar7 + 0x1d8);
  lVar10 = *(long *)(lVar7 + 0x1f8);
  if (lVar2 != 0) {
    if (((lVar16 == 0) && (lVar13 == 0)) && (lVar10 == 0)) {
      if (*(long *)(lVar2 + 0xb0) != 0) {
        uVar11 = 0;
        do {
          FUN_028c549c(lVar2,uVar11,&local_90);
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (*(long *)(lVar2 + 0xb0) != 0) {
      uVar11 = 0;
      do {
        FUN_00d772fc(lVar2,uVar11,&local_90);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar16 != 0) {
    lVar2 = *(long *)(lVar7 + 0x1b8);
    if ((lVar13 == 0) && (lVar10 == 0)) {
      if (*(long *)(lVar2 + 0xb0) != 0) {
        uVar11 = 0;
        do {
          FUN_028c5500(lVar2,uVar11,&local_90);
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(ulong *)(lVar2 + 0xb0));
      }
    }
    else if (*(long *)(lVar2 + 0xb0) != 0) {
      uVar11 = 0;
      do {
        FUN_00d77360(lVar2,uVar11,&local_90);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(ulong *)(lVar2 + 0xb0));
    }
  }
  if (lVar13 == 0) {
    if (lVar10 != 0) {
LAB_00d75e40:
      plVar17 = local_90;
      lVar2 = *(long *)(lVar7 + 0x1f8);
      if (*(long *)(lVar2 + 0x130) != 0) {
        uVar11 = **(ulong **)(lVar2 + 0xf8);
        if (((*(char *)(*(long *)(lVar2 + 0xc0) + uVar11 * 0x18) != '\0') ||
            (*(long *)(*(long *)(lVar2 + 0xc0) + uVar11 * 0x18 + 8) != 0)) &&
           ((uVar11 < *(ulong *)(lVar2 + 0xb0) &&
            ((*(ulong *)(lVar2 + 0x48) <= uVar11 ||
             ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar11 >> 3 & 0x1ffffffffffffff8)) >>
               (uVar11 & 0x3f) & 1) == 0)))))) {
          local_88 = local_90;
          puVar9 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar11 * 0x80);
          (*(code *)*puVar9)(puVar9 + 4,&local_88);
          plVar8 = (long *)(*(long *)(lVar2 + 0xc0) + uVar11 * 0x18 + 8);
          lVar10 = *plVar8;
          if (lVar10 != 0) {
            *plVar8 = lVar10 + -1;
          }
        }
        if (1 < *(ulong *)(lVar2 + 0x130)) {
          uVar11 = *(ulong *)(*(long *)(lVar2 + 0xf8) + 0x10);
          if ((((*(char *)(*(long *)(lVar2 + 0xc0) + uVar11 * 0x18) != '\0') ||
               (*(long *)(*(long *)(lVar2 + 0xc0) + uVar11 * 0x18 + 8) != 0)) &&
              (uVar11 < *(ulong *)(lVar2 + 0xb0))) &&
             ((*(ulong *)(lVar2 + 0x48) <= uVar11 ||
              ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar11 >> 3 & 0x1ffffffffffffff8)) >>
                (uVar11 & 0x3f) & 1) == 0)))) {
            local_88 = plVar17;
            puVar9 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar11 * 0x80);
            (*(code *)*puVar9)(puVar9 + 4,&local_88);
            plVar8 = (long *)(*(long *)(lVar2 + 0xc0) + uVar11 * 0x18 + 8);
            lVar10 = *plVar8;
            if (lVar10 != 0) {
              *plVar8 = lVar10 + -1;
            }
          }
          if (2 < *(ulong *)(lVar2 + 0x130)) {
            uVar11 = 2;
            lVar10 = 0x20;
            do {
              uVar19 = *(ulong *)(*(long *)(lVar2 + 0xf8) + lVar10);
              if (((*(char *)(*(long *)(lVar2 + 0xc0) + uVar19 * 0x18) != '\0') ||
                  (*(long *)(*(long *)(lVar2 + 0xc0) + uVar19 * 0x18 + 8) != 0)) &&
                 ((uVar19 < *(ulong *)(lVar2 + 0xb0) &&
                  ((*(ulong *)(lVar2 + 0x48) <= uVar19 ||
                   ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar19 >> 3 & 0x1ffffffffffffff8)) >>
                     (uVar19 & 0x3f) & 1) == 0)))))) {
                local_88 = plVar17;
                puVar9 = (undefined8 *)(*(long *)(lVar2 + 8) + uVar19 * 0x80);
                (*(code *)*puVar9)(puVar9 + 4,&local_88);
                plVar8 = (long *)(*(long *)(lVar2 + 0xc0) + uVar19 * 0x18 + 8);
                lVar13 = *plVar8;
                if (lVar13 != 0) {
                  *plVar8 = lVar13 + -1;
                }
              }
              uVar11 = uVar11 + 1;
              lVar10 = lVar10 + 0x10;
            } while (uVar11 < *(ulong *)(lVar2 + 0x130));
          }
        }
      }
    }
  }
  else {
    if (lVar10 != 0) {
      FUN_028c55b8(*(undefined8 *)(lVar7 + 0x1d8),&local_90);
      goto LAB_00d75e40;
    }
    FUN_00d77418();
  }
  plVar17 = (long *)(lVar7 + 0x48);
  lVar10 = *plVar17;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar10) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00d75820:
    if (*plVar17 == 0) goto code_r0x00d75828;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x50));
    do {
      if (*plVar17 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x50));
          while (*plVar17 == 0) {
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar12) {
              *plVar17 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00d75830;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00d75830:
    bVar12 = false;
    goto LAB_00d75834;
  }
  plVar17 = (long *)0x0;
  bVar12 = true;
LAB_00d75834:
  plVar8 = (long *)(lVar7 + 0x60);
  puVar9 = (undefined8 *)*plVar8;
  puVar18 = *(undefined8 **)(lVar7 + 0x68);
  puVar5 = puVar9;
  if (puVar9 != puVar18) {
    do {
      (*(code *)*puVar9)(puVar9 + 4);
      puVar9 = puVar9 + 0x20;
    } while (puVar9 != puVar18);
    puVar5 = *(undefined8 **)(lVar7 + 0x60);
    puVar18 = *(undefined8 **)(lVar7 + 0x68);
    if (puVar18 == puVar5) {
      puVar9 = puVar18;
      puVar5 = puVar18;
    }
    else {
      puVar9 = puVar5;
      if (puVar5 != puVar18) {
        do {
          pcVar6 = (code *)puVar18[-0x1f];
          puVar9 = puVar18 + -0x20;
          if (pcVar6 != (code *)0x0) {
            puVar18[-0x1e] = 0;
            puVar18[-0x1d] = 0;
            puVar18[-0x20] = 0;
            puVar18[-0x1f] = 0;
            (*pcVar6)(puVar18 + -0x1c);
          }
          puVar18 = puVar9;
        } while (puVar5 != puVar9);
        puVar9 = (undefined8 *)*plVar8;
      }
      *(undefined8 **)(lVar7 + 0x68) = puVar5;
    }
  }
  lVar2 = (long)puVar5 - (long)puVar9;
  if ((ulong)(lVar2 >> 8) < (ulong)(*(long *)(lVar7 + 0x70) - (long)puVar9 >> 8)) {
    puVar9 = (undefined8 *)(lVar7 + 0x78);
    local_70 = (long *)0x0;
    puStack_68 = puVar9;
    if (lVar2 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)(**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar2,0x10);
      if (plVar4 == (long *)0x0) {
        (**(code **)(*(long *)*puVar9 + 0xe8))();
      }
    }
    plStack_80 = plVar4 + (lVar2 >> 8) * 0x20;
    local_88 = plVar4;
    local_78 = plStack_80;
    local_70 = plStack_80;
    FUN_0103b38c(plVar8,&local_88);
    FUN_0103bbd0(&local_88);
  }
  if (!bVar12) {
    *plVar17 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
  }
  plVar17 = (long *)(lVar7 + 0x98);
  lVar10 = *plVar17;
  lVar2 = nn::os::GetCurrentThread();
  if (lVar2 != lVar10) {
    lVar2 = nn::os::GetCurrentThread();
LAB_00d75890:
    if (*plVar17 == 0) goto code_r0x00d75898;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xa0));
    do {
      if (*plVar17 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xa0));
          while (*plVar17 == 0) {
            cVar1 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar12) {
              *plVar17 = lVar2;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00d758a0;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar12) {
        *plVar17 = lVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00d758a0:
    bVar12 = false;
    goto LAB_00d758a4;
  }
  plVar17 = (long *)0x0;
  bVar12 = true;
LAB_00d758a4:
  puVar9 = *(undefined8 **)(lVar7 + 0xb0);
  lVar2 = *(long *)(lVar7 + 0xb8) - (long)puVar9;
  if (lVar2 != 0) {
    FUN_00d760b8(lVar7,*puVar9);
    if (((((lVar2 != 8) && (FUN_00d760b8(lVar7,puVar9[1]), lVar2 != 0x10)) &&
         (FUN_00d760b8(lVar7,puVar9[2]), lVar2 != 0x18)) &&
        ((FUN_00d760b8(lVar7,puVar9[3]), lVar2 != 0x20 &&
         (FUN_00d760b8(lVar7,puVar9[4]), lVar2 != 0x28)))) &&
       (FUN_00d760b8(lVar7,puVar9[5]), lVar2 != 0x30)) {
      lVar2 = (lVar2 >> 3) + -6;
      puVar9 = puVar9 + 6;
      do {
        FUN_00d760b8(lVar7,*puVar9);
        lVar2 = lVar2 + -1;
        puVar9 = puVar9 + 1;
      } while (lVar2 != 0);
    }
    if (*(long *)(lVar7 + 0xb8) != *(long *)(lVar7 + 0xb0)) {
      *(long *)(lVar7 + 0xb8) = *(long *)(lVar7 + 0xb0);
    }
  }
  if (!bVar12) {
    *plVar17 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
  }
  *(undefined8 *)(lVar7 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x38));
  puVar9 = (undefined8 *)param_1[0x36];
  puVar5 = (undefined8 *)param_1[0x37];
  lVar2 = (long)puVar5 - (long)puVar9;
  if (lVar2 == 0) goto LAB_00d758dc;
  lVar10 = *param_1;
  plVar17 = (long *)(lVar10 + 0x30);
  lVar13 = *plVar17;
  __n = lVar2 >> 3;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar13) {
    plVar17 = (long *)(lVar10 + 0x98);
    lVar7 = *plVar17;
    lVar2 = nn::os::GetCurrentThread();
    if (lVar2 != lVar7) {
      lVar2 = nn::os::GetCurrentThread();
LAB_00d75c94:
      if (*plVar17 == 0) goto code_r0x00d75c9c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xa0));
      do {
        if (*plVar17 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xa0));
            while (*plVar17 == 0) {
              cVar1 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar12) {
                *plVar17 = lVar2;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_00d75ca4;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar12) {
          *plVar17 = lVar2;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_00d75ca4:
      bVar12 = false;
      goto LAB_00d75ca8;
    }
    plVar17 = (long *)0x0;
    bVar12 = true;
LAB_00d75ca8:
    plVar8 = (long *)(lVar10 + 0xb0);
    lVar2 = *plVar8;
    uVar19 = *(long *)(lVar10 + 0xb8) - lVar2 >> 3;
    uVar11 = __n + uVar19;
    if (uVar19 < uVar11) {
      FUN_00c6e61c(plVar8,__n);
      lVar2 = *plVar8;
    }
    else if (uVar11 < uVar19) {
      *(ulong *)(lVar10 + 0xb8) = lVar2 + uVar11 * 8;
    }
    memcpy((void *)(lVar2 + uVar19 * 8),puVar9,__n);
    if (!bVar12) {
      *plVar17 = 0;
      pLVar3 = (LightEventType *)(plVar17 + 1);
      goto LAB_00d75adc;
    }
LAB_00d75ae0:
    puVar9 = (undefined8 *)param_1[0x36];
    puVar5 = (undefined8 *)param_1[0x37];
LAB_00d758dc:
    if (puVar5 != puVar9) {
      param_1[0x37] = (long)puVar9;
    }
    if (!bVar15) {
      *plVar14 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar14 + 1));
    }
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar17 == 0) {
    cVar1 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar12) {
      *plVar17 = lVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_00d75a58;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x38));
  do {
    if (*plVar17 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0x38));
        while (*plVar17 == 0) {
          cVar1 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar12) {
            *plVar17 = lVar7;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d75a58;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar12) {
      *plVar17 = lVar7;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d75a58:
  FUN_00d760b8(lVar10,*puVar9);
  if (((lVar2 != 8) && (FUN_00d760b8(lVar10,puVar9[1]), lVar2 != 0x10)) &&
     ((FUN_00d760b8(lVar10,puVar9[2]), lVar2 != 0x18 &&
      (((FUN_00d760b8(lVar10,puVar9[3]), lVar2 != 0x20 &&
        (FUN_00d760b8(lVar10,puVar9[4]), lVar2 != 0x28)) &&
       (FUN_00d760b8(lVar10,puVar9[5]), lVar2 != 0x30)))))) {
    lVar2 = __n - 6;
    puVar9 = puVar9 + 6;
    do {
      FUN_00d760b8(lVar10,*puVar9);
      lVar2 = lVar2 + -1;
      puVar9 = puVar9 + 1;
    } while (lVar2 != 0);
  }
  pLVar3 = (LightEventType *)(lVar10 + 0x38);
  *(undefined8 *)(lVar10 + 0x30) = 0;
LAB_00d75adc:
  nn::os::SignalLightEvent(pLVar3);
  goto LAB_00d75ae0;
code_r0x00d757b4:
  cVar1 = '\x01';
  bVar15 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar15) {
    *plVar14 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d757bc;
  goto LAB_00d757ac;
code_r0x00d75828:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar12) {
    *plVar17 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d75830;
  goto LAB_00d75820;
code_r0x00d75898:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar12) {
    *plVar17 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d758a0;
  goto LAB_00d75890;
code_r0x00d75c9c:
  cVar1 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar12) {
    *plVar17 = lVar2;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_00d75ca4;
  goto LAB_00d75c94;
}


