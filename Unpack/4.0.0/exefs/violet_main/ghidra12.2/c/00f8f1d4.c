/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f8f1d4; name: FUN_00f8f1d4
 */


undefined8 FUN_00f8f1d4(long param_1,long param_2,byte param_3)

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
  bool bVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  undefined1 local_64 [4];
  
  plVar2 = (long *)(param_1 + 0x530);
  lVar10 = nn::os::GetCurrentThread();
  do {
    lVar14 = *plVar2;
    lVar13 = *(long *)(param_1 + 0x538);
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar14;
      *(long *)(param_1 + 0x538) = lVar13;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00f8f21c:
  while ((lVar14 != 0 && (lVar10 != lVar14))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x540));
    do {
      lVar14 = *plVar2;
      lVar13 = *(long *)(param_1 + 0x538);
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = lVar14;
        *(long *)(param_1 + 0x538) = lVar13;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  do {
    lVar6 = *plVar2;
    if (lVar6 != lVar14 || *(long *)(param_1 + 0x538) != lVar13) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00f8f24c;
    }
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar14;
      *(long *)(param_1 + 0x534) = lVar13 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar11 = true;
LAB_00f8f24c:
  if (!bVar11) {
    lVar14 = lVar6;
    lVar13 = *(long *)(param_1 + 0x538);
    goto LAB_00f8f21c;
  }
  if (*(char *)(param_1 + 0x550) == '\0') {
    plVar3 = (long *)(param_1 + 0x60);
    lVar10 = nn::os::GetCurrentThread();
LAB_00f8f274:
    if (*plVar3 == 0) goto code_r0x00f8f27c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
    do {
      if (*plVar3 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x68));
          while (*plVar3 == 0) {
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar11) {
              *plVar3 = lVar10;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_00f8f284;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_00f8f284:
    plVar3 = (long *)(param_1 + 0x290);
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar14 = *plVar3;
      lVar13 = *(long *)(param_1 + 0x298);
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar14;
        *(long *)(param_1 + 0x298) = lVar13;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    pLVar4 = (LightEventType *)(param_1 + 0x2a0);
LAB_00f8f2a0:
    while ((lVar14 != 0 && (lVar10 != lVar14))) {
      nn::os::WaitLightEvent(pLVar4);
      do {
        lVar14 = *plVar3;
        lVar13 = *(long *)(param_1 + 0x298);
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *plVar3 = lVar14;
          *(long *)(param_1 + 0x298) = lVar13;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    do {
      lVar6 = *plVar3;
      if (lVar6 != lVar14 || *(long *)(param_1 + 0x298) != lVar13) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto LAB_00f8f2d0;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar14;
        *(long *)(param_1 + 0x294) = lVar13 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar11 = true;
LAB_00f8f2d0:
    if (!bVar11) {
      lVar14 = lVar6;
      lVar13 = *(long *)(param_1 + 0x298);
      goto LAB_00f8f2a0;
    }
    plVar12 = *(long **)(param_1 + 0x2b0);
    lVar10 = *(long *)(param_1 + 0x2e8);
    if ((lVar10 == 0) || (*plVar12 == param_2)) {
      plVar17 = plVar12;
LAB_00f8f324:
      if (plVar17 == plVar12 + lVar10 * 4) goto LAB_00f8f4d8;
      *(byte *)(*(long *)(param_1 + 0x348) + plVar17[3] * 0x130 + 0x19) = ~param_3 & 1;
      if ((~param_3 & 1) == 0) {
        if (((*(char *)(*(long *)(param_1 + 0x348) + plVar17[3] * 0x130 + 0x12a) == '\0') ||
            (lVar10 = *(long *)(*(long *)(param_1 + 0x348) + plVar17[3] * 0x130 + 0x48), lVar10 == 0
            )) || (*(short *)(lVar10 + 0x1a) == 0)) goto LAB_00f8f350;
        psVar5 = (short *)(lVar10 + 0x1a);
        uVar16 = 1;
        sVar15 = *(short *)(lVar10 + 0x1a);
LAB_00f8f4a0:
        sVar7 = *psVar5;
        if (sVar7 == sVar15) {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar11) {
            *psVar5 = sVar15 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_00f8f4c4;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f8f4c4:
          bVar11 = false;
        }
        if (!bVar11) {
          sVar15 = sVar7;
          if (sVar7 == 0) goto LAB_00f8f354;
          goto LAB_00f8f4a0;
        }
        if (*(long *)(lVar10 + 0x10) == 0) goto LAB_00f8f350;
        plVar12 = (long *)(*(long *)(lVar10 + 0x10) + -8);
        do {
          lVar10 = *plVar3;
          lVar14 = *(long *)(param_1 + 0x298);
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *plVar3 = lVar10;
            *(long *)(param_1 + 0x298) = lVar14;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        do {
          lVar13 = *plVar3;
          lVar6 = *(long *)(param_1 + 0x298);
          if (lVar13 != lVar10 || lVar6 != lVar14) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00f8f660;
          }
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *plVar3 = lVar10;
            *(long *)(param_1 + 0x294) = lVar14 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar11 = true;
LAB_00f8f660:
        if (!bVar11) {
          do {
            lVar10 = *plVar3;
            lVar14 = *(long *)(param_1 + 0x298);
            if (lVar10 != lVar13 || lVar14 != lVar6) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto joined_r0x00f8f7e4;
            }
            cVar8 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar11) {
              *plVar3 = lVar13;
              *(long *)(param_1 + 0x294) = lVar6 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          bVar11 = true;
joined_r0x00f8f7e4:
          if (!bVar11) {
            do {
              lVar13 = *plVar3;
              lVar6 = *(long *)(param_1 + 0x298);
              if (lVar13 != lVar10 || lVar6 != lVar14) {
                bVar11 = false;
                ClearExclusiveLocal();
                lVar10 = lVar13;
                lVar14 = lVar6;
                goto joined_r0x00f8f7e4;
              }
              cVar8 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar11) {
                *plVar3 = lVar10;
                *(long *)(param_1 + 0x294) = lVar14 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            bVar11 = true;
            lVar10 = lVar13;
            lVar14 = lVar6;
            goto joined_r0x00f8f7e4;
          }
        }
        nn::os::SignalLightEvent(pLVar4);
        plVar18 = (long *)(param_1 + 0x2f0);
        lVar14 = *plVar18;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 == lVar14) {
          plVar18 = (long *)0x0;
          bVar11 = true;
LAB_00f8f69c:
          lVar10 = nn::os::GetCurrentThread();
          do {
            lVar14 = *plVar3;
            lVar13 = *(long *)(param_1 + 0x298);
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar9) {
              *plVar3 = lVar14;
              *(long *)(param_1 + 0x298) = lVar13;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          do {
            while ((lVar14 != 0 && (lVar10 != lVar14))) {
              nn::os::WaitLightEvent(pLVar4);
              do {
                lVar14 = *plVar3;
                lVar13 = *(long *)(param_1 + 0x298);
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar9) {
                  *plVar3 = lVar14;
                  *(long *)(param_1 + 0x298) = lVar13;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
            }
            do {
              lVar6 = *plVar3;
              if (lVar6 != lVar14 || *(long *)(param_1 + 0x298) != lVar13) {
                bVar9 = false;
                ClearExclusiveLocal();
                goto LAB_00f8f6ec;
              }
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar9) {
                *plVar3 = lVar14;
                *(long *)(param_1 + 0x294) = lVar13 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            bVar9 = true;
LAB_00f8f6ec:
            lVar14 = lVar6;
            lVar13 = *(long *)(param_1 + 0x298);
          } while (!bVar9);
          local_64[0] = 0;
          FUN_018f53e4(*(undefined8 *)(*(long *)(param_1 + 0x348) + plVar17[3] * 0x130 + 0x118),
                       local_64);
          *(undefined1 *)(*(long *)(param_1 + 0x348) + plVar17[3] * 0x130 + 0x12a) = 0;
          if (!bVar11) {
            *plVar18 = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
          }
          (**(code **)(*plVar12 + 0x18))(plVar12);
          goto LAB_00f8f350;
        }
        lVar10 = nn::os::GetCurrentThread();
        while (*plVar18 == 0) {
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_00f8f698;
        }
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
        do {
          if (*plVar18 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
              while (*plVar18 == 0) {
                cVar8 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar11) {
                  *plVar18 = lVar10;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB_00f8f698;
              }
            } while( true );
          }
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar10;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
LAB_00f8f698:
        bVar11 = false;
        goto LAB_00f8f69c;
      }
LAB_00f8f350:
      uVar16 = 1;
    }
    else {
      lVar14 = lVar10 * 0x20;
      plVar18 = plVar12;
      while (lVar14 = lVar14 + -0x20, lVar14 != 0) {
        plVar17 = plVar18 + 4;
        plVar1 = plVar18 + 4;
        plVar18 = plVar17;
        if (*plVar1 == param_2) goto LAB_00f8f324;
      }
LAB_00f8f4d8:
      uVar16 = 0;
    }
LAB_00f8f354:
    do {
      lVar10 = *plVar3;
      lVar14 = *(long *)(param_1 + 0x298);
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar10;
        *(long *)(param_1 + 0x298) = lVar14;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      lVar13 = *plVar3;
      lVar6 = *(long *)(param_1 + 0x298);
      if (lVar13 != lVar10 || lVar6 != lVar14) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto LAB_00f8f3dc;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar11) {
        *plVar3 = lVar10;
        *(long *)(param_1 + 0x294) = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar11 = true;
LAB_00f8f3dc:
    if (!bVar11) {
      do {
        lVar10 = *plVar3;
        lVar14 = *(long *)(param_1 + 0x298);
        if (lVar10 != lVar13 || lVar14 != lVar6) {
          bVar11 = false;
          ClearExclusiveLocal();
          goto joined_r0x00f8f5b4;
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar11) {
          *plVar3 = lVar13;
          *(long *)(param_1 + 0x294) = lVar6 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar11 = true;
joined_r0x00f8f5b4:
      if (!bVar11) {
        do {
          lVar13 = *plVar3;
          lVar6 = *(long *)(param_1 + 0x298);
          if (lVar13 != lVar10 || lVar6 != lVar14) {
            bVar11 = false;
            ClearExclusiveLocal();
            lVar10 = lVar13;
            lVar14 = lVar6;
            goto joined_r0x00f8f5b4;
          }
          cVar8 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *plVar3 = lVar10;
            *(long *)(param_1 + 0x294) = lVar14 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        bVar11 = true;
        lVar10 = lVar13;
        lVar14 = lVar6;
        goto joined_r0x00f8f5b4;
      }
    }
    nn::os::SignalLightEvent(pLVar4);
    *(undefined8 *)(param_1 + 0x60) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x68));
    goto LAB_00f8f3f8;
  }
  uVar16 = 0;
LAB_00f8f3f8:
  do {
    lVar10 = *plVar2;
    lVar14 = *(long *)(param_1 + 0x538);
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x538) = lVar14;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar13 = *plVar2;
    lVar6 = *(long *)(param_1 + 0x538);
    if (lVar13 != lVar10 || lVar6 != lVar14) {
      bVar11 = false;
      ClearExclusiveLocal();
      goto LAB_00f8f434;
    }
    cVar8 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar11) {
      *plVar2 = lVar10;
      *(long *)(param_1 + 0x534) = lVar14 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar11 = true;
LAB_00f8f434:
  if (!bVar11) {
    do {
      lVar10 = *plVar2;
      lVar14 = *(long *)(param_1 + 0x538);
      if (lVar10 != lVar13 || lVar14 != lVar6) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f8f528;
      }
      cVar8 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar11) {
        *plVar2 = lVar13;
        *(long *)(param_1 + 0x534) = lVar6 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar11 = true;
joined_r0x00f8f528:
    if (!bVar11) {
      do {
        lVar13 = *plVar2;
        lVar6 = *(long *)(param_1 + 0x538);
        if (lVar13 != lVar10 || lVar6 != lVar14) {
          bVar11 = false;
          ClearExclusiveLocal();
          lVar10 = lVar13;
          lVar14 = lVar6;
          goto joined_r0x00f8f528;
        }
        cVar8 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar11) {
          *plVar2 = lVar10;
          *(long *)(param_1 + 0x534) = lVar14 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar11 = true;
      lVar10 = lVar13;
      lVar14 = lVar6;
      goto joined_r0x00f8f528;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x540));
  return uVar16;
code_r0x00f8f27c:
  cVar8 = '\x01';
  bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
  if (bVar11) {
    *plVar3 = lVar10;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_00f8f284;
  goto LAB_00f8f274;
}


