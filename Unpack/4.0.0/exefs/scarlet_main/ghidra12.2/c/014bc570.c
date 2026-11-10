/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014bc570; name: FUN_014bc570
 */


undefined8 FUN_014bc570(long param_1,long *param_2,byte param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  LightEventType *pLVar4;
  short *psVar5;
  long lVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  short sVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  plVar2 = (long *)(param_1 + 0x530);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar2;
    lVar15 = *(long *)(param_1 + 0x538);
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar12) {
      *plVar2 = lVar11;
      *(long *)(param_1 + 0x538) = lVar15;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_014bc5b8:
  while ((lVar11 != 0 && (lVar10 != lVar11))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x540));
    do {
      lVar11 = *plVar2;
      lVar15 = *(long *)(param_1 + 0x538);
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = lVar11;
        *(long *)(param_1 + 0x538) = lVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  do {
    lVar14 = *plVar2;
    if (lVar14 != lVar11 || *(long *)(param_1 + 0x538) != lVar15) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_014bc5e8;
    }
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar12) {
      *plVar2 = lVar11;
      *(long *)(param_1 + 0x534) = lVar15 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar12 = true;
LAB_014bc5e8:
  if (!bVar12) {
    lVar11 = lVar14;
    lVar15 = *(long *)(param_1 + 0x538);
    goto LAB_014bc5b8;
  }
  if (*(char *)(param_1 + 0x550) != '\0') {
    uVar18 = 0;
LAB_014bc608:
    do {
      lVar10 = *plVar2;
      lVar11 = *(long *)(param_1 + 0x538);
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = lVar10;
        *(long *)(param_1 + 0x538) = lVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      lVar15 = *plVar2;
      lVar14 = *(long *)(param_1 + 0x538);
      if (lVar15 != lVar10 || lVar14 != lVar11) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_014bc644;
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar12) {
        *plVar2 = lVar10;
        *(long *)(param_1 + 0x534) = lVar11 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar12 = true;
LAB_014bc644:
    if (!bVar12) {
      do {
        lVar10 = *plVar2;
        lVar11 = *(long *)(param_1 + 0x538);
        if (lVar10 != lVar15 || lVar11 != lVar14) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x014bc870;
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar12) {
          *plVar2 = lVar15;
          *(long *)(param_1 + 0x534) = lVar14 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar12 = true;
joined_r0x014bc870:
      if (!bVar12) {
        do {
          lVar15 = *plVar2;
          lVar14 = *(long *)(param_1 + 0x538);
          if (lVar15 != lVar10 || lVar14 != lVar11) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar10 = lVar15;
            lVar11 = lVar14;
            goto joined_r0x014bc870;
          }
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar12) {
            *plVar2 = lVar10;
            *(long *)(param_1 + 0x534) = lVar11 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar12 = true;
        lVar10 = lVar15;
        lVar11 = lVar14;
        goto joined_r0x014bc870;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x540));
    return uVar18;
  }
  plVar3 = (long *)(param_1 + 0x60);
  lVar10 = nn::os::GetCurrentThread();
LAB_014bc684:
  if (*plVar3 == 0) goto code_r0x014bc68c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
        while (*plVar3 == 0) {
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar12) {
            *plVar3 = lVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_014bc694;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar10;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_014bc694:
  if ((long *)*param_2 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)*param_2;
  }
  plVar3 = (long *)(param_1 + 0x290);
  lVar11 = nn::os::GetCurrentThread();
  do {
    lVar15 = *plVar3;
    lVar14 = *(long *)(param_1 + 0x298);
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar15;
      *(long *)(param_1 + 0x298) = lVar14;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  pLVar4 = (LightEventType *)(param_1 + 0x2a0);
LAB_014bc6bc:
  while ((lVar15 != 0 && (lVar11 != lVar15))) {
    nn::os::WaitLightEvent(pLVar4);
    do {
      lVar15 = *plVar3;
      lVar14 = *(long *)(param_1 + 0x298);
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = lVar15;
        *(long *)(param_1 + 0x298) = lVar14;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  do {
    lVar6 = *plVar3;
    if (lVar6 != lVar15 || *(long *)(param_1 + 0x298) != lVar14) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_014bc6ec;
    }
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar15;
      *(long *)(param_1 + 0x294) = lVar14 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar12 = true;
LAB_014bc6ec:
  if (!bVar12) {
    lVar15 = lVar6;
    lVar14 = *(long *)(param_1 + 0x298);
    goto LAB_014bc6bc;
  }
  plVar13 = *(long **)(param_1 + 0x2b0);
  lVar11 = *(long *)(param_1 + 0x2e8);
  if ((lVar11 != 0) && (*plVar13 != lVar10)) {
    lVar15 = lVar11 * 0x20;
    plVar19 = plVar13;
    while (lVar15 = lVar15 + -0x20, lVar15 != 0) {
      plVar1 = plVar19 + 4;
      plVar16 = plVar19 + 4;
      plVar19 = plVar19 + 4;
      if (*plVar1 == lVar10) goto LAB_014bc740;
    }
LAB_014bc784:
    uVar18 = 0;
    goto LAB_014bc788;
  }
  plVar16 = plVar13;
LAB_014bc740:
  if (plVar16 == plVar13 + lVar11 * 4) goto LAB_014bc784;
  *(byte *)(*(long *)(param_1 + 0x348) + plVar16[3] * 0x130 + 300) = param_3 & 1;
  if (((param_3 & 1) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x348) + plVar16[3] * 0x130 + 0x48), lVar10 == 0)) {
    uVar18 = 1;
    goto LAB_014bc788;
  }
  if (*(short *)(lVar10 + 0x1a) != 0) {
    psVar5 = (short *)(lVar10 + 0x1a);
    uVar18 = 1;
    sVar17 = *(short *)(lVar10 + 0x1a);
    do {
      sVar7 = *psVar5;
      if (sVar7 == sVar17) {
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar5,0x10);
        if (bVar12) {
          *psVar5 = sVar17 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_014bc9a8;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014bc9a8:
        bVar12 = false;
      }
      if (bVar12) {
        if (*(long *)(lVar10 + 0x10) == 0) break;
        plVar13 = (long *)(*(long *)(lVar10 + 0x10) + -8);
        if (*(char *)(*(long *)(param_1 + 0x348) + plVar16[3] * 0x130 + 0x128) != '\0')
        goto LAB_014bca18;
        goto LAB_014bc9e4;
      }
      sVar17 = sVar7;
      if (sVar7 == 0) goto LAB_014bc788;
    } while( true );
  }
LAB_014bca0c:
  uVar18 = 1;
LAB_014bc788:
  do {
    lVar10 = *plVar3;
    lVar11 = *(long *)(param_1 + 0x298);
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar10;
      *(long *)(param_1 + 0x298) = lVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar15 = *plVar3;
    lVar14 = *(long *)(param_1 + 0x298);
    if (lVar15 != lVar10 || lVar14 != lVar11) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_014bc808;
    }
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar10;
      *(long *)(param_1 + 0x294) = lVar11 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar12 = true;
LAB_014bc808:
  if (!bVar12) {
    do {
      lVar10 = *plVar3;
      lVar11 = *(long *)(param_1 + 0x298);
      if (lVar10 != lVar15 || lVar11 != lVar14) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x014bc8fc;
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = lVar15;
        *(long *)(param_1 + 0x294) = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar12 = true;
joined_r0x014bc8fc:
    if (!bVar12) {
      do {
        lVar15 = *plVar3;
        lVar14 = *(long *)(param_1 + 0x298);
        if (lVar15 != lVar10 || lVar14 != lVar11) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar10 = lVar15;
          lVar11 = lVar14;
          goto joined_r0x014bc8fc;
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *plVar3 = lVar10;
          *(long *)(param_1 + 0x294) = lVar11 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar12 = true;
      lVar10 = lVar15;
      lVar11 = lVar14;
      goto joined_r0x014bc8fc;
    }
  }
  nn::os::SignalLightEvent(pLVar4);
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
  goto LAB_014bc608;
code_r0x014bc68c:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar12) {
    *plVar3 = lVar10;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_014bc694;
  goto LAB_014bc684;
LAB_014bca18:
  do {
    lVar10 = *plVar3;
    lVar11 = *(long *)(param_1 + 0x298);
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar10;
      *(long *)(param_1 + 0x298) = lVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar15 = *plVar3;
    lVar14 = *(long *)(param_1 + 0x298);
    if (lVar15 != lVar10 || lVar14 != lVar11) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_014bca90;
    }
    cVar8 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar12) {
      *plVar3 = lVar10;
      *(long *)(param_1 + 0x294) = lVar11 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar12 = true;
LAB_014bca90:
  if (!bVar12) {
    do {
      lVar10 = *plVar3;
      lVar11 = *(long *)(param_1 + 0x298);
      if (lVar10 != lVar15 || lVar11 != lVar14) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x014bcd34;
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = lVar15;
        *(long *)(param_1 + 0x294) = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar12 = true;
joined_r0x014bcd34:
    if (!bVar12) {
      do {
        lVar15 = *plVar3;
        lVar14 = *(long *)(param_1 + 0x298);
        if (lVar15 != lVar10 || lVar14 != lVar11) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar10 = lVar15;
          lVar11 = lVar14;
          goto joined_r0x014bcd34;
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *plVar3 = lVar10;
          *(long *)(param_1 + 0x294) = lVar11 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar12 = true;
      lVar10 = lVar15;
      lVar11 = lVar14;
      goto joined_r0x014bcd34;
    }
  }
  nn::os::SignalLightEvent(pLVar4);
  plVar19 = (long *)(param_1 + 0x2f0);
  lVar11 = *plVar19;
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 != lVar11) {
    lVar10 = nn::os::GetCurrentThread();
LAB_014bcab8:
    if (*plVar19 == 0) goto code_r0x014bcac0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
    do {
      if (*plVar19 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
          while (*plVar19 == 0) {
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar12) {
              *plVar19 = lVar10;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_014bcac8;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar12) {
        *plVar19 = lVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_014bcac8:
    bVar12 = false;
    goto LAB_014bcacc;
  }
  plVar19 = (long *)0x0;
  bVar12 = true;
LAB_014bcacc:
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar11 = *plVar3;
    lVar15 = *(long *)(param_1 + 0x298);
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar9) {
      *plVar3 = lVar11;
      *(long *)(param_1 + 0x298) = lVar15;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    while ((lVar11 != 0 && (lVar10 != lVar11))) {
      nn::os::WaitLightEvent(pLVar4);
      do {
        lVar11 = *plVar3;
        lVar15 = *(long *)(param_1 + 0x298);
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *plVar3 = lVar11;
          *(long *)(param_1 + 0x298) = lVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    do {
      lVar14 = *plVar3;
      if (lVar14 != lVar11 || *(long *)(param_1 + 0x298) != lVar15) {
        bVar9 = false;
        ClearExclusiveLocal();
        goto LAB_014bcb20;
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *plVar3 = lVar11;
        *(long *)(param_1 + 0x294) = lVar15 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar9 = true;
LAB_014bcb20:
    lVar11 = lVar14;
    lVar15 = *(long *)(param_1 + 0x298);
  } while (!bVar9);
  local_64[0] = 0;
  FUN_018f53e4(*(undefined8 *)(*(long *)(param_1 + 0x348) + plVar16[3] * 0x130 + 0x110),local_64);
  *(undefined1 *)(*(long *)(param_1 + 0x348) + plVar16[3] * 0x130 + 0x128) = 0;
  if (!bVar12) {
    *plVar19 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
  }
LAB_014bc9e4:
  if (*(char *)(*(long *)(param_1 + 0x348) + plVar16[3] * 0x130 + 0x12a) != '\0') {
    do {
      lVar10 = *plVar3;
      lVar11 = *(long *)(param_1 + 0x298);
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = lVar10;
        *(long *)(param_1 + 0x298) = lVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      lVar15 = *plVar3;
      lVar14 = *(long *)(param_1 + 0x298);
      if (lVar15 != lVar10 || lVar14 != lVar11) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_014bcbc4;
      }
      cVar8 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = lVar10;
        *(long *)(param_1 + 0x294) = lVar11 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar12 = true;
LAB_014bcbc4:
    if (!bVar12) {
      do {
        lVar10 = *plVar3;
        lVar11 = *(long *)(param_1 + 0x298);
        if (lVar10 != lVar15 || lVar11 != lVar14) {
          bVar12 = false;
          ClearExclusiveLocal();
          goto joined_r0x014bcdc4;
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar12) {
          *plVar3 = lVar15;
          *(long *)(param_1 + 0x294) = lVar14 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar12 = true;
joined_r0x014bcdc4:
      if (!bVar12) {
        do {
          lVar15 = *plVar3;
          lVar14 = *(long *)(param_1 + 0x298);
          if (lVar15 != lVar10 || lVar14 != lVar11) {
            bVar12 = false;
            ClearExclusiveLocal();
            lVar10 = lVar15;
            lVar11 = lVar14;
            goto joined_r0x014bcdc4;
          }
          cVar8 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar12) {
            *plVar3 = lVar10;
            *(long *)(param_1 + 0x294) = lVar11 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar12 = true;
        lVar10 = lVar15;
        lVar11 = lVar14;
        goto joined_r0x014bcdc4;
      }
    }
    nn::os::SignalLightEvent(pLVar4);
    plVar19 = (long *)(param_1 + 0x2f0);
    lVar11 = *plVar19;
    lVar10 = nn::os::GetCurrentThread();
    if (lVar10 != lVar11) {
      lVar10 = nn::os::GetCurrentThread();
LAB_014bcbec:
      if (*plVar19 == 0) goto code_r0x014bcbf4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
      do {
        if (*plVar19 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
            while (*plVar19 == 0) {
              cVar8 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar12) {
                *plVar19 = lVar10;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_014bcbfc;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar12) {
          *plVar19 = lVar10;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_014bcbfc:
      bVar12 = false;
      goto LAB_014bcc00;
    }
    plVar19 = (long *)0x0;
    bVar12 = true;
LAB_014bcc00:
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar11 = *plVar3;
      lVar15 = *(long *)(param_1 + 0x298);
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar9) {
        *plVar3 = lVar11;
        *(long *)(param_1 + 0x298) = lVar15;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      while ((lVar11 != 0 && (lVar10 != lVar11))) {
        nn::os::WaitLightEvent(pLVar4);
        do {
          lVar11 = *plVar3;
          lVar15 = *(long *)(param_1 + 0x298);
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar9) {
            *plVar3 = lVar11;
            *(long *)(param_1 + 0x298) = lVar15;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      do {
        lVar14 = *plVar3;
        if (lVar14 != lVar11 || *(long *)(param_1 + 0x298) != lVar15) {
          bVar9 = false;
          ClearExclusiveLocal();
          goto LAB_014bcc54;
        }
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar9) {
          *plVar3 = lVar11;
          *(long *)(param_1 + 0x294) = lVar15 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar9 = true;
LAB_014bcc54:
      lVar11 = lVar14;
      lVar15 = *(long *)(param_1 + 0x298);
    } while (!bVar9);
    local_68[0] = 0;
    FUN_018f53e4(*(undefined8 *)(*(long *)(param_1 + 0x348) + plVar16[3] * 0x130 + 0x118),local_68);
    *(undefined1 *)(*(long *)(param_1 + 0x348) + plVar16[3] * 0x130 + 0x12a) = 0;
    if (!bVar12) {
      *plVar19 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13);
  goto LAB_014bca0c;
code_r0x014bcac0:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar12) {
    *plVar19 = lVar10;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_014bcac8;
  goto LAB_014bcab8;
code_r0x014bcbf4:
  cVar8 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar12) {
    *plVar19 = lVar10;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_014bcbfc;
  goto LAB_014bcbec;
}


