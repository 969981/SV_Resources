/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f31d10; name: FUN_00f31d10
 */


undefined8 FUN_00f31d10(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  bool bVar14;
  long *plVar15;
  bool bVar16;
  long lVar17;
  long *plVar18;
  
  lVar1 = *param_1;
  lVar17 = param_1[1];
  plVar15 = (long *)(lVar17 + 0x428);
  lVar11 = *plVar15;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 != lVar11) {
    lVar6 = nn::os::GetCurrentThread();
LAB_00f31d50:
    if (*plVar15 == 0) goto code_r0x00f31d58;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x430));
    do {
      if (*plVar15 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x430));
          while (*plVar15 == 0) {
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar16) {
              *plVar15 = lVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00f31d60;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar16) {
        *plVar15 = lVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00f31d60:
    bVar16 = false;
    goto LAB_00f31d64;
  }
  plVar15 = (long *)0x0;
  bVar16 = true;
LAB_00f31d64:
  *(undefined1 *)(lVar17 + 0x440) = 2;
  *(undefined1 *)(param_1[1] + 0x450) = 0;
  lVar17 = param_1[1];
  uVar7 = (**(code **)(*(long *)(lVar17 + 0x40) + 0x70))();
  if ((uVar7 & 1) == 0) {
    plVar12 = (long *)(lVar17 + 0x48);
    lVar11 = *plVar12;
    lVar6 = nn::os::GetCurrentThread();
    if (lVar6 != lVar11) {
      lVar6 = nn::os::GetCurrentThread();
LAB_00f31da8:
      if (*plVar12 == 0) goto code_r0x00f31db0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x50));
      do {
        if (*plVar12 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x50));
            while (*plVar12 == 0) {
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar10) {
                *plVar12 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00f31db8;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar10) {
          *plVar12 = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00f31db8:
      bVar10 = false;
      goto LAB_00f31dbc;
    }
    plVar12 = (long *)0x0;
    bVar10 = true;
LAB_00f31dbc:
    plVar2 = *(long **)(lVar17 + 0x68);
    for (plVar18 = *(long **)(lVar17 + 0x60); plVar18 != plVar2; plVar18 = plVar18 + 1) {
      lVar17 = *(long *)(*plVar18 + 0x388);
      if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) {
        FUN_00f321ec(*plVar18,1);
      }
    }
    if (!bVar10) {
      *plVar12 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
    }
  }
  plVar12 = (long *)param_1[1];
  if (plVar12[0x92] == 0) goto LAB_00f31e14;
  plVar18 = plVar12 + 9;
  lVar6 = *plVar18;
  lVar17 = nn::os::GetCurrentThread();
  if (lVar17 != lVar6) {
    lVar17 = nn::os::GetCurrentThread();
LAB_00f31fc4:
    if (*plVar18 == 0) goto code_r0x00f31fcc;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar12 + 10));
    do {
      if (*plVar18 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar12 + 10));
          while (*plVar18 == 0) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar10) {
              *plVar18 = lVar17;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_00f32038;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar10) {
        *plVar18 = lVar17;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_00f32038:
    bVar14 = true;
    bVar5 = true;
    bVar10 = bVar14;
    if (plVar12 != (long *)0x0) goto LAB_00f31fdc;
    goto LAB_00f32048;
  }
  bVar10 = false;
  plVar18 = (long *)0x0;
LAB_00f31fdc:
  (**(code **)(*plVar12 + 0x58))(plVar12);
  bVar14 = false;
  bVar5 = bVar10;
LAB_00f32048:
  lVar17 = plVar12[0xc];
  lVar6 = plVar12[0xd];
  if ((((lVar17 != lVar6) && (uVar7 = FUN_00f324a4(plVar12,lVar17), lVar17 + 8 != lVar6)) &&
      ((uVar7 & 1) != 0)) &&
     ((uVar7 = FUN_00f324a4(plVar12), lVar17 + 0x10 != lVar6 && ((uVar7 & 1) != 0)))) {
    do {
      uVar7 = FUN_00f324a4(plVar12,lVar17 + 0x10);
      if (lVar6 + -0x18 == lVar17) break;
      lVar17 = lVar17 + 8;
    } while ((uVar7 & 1) != 0);
  }
  if (!bVar14) {
    (**(code **)(*plVar12 + 0x60))(plVar12);
  }
  if (bVar5) {
    *plVar18 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
  }
