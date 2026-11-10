/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01292394; name: FUN_01292394
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01292394(long param_1,long *param_2)

{
  long *plVar1;
  LightEventType *pLVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  
  if ((char)*param_2 != '\0') {
    iVar5 = *(int *)((long)param_2 + 4);
    plVar1 = (long *)(param_1 + 0xd70);
    lVar12 = nn::os::GetCurrentThread();
    do {
      lVar15 = *plVar1;
      lVar24 = *(long *)(param_1 + 0xd78);
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar15;
        *(long *)(param_1 + 0xd78) = lVar24;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    pLVar2 = (LightEventType *)(param_1 + 0xd80);
LAB_012923e0:
    while ((lVar15 != 0 && (lVar12 != lVar15))) {
      nn::os::WaitLightEvent(pLVar2);
      do {
        lVar15 = *plVar1;
        lVar24 = *(long *)(param_1 + 0xd78);
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar15;
          *(long *)(param_1 + 0xd78) = lVar24;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    do {
      lVar17 = *plVar1;
      if (lVar17 != lVar15 || *(long *)(param_1 + 0xd78) != lVar24) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_01292410;
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar15;
        *(long *)(param_1 + 0xd74) = lVar24 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar14 = true;
LAB_01292410:
    if (!bVar14) {
      lVar15 = lVar17;
      lVar24 = *(long *)(param_1 + 0xd78);
      goto LAB_012923e0;
    }
    lVar12 = *(long *)(param_1 + 0x38);
    lVar15 = *(long *)(param_1 + 0x40);
    do {
      lVar24 = *plVar1;
      lVar17 = *(long *)(param_1 + 0xd78);
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar24;
        *(long *)(param_1 + 0xd78) = lVar17;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      lVar26 = *plVar1;
      lVar4 = *(long *)(param_1 + 0xd78);
      if (lVar26 != lVar24 || lVar4 != lVar17) {
        bVar14 = false;
        ClearExclusiveLocal();
        goto LAB_01292480;
      }
      cVar6 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = lVar24;
        *(long *)(param_1 + 0xd74) = lVar17 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar14 = true;
LAB_01292480:
    if (!bVar14) {
      do {
        lVar24 = *plVar1;
        lVar17 = *(long *)(param_1 + 0xd78);
        if (lVar24 != lVar26 || lVar17 != lVar4) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto joined_r0x01292d40;
        }
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar26;
          *(long *)(param_1 + 0xd74) = lVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar14 = true;
joined_r0x01292d40:
      if (!bVar14) {
        do {
          lVar26 = *plVar1;
          lVar4 = *(long *)(param_1 + 0xd78);
          if (lVar26 != lVar24 || lVar4 != lVar17) {
            bVar14 = false;
            ClearExclusiveLocal();
            lVar24 = lVar26;
            lVar17 = lVar4;
            goto joined_r0x01292d40;
          }
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = lVar24;
            *(long *)(param_1 + 0xd74) = lVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar14 = true;
        lVar24 = lVar26;
        lVar17 = lVar4;
        goto joined_r0x01292d40;
      }
    }
    nn::os::SignalLightEvent(pLVar2);
    if ((ulong)(long)iVar5 < (ulong)((lVar15 - lVar12 >> 4) * 0x34f72c234f72c235)) {
      lVar12 = nn::os::GetCurrentThread();
      while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar12;
          *(undefined8 *)(param_1 + 0xd78) = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_012924b0;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent(pLVar2);
      do {
        if (*plVar1 != 0 || *(long *)(param_1 + 0xd78) != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar2);
            while (*plVar1 == 0 && *(long *)(param_1 + 0xd78) == 0) {
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar14) {
                *plVar1 = lVar12;
                *(undefined8 *)(param_1 + 0xd78) = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_012924b0;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar12;
          *(undefined8 *)(param_1 + 0xd78) = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_012924b0:
      uVar27 = *(ulong *)(*(long *)(param_1 + 0x38) + (long)*(int *)((long)param_2 + 4) * 0x1d0 +
                         0x1c8);
      lVar15 = (*param_2 >> 0x20) * 0x1d0;
      lVar12 = *(long *)(param_1 + 0x38) + lVar15;
      *(int *)(lVar12 + 0x1c0) = *(int *)(lVar12 + 0x1c0) + -1;
      lVar12 = *(long *)(param_1 + 0x38);
      if (*(int *)(lVar12 + lVar15 + 0x1c0) == 0) {
        plVar29 = *(long **)(param_1 + 0xd90);
        plVar28 = *(long **)(param_1 + 0xd98);
        lVar15 = (long)*(int *)((long)param_2 + 4);
        if (plVar29 != plVar28) {
          plVar13 = (long *)*plVar29;
          lVar24 = lVar12 + lVar15 * 0x1d0;
          if (plVar13[1] == uVar27) {
            (**(code **)(*plVar13 + 8))(plVar13,param_2,lVar24);
          }
          if (plVar29 + 1 != plVar28) {
            plVar13 = (long *)plVar29[1];
            if (plVar13[1] == uVar27) {
              (**(code **)(*plVar13 + 8))(plVar13,param_2,lVar24);
            }
            if (plVar29 + 2 != plVar28) {
              plVar13 = (long *)plVar29[2];
              if (plVar13[1] == uVar27) {
                (**(code **)(*plVar13 + 8))(plVar13,param_2,lVar24);
              }
              if (plVar29 + 3 != plVar28) {
                plVar13 = (long *)plVar29[3];
                if (plVar13[1] == uVar27) {
                  (**(code **)(*plVar13 + 8))(plVar13,param_2,lVar24);
                }
                if (plVar29 + 4 != plVar28) {
                  plVar13 = (long *)plVar29[4];
                  if (plVar13[1] == uVar27) {
                    (**(code **)(*plVar13 + 8))(plVar13,param_2,lVar24);
                  }
                  for (plVar29 = plVar29 + 5; plVar29 != plVar28; plVar29 = plVar29 + 1) {
                    plVar13 = (long *)*plVar29;
                    if (plVar13[1] == uVar27) {
                      (**(code **)(*plVar13 + 8))(plVar13,param_2,lVar24);
                    }
                  }
                }
              }
            }
          }
        }
        if ((uVar27 < 0x20) && (uVar18 = *(ulong *)(param_1 + uVar27 * 0x68 + 0x78), uVar18 != 0)) {
          uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
          uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
          uVar16 = *(ulong *)(lVar12 + lVar15 * 0x1d0 + 8);
          uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar19 < 2) {
            uVar22 = uVar18 - 1 & uVar16;
          }
          else {
            uVar22 = uVar16;
            if (uVar18 <= uVar16) {
              uVar22 = 0;
              if (uVar18 != 0) {
                uVar22 = uVar16 / uVar18;
              }
              uVar22 = uVar16 - uVar22 * uVar18;
            }
          }
          plVar29 = (long *)(param_1 + uVar27 * 0x68 + 0x70);
          lVar24 = *plVar29;
          puVar20 = *(undefined8 **)(lVar24 + uVar22 * 8);
          if ((puVar20 != (undefined8 *)0x0) && (plVar28 = (long *)*puVar20, plVar28 != (long *)0x0)
             ) {
            uVar21 = uVar18 - 1;
            if (uVar19 < 2) {
LAB_01292b0c:
              if (plVar28[1] == uVar16) {
                if (plVar28[2] != uVar16) goto LAB_01292b24;
LAB_012926d0:
                if (uVar19 < 2) {
                  uVar16 = uVar21 & uVar16;
                }
                else if (uVar18 <= uVar16) {
                  uVar22 = 0;
                  if (uVar18 != 0) {
                    uVar22 = uVar16 / uVar18;
                  }
                  uVar16 = uVar16 - uVar22 * uVar18;
                }
                plVar13 = *(long **)(lVar24 + uVar16 * 8);
                for (plVar25 = (long *)*plVar13; plVar25 != plVar28; plVar25 = (long *)*plVar25) {
                  plVar13 = plVar25;
                }
                if (plVar13 == (long *)(param_1 + uVar27 * 0x68 + 0xa0)) {
LAB_01292730:
                  if (*plVar28 != 0) {
                    uVar22 = *(ulong *)(*plVar28 + 8);
                    if (uVar19 < 2) {
                      uVar22 = uVar22 & uVar21;
                    }
                    else if (uVar18 <= uVar22) {
                      uVar23 = 0;
                      if (uVar18 != 0) {
                        uVar23 = uVar22 / uVar18;
                      }
                      uVar22 = uVar22 - uVar23 * uVar18;
                    }
                    if (uVar22 == uVar16) goto LAB_01292760;
                  }
                  *(undefined8 *)(lVar24 + uVar16 * 8) = 0;
                }
                else {
                  uVar22 = plVar13[1];
                  if (uVar19 < 2) {
                    uVar22 = uVar22 & uVar21;
                  }
                  else if (uVar18 <= uVar22) {
                    uVar23 = 0;
                    if (uVar18 != 0) {
                      uVar23 = uVar22 / uVar18;
                    }
                    uVar22 = uVar22 - uVar23 * uVar18;
                  }
                  if (uVar22 != uVar16) goto LAB_01292730;
                }
LAB_01292760:
                lVar24 = *plVar28;
                if (lVar24 != 0) {
                  uVar22 = *(ulong *)(lVar24 + 8);
                  if (uVar19 < 2) {
                    uVar22 = uVar22 & uVar21;
                  }
                  else if (uVar18 <= uVar22) {
                    uVar19 = 0;
                    if (uVar18 != 0) {
                      uVar19 = uVar22 / uVar18;
                    }
                    uVar22 = uVar22 - uVar19 * uVar18;
                  }
                  if (uVar22 != uVar16) {
                    *(long **)(*plVar29 + uVar22 * 8) = plVar13;
                    lVar24 = *plVar28;
                  }
                }
                lVar17 = param_1 + uVar27 * 0x68;
                *plVar13 = lVar24;
                *plVar28 = 0;
                *(long *)(lVar17 + 200) = *(long *)(lVar17 + 200) + -1;
                if ((long *)plVar28[5] != (long *)0x0) {
                  (**(code **)(*(long *)plVar28[5] + 0x20))();
                }
                plVar29 = *(long **)(param_1 + uVar27 * 0x68 + 0xa8);
                uVar27 = (**(code **)(*plVar29 + 0xf8))(plVar29);
                if (((uVar27 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar29 + 0x18))(plVar29,plVar28,0x38,8);
                }
                else {
                  FUN_00c48fe8(plVar29,plVar28,0x38,8);
                }
              }
              else if ((plVar28[1] & uVar21) == uVar22) goto LAB_01292b24;
              goto LAB_012927f8;
            }
            do {
              uVar23 = plVar28[1];
              if (uVar23 == uVar16) {
                if (plVar28[2] == uVar16) goto LAB_012926d0;
              }
              else {
                if (uVar18 <= uVar23) {
                  uVar7 = 0;
                  if (uVar18 != 0) {
                    uVar7 = uVar23 / uVar18;
                  }
                  uVar23 = uVar23 - uVar7 * uVar18;
                }
                if (uVar23 != uVar22) break;
              }
              plVar28 = (long *)*plVar28;
            } while (plVar28 != (long *)0x0);
          }
        }
LAB_012927f8:
        plVar29 = (long *)(lVar12 + lVar15 * 0x1d0 + 0xd8);
        if (*plVar29 != 0) {
          puVar20 = (undefined8 *)(lVar12 + lVar15 * 0x1d0 + 0xb0);
          plVar28 = (long *)*puVar20;
          if (plVar28 != (long *)0x0) {
            plVar13 = (long *)*plVar28;
            puVar3 = (undefined8 *)(lVar12 + lVar15 * 0x1d0 + 0xb8);
            if ((long *)plVar28[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar28[5] + 0x20))();
            }
            plVar25 = (long *)*puVar3;
            uVar27 = (**(code **)(*plVar25 + 0xf8))(plVar25);
            if (((uVar27 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
              (**(code **)(*plVar25 + 0x18))(plVar25,plVar28,0x38,8);
            }
            else {
              FUN_00c48fe8(plVar25,plVar28,0x38,8);
            }
            while (plVar13 != (long *)0x0) {
              plVar28 = (long *)*plVar13;
              if ((long *)plVar13[5] != (long *)0x0) {
                (**(code **)(*(long *)plVar13[5] + 0x20))();
              }
              plVar25 = (long *)*puVar3;
              uVar27 = (**(code **)(*plVar25 + 0xf8))(plVar25);
              if (((uVar27 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
                (**(code **)(*plVar25 + 0x18))(plVar25,plVar13,0x38,8);
                plVar13 = plVar28;
              }
              else {
                FUN_00c48fe8(plVar25,plVar13,0x38,8);
                plVar13 = plVar28;
              }
            }
          }
          *puVar20 = 0;
          uVar27 = *(ulong *)(lVar12 + lVar15 * 0x1d0 + 0x88);
          if (uVar27 != 0) {
            plVar28 = (long *)(lVar12 + lVar15 * 0x1d0 + 0x80);
            uVar18 = uVar27 & 3;
            if (uVar27 - 1 < 3) {
              uVar19 = 0;
            }
            else {
              uVar19 = 0;
              do {
                *(undefined8 *)(*plVar28 + uVar19 * 8) = 0;
                *(undefined8 *)(*plVar28 + uVar19 * 8 + 8) = 0;
                *(undefined8 *)(*plVar28 + uVar19 * 8 + 0x10) = 0;
                lVar24 = uVar19 * 8;
                uVar19 = uVar19 + 4;
                *(undefined8 *)(*plVar28 + lVar24 + 0x18) = 0;
              } while ((uVar27 & 0xfffffffffffffffc) != uVar19);
            }
            if (uVar18 != 0) {
              lVar24 = uVar19 << 3;
              do {
                *(undefined8 *)(*plVar28 + lVar24) = 0;
                uVar18 = uVar18 - 1;
                lVar24 = lVar24 + 8;
              } while (uVar18 != 0);
            }
          }
          *plVar29 = 0;
        }
        lVar24 = lVar12 + lVar15 * 0x1d0;
        if (*(long *)(lVar24 + 0x140) != 0) {
          lVar17 = lVar12 + lVar15 * 0x1d0;
          puVar20 = *(undefined8 **)(lVar17 + 0x118);
          if (puVar20 != (undefined8 *)0x0) {
            plVar29 = (long *)*puVar20;
            puVar3 = (undefined8 *)(lVar12 + lVar15 * 0x1d0 + 0x120);
            if ((long *)puVar20[5] != (long *)0x0) {
              (**(code **)(*(long *)puVar20[5] + 0x20))();
            }
            plVar28 = (long *)*puVar3;
            uVar27 = (**(code **)(*plVar28 + 0xf8))(plVar28);
            if (((uVar27 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
              (**(code **)(*plVar28 + 0x18))(plVar28,puVar20,0x40,0x10);
            }
            else {
              FUN_00c48fe8(plVar28,puVar20,0x40,0x10);
            }
            if (plVar29 != (long *)0x0) {
              plVar28 = (long *)*plVar29;
              if ((long *)plVar29[5] != (long *)0x0) {
                (**(code **)(*(long *)plVar29[5] + 0x20))();
              }
              plVar13 = (long *)*puVar3;
              uVar27 = (**(code **)(*plVar13 + 0xf8))(plVar13);
              if (((uVar27 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
                (**(code **)(*plVar13 + 0x18))(plVar13,plVar29,0x40,0x10);
              }
              else {
                FUN_00c48fe8(plVar13,plVar29,0x40,0x10);
              }
              while (plVar28 != (long *)0x0) {
                plVar29 = (long *)*plVar28;
                if ((long *)plVar28[5] != (long *)0x0) {
                  (**(code **)(*(long *)plVar28[5] + 0x20))();
                }
                plVar13 = (long *)*puVar3;
                uVar27 = (**(code **)(*plVar13 + 0xf8))(plVar13);
                if (((uVar27 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar13 + 0x18))(plVar13,plVar28,0x40,0x10);
                  plVar28 = plVar29;
                }
                else {
                  FUN_00c48fe8(plVar13,plVar28,0x40,0x10);
                  plVar28 = plVar29;
                }
              }
            }
          }
          *(undefined8 *)(lVar17 + 0x118) = 0;
          lVar17 = *(long *)(lVar12 + lVar15 * 0x1d0 + 0xf0);
          if (lVar17 != 0) {
            plVar29 = (long *)(lVar12 + lVar15 * 0x1d0 + 0xe8);
            *(undefined8 *)*plVar29 = 0;
            if ((((lVar17 != 1) && (*(undefined8 *)(*plVar29 + 8) = 0, lVar17 != 2)) &&
                (*(undefined8 *)(*plVar29 + 0x10) = 0, lVar17 != 3)) &&
               (*(undefined8 *)(*plVar29 + 0x18) = 0, lVar17 != 4)) {
              lVar26 = 4;
              do {
                *(undefined8 *)(*plVar29 + lVar26 * 8) = 0;
                lVar26 = lVar26 + 1;
              } while (lVar17 != lVar26);
            }
          }
          *(undefined8 *)(lVar24 + 0x140) = 0;
        }
        lVar24 = lVar12 + lVar15 * 0x1d0;
        if (*(long *)(lVar24 + 0x1a8) != 0) {
          plVar29 = (long *)(lVar24 + 0x150);
          lVar26 = lVar12 + lVar15 * 0x1d0;
          FUN_0108aea4(plVar29,*(undefined8 *)(lVar26 + 0x180));
          lVar17 = *(long *)(lVar26 + 0x158);
          *(undefined8 *)(lVar26 + 0x180) = 0;
          if (((lVar17 != 0) && (*(undefined8 *)*plVar29 = 0, lVar17 != 1)) &&
             ((*(undefined8 *)(*plVar29 + 8) = 0, lVar17 != 2 &&
              (*(undefined8 *)(*plVar29 + 0x10) = 0, lVar17 != 3)))) {
            lVar26 = 3;
            do {
              *(undefined8 *)(*plVar29 + lVar26 * 8) = 0;
              lVar26 = lVar26 + 1;
            } while (lVar17 != lVar26);
          }
          *(undefined8 *)(lVar24 + 0x1a8) = 0;
        }
        uVar11 = _UNK_03cabe58;
        uVar10 = _DAT_03cabe50;
        uVar9 = _UNK_03caa988;
        uVar8 = _DAT_03caa980;
        lVar12 = lVar12 + lVar15 * 0x1d0;
        *(undefined8 *)(lVar12 + 0x78) = 0;
        *(undefined8 *)(lVar12 + 0x70) = 0;
        *(undefined1 *)(lVar12 + 0x1b8) = 0;
        *(undefined8 *)(lVar12 + 0x58) = uVar9;
        *(undefined8 *)(lVar12 + 0x50) = uVar8;
        *(undefined8 *)(lVar12 + 0x68) = uVar11;
        *(undefined8 *)(lVar12 + 0x60) = uVar10;
      }
      do {
        lVar12 = *plVar1;
        lVar15 = *(long *)(param_1 + 0xd78);
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = lVar12;
          *(long *)(param_1 + 0xd78) = lVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar24 = *plVar1;
        lVar17 = *(long *)(param_1 + 0xd78);
        if (lVar24 != lVar12 || lVar17 != lVar15) {
          bVar14 = false;
          ClearExclusiveLocal();
          goto LAB_012929f4;
        }
        cVar6 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar14) {
          *plVar1 = 0;
          *(long *)(param_1 + 0xd74) = lVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar14 = true;
LAB_012929f4:
      if (!bVar14) {
        do {
          lVar12 = *plVar1;
          lVar15 = *(long *)(param_1 + 0xd78);
          if (lVar12 != lVar24 || lVar15 != lVar17) {
            bVar14 = false;
            ClearExclusiveLocal();
            goto joined_r0x01292ee4;
          }
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = 0;
            *(long *)(param_1 + 0xd74) = lVar17;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar14 = true;
joined_r0x01292ee4:
        if (!bVar14) {
          do {
            lVar24 = *plVar1;
            lVar17 = *(long *)(param_1 + 0xd78);
            if (lVar24 != lVar12 || lVar17 != lVar15) {
              bVar14 = false;
              ClearExclusiveLocal();
              lVar12 = lVar24;
              lVar15 = lVar17;
              goto joined_r0x01292ee4;
            }
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *plVar1 = 0;
              *(long *)(param_1 + 0xd74) = lVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar14 = true;
          lVar12 = lVar24;
          lVar15 = lVar17;
          goto joined_r0x01292ee4;
        }
      }
      nn::os::SignalLightEvent(pLVar2);
      return 1;
    }
  }
  return 0;
LAB_01292b24:
  plVar28 = (long *)*plVar28;
  if (plVar28 == (long *)0x0) goto LAB_012927f8;
  goto LAB_01292b0c;
}


