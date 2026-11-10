/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cabc60; name: FUN_00cabc60
 */


undefined8 FUN_00cabc60(long param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  int *piVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  undefined8 *puVar21;
  
  lVar13 = *(long *)(param_1 + 0x120);
  uVar12 = *(uint *)(param_1 + 0x140);
  uVar15 = (ulong)uVar12;
  if (*(uint *)(lVar13 + 0x194) == 0xffffffff) {
    uVar20 = 1;
  }
  else {
    uVar20 = (uint)(*(ulong *)(lVar13 + 0x1a0) >> (uVar15 & 0x3f)) &
             (uint)(*(uint *)(lVar13 + 0x194) == uVar12);
  }
  if (*(char *)(lVar13 + 0x1d0) == '\0') {
    bVar11 = false;
    bVar9 = false;
  }
  else {
    if (*(long *)(lVar13 + 200) == 0) {
LAB_00cabcb8:
      bVar11 = false;
      bVar9 = false;
    }
    else {
      lVar16 = *(long *)(*(long *)(lVar13 + 200) + 0x78);
      lVar13 = *(long *)(lVar16 + 0x78);
      if (lVar13 == 0) goto LAB_00cabcb8;
      if ((int)uVar12 < 1) {
        uVar15 = 0;
      }
      if (1 < (uint)uVar15) {
        uVar15 = 2;
      }
      if (uVar15 < *(ulong *)(lVar13 + 0x140)) {
        plVar18 = (long *)(lVar13 + 0x180);
        lVar19 = nn::os::GetCurrentThread();
        do {
          lVar14 = *plVar18;
          lVar17 = *(long *)(lVar13 + 0x188);
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar14;
            *(long *)(lVar13 + 0x188) = lVar17;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00cac4e8:
        while ((lVar14 != 0 && (lVar19 != lVar14))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 400));
          do {
            lVar14 = *plVar18;
            lVar17 = *(long *)(lVar13 + 0x188);
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar11) {
              *plVar18 = lVar14;
              *(long *)(lVar13 + 0x188) = lVar17;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        do {
          lVar2 = *plVar18;
          if (lVar2 != lVar14 || *(long *)(lVar13 + 0x188) != lVar17) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00cac524;
          }
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar14;
            *(long *)(lVar13 + 0x184) = lVar17 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar11 = true;
LAB_00cac524:
        if (!bVar11) {
          lVar14 = lVar2;
          lVar17 = *(long *)(lVar13 + 0x188);
          goto LAB_00cac4e8;
        }
        *(ulong *)(lVar13 + 0x140) = uVar15;
        *(undefined2 *)(lVar13 + 0x176) = 0x101;
        do {
          lVar19 = *plVar18;
          lVar14 = *(long *)(lVar13 + 0x188);
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar19;
            *(long *)(lVar13 + 0x188) = lVar14;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar17 = *plVar18;
          lVar2 = *(long *)(lVar13 + 0x188);
          if (lVar17 != lVar19 || lVar2 != lVar14) {
            bVar11 = false;
            ClearExclusiveLocal();
            goto LAB_00cac668;
          }
          cVar7 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar11) {
            *plVar18 = lVar19;
            *(long *)(lVar13 + 0x184) = lVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar11 = true;
LAB_00cac668:
        if (!bVar11) {
          do {
            lVar19 = *plVar18;
            lVar14 = *(long *)(lVar13 + 0x188);
            if (lVar19 != lVar17 || lVar14 != lVar2) {
              bVar11 = false;
              ClearExclusiveLocal();
              goto joined_r0x00cac708;
            }
            cVar7 = '\x01';
            bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar11) {
              *plVar18 = lVar17;
              *(long *)(lVar13 + 0x184) = lVar2 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar11 = true;
joined_r0x00cac708:
          if (!bVar11) {
            do {
              lVar17 = *plVar18;
              lVar2 = *(long *)(lVar13 + 0x188);
              if (lVar17 != lVar19 || lVar2 != lVar14) {
                bVar11 = false;
                ClearExclusiveLocal();
                lVar19 = lVar17;
                lVar14 = lVar2;
                goto joined_r0x00cac708;
              }
              cVar7 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar11) {
                *plVar18 = lVar19;
                *(long *)(lVar13 + 0x184) = lVar14 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar11 = true;
            lVar19 = lVar17;
            lVar14 = lVar2;
            goto joined_r0x00cac708;
          }
        }
        nn::os::SignalLightEvent((LightEventType *)(lVar13 + 400));
        lVar13 = *(long *)(lVar16 + 0x78);
      }
      if (((*(char *)(lVar13 + 0x174) == '\0') || (*(char *)(lVar13 + 200) == '\0')) ||
         (*(char *)(lVar13 + 0x148) == '\0')) goto LAB_00cabcb8;
      bVar9 = *PTR_DAT_047e1fe0 != '\0';
      if ((ulong)(long)*(int *)(param_1 + 0x140) < *(ulong *)(lVar13 + 0x130)) {
        uVar12 = 0;
      }
      else {
        uVar12 = (uint)((ulong)(long)*(int *)(param_1 + 0x140) <= *(ulong *)(lVar13 + 0x138));
      }
      uVar20 = uVar20 | uVar12;
      bVar11 = true;
    }
    lVar13 = *(long *)(param_1 + 0x120);
  }
  uVar8 = (undefined1)uVar20;
  if ((lVar13 != 0) && (lVar13 = (**(code **)(*DAT_0485a020 + 0x110))(), lVar13 != 0)) {
    uVar12 = *(uint *)(*(long *)(param_1 + 0x120) + 0x198);
    if ((uVar12 != 0xffffffff) &&
       ((*(ulong *)(*(long *)(param_1 + 0x120) + 0x1a0) >> ((ulong)uVar12 & 0x3f) & 1) != 0)) {
      if (uVar12 != *(uint *)(param_1 + 0x14c)) {
        lVar16 = *(long *)(param_1 + 0x138);
        *(uint *)(param_1 + 0x14c) = uVar12;
        for (lVar13 = *(long *)(lVar16 + 0x70); lVar13 != lVar16 + 0x68;
            lVar13 = *(long *)(lVar13 + 8)) {
          plVar5 = *(long **)(*(long *)(lVar13 + 0x10) + 0x58);
          for (plVar18 = *(long **)(*(long *)(lVar13 + 0x10) + 0x50); plVar18 != plVar5;
              plVar18 = plVar18 + 1) {
            lVar19 = *plVar18;
            piVar3 = *(int **)(lVar19 + 0x90);
            piVar6 = *(int **)(lVar19 + 0x98);
            if (piVar3 != piVar6) {
              if (*piVar3 != 1) {
                if (*piVar3 == 3) {
                  *(undefined1 *)(lVar19 + 0x19a) = 1;
                }
                *piVar3 = 0;
              }
              piVar1 = piVar3 + 1;
              if (piVar1 != piVar6) {
                if (*piVar1 != 1) {
                  if (*piVar1 == 3) {
                    *(undefined1 *)(lVar19 + 0x19a) = 1;
                  }
                  *piVar1 = 0;
                }
                piVar1 = piVar3 + 2;
                if (piVar1 != piVar6) {
                  if (*piVar1 != 1) {
                    if (*piVar1 == 3) {
                      *(undefined1 *)(lVar19 + 0x19a) = 1;
                    }
                    *piVar1 = 0;
                  }
                  for (piVar3 = piVar3 + 3; piVar3 != piVar6; piVar3 = piVar3 + 1) {
                    if (*piVar3 != 1) {
                      if (*piVar3 == 3) {
                        *(undefined1 *)(lVar19 + 0x19a) = 1;
                      }
                      *piVar3 = 0;
                    }
                  }
                }
              }
            }
            *(undefined1 *)(lVar19 + 0x19c) = 0;
          }
        }
        *(undefined1 *)(param_1 + 0x147) = 0;
      }
      if ((bool)*(char *)(param_1 + 0x148) != bVar9) {
        lVar16 = *(long *)(param_1 + 0x138);
        *(bool *)(param_1 + 0x148) = bVar9;
        for (lVar13 = *(long *)(lVar16 + 0x70); lVar13 != lVar16 + 0x68;
            lVar13 = *(long *)(lVar13 + 8)) {
          plVar5 = *(long **)(*(long *)(lVar13 + 0x10) + 0x58);
          for (plVar18 = *(long **)(*(long *)(lVar13 + 0x10) + 0x50); plVar18 != plVar5;
              plVar18 = plVar18 + 1) {
            lVar19 = *plVar18;
            piVar3 = *(int **)(lVar19 + 0x90);
            piVar6 = *(int **)(lVar19 + 0x98);
            if (piVar3 != piVar6) {
              if (*piVar3 != 1) {
                if (*piVar3 == 3) {
                  *(undefined1 *)(lVar19 + 0x19a) = 1;
                }
                *piVar3 = 0;
              }
              piVar1 = piVar3 + 1;
              if (piVar1 != piVar6) {
                if (*piVar1 != 1) {
                  if (*piVar1 == 3) {
                    *(undefined1 *)(lVar19 + 0x19a) = 1;
                  }
                  *piVar1 = 0;
                }
                piVar1 = piVar3 + 2;
                if (piVar1 != piVar6) {
                  if (*piVar1 != 1) {
                    if (*piVar1 == 3) {
                      *(undefined1 *)(lVar19 + 0x19a) = 1;
                    }
                    *piVar1 = 0;
                  }
                  for (piVar3 = piVar3 + 3; piVar3 != piVar6; piVar3 = piVar3 + 1) {
                    if (*piVar3 != 1) {
                      if (*piVar3 == 3) {
                        *(undefined1 *)(lVar19 + 0x19a) = 1;
                      }
                      *piVar3 = 0;
                    }
                  }
                }
              }
            }
            *(undefined1 *)(lVar19 + 0x19c) = 0;
          }
        }
        *(undefined1 *)(param_1 + 0x147) = 0;
      }
      if (*(char *)(param_1 + 0x149) != '\0') {
        lVar16 = *(long *)(param_1 + 0x138);
        *(undefined1 *)(param_1 + 0x149) = 0;
        for (lVar13 = *(long *)(lVar16 + 0x70); lVar13 != lVar16 + 0x68;
            lVar13 = *(long *)(lVar13 + 8)) {
          plVar5 = *(long **)(*(long *)(lVar13 + 0x10) + 0x58);
          for (plVar18 = *(long **)(*(long *)(lVar13 + 0x10) + 0x50); plVar18 != plVar5;
              plVar18 = plVar18 + 1) {
            lVar19 = *plVar18;
            piVar3 = *(int **)(lVar19 + 0x90);
            piVar6 = *(int **)(lVar19 + 0x98);
            if (piVar3 != piVar6) {
              if (*piVar3 != 1) {
                if (*piVar3 == 3) {
                  *(undefined1 *)(lVar19 + 0x19a) = 1;
                }
                *piVar3 = 0;
              }
              piVar1 = piVar3 + 1;
              if (piVar1 != piVar6) {
                if (*piVar1 != 1) {
                  if (*piVar1 == 3) {
                    *(undefined1 *)(lVar19 + 0x19a) = 1;
                  }
                  *piVar1 = 0;
                }
                piVar1 = piVar3 + 2;
                if (piVar1 != piVar6) {
                  if (*piVar1 != 1) {
                    if (*piVar1 == 3) {
                      *(undefined1 *)(lVar19 + 0x19a) = 1;
                    }
                    *piVar1 = 0;
                  }
                  for (piVar3 = piVar3 + 3; piVar3 != piVar6; piVar3 = piVar3 + 1) {
                    if (*piVar3 != 1) {
                      if (*piVar3 == 3) {
                        *(undefined1 *)(lVar19 + 0x19a) = 1;
                      }
                      *piVar3 = 0;
                    }
                  }
                }
              }
            }
            *(undefined1 *)(lVar19 + 0x19c) = 0;
          }
        }
        *(undefined1 *)(param_1 + 0x147) = 0;
      }
      lVar13 = *(long *)(param_1 + 0x138) + 0x68;
      lVar16 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
      if (uVar12 == *(uint *)(param_1 + 0x140)) {
        if (lVar16 != lVar13) {
          *(undefined1 *)(*(long *)(lVar16 + 0x10) + 0x241) = 1;
          lVar16 = *(long *)(lVar16 + 8);
          if (lVar16 != lVar13) {
            *(undefined1 *)(*(long *)(lVar16 + 0x10) + 0x241) = 1;
            lVar16 = *(long *)(lVar16 + 8);
            if (lVar16 != lVar13) {
              lVar19 = *(long *)(lVar16 + 0x10);
              while( true ) {
                *(undefined1 *)(lVar19 + 0x241) = 1;
                lVar16 = *(long *)(lVar16 + 8);
                if (lVar16 == lVar13) break;
                lVar19 = *(long *)(lVar16 + 0x10);
              }
            }
          }
        }
        cVar7 = *(char *)(param_1 + 0x147);
        if (*(char *)(param_1 + 0x148) == '\0') {
          if (uVar20 != 0) {
            if (cVar7 == '\0') {
              return 0;
            }
            lVar16 = *(long *)(param_1 + 0x138);
            for (lVar13 = *(long *)(lVar16 + 0x70); lVar13 != lVar16 + 0x68;
                lVar13 = *(long *)(lVar13 + 8)) {
              plVar5 = *(long **)(*(long *)(lVar13 + 0x10) + 0x58);
              for (plVar18 = *(long **)(*(long *)(lVar13 + 0x10) + 0x50); plVar18 != plVar5;
                  plVar18 = plVar18 + 1) {
                lVar19 = *plVar18;
                piVar3 = *(int **)(lVar19 + 0x90);
                piVar6 = *(int **)(lVar19 + 0x98);
                if (piVar3 != piVar6) {
                  if (*piVar3 != 1) {
                    if (*piVar3 == 3) {
                      *(undefined1 *)(lVar19 + 0x19a) = 1;
                    }
                    *piVar3 = 0;
                  }
                  piVar1 = piVar3 + 1;
                  if (piVar1 != piVar6) {
                    if (*piVar1 != 1) {
                      if (*piVar1 == 3) {
                        *(undefined1 *)(lVar19 + 0x19a) = 1;
                      }
                      *piVar1 = 0;
                    }
                    piVar1 = piVar3 + 2;
                    if (piVar1 != piVar6) {
                      if (*piVar1 != 1) {
                        if (*piVar1 == 3) {
                          *(undefined1 *)(lVar19 + 0x19a) = 1;
                        }
                        *piVar1 = 0;
                      }
                      for (piVar3 = piVar3 + 3; piVar3 != piVar6; piVar3 = piVar3 + 1) {
                        if (*piVar3 != 1) {
                          if (*piVar3 == 3) {
                            *(undefined1 *)(lVar19 + 0x19a) = 1;
                          }
                          *piVar3 = 0;
                        }
                      }
                    }
                  }
                }
                *(undefined1 *)(lVar19 + 0x19c) = 0;
              }
            }
            goto LAB_00cac7b4;
          }
          if (cVar7 != '\0') {
            return 0;
          }
          lVar13 = *(long *)(param_1 + 0x138);
          for (lVar16 = *(long *)(lVar13 + 0x70); lVar16 != lVar13 + 0x68;
              lVar16 = *(long *)(lVar16 + 8)) {
            lVar19 = *(long *)(lVar16 + 0x10);
            uVar10 = (**(code **)(*DAT_0485a020 + 0x110))();
            puVar21 = *(undefined8 **)(lVar19 + 0x50);
            puVar4 = *(undefined8 **)(lVar19 + 0x58);
            if ((puVar21 != puVar4) && (FUN_00cac8ac(*puVar21,uVar10,0,1), puVar21 + 1 != puVar4)) {
              FUN_00cac8ac(puVar21[1],uVar10,0,1);
              for (puVar21 = puVar21 + 2; puVar21 != puVar4; puVar21 = puVar21 + 1) {
                FUN_00cac8ac(*puVar21,uVar10,0,1);
              }
            }
          }
        }
        else {
          if (cVar7 != '\0') {
            return 0;
          }
          lVar13 = *(long *)(param_1 + 0x138);
          for (lVar16 = *(long *)(lVar13 + 0x70); lVar16 != lVar13 + 0x68;
              lVar16 = *(long *)(lVar16 + 8)) {
            lVar19 = *(long *)(lVar16 + 0x10);
            uVar10 = (**(code **)(*DAT_0485a020 + 0x110))();
            puVar21 = *(undefined8 **)(lVar19 + 0x50);
            puVar4 = *(undefined8 **)(lVar19 + 0x58);
            if ((puVar21 != puVar4) && (FUN_00cac8ac(*puVar21,uVar10,1,2), puVar21 + 1 != puVar4)) {
              FUN_00cac8ac(puVar21[1],uVar10,1,2);
              for (puVar21 = puVar21 + 2; puVar21 != puVar4; puVar21 = puVar21 + 1) {
                FUN_00cac8ac(*puVar21,uVar10,1,2);
              }
            }
          }
        }
LAB_00cac29c:
        *(undefined1 *)(param_1 + 0x147) = 1;
        return 0;
      }
      if (lVar16 != lVar13) {
        *(undefined1 *)(*(long *)(lVar16 + 0x10) + 0x241) = uVar8;
        for (lVar16 = *(long *)(lVar16 + 8); lVar16 != lVar13; lVar16 = *(long *)(lVar16 + 8)) {
          *(undefined1 *)(*(long *)(lVar16 + 0x10) + 0x241) = uVar8;
        }
      }
      if (uVar20 == 0) {
        return 1;
      }
      if ((!bVar11) || (*(char *)(param_1 + 0x148) != '\0')) {
        if (*(char *)(param_1 + 0x147) != '\0') {
          return 0;
        }
        lVar13 = *(long *)(param_1 + 0x138);
        for (lVar16 = *(long *)(lVar13 + 0x70); lVar16 != lVar13 + 0x68;
            lVar16 = *(long *)(lVar16 + 8)) {
          lVar19 = *(long *)(lVar16 + 0x10);
          uVar10 = (**(code **)(*DAT_0485a020 + 0x110))();
          puVar21 = *(undefined8 **)(lVar19 + 0x50);
          puVar4 = *(undefined8 **)(lVar19 + 0x58);
          if ((puVar21 != puVar4) && (FUN_00cac8ac(*puVar21,uVar10,1,1), puVar21 + 1 != puVar4)) {
            FUN_00cac8ac(puVar21[1],uVar10,1,1);
            for (puVar21 = puVar21 + 2; puVar21 != puVar4; puVar21 = puVar21 + 1) {
              FUN_00cac8ac(*puVar21,uVar10,1,1);
            }
          }
        }
        goto LAB_00cac29c;
      }
      if (*(char *)(param_1 + 0x147) == '\0') {
        return 0;
      }
      lVar16 = *(long *)(param_1 + 0x138);
      for (lVar13 = *(long *)(lVar16 + 0x70); lVar13 != lVar16 + 0x68;
          lVar13 = *(long *)(lVar13 + 8)) {
        plVar5 = *(long **)(*(long *)(lVar13 + 0x10) + 0x58);
        for (plVar18 = *(long **)(*(long *)(lVar13 + 0x10) + 0x50); plVar18 != plVar5;
            plVar18 = plVar18 + 1) {
          lVar19 = *plVar18;
          piVar3 = *(int **)(lVar19 + 0x90);
          piVar6 = *(int **)(lVar19 + 0x98);
          if (piVar3 != piVar6) {
            if (*piVar3 != 1) {
              if (*piVar3 == 3) {
                *(undefined1 *)(lVar19 + 0x19a) = 1;
              }
              *piVar3 = 0;
            }
            piVar1 = piVar3 + 1;
            if (piVar1 != piVar6) {
              if (*piVar1 != 1) {
                if (*piVar1 == 3) {
                  *(undefined1 *)(lVar19 + 0x19a) = 1;
                }
                *piVar1 = 0;
              }
              piVar1 = piVar3 + 2;
              if (piVar1 != piVar6) {
                if (*piVar1 != 1) {
                  if (*piVar1 == 3) {
                    *(undefined1 *)(lVar19 + 0x19a) = 1;
                  }
                  *piVar1 = 0;
                }
                for (piVar3 = piVar3 + 3; piVar3 != piVar6; piVar3 = piVar3 + 1) {
                  if (*piVar3 != 1) {
                    if (*piVar3 == 3) {
                      *(undefined1 *)(lVar19 + 0x19a) = 1;
                    }
                    *piVar3 = 0;
                  }
                }
              }
            }
          }
          *(undefined1 *)(lVar19 + 0x19c) = 0;
        }
      }
      goto LAB_00cac7b4;
    }
  }
  lVar16 = *(long *)(param_1 + 0x138);
  for (lVar13 = *(long *)(lVar16 + 0x70); lVar13 != lVar16 + 0x68; lVar13 = *(long *)(lVar13 + 8)) {
    *(undefined1 *)(*(long *)(lVar13 + 0x10) + 0x241) = uVar8;
  }
  if (uVar20 == 0) {
    return 1;
  }
  if (*(char *)(param_1 + 0x147) == '\0') {
    return 0;
  }
  lVar16 = *(long *)(param_1 + 0x138);
  for (lVar13 = *(long *)(lVar16 + 0x70); lVar13 != lVar16 + 0x68; lVar13 = *(long *)(lVar13 + 8)) {
    plVar5 = *(long **)(*(long *)(lVar13 + 0x10) + 0x58);
    for (plVar18 = *(long **)(*(long *)(lVar13 + 0x10) + 0x50); plVar18 != plVar5;
        plVar18 = plVar18 + 1) {
      lVar19 = *plVar18;
      piVar3 = *(int **)(lVar19 + 0x90);
      piVar6 = *(int **)(lVar19 + 0x98);
      if (piVar3 != piVar6) {
        if (*piVar3 != 1) {
          if (*piVar3 == 3) {
            *(undefined1 *)(lVar19 + 0x19a) = 1;
          }
          *piVar3 = 0;
        }
        piVar1 = piVar3 + 1;
        if (piVar1 != piVar6) {
          if (*piVar1 != 1) {
            if (*piVar1 == 3) {
              *(undefined1 *)(lVar19 + 0x19a) = 1;
            }
            *piVar1 = 0;
          }
          piVar1 = piVar3 + 2;
          if (piVar1 != piVar6) {
            if (*piVar1 != 1) {
              if (*piVar1 == 3) {
                *(undefined1 *)(lVar19 + 0x19a) = 1;
              }
              *piVar1 = 0;
            }
            for (piVar3 = piVar3 + 3; piVar3 != piVar6; piVar3 = piVar3 + 1) {
              if (*piVar3 != 1) {
                if (*piVar3 == 3) {
                  *(undefined1 *)(lVar19 + 0x19a) = 1;
                }
                *piVar3 = 0;
              }
            }
          }
        }
      }
      *(undefined1 *)(lVar19 + 0x19c) = 0;
    }
  }
LAB_00cac7b4:
  *(undefined1 *)(param_1 + 0x147) = 0;
  return 0;
}