LAB_00f31e14:
  lVar17 = param_1[1];
  *(undefined1 *)(lVar17 + 0x448) = 1;
  for (lVar17 = *(long *)(lVar17 + 0x1c8);
      (lVar17 != 0 && (lVar17 = *(long *)(lVar17 + 0x10), lVar17 != 0));
      lVar17 = *(long *)(lVar17 + 0x1a0)) {
    *(undefined1 *)(lVar17 + 0x420) = 1;
  }
  if (!bVar16) {
    *plVar15 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
  }
  if ((*(byte *)(lVar1 + 0x61) & 1) != 0) {
    return 1;
  }
  plVar15 = (long *)(lVar1 + 0x68);
  lVar17 = nn::os::GetCurrentThread();
  while (*plVar15 == 0) {
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar16) {
      *plVar15 = lVar17;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00f31e74;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0x70));
  do {
    if (*plVar15 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar1 + 0x70));
        while (*plVar15 == 0) {
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar16) {
            *plVar15 = lVar17;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00f31e74;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar16) {
      *plVar15 = lVar17;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00f31e74:
  puVar9 = *(undefined8 **)(lVar1 + 0x80);
  puVar3 = *(undefined8 **)(lVar1 + 0x88);
  if (puVar9 != puVar3) {
    if ((*(byte *)(lVar1 + 0x61) & 1) == 0) {
      (*(code *)*puVar9)(puVar9 + 4);
    }
    if ((*(byte *)(lVar1 + 0x61) & 1) != 0) {
      (*(code *)**(undefined8 **)puVar9[0x10])();
      *(int *)(lVar1 + 100) = *(int *)(lVar1 + 100) + 1;
    }
    while (puVar9 = puVar9 + 0x12, puVar9 != puVar3) {
      if ((*(byte *)(lVar1 + 0x61) & 1) == 0) {
        (*(code *)*puVar9)(puVar9 + 4);
      }
      if ((*(byte *)(lVar1 + 0x61) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar9[0x10])();
        *(int *)(lVar1 + 100) = *(int *)(lVar1 + 100) + 1;
      }
    }
    puVar9 = *(undefined8 **)(lVar1 + 0x80);
    puVar3 = *(undefined8 **)(lVar1 + 0x88);
    if (puVar3 != puVar9) {
      pcVar8 = (code *)puVar3[-0x11];
      puVar13 = puVar3 + -0x12;
      if (pcVar8 != (code *)0x0) {
        puVar3[-0x10] = 0;
        puVar3[-0xf] = 0;
        *puVar13 = 0;
        puVar3[-0x11] = 0;
        (*pcVar8)(puVar3 + -0xe);
      }
      while (puVar3 = puVar13, puVar3 != puVar9) {
        pcVar8 = (code *)puVar3[-0x11];
        puVar13 = puVar3 + -0x12;
        if (pcVar8 != (code *)0x0) {
          puVar3[-0x10] = 0;
          puVar3[-0xf] = 0;
          puVar3[-0x12] = 0;
          puVar3[-0x11] = 0;
          (*pcVar8)(puVar3 + -0xe);
        }
      }
    }
  }
  *(undefined8 **)(lVar1 + 0x88) = puVar9;
  *(undefined1 *)(lVar1 + 0x60) = 1;
  if ((*(byte *)(lVar1 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(lVar1 + 0x40),lVar1);
    *(byte *)(lVar1 + 0x50) = 1;
  }
  *(undefined8 *)(lVar1 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar1 + 0x70));
  return 1;
code_r0x00f31d58:
  cVar4 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar16) {
    *plVar15 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00f31d60;
  goto LAB_00f31d50;
code_r0x00f31db0:
  cVar4 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar10) {
    *plVar12 = lVar6;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00f31db8;
  goto LAB_00f31da8;
code_r0x00f31fcc:
  cVar4 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar10) {
    *plVar18 = lVar17;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto code_r0x00f31fd4;
  goto LAB_00f31fc4;
code_r0x00f31fd4:
  bVar10 = true;
  goto LAB_00f31fdc;
}


