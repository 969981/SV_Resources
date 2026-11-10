/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02de25c4; name: FUN_02de25c4
 */


void FUN_02de25c4(long param_1)

{
  long *plVar1;
  LightEventType *pLVar2;
  short *psVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  bool bVar16;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  *(undefined1 *)(param_1 + 0x238) = 0;
  plVar7 = *(long **)(param_1 + 0xe0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x68))(plVar7,0);
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x68))(*(long **)(param_1 + 0xe8),0);
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x68))(*(long **)(param_1 + 0xf8),0);
    (**(code **)(**(long **)(param_1 + 0x100) + 0x68))(*(long **)(param_1 + 0x100),0);
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0x68))(*(long **)(param_1 + 0x1d0),0);
    (**(code **)(**(long **)(param_1 + 0x1d8) + 0x68))(*(long **)(param_1 + 0x1d8),0);
    (**(code **)(**(long **)(param_1 + 0x1e0) + 0x68))(*(long **)(param_1 + 0x1e0),0);
    (**(code **)(**(long **)(param_1 + 0x108) + 0x68))(*(long **)(param_1 + 0x108),0);
    (**(code **)(**(long **)(param_1 + 0x118) + 0x68))(*(long **)(param_1 + 0x118),0);
    (**(code **)(**(long **)(param_1 + 0x110) + 0x68))(*(long **)(param_1 + 0x110),0);
  }
  if (*(long *)(param_1 + 0x3f0) != 0) {
    uVar8 = 0;
    plVar7 = (long *)(param_1 + 0x2f0);
    plVar1 = (long *)(param_1 + 0x290);
    pLVar2 = (LightEventType *)(param_1 + 0x2a0);
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x348) + uVar8 * 0x130 + 0x48);
      if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
        psVar3 = (short *)(lVar9 + 0x1a);
        sVar12 = *(short *)(lVar9 + 0x1a);
LAB_02de2710:
        sVar5 = *psVar3;
        if (sVar5 == sVar12) {
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar16) {
            *psVar3 = sVar12 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_02de2744;
          bVar16 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02de2744:
          bVar16 = false;
        }
        if (!bVar16) goto code_r0x02de274c;
        if (*(long *)(lVar9 + 0x10) == 0) goto LAB_02de26e8;
        plVar14 = (long *)(*(long *)(lVar9 + 0x10) + -8);
        lVar9 = *(long *)(param_1 + 0x348) + uVar8 * 0x130;
        if (*(char *)(lVar9 + 0x128) == '\0') goto LAB_02de28e4;
        *(undefined1 *)(lVar9 + 0x128) = 0;
        lVar13 = *plVar7;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 == lVar13) {
          plVar15 = (long *)0x0;
          bVar16 = true;
        }
        else {
          lVar9 = nn::os::GetCurrentThread();
          do {
            if (*plVar7 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
                while (*plVar7 == 0) {
                  cVar6 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar16) {
                    *plVar7 = lVar9;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_02de27ec;
                }
              } while( true );
            }
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar16) {
              *plVar7 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_02de27ec:
          bVar16 = false;
          plVar15 = plVar7;
        }
        lVar9 = nn::os::GetCurrentThread();
        do {
          lVar13 = *plVar1;
          lVar10 = *(long *)(param_1 + 0x298);
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar13;
            *(long *)(param_1 + 0x298) = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          while ((lVar13 != 0 && (lVar9 != lVar13))) {
            nn::os::WaitLightEvent(pLVar2);
            do {
              lVar13 = *plVar1;
              lVar10 = *(long *)(param_1 + 0x298);
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar11) {
                *plVar1 = lVar13;
                *(long *)(param_1 + 0x298) = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          do {
            lVar4 = *plVar1;
            if (lVar4 != lVar13 || *(long *)(param_1 + 0x298) != lVar10) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto LAB_02de2864;
            }
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar13;
              *(long *)(param_1 + 0x294) = lVar10 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar11 = true;
LAB_02de2864:
          lVar13 = lVar4;
          lVar10 = *(long *)(param_1 + 0x298);
        } while (!bVar11);
        local_44[0] = 0;
        FUN_018f53e4(*(undefined8 *)(*(long *)(param_1 + 0x348) + uVar8 * 0x130 + 0x110),local_44);
        do {
          lVar9 = *plVar1;
          lVar13 = *(long *)(param_1 + 0x298);
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar9;
            *(long *)(param_1 + 0x298) = lVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          lVar10 = *plVar1;
          lVar4 = *(long *)(param_1 + 0x298);
          if (lVar10 != lVar9 || lVar4 != lVar13) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto joined_r0x02de28c8;
          }
          cVar6 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar9;
            *(long *)(param_1 + 0x294) = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar11 = true;
joined_r0x02de28c8:
        if (!bVar11) {
          do {
            lVar9 = *plVar1;
            lVar13 = *(long *)(param_1 + 0x298);
            if (lVar9 != lVar10 || lVar13 != lVar4) {
              bVar11 = false;
              ClearExclusiveLocal();
              lVar10 = lVar9;
              lVar4 = lVar13;
              goto joined_r0x02de28c8;
            }
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar10;
              *(long *)(param_1 + 0x294) = lVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar11 = true;
          lVar10 = lVar9;
          lVar4 = lVar13;
          goto joined_r0x02de28c8;
        }
        nn::os::SignalLightEvent(pLVar2);
        if (!bVar16) {
          *plVar15 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
        }
LAB_02de28e4:
        lVar9 = *(long *)(param_1 + 0x348) + uVar8 * 0x130;
        if (*(char *)(lVar9 + 0x12a) != '\0') {
          *(undefined1 *)(lVar9 + 0x12a) = 0;
          lVar13 = *plVar7;
          lVar9 = nn::os::GetCurrentThread();
          if (lVar9 == lVar13) {
            plVar15 = (long *)0x0;
            bVar16 = true;
          }
          else {
            lVar9 = nn::os::GetCurrentThread();
            do {
              if (*plVar7 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f8));
                  while (*plVar7 == 0) {
                    cVar6 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                    if (bVar16) {
                      *plVar7 = lVar9;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_02de2944;
                  }
                } while( true );
              }
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar16) {
                *plVar7 = lVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_02de2944:
            bVar16 = false;
            plVar15 = plVar7;
          }
          lVar9 = nn::os::GetCurrentThread();
          do {
            lVar13 = *plVar1;
            lVar10 = *(long *)(param_1 + 0x298);
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar13;
              *(long *)(param_1 + 0x298) = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            while ((lVar13 != 0 && (lVar9 != lVar13))) {
              nn::os::WaitLightEvent(pLVar2);
              do {
                lVar13 = *plVar1;
                lVar10 = *(long *)(param_1 + 0x298);
                cVar6 = '\x01';
                bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar11) {
                  *plVar1 = lVar13;
                  *(long *)(param_1 + 0x298) = lVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            do {
              lVar4 = *plVar1;
              if (lVar4 != lVar13 || *(long *)(param_1 + 0x298) != lVar10) {
                bVar11 = false;
                ClearExclusiveLocal();
                goto LAB_02de29fc;
              }
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar11) {
                *plVar1 = lVar13;
                *(long *)(param_1 + 0x294) = lVar10 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar11 = true;
LAB_02de29fc:
            lVar13 = lVar4;
            lVar10 = *(long *)(param_1 + 0x298);
          } while (!bVar11);
          local_48[0] = 0;
          FUN_018f53e4(*(undefined8 *)(*(long *)(param_1 + 0x348) + uVar8 * 0x130 + 0x118),local_48)
          ;
          do {
            lVar9 = *plVar1;
            lVar13 = *(long *)(param_1 + 0x298);
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar9;
              *(long *)(param_1 + 0x298) = lVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar10 = *plVar1;
            lVar4 = *(long *)(param_1 + 0x298);
            if (lVar10 != lVar9 || lVar4 != lVar13) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto joined_r0x02de2a60;
            }
            cVar6 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar11) {
              *plVar1 = lVar9;
              *(long *)(param_1 + 0x294) = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar11 = true;
joined_r0x02de2a60:
          if (!bVar11) {
            do {
              lVar9 = *plVar1;
              lVar13 = *(long *)(param_1 + 0x298);
              if (lVar9 != lVar10 || lVar13 != lVar4) {
                bVar11 = false;
                ClearExclusiveLocal();
                lVar10 = lVar9;
                lVar4 = lVar13;
                goto joined_r0x02de2a60;
              }
              cVar6 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar11) {
                *plVar1 = lVar10;
                *(long *)(param_1 + 0x294) = lVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar11 = true;
            lVar10 = lVar9;
            lVar4 = lVar13;
            goto joined_r0x02de2a60;
          }
          nn::os::SignalLightEvent(pLVar2);
          if (!bVar16) {
            *plVar15 = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
          }
        }
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
LAB_02de26e8:
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ulong *)(param_1 + 0x3f0));
  }
  return;
code_r0x02de274c:
  sVar12 = sVar5;
  if (sVar5 == 0) goto LAB_02de26e8;
  goto LAB_02de2710;
}


