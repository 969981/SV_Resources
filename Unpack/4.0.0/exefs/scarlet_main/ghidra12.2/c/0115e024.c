/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0115e024; name: FUN_0115e024
 */


void FUN_0115e024(long param_1,undefined8 param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  LightEventType *pLVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  bool bVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  bool bVar26;
  long *plVar27;
  long *plVar28;
  undefined8 uVar29;
  byte *pbVar30;
  long *plVar31;
  long lVar32;
  undefined8 *local_f8;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  long *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 *puStack_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  pbVar30 = PTR_DAT_047d88d0;
  if (*(long *)(param_1 + 0x1d0) == 0) {
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0xffffffffffffffff;
    return;
  }
  if (((*PTR_DAT_047d88d0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  puVar7 = PTR_DAT_047d88d8;
  uVar29 = *(undefined8 *)PTR_DAT_047d88d8;
  *(undefined8 *)PTR_DAT_047d88e0 = uVar29;
  lVar32 = *(long *)(param_1 + 0x1d0);
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  FUN_01160880(&local_d8,param_2);
  if (((*(long *)(lVar32 + 0x40) == 0) && (*(long *)(lVar32 + 0x48) == 0)) ||
     (*(char *)(lVar32 + 0x68) != '\0')) {
    lVar32 = -1;
  }
  else {
    plVar24 = (long *)(lVar32 + 0x200);
    lVar25 = *plVar24;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 != lVar25) {
      lVar11 = nn::os::GetCurrentThread();
LAB_0115e0c0:
      if (*plVar24 == 0) goto code_r0x0115e0c8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x208));
      do {
        if (*plVar24 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x208));
            while (*plVar24 == 0) {
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar9) {
                *plVar24 = lVar11;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_0115e0d0;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar9) {
          *plVar24 = lVar11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_0115e0d0:
      bVar9 = false;
      goto LAB_0115e0d4;
    }
    plVar24 = (long *)0x0;
    bVar9 = true;
LAB_0115e0d4:
    local_b0 = *(long **)(lVar32 + 0x48);
    local_a0 = 0;
    local_a8 = (undefined8 *)0x0;
    FUN_01160880(&local_a8,&local_d8);
    if ((*(long *)(lVar32 + 0x40) == 0) && (*(long *)(lVar32 + 0x48) == 0)) {
      plVar31 = (long *)0xffffffffffffffff;
    }
    else if (*(char *)(lVar32 + 0x68) == '\0') {
      plVar28 = (long *)(lVar32 + 0x70);
      lVar25 = *plVar28;
      lVar11 = nn::os::GetCurrentThread();
      if (lVar11 != lVar25) {
        lVar11 = nn::os::GetCurrentThread();
LAB_0115e124:
        if (*plVar28 == 0) goto code_r0x0115e12c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x78));
        do {
          if (*plVar28 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x78));
              while (*plVar28 == 0) {
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar26) {
                  *plVar28 = lVar11;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_0115e134;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar26) {
            *plVar28 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_0115e134:
        bVar26 = false;
        plVar27 = plVar28;
        goto LAB_0115e13c;
      }
      plVar27 = (long *)0x0;
      bVar26 = true;
LAB_0115e13c:
      do {
        lVar11 = *(long *)(lVar32 + 0x100) - *(long *)(lVar32 + 0xf8);
        if (lVar11 == 0) {
          plVar31 = (long *)(*(long *)(lVar32 + 0x90) - *(long *)(lVar32 + 0x88) >> 3);
          FUN_01160ae4(lVar32 + 0x88);
          goto LAB_0115e160;
        }
        plVar31 = *(long **)(*(long *)(lVar32 + 0x100) + -8);
        *(long *)(lVar32 + 0x100) = lVar11 + *(long *)(lVar32 + 0xf8) + -8;
        uVar21 = (ulong)plVar31 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(lVar32 + 0xc0) + uVar21) =
             *(ulong *)(*(long *)(lVar32 + 0xc0) + uVar21) &
             (1L << ((ulong)plVar31 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((long *)(*(long *)(lVar32 + 0x90) - *(long *)(lVar32 + 0x88) >> 3) <= plVar31);
      *(undefined8 *)(*(long *)(lVar32 + 0x88) + (long)plVar31 * 8) = 0xffffffffffffffff;
      if (*(long **)(lVar32 + 0x130) <= plVar31) {
LAB_0115e160:
        *(long *)(lVar32 + 0x130) = (long)plVar31 + 1;
      }
      if (!bVar26) {
        *plVar27 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar27 + 1));
      }
      cVar6 = *(char *)(lVar32 + 0x398);
      if (((*pbVar30 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
      lVar11 = *(long *)puVar7;
      *(long *)PTR_DAT_047d88e0 = lVar11;
      if (cVar6 == '\0') {
        lVar25 = *(long *)(lVar32 + 0x40);
        uVar13 = *(undefined8 *)(lVar32 + 0x48);
        plVar27 = (long *)(lVar11 + 0x530);
        lVar12 = nn::os::GetCurrentThread();
        do {
          lVar20 = *plVar27;
          lVar18 = *(long *)(lVar11 + 0x538);
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar26) {
            *plVar27 = lVar20;
            *(long *)(lVar11 + 0x538) = lVar18;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        pLVar14 = (LightEventType *)(lVar11 + 0x540);
LAB_0115e1b8:
        while ((lVar20 != 0 && (lVar12 != lVar20))) {
          nn::os::WaitLightEvent(pLVar14);
          do {
            lVar20 = *plVar27;
            lVar18 = *(long *)(lVar11 + 0x538);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar20;
              *(long *)(lVar11 + 0x538) = lVar18;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        do {
          lVar4 = *plVar27;
          if (lVar4 != lVar20 || *(long *)(lVar11 + 0x538) != lVar18) {
            bVar26 = false;
            ClearExclusiveLocal();
            goto LAB_0115e1e8;
          }
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar26) {
            *plVar27 = lVar20;
            *(long *)(lVar11 + 0x534) = lVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar26 = true;
LAB_0115e1e8:
        if (!bVar26) {
          lVar20 = lVar4;
          lVar18 = *(long *)(lVar11 + 0x538);
          goto LAB_0115e1b8;
        }
        if (*(char *)(lVar11 + 0x550) == '\0') {
          plVar17 = (long *)(lVar11 + 0x60);
          lVar12 = nn::os::GetCurrentThread();
LAB_0115e66c:
          if (*plVar17 == 0) goto code_r0x0115e674;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
          do {
            if (*plVar17 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
                while (*plVar17 == 0) {
                  cVar6 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar26) {
                    *plVar17 = lVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0115e67c;
                }
              } while( true );
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar26) {
              *plVar17 = lVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0115e67c:
          plVar17 = (long *)(lVar11 + 0x290);
          lVar12 = nn::os::GetCurrentThread();
          do {
            lVar20 = *plVar17;
            lVar18 = *(long *)(lVar11 + 0x298);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar26) {
              *plVar17 = lVar20;
              *(long *)(lVar11 + 0x298) = lVar18;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0115e69c:
          while ((lVar20 != 0 && (lVar12 != lVar20))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2a0));
            do {
              lVar20 = *plVar17;
              lVar18 = *(long *)(lVar11 + 0x298);
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar26) {
                *plVar17 = lVar20;
                *(long *)(lVar11 + 0x298) = lVar18;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          do {
            lVar4 = *plVar17;
            if (lVar4 != lVar20 || *(long *)(lVar11 + 0x298) != lVar18) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto LAB_0115e6cc;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar26) {
              *plVar17 = lVar20;
              *(long *)(lVar11 + 0x294) = lVar18 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
LAB_0115e6cc:
          if (!bVar26) {
            lVar20 = lVar4;
            lVar18 = *(long *)(lVar11 + 0x298);
            goto LAB_0115e69c;
          }
          plVar15 = *(long **)(lVar11 + 0x2b0);
          lVar12 = *(long *)(lVar11 + 0x2e8);
          if ((lVar12 == 0) || (*plVar15 == lVar25)) {
            plVar16 = plVar15;
LAB_0115e738:
            if (plVar16 == plVar15 + lVar12 * 4) goto LAB_0115ec68;
            uVar13 = FUN_01162cbc(*(undefined8 *)
                                   (*(long *)(lVar11 + 0x348) + plVar16[3] * 0x130 + 0x110),
                                  &local_b0);
            lVar12 = *plVar28;
            lVar25 = nn::os::GetCurrentThread();
            if (lVar25 != lVar12) {
              lVar25 = nn::os::GetCurrentThread();
LAB_0115e77c:
              if (*plVar28 == 0) goto code_r0x0115e784;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x78));
              do {
                if (*plVar28 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x78));
                    while (*plVar28 == 0) {
                      cVar6 = '\x01';
                      bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                      if (bVar26) {
                        *plVar28 = lVar25;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 == '\0') goto LAB_0115e78c;
                    }
                  } while( true );
                }
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar26) {
                  *plVar28 = lVar25;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
LAB_0115e78c:
              *(undefined8 *)(*(long *)(lVar32 + 0x88) + (long)plVar31 * 8) = uVar13;
              *(undefined8 *)(lVar32 + 0x70) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x78));
              goto LAB_0115e7a8;
            }
            *(undefined8 *)(*(long *)(lVar32 + 0x88) + (long)plVar31 * 8) = uVar13;
LAB_0115e7a8:
            bVar26 = true;
            pbVar30 = PTR_DAT_047d88d0;
          }
          else {
            lVar20 = lVar12 * 0x20;
            plVar22 = plVar15;
            while (lVar20 = lVar20 + -0x20, lVar20 != 0) {
              plVar23 = plVar22 + 4;
              plVar16 = plVar22 + 4;
              plVar22 = plVar22 + 4;
              if (*plVar23 == lVar25) goto LAB_0115e738;
            }
LAB_0115ec68:
            plVar15 = (long *)(lVar11 + 0x948);
            lVar20 = *plVar15;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar20) {
              lVar12 = nn::os::GetCurrentThread();
LAB_0115ec88:
              if (*plVar15 == 0) goto code_r0x0115ec90;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x950));
              do {
                if (*plVar15 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x950));
                    while (*plVar15 == 0) {
                      cVar6 = '\x01';
                      bVar26 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar26) {
                        *plVar15 = lVar12;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 == '\0') goto LAB_0115ec98;
                    }
                  } while( true );
                }
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar26) {
                  *plVar15 = lVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
LAB_0115ec98:
              bVar19 = false;
              goto LAB_0115ec9c;
            }
            plVar15 = (long *)0x0;
            bVar19 = true;
LAB_0115ec9c:
            plVar16 = *(long **)(lVar11 + 0x960);
            lVar12 = *(long *)(lVar11 + 0x998);
            if ((lVar12 == 0) || (*plVar16 == lVar25)) {
              plVar22 = plVar16;
LAB_0115ecac:
              if (plVar22 == plVar16 + lVar12 * 2) goto LAB_0115f1a0;
              bVar26 = true;
              *(undefined1 *)(plVar22 + 1) = 1;
LAB_0115ecc0:
              pbVar30 = PTR_DAT_047d88d0;
            }
            else {
              lVar20 = lVar12 * 0x10;
              plVar23 = plVar16;
              while (lVar20 = lVar20 + -0x10, lVar20 != 0) {
                plVar22 = plVar23 + 2;
                plVar1 = plVar23 + 2;
                plVar23 = plVar22;
                if (*plVar1 == lVar25) goto LAB_0115ecac;
              }
LAB_0115f1a0:
              do {
                lVar12 = *plVar27;
                lVar20 = *(long *)(lVar11 + 0x538);
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar26) {
                  *plVar27 = lVar12;
                  *(long *)(lVar11 + 0x538) = lVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              do {
                lVar18 = *plVar27;
                lVar4 = *(long *)(lVar11 + 0x538);
                if (lVar18 != lVar12 || lVar4 != lVar20) {
                  bVar26 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x0115f1dc;
                }
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar26) {
                  *plVar27 = lVar12;
                  *(long *)(lVar11 + 0x534) = lVar20 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar26 = true;
joined_r0x0115f1dc:
              if (!bVar26) {
                do {
                  lVar12 = *plVar27;
                  lVar20 = *(long *)(lVar11 + 0x538);
                  if (lVar12 != lVar18 || lVar20 != lVar4) {
                    bVar26 = false;
                    ClearExclusiveLocal();
                    lVar18 = lVar12;
                    lVar4 = lVar20;
                    goto joined_r0x0115f1dc;
                  }
                  cVar6 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar26) {
                    *plVar27 = lVar18;
                    *(long *)(lVar11 + 0x534) = lVar4 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                bVar26 = true;
                lVar18 = lVar12;
                lVar4 = lVar20;
                goto joined_r0x0115f1dc;
              }
              nn::os::SignalLightEvent(pLVar14);
              local_88 = local_b0;
              local_80 = (undefined8 *)0x0;
              local_78 = 0;
              FUN_01161be4(&local_80,&local_a8);
              FUN_01161034(lVar11,plVar28,plVar31,uVar13,lVar25,&local_88);
              puVar8 = local_80;
              pbVar30 = PTR_DAT_047d88d0;
              if (local_80 == (undefined8 *)0x0) {
                plVar27 = (long *)0x0;
                bVar26 = false;
                goto LAB_0115ecc0;
              }
              psVar2 = (short *)(local_80 + 3);
              do {
                sVar5 = *psVar2;
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar26) {
                  *psVar2 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                piVar3 = (int *)((long)local_80 + 0x1c);
                do {
                  iVar10 = *piVar3;
                  cVar6 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar26) {
                    *piVar3 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar25 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar25;
                  local_c8 = (long *)*puVar8;
                  FUN_00c44438(lVar25 + 0x8040,&local_c8);
                }
              }
              else if (sVar5 == 0) goto LAB_0115eba0;
              plVar27 = (long *)0x0;
              bVar26 = false;
            }
            if (!bVar19) {
              *plVar15 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
            }
          }
          do {
            lVar25 = *plVar17;
            lVar12 = *(long *)(lVar11 + 0x298);
            cVar6 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar19) {
              *plVar17 = lVar25;
              *(long *)(lVar11 + 0x298) = lVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar20 = *plVar17;
            lVar18 = *(long *)(lVar11 + 0x298);
            if (lVar20 != lVar25 || lVar18 != lVar12) {
              bVar19 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115e7e4;
            }
            cVar6 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar19) {
              *plVar17 = lVar25;
              *(long *)(lVar11 + 0x294) = lVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar19 = true;
joined_r0x0115e7e4:
          if (!bVar19) {
            do {
              lVar25 = *plVar17;
              lVar12 = *(long *)(lVar11 + 0x298);
              if (lVar25 != lVar20 || lVar12 != lVar18) {
                bVar19 = false;
                ClearExclusiveLocal();
                lVar20 = lVar25;
                lVar18 = lVar12;
                goto joined_r0x0115e7e4;
              }
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar20;
                *(long *)(lVar11 + 0x294) = lVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar19 = true;
            lVar20 = lVar25;
            lVar18 = lVar12;
            goto joined_r0x0115e7e4;
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x2a0));
          *(undefined8 *)(lVar11 + 0x60) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x68));
          if (!bVar26) goto LAB_0115e2e0;
          do {
            lVar11 = *plVar27;
            lVar25 = plVar27[1];
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar11;
              plVar27[1] = lVar25;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar12 = *plVar27;
            lVar20 = plVar27[1];
            if (lVar12 != lVar11 || lVar20 != lVar25) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115e874;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar11;
              *(long *)((long)plVar27 + 4) = lVar25 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
joined_r0x0115e874:
          if (!bVar26) {
            do {
              lVar11 = *plVar27;
              lVar25 = plVar27[1];
              if (lVar11 != lVar12 || lVar25 != lVar20) {
                bVar26 = false;
                ClearExclusiveLocal();
                lVar12 = lVar11;
                lVar20 = lVar25;
                goto joined_r0x0115e874;
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar26) {
                *plVar27 = lVar12;
                *(long *)((long)plVar27 + 4) = lVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar26 = true;
            lVar12 = lVar11;
            lVar20 = lVar25;
            goto joined_r0x0115e874;
          }
          nn::os::SignalLightEvent((LightEventType *)(plVar27 + 2));
        }
        else {
          do {
            lVar12 = *plVar27;
            lVar20 = *(long *)(lVar11 + 0x538);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar12;
              *(long *)(lVar11 + 0x538) = lVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar18 = *plVar27;
            lVar4 = *(long *)(lVar11 + 0x538);
            if (lVar18 != lVar12 || lVar4 != lVar20) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115e24c;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar12;
              *(long *)(lVar11 + 0x534) = lVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
joined_r0x0115e24c:
          if (!bVar26) {
            do {
              lVar12 = *plVar27;
              lVar20 = *(long *)(lVar11 + 0x538);
              if (lVar12 != lVar18 || lVar20 != lVar4) {
                bVar26 = false;
                ClearExclusiveLocal();
                lVar18 = lVar12;
                lVar4 = lVar20;
                goto joined_r0x0115e24c;
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar26) {
                *plVar27 = lVar18;
                *(long *)(lVar11 + 0x534) = lVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar26 = true;
            lVar18 = lVar12;
            lVar4 = lVar20;
            goto joined_r0x0115e24c;
          }
          nn::os::SignalLightEvent(pLVar14);
          local_88 = local_b0;
          local_80 = (undefined8 *)0x0;
          local_78 = 0;
          FUN_01161be4(&local_80,&local_a8);
          FUN_01161034(lVar11,plVar28,plVar31,uVar13,lVar25,&local_88);
          puVar8 = local_80;
          pbVar30 = PTR_DAT_047d88d0;
          if (local_80 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_80 + 3);
            do {
              sVar5 = *psVar2;
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar26) {
                *psVar2 = sVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 1) {
              piVar3 = (int *)((long)local_80 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar26) {
                  *piVar3 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_c8 = (long *)*puVar8;
                FUN_00c44438(lVar11 + 0x8040,&local_c8);
              }
            }
            else if (sVar5 == 0) goto LAB_0115eba0;
          }
        }
      }
      else {
        plVar27 = (long *)(lVar11 + 0x530);
        lVar25 = *(long *)(lVar32 + 0x40);
        uVar13 = *(undefined8 *)(lVar32 + 0x48);
        local_c8 = plVar28;
        local_c0 = plVar31;
        lVar12 = nn::os::GetCurrentThread();
        do {
          lVar20 = *plVar27;
          lVar18 = *(long *)(lVar11 + 0x538);
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar26) {
            *plVar27 = lVar20;
            *(long *)(lVar11 + 0x538) = lVar18;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        pLVar14 = (LightEventType *)(lVar11 + 0x540);
LAB_0115f510:
        while ((lVar20 != 0 && (lVar12 != lVar20))) {
          nn::os::WaitLightEvent(pLVar14);
          do {
            lVar20 = *plVar27;
            lVar18 = *(long *)(lVar11 + 0x538);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar20;
              *(long *)(lVar11 + 0x538) = lVar18;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        do {
          lVar4 = *plVar27;
          if (lVar4 != lVar20 || *(long *)(lVar11 + 0x538) != lVar18) {
            bVar26 = false;
            ClearExclusiveLocal();
            goto LAB_0115f54c;
          }
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar26) {
            *plVar27 = lVar20;
            *(long *)(lVar11 + 0x534) = lVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar26 = true;
LAB_0115f54c:
        if (!bVar26) {
          lVar20 = lVar4;
          lVar18 = *(long *)(lVar11 + 0x538);
          goto LAB_0115f510;
        }
        if (*(char *)(lVar11 + 0x550) == '\0') {
          plVar28 = (long *)(lVar11 + 0x60);
          lVar12 = nn::os::GetCurrentThread();
LAB_0115f678:
          if (*plVar28 == 0) goto code_r0x0115f680;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
          do {
            if (*plVar28 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
                while (*plVar28 == 0) {
                  cVar6 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar26) {
                    *plVar28 = lVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0115f688;
                }
              } while( true );
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar26) {
              *plVar28 = lVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0115f688:
          plVar28 = (long *)(lVar11 + 0x2f0);
          lVar20 = *plVar28;
          lVar12 = nn::os::GetCurrentThread();
          if (lVar12 != lVar20) {
            lVar12 = nn::os::GetCurrentThread();
LAB_0115f6a4:
            if (*plVar28 == 0) goto code_r0x0115f6ac;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2f8));
            do {
              if (*plVar28 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2f8));
                  while (*plVar28 == 0) {
                    cVar6 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar26) {
                      *plVar28 = lVar12;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0115f6b4;
                  }
                } while( true );
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar26) {
                *plVar28 = lVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0115f6b4:
            bVar26 = false;
            goto LAB_0115f6b8;
          }
          plVar28 = (long *)0x0;
          bVar26 = true;
LAB_0115f6b8:
          plVar17 = *(long **)(lVar11 + 0x308);
          lVar12 = *(long *)(lVar11 + 0x340);
          if ((lVar12 == 0) || (*plVar17 == lVar25)) {
            plVar15 = plVar17;
LAB_0115f6f8:
            if (plVar15 == plVar17 + lVar12 * 8) goto LAB_0115f9f8;
            uVar13 = FUN_01162cbc(plVar15[2],&local_b0);
            plVar17 = (long *)(lVar11 + 0x290);
            lVar25 = nn::os::GetCurrentThread();
            do {
              lVar12 = *plVar17;
              lVar20 = *(long *)(lVar11 + 0x298);
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar12;
                *(long *)(lVar11 + 0x298) = lVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            pLVar14 = (LightEventType *)(lVar11 + 0x2a0);
LAB_0115f730:
            while ((lVar12 != 0 && (lVar25 != lVar12))) {
              nn::os::WaitLightEvent(pLVar14);
              do {
                lVar12 = *plVar17;
                lVar20 = *(long *)(lVar11 + 0x298);
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar19) {
                  *plVar17 = lVar12;
                  *(long *)(lVar11 + 0x298) = lVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            do {
              lVar18 = *plVar17;
              if (lVar18 != lVar12 || *(long *)(lVar11 + 0x298) != lVar20) {
                bVar19 = false;
                ClearExclusiveLocal();
                goto LAB_0115f76c;
              }
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar12;
                *(long *)(lVar11 + 0x294) = lVar20 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar19 = true;
LAB_0115f76c:
            if (!bVar19) {
              lVar12 = lVar18;
              lVar20 = *(long *)(lVar11 + 0x298);
              goto LAB_0115f730;
            }
            FUN_0217940c(&local_c8,uVar13);
            do {
              lVar25 = *plVar17;
              lVar12 = *(long *)(lVar11 + 0x298);
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar25;
                *(long *)(lVar11 + 0x298) = lVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              lVar20 = *plVar17;
              lVar18 = *(long *)(lVar11 + 0x298);
              if (lVar20 != lVar25 || lVar18 != lVar12) {
                bVar19 = false;
                ClearExclusiveLocal();
                goto joined_r0x0116010c;
              }
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar25;
                *(long *)(lVar11 + 0x294) = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar19 = true;
joined_r0x0116010c:
            if (!bVar19) {
              do {
                lVar25 = *plVar17;
                lVar12 = *(long *)(lVar11 + 0x298);
                if (lVar25 != lVar20 || lVar12 != lVar18) {
                  bVar19 = false;
                  ClearExclusiveLocal();
                  lVar20 = lVar25;
                  lVar18 = lVar12;
                  goto joined_r0x0116010c;
                }
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar19) {
                  *plVar17 = lVar20;
                  *(long *)(lVar11 + 0x294) = lVar18 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar19 = true;
              lVar20 = lVar25;
              lVar18 = lVar12;
              goto joined_r0x0116010c;
            }
LAB_0115fe08:
            nn::os::SignalLightEvent(pLVar14);
LAB_0115fe0c:
            bVar19 = false;
          }
          else {
            lVar20 = lVar12 * 0x40;
            plVar16 = plVar17;
            while (lVar20 = lVar20 + -0x40, lVar20 != 0) {
              plVar22 = plVar16 + 8;
              plVar15 = plVar16 + 8;
              plVar16 = plVar16 + 8;
              if (*plVar22 == lVar25) goto LAB_0115f6f8;
            }
LAB_0115f9f8:
            plVar17 = (long *)(lVar11 + 0x730);
            lVar20 = *plVar17;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar20) {
              lVar12 = nn::os::GetCurrentThread();
LAB_0115fa14:
              if (*plVar17 == 0) goto code_r0x0115fa1c;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x738));
              do {
                if (*plVar17 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x738));
                    while (*plVar17 == 0) {
                      cVar6 = '\x01';
                      bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar19) {
                        *plVar17 = lVar12;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 == '\0') {
                        bVar19 = false;
                        goto LAB_0115fa24;
                      }
                    }
                  } while( true );
                }
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar19) {
                  *plVar17 = lVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar19 = false;
              goto LAB_0115fa24;
            }
            plVar17 = (long *)0x0;
            bVar19 = true;
LAB_0115fa24:
            plVar15 = *(long **)(lVar11 + 0x748);
            lVar12 = *(long *)(lVar11 + 0x780);
            if ((lVar12 != 0) && (*plVar15 != lVar25)) {
              lVar20 = lVar12 * 0x10;
              plVar16 = plVar15;
              while (lVar20 = lVar20 + -0x10, lVar20 != 0) {
                plVar22 = plVar16 + 2;
                plVar23 = plVar16 + 2;
                plVar16 = plVar16 + 2;
                if (*plVar22 == lVar25) goto LAB_0115fa64;
              }
LAB_0115fdfc:
              if (!bVar19) {
                pLVar14 = (LightEventType *)(plVar17 + 1);
                *plVar17 = 0;
                goto LAB_0115fe08;
              }
              goto LAB_0115fe0c;
            }
            plVar23 = plVar15;
LAB_0115fa64:
            if (plVar23 == plVar15 + lVar12 * 2) goto LAB_0115fdfc;
            lVar12 = plVar23[1];
            if (!bVar19) {
              *plVar17 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
            }
            bVar19 = false;
            if (lVar12 != 0) {
              do {
                lVar12 = *plVar27;
                lVar20 = *(long *)(lVar11 + 0x538);
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar19) {
                  *plVar27 = lVar12;
                  *(long *)(lVar11 + 0x538) = lVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              do {
                lVar18 = *plVar27;
                lVar4 = *(long *)(lVar11 + 0x538);
                if (lVar18 != lVar12 || lVar4 != lVar20) {
                  bVar19 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x0115ffc4;
                }
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar19) {
                  *plVar27 = lVar12;
                  *(long *)(lVar11 + 0x534) = lVar20 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar19 = true;
joined_r0x0115ffc4:
              if (!bVar19) {
                do {
                  lVar12 = *plVar27;
                  lVar20 = *(long *)(lVar11 + 0x538);
                  if (lVar12 != lVar18 || lVar20 != lVar4) {
                    bVar19 = false;
                    ClearExclusiveLocal();
                    lVar18 = lVar12;
                    lVar4 = lVar20;
                    goto joined_r0x0115ffc4;
                  }
                  cVar6 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar19) {
                    *plVar27 = lVar18;
                    *(long *)(lVar11 + 0x534) = lVar4 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                bVar19 = true;
                lVar18 = lVar12;
                lVar4 = lVar20;
                goto joined_r0x0115ffc4;
              }
              nn::os::SignalLightEvent(pLVar14);
              plVar17 = local_c0;
              plVar27 = local_c8;
              local_78 = 0;
              local_88 = local_b0;
              local_80 = (undefined8 *)0x0;
              FUN_01161be4(&local_80,&local_a8);
              FUN_01164e40(lVar11,plVar27,plVar17,uVar13,lVar25,&local_88);
              puVar8 = local_80;
              if (local_80 != (undefined8 *)0x0) {
                psVar2 = (short *)(local_80 + 3);
                do {
                  sVar5 = *psVar2;
                  cVar6 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar19) {
                    *psVar2 = sVar5 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar5 == 1) {
                  piVar3 = (int *)((long)local_80 + 0x1c);
                  do {
                    iVar10 = *piVar3;
                    cVar6 = '\x01';
                    bVar19 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar19) {
                      *piVar3 = -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar10 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar25 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar25;
                    local_98 = (long *)*puVar8;
                    FUN_00c44438(lVar25 + 0x8040,&local_98);
                  }
                }
                else if (sVar5 == 0) goto LAB_0115eba0;
              }
              plVar27 = (long *)0x0;
              bVar19 = true;
            }
          }
          if (!bVar26) {
            *plVar28 = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar28 + 1));
          }
          *(undefined8 *)(lVar11 + 0x60) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x68));
          if (bVar19) goto LAB_0115f944;
          do {
            lVar11 = *plVar27;
            lVar25 = plVar27[1];
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar11;
              plVar27[1] = lVar25;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar12 = *plVar27;
            lVar20 = plVar27[1];
            if (lVar12 != lVar11 || lVar20 != lVar25) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115fe74;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar11;
              *(long *)((long)plVar27 + 4) = lVar25 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
joined_r0x0115fe74:
          if (!bVar26) {
            do {
              lVar11 = *plVar27;
              lVar25 = plVar27[1];
              if (lVar11 != lVar12 || lVar25 != lVar20) {
                bVar26 = false;
                ClearExclusiveLocal();
                lVar12 = lVar11;
                lVar20 = lVar25;
                goto joined_r0x0115fe74;
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar26) {
                *plVar27 = lVar12;
                *(long *)((long)plVar27 + 4) = lVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar26 = true;
            lVar12 = lVar11;
            lVar20 = lVar25;
            goto joined_r0x0115fe74;
          }
          nn::os::SignalLightEvent((LightEventType *)(plVar27 + 2));
        }
        else {
          do {
            lVar12 = *plVar27;
            lVar20 = *(long *)(lVar11 + 0x538);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar12;
              *(long *)(lVar11 + 0x538) = lVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar18 = *plVar27;
            lVar4 = *(long *)(lVar11 + 0x538);
            if (lVar18 != lVar12 || lVar4 != lVar20) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115f8b4;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar12;
              *(long *)(lVar11 + 0x534) = lVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
joined_r0x0115f8b4:
          if (!bVar26) {
            do {
              lVar12 = *plVar27;
              lVar20 = *(long *)(lVar11 + 0x538);
              if (lVar12 != lVar18 || lVar20 != lVar4) {
                bVar26 = false;
                ClearExclusiveLocal();
                lVar18 = lVar12;
                lVar4 = lVar20;
                goto joined_r0x0115f8b4;
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar26) {
                *plVar27 = lVar18;
                *(long *)(lVar11 + 0x534) = lVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar26 = true;
            lVar18 = lVar12;
            lVar4 = lVar20;
            goto joined_r0x0115f8b4;
          }
          nn::os::SignalLightEvent(pLVar14);
          plVar27 = local_c0;
          plVar28 = local_c8;
          local_78 = 0;
          local_88 = local_b0;
          local_80 = (undefined8 *)0x0;
          FUN_01161be4(&local_80,&local_a8);
          FUN_01164e40(lVar11,plVar28,plVar27,uVar13,lVar25,&local_88);
          puVar8 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_80 + 3);
            do {
              sVar5 = *psVar2;
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar26) {
                *psVar2 = sVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 1) {
              piVar3 = (int *)((long)local_80 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar26) {
                  *piVar3 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_98 = (long *)*puVar8;
                FUN_00c44438(lVar11 + 0x8040,&local_98);
              }
            }
            else if (sVar5 == 0) goto LAB_0115eba0;
          }
        }
LAB_0115f944:
        pbVar30 = PTR_DAT_047d88d0;
      }
    }
    else {
      plVar31 = (long *)0xffffffffffffffff;
    }
LAB_0115e2e0:
    local_c8 = *(long **)(lVar32 + 0x48);
    local_b8 = 0;
    local_c0 = (long *)0x0;
    FUN_01160880(&local_c0,&local_d8);
    if ((*(long *)(lVar32 + 0x40) == 0) && (*(long *)(lVar32 + 0x48) == 0)) {
      local_f8 = (undefined8 *)0xffffffffffffffff;
    }
    else if (*(char *)(lVar32 + 0x68) == '\0') {
      plVar28 = (long *)(lVar32 + 0x138);
      lVar25 = *plVar28;
      lVar11 = nn::os::GetCurrentThread();
      if (lVar11 != lVar25) {
        lVar11 = nn::os::GetCurrentThread();
LAB_0115e32c:
        if (*plVar28 == 0) goto code_r0x0115e334;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x140));
        do {
          if (*plVar28 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x140));
              while (*plVar28 == 0) {
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar26) {
                  *plVar28 = lVar11;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_0115e33c;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar26) {
            *plVar28 = lVar11;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_0115e33c:
        bVar26 = false;
        plVar27 = plVar28;
        goto LAB_0115e344;
      }
      plVar27 = (long *)0x0;
      bVar26 = true;
LAB_0115e344:
      do {
        lVar11 = *(long *)(lVar32 + 0x1c8) - *(long *)(lVar32 + 0x1c0);
        if (lVar11 == 0) {
          local_f8 = (undefined8 *)(*(long *)(lVar32 + 0x158) - *(long *)(lVar32 + 0x150) >> 3);
          FUN_01160ae4(lVar32 + 0x150);
          goto LAB_0115e370;
        }
        local_f8 = *(undefined8 **)(*(long *)(lVar32 + 0x1c8) + -8);
        *(long *)(lVar32 + 0x1c8) = lVar11 + *(long *)(lVar32 + 0x1c0) + -8;
        uVar21 = (ulong)local_f8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(lVar32 + 0x188) + uVar21) =
             *(ulong *)(*(long *)(lVar32 + 0x188) + uVar21) &
             (1L << ((ulong)local_f8 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((undefined8 *)(*(long *)(lVar32 + 0x158) - *(long *)(lVar32 + 0x150) >> 3) <=
               local_f8);
      *(undefined8 *)(*(long *)(lVar32 + 0x150) + (long)local_f8 * 8) = 0xffffffffffffffff;
      if (*(undefined8 **)(lVar32 + 0x1f8) <= local_f8) {
LAB_0115e370:
        *(long *)(lVar32 + 0x1f8) = (long)local_f8 + 1;
      }
      if (!bVar26) {
        *plVar27 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar27 + 1));
      }
      cVar6 = *(char *)(lVar32 + 0x398);
      if (((*pbVar30 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
      lVar11 = *(long *)PTR_DAT_047d88d8;
      *(long *)PTR_DAT_047d88e0 = lVar11;
      if (cVar6 == '\0') {
        lVar25 = *(long *)(lVar32 + 0x40);
        uVar13 = *(undefined8 *)(lVar32 + 0x48);
        plVar27 = (long *)(lVar11 + 0x530);
        lVar12 = nn::os::GetCurrentThread();
        do {
          lVar20 = *plVar27;
          lVar18 = *(long *)(lVar11 + 0x538);
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar26) {
            *plVar27 = lVar20;
            *(long *)(lVar11 + 0x538) = lVar18;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        pLVar14 = (LightEventType *)(lVar11 + 0x540);
LAB_0115e3d0:
        while ((lVar20 != 0 && (lVar12 != lVar20))) {
          nn::os::WaitLightEvent(pLVar14);
          do {
            lVar20 = *plVar27;
            lVar18 = *(long *)(lVar11 + 0x538);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar20;
              *(long *)(lVar11 + 0x538) = lVar18;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        do {
          lVar4 = *plVar27;
          if (lVar4 != lVar20 || *(long *)(lVar11 + 0x538) != lVar18) {
            bVar26 = false;
            ClearExclusiveLocal();
            goto LAB_0115e400;
          }
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar26) {
            *plVar27 = lVar20;
            *(long *)(lVar11 + 0x534) = lVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar26 = true;
LAB_0115e400:
        if (!bVar26) {
          lVar20 = lVar4;
          lVar18 = *(long *)(lVar11 + 0x538);
          goto LAB_0115e3d0;
        }
        if (*(char *)(lVar11 + 0x550) == '\0') {
          plVar17 = (long *)(lVar11 + 0x60);
          lVar12 = nn::os::GetCurrentThread();
LAB_0115e8d0:
          if (*plVar17 == 0) goto code_r0x0115e8d8;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
          do {
            if (*plVar17 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
                while (*plVar17 == 0) {
                  cVar6 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                  if (bVar26) {
                    *plVar17 = lVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0115e8e0;
                }
              } while( true );
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar26) {
              *plVar17 = lVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0115e8e0:
          plVar17 = (long *)(lVar11 + 0x290);
          lVar12 = nn::os::GetCurrentThread();
          do {
            lVar20 = *plVar17;
            lVar18 = *(long *)(lVar11 + 0x298);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar26) {
              *plVar17 = lVar20;
              *(long *)(lVar11 + 0x298) = lVar18;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0115e8fc:
          while ((lVar20 != 0 && (lVar12 != lVar20))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2a0));
            do {
              lVar20 = *plVar17;
              lVar18 = *(long *)(lVar11 + 0x298);
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar26) {
                *plVar17 = lVar20;
                *(long *)(lVar11 + 0x298) = lVar18;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          do {
            lVar4 = *plVar17;
            if (lVar4 != lVar20 || *(long *)(lVar11 + 0x298) != lVar18) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto LAB_0115e92c;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar26) {
              *plVar17 = lVar20;
              *(long *)(lVar11 + 0x294) = lVar18 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
LAB_0115e92c:
          if (!bVar26) {
            lVar20 = lVar4;
            lVar18 = *(long *)(lVar11 + 0x298);
            goto LAB_0115e8fc;
          }
          plVar15 = *(long **)(lVar11 + 0x2b0);
          lVar12 = *(long *)(lVar11 + 0x2e8);
          if ((lVar12 == 0) || (*plVar15 == lVar25)) {
            plVar16 = plVar15;
LAB_0115e99c:
            if (plVar16 == plVar15 + lVar12 * 4) goto LAB_0115ece0;
            uVar13 = FUN_01163110(*(undefined8 *)
                                   (*(long *)(lVar11 + 0x348) + plVar16[3] * 0x130 + 0x118),
                                  &local_c8);
            lVar12 = *plVar28;
            lVar25 = nn::os::GetCurrentThread();
            if (lVar25 != lVar12) {
              lVar25 = nn::os::GetCurrentThread();
LAB_0115e9e0:
              if (*plVar28 == 0) goto code_r0x0115e9e8;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x140));
              do {
                if (*plVar28 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar32 + 0x140));
                    while (*plVar28 == 0) {
                      cVar6 = '\x01';
                      bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                      if (bVar26) {
                        *plVar28 = lVar25;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 == '\0') goto LAB_0115e9f0;
                    }
                  } while( true );
                }
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar26) {
                  *plVar28 = lVar25;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
LAB_0115e9f0:
              *(undefined8 *)(*(long *)(lVar32 + 0x150) + (long)local_f8 * 8) = uVar13;
              *(undefined8 *)(lVar32 + 0x138) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar32 + 0x140));
              goto LAB_0115ea0c;
            }
            *(undefined8 *)(*(long *)(lVar32 + 0x150) + (long)local_f8 * 8) = uVar13;
LAB_0115ea0c:
            bVar26 = true;
          }
          else {
            lVar20 = lVar12 * 0x20;
            plVar22 = plVar15;
            while (lVar20 = lVar20 + -0x20, lVar20 != 0) {
              plVar23 = plVar22 + 4;
              plVar16 = plVar22 + 4;
              plVar22 = plVar22 + 4;
              if (*plVar23 == lVar25) goto LAB_0115e99c;
            }
LAB_0115ece0:
            plVar15 = (long *)(lVar11 + 0x948);
            lVar20 = *plVar15;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar20) {
              lVar12 = nn::os::GetCurrentThread();
LAB_0115ecfc:
              if (*plVar15 == 0) goto code_r0x0115ed04;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x950));
              do {
                if (*plVar15 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x950));
                    while (*plVar15 == 0) {
                      cVar6 = '\x01';
                      bVar26 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                      if (bVar26) {
                        *plVar15 = lVar12;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 == '\0') goto LAB_0115ef30;
                    }
                  } while( true );
                }
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar26) {
                  *plVar15 = lVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
LAB_0115ef30:
              bVar19 = false;
              goto LAB_0115ef34;
            }
            plVar15 = (long *)0x0;
            bVar19 = true;
LAB_0115ef34:
            plVar16 = *(long **)(lVar11 + 0x960);
            lVar12 = *(long *)(lVar11 + 0x998);
            if ((lVar12 == 0) || (*plVar16 == lVar25)) {
              plVar22 = plVar16;
LAB_0115ef44:
              if (plVar22 == plVar16 + lVar12 * 2) goto LAB_0115f2c0;
              bVar26 = true;
              *(undefined1 *)(plVar22 + 1) = 1;
            }
            else {
              lVar20 = lVar12 * 0x10;
              plVar23 = plVar16;
              while (lVar20 = lVar20 + -0x10, lVar20 != 0) {
                plVar22 = plVar23 + 2;
                plVar1 = plVar23 + 2;
                plVar23 = plVar22;
                if (*plVar1 == lVar25) goto LAB_0115ef44;
              }
LAB_0115f2c0:
              do {
                lVar12 = *plVar27;
                lVar20 = *(long *)(lVar11 + 0x538);
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar26) {
                  *plVar27 = lVar12;
                  *(long *)(lVar11 + 0x538) = lVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              do {
                lVar18 = *plVar27;
                lVar4 = *(long *)(lVar11 + 0x538);
                if (lVar18 != lVar12 || lVar4 != lVar20) {
                  bVar26 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x0115f2fc;
                }
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar26) {
                  *plVar27 = lVar12;
                  *(long *)(lVar11 + 0x534) = lVar20 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar26 = true;
joined_r0x0115f2fc:
              if (!bVar26) {
                do {
                  lVar12 = *plVar27;
                  lVar20 = *(long *)(lVar11 + 0x538);
                  if (lVar12 != lVar18 || lVar20 != lVar4) {
                    bVar26 = false;
                    ClearExclusiveLocal();
                    lVar18 = lVar12;
                    lVar4 = lVar20;
                    goto joined_r0x0115f2fc;
                  }
                  cVar6 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar26) {
                    *plVar27 = lVar18;
                    *(long *)(lVar11 + 0x534) = lVar4 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                bVar26 = true;
                lVar18 = lVar12;
                lVar4 = lVar20;
                goto joined_r0x0115f2fc;
              }
              nn::os::SignalLightEvent(pLVar14);
              local_88 = local_c8;
              local_80 = (undefined8 *)0x0;
              local_78 = 0;
              FUN_01161be4(&local_80,&local_c0);
              FUN_01161f08(lVar11,plVar28,local_f8,uVar13,lVar25,&local_88);
              puVar8 = local_80;
              if (local_80 == (undefined8 *)0x0) {
                plVar27 = (long *)0x0;
                bVar26 = false;
              }
              else {
                psVar2 = (short *)(local_80 + 3);
                do {
                  sVar5 = *psVar2;
                  cVar6 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar26) {
                    *psVar2 = sVar5 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar5 == 1) {
                  piVar3 = (int *)((long)local_80 + 0x1c);
                  do {
                    iVar10 = *piVar3;
                    cVar6 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar26) {
                      *piVar3 = -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar10 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar25 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar25;
                    local_98 = (long *)*puVar8;
                    FUN_00c44438(lVar25 + 0x8040,&local_98);
                  }
                }
                else if (sVar5 == 0) goto LAB_0115eba0;
                plVar27 = (long *)0x0;
                bVar26 = false;
              }
            }
            if (!bVar19) {
              *plVar15 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
            }
          }
          do {
            lVar25 = *plVar17;
            lVar12 = *(long *)(lVar11 + 0x298);
            cVar6 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar19) {
              *plVar17 = lVar25;
              *(long *)(lVar11 + 0x298) = lVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar20 = *plVar17;
            lVar18 = *(long *)(lVar11 + 0x298);
            if (lVar20 != lVar25 || lVar18 != lVar12) {
              bVar19 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115ea48;
            }
            cVar6 = '\x01';
            bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar19) {
              *plVar17 = lVar25;
              *(long *)(lVar11 + 0x294) = lVar12 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar19 = true;
joined_r0x0115ea48:
          if (!bVar19) {
            do {
              lVar25 = *plVar17;
              lVar12 = *(long *)(lVar11 + 0x298);
              if (lVar25 != lVar20 || lVar12 != lVar18) {
                bVar19 = false;
                ClearExclusiveLocal();
                lVar20 = lVar25;
                lVar18 = lVar12;
                goto joined_r0x0115ea48;
              }
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar20;
                *(long *)(lVar11 + 0x294) = lVar18 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar19 = true;
            lVar20 = lVar25;
            lVar18 = lVar12;
            goto joined_r0x0115ea48;
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x2a0));
          *(undefined8 *)(lVar11 + 0x60) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x68));
          if (!bVar26) goto LAB_0115e4fc;
          do {
            lVar11 = *plVar27;
            lVar25 = plVar27[1];
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar11;
              plVar27[1] = lVar25;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar12 = *plVar27;
            lVar20 = plVar27[1];
            if (lVar12 != lVar11 || lVar20 != lVar25) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115ead0;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar11;
              *(long *)((long)plVar27 + 4) = lVar25 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
joined_r0x0115ead0:
          if (!bVar26) {
            do {
              lVar11 = *plVar27;
              lVar25 = plVar27[1];
              if (lVar11 != lVar12 || lVar25 != lVar20) {
                bVar26 = false;
                ClearExclusiveLocal();
                lVar12 = lVar11;
                lVar20 = lVar25;
                goto joined_r0x0115ead0;
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar26) {
                *plVar27 = lVar12;
                *(long *)((long)plVar27 + 4) = lVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar26 = true;
            lVar12 = lVar11;
            lVar20 = lVar25;
            goto joined_r0x0115ead0;
          }
          nn::os::SignalLightEvent((LightEventType *)(plVar27 + 2));
        }
        else {
          do {
            lVar12 = *plVar27;
            lVar20 = *(long *)(lVar11 + 0x538);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar12;
              *(long *)(lVar11 + 0x538) = lVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar18 = *plVar27;
            lVar4 = *(long *)(lVar11 + 0x538);
            if (lVar18 != lVar12 || lVar4 != lVar20) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115e464;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar12;
              *(long *)(lVar11 + 0x534) = lVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
joined_r0x0115e464:
          if (!bVar26) {
            do {
              lVar12 = *plVar27;
              lVar20 = *(long *)(lVar11 + 0x538);
              if (lVar12 != lVar18 || lVar20 != lVar4) {
                bVar26 = false;
                ClearExclusiveLocal();
                lVar18 = lVar12;
                lVar4 = lVar20;
                goto joined_r0x0115e464;
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar26) {
                *plVar27 = lVar18;
                *(long *)(lVar11 + 0x534) = lVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar26 = true;
            lVar18 = lVar12;
            lVar4 = lVar20;
            goto joined_r0x0115e464;
          }
          nn::os::SignalLightEvent(pLVar14);
          local_88 = local_c8;
          local_80 = (undefined8 *)0x0;
          local_78 = 0;
          FUN_01161be4(&local_80,&local_c0);
          FUN_01161f08(lVar11,plVar28,local_f8,uVar13,lVar25,&local_88);
          puVar8 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_80 + 3);
            do {
              sVar5 = *psVar2;
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar26) {
                *psVar2 = sVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 1) {
              piVar3 = (int *)((long)local_80 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar26) {
                  *piVar3 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_98 = (long *)*puVar8;
                FUN_00c44438(lVar11 + 0x8040,&local_98);
              }
            }
            else if (sVar5 == 0) goto LAB_0115eba0;
          }
        }
      }
      else {
        puStack_90 = local_f8;
        lVar25 = *(long *)(lVar32 + 0x40);
        uVar13 = *(undefined8 *)(lVar32 + 0x48);
        plVar27 = (long *)(lVar11 + 0x530);
        local_98 = plVar28;
        lVar12 = nn::os::GetCurrentThread();
        do {
          lVar20 = *plVar27;
          lVar18 = *(long *)(lVar11 + 0x538);
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar26) {
            *plVar27 = lVar20;
            *(long *)(lVar11 + 0x538) = lVar18;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        pLVar14 = (LightEventType *)(lVar11 + 0x540);
LAB_0115f5d4:
        while ((lVar20 != 0 && (lVar12 != lVar20))) {
          nn::os::WaitLightEvent(pLVar14);
          do {
            lVar20 = *plVar27;
            lVar18 = *(long *)(lVar11 + 0x538);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar20;
              *(long *)(lVar11 + 0x538) = lVar18;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        do {
          lVar4 = *plVar27;
          if (lVar4 != lVar20 || *(long *)(lVar11 + 0x538) != lVar18) {
            bVar26 = false;
            ClearExclusiveLocal();
            goto LAB_0115f610;
          }
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar26) {
            *plVar27 = lVar20;
            *(long *)(lVar11 + 0x534) = lVar18 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar26 = true;
LAB_0115f610:
        if (!bVar26) {
          lVar20 = lVar4;
          lVar18 = *(long *)(lVar11 + 0x538);
          goto LAB_0115f5d4;
        }
        if (*(char *)(lVar11 + 0x550) == '\0') {
          plVar28 = (long *)(lVar11 + 0x60);
          lVar12 = nn::os::GetCurrentThread();
LAB_0115f798:
          if (*plVar28 == 0) goto code_r0x0115f7a0;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
          do {
            if (*plVar28 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
                while (*plVar28 == 0) {
                  cVar6 = '\x01';
                  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar26) {
                    *plVar28 = lVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_0115f7a8;
                }
              } while( true );
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar26) {
              *plVar28 = lVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_0115f7a8:
          plVar28 = (long *)(lVar11 + 0x2f0);
          lVar20 = *plVar28;
          lVar12 = nn::os::GetCurrentThread();
          if (lVar12 != lVar20) {
            lVar12 = nn::os::GetCurrentThread();
LAB_0115f7c4:
            if (*plVar28 == 0) goto code_r0x0115f7cc;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2f8));
            do {
              if (*plVar28 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2f8));
                  while (*plVar28 == 0) {
                    cVar6 = '\x01';
                    bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar26) {
                      *plVar28 = lVar12;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_0115f7d4;
                  }
                } while( true );
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar26) {
                *plVar28 = lVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_0115f7d4:
            bVar26 = false;
            goto LAB_0115f7d8;
          }
          plVar28 = (long *)0x0;
          bVar26 = true;
LAB_0115f7d8:
          plVar17 = *(long **)(lVar11 + 0x308);
          lVar12 = *(long *)(lVar11 + 0x340);
          if ((lVar12 == 0) || (*plVar17 == lVar25)) {
            plVar15 = plVar17;
LAB_0115f818:
            if (plVar15 == plVar17 + lVar12 * 8) goto LAB_0115fabc;
            uVar13 = FUN_01163110(plVar15[3],&local_c8);
            plVar17 = (long *)(lVar11 + 0x290);
            lVar25 = nn::os::GetCurrentThread();
            do {
              lVar12 = *plVar17;
              lVar20 = *(long *)(lVar11 + 0x298);
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar12;
                *(long *)(lVar11 + 0x298) = lVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            pLVar14 = (LightEventType *)(lVar11 + 0x2a0);
LAB_0115f850:
            while ((lVar12 != 0 && (lVar25 != lVar12))) {
              nn::os::WaitLightEvent(pLVar14);
              do {
                lVar12 = *plVar17;
                lVar20 = *(long *)(lVar11 + 0x298);
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar19) {
                  *plVar17 = lVar12;
                  *(long *)(lVar11 + 0x298) = lVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            do {
              lVar18 = *plVar17;
              if (lVar18 != lVar12 || *(long *)(lVar11 + 0x298) != lVar20) {
                bVar19 = false;
                ClearExclusiveLocal();
                goto LAB_0115f88c;
              }
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar12;
                *(long *)(lVar11 + 0x294) = lVar20 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar19 = true;
LAB_0115f88c:
            if (!bVar19) {
              lVar12 = lVar18;
              lVar20 = *(long *)(lVar11 + 0x298);
              goto LAB_0115f850;
            }
            FUN_021794e0(&local_98,uVar13);
            do {
              lVar25 = *plVar17;
              lVar12 = *(long *)(lVar11 + 0x298);
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar25;
                *(long *)(lVar11 + 0x298) = lVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              lVar20 = *plVar17;
              lVar18 = *(long *)(lVar11 + 0x298);
              if (lVar20 != lVar25 || lVar18 != lVar12) {
                bVar19 = false;
                ClearExclusiveLocal();
                goto joined_r0x0116015c;
              }
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar19) {
                *plVar17 = lVar25;
                *(long *)(lVar11 + 0x294) = lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar19 = true;
joined_r0x0116015c:
            if (!bVar19) {
              do {
                lVar25 = *plVar17;
                lVar12 = *(long *)(lVar11 + 0x298);
                if (lVar25 != lVar20 || lVar12 != lVar18) {
                  bVar19 = false;
                  ClearExclusiveLocal();
                  lVar20 = lVar25;
                  lVar18 = lVar12;
                  goto joined_r0x0116015c;
                }
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar19) {
                  *plVar17 = lVar20;
                  *(long *)(lVar11 + 0x294) = lVar18 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar19 = true;
              lVar20 = lVar25;
              lVar18 = lVar12;
              goto joined_r0x0116015c;
            }
LAB_0115fcc8:
            nn::os::SignalLightEvent(pLVar14);
LAB_0115fccc:
            bVar19 = false;
          }
          else {
            lVar20 = lVar12 * 0x40;
            plVar16 = plVar17;
            while (lVar20 = lVar20 + -0x40, lVar20 != 0) {
              plVar22 = plVar16 + 8;
              plVar15 = plVar16 + 8;
              plVar16 = plVar16 + 8;
              if (*plVar22 == lVar25) goto LAB_0115f818;
            }
LAB_0115fabc:
            plVar17 = (long *)(lVar11 + 0x730);
            lVar20 = *plVar17;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar20) {
              lVar12 = nn::os::GetCurrentThread();
LAB_0115fad8:
              if (*plVar17 == 0) goto code_r0x0115fae0;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x738));
              do {
                if (*plVar17 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x738));
                    while (*plVar17 == 0) {
                      cVar6 = '\x01';
                      bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                      if (bVar19) {
                        *plVar17 = lVar12;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 == '\0') {
                        bVar19 = false;
                        goto LAB_0115fae8;
                      }
                    }
                  } while( true );
                }
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar19) {
                  *plVar17 = lVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar19 = false;
              goto LAB_0115fae8;
            }
            plVar17 = (long *)0x0;
            bVar19 = true;
LAB_0115fae8:
            plVar15 = *(long **)(lVar11 + 0x748);
            lVar12 = *(long *)(lVar11 + 0x780);
            if ((lVar12 != 0) && (*plVar15 != lVar25)) {
              lVar20 = lVar12 * 0x10;
              plVar16 = plVar15;
              while (lVar20 = lVar20 + -0x10, lVar20 != 0) {
                plVar22 = plVar16 + 2;
                plVar23 = plVar16 + 2;
                plVar16 = plVar16 + 2;
                if (*plVar22 == lVar25) goto LAB_0115fb28;
              }
LAB_0115fcbc:
              if (!bVar19) {
                *plVar17 = 0;
                pLVar14 = (LightEventType *)(plVar17 + 1);
                goto LAB_0115fcc8;
              }
              goto LAB_0115fccc;
            }
            plVar23 = plVar15;
LAB_0115fb28:
            if ((plVar23 == plVar15 + lVar12 * 2) || (plVar23[1] == 0)) goto LAB_0115fcbc;
            if (!bVar19) {
              *plVar17 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar17 + 1));
            }
            do {
              lVar12 = *plVar27;
              lVar20 = *(long *)(lVar11 + 0x538);
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar19) {
                *plVar27 = lVar12;
                *(long *)(lVar11 + 0x538) = lVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              lVar18 = *plVar27;
              lVar4 = *(long *)(lVar11 + 0x538);
              if (lVar18 != lVar12 || lVar4 != lVar20) {
                bVar19 = false;
                ClearExclusiveLocal();
                goto joined_r0x01160068;
              }
              cVar6 = '\x01';
              bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar19) {
                *plVar27 = lVar12;
                *(long *)(lVar11 + 0x534) = lVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar19 = true;
joined_r0x01160068:
            if (!bVar19) {
              do {
                lVar12 = *plVar27;
                lVar20 = *(long *)(lVar11 + 0x538);
                if (lVar12 != lVar18 || lVar20 != lVar4) {
                  bVar19 = false;
                  ClearExclusiveLocal();
                  lVar18 = lVar12;
                  lVar4 = lVar20;
                  goto joined_r0x01160068;
                }
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar19) {
                  *plVar27 = lVar18;
                  *(long *)(lVar11 + 0x534) = lVar4 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar19 = true;
              lVar18 = lVar12;
              lVar4 = lVar20;
              goto joined_r0x01160068;
            }
            nn::os::SignalLightEvent(pLVar14);
            puVar8 = puStack_90;
            plVar27 = local_98;
            local_78 = 0;
            local_88 = local_c8;
            local_80 = (undefined8 *)0x0;
            FUN_01161be4(&local_80,&local_c0);
            FUN_011651e8(lVar11,plVar27,puVar8,uVar13,lVar25,&local_88);
            puVar8 = local_80;
            if (local_80 != (undefined8 *)0x0) {
              psVar2 = (short *)(local_80 + 3);
              do {
                sVar5 = *psVar2;
                cVar6 = '\x01';
                bVar19 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar19) {
                  *psVar2 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                piVar3 = (int *)((long)local_80 + 0x1c);
                do {
                  iVar10 = *piVar3;
                  cVar6 = '\x01';
                  bVar19 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar19) {
                    *piVar3 = -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar25 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar25;
                  local_70[0] = *puVar8;
                  FUN_00c44438(lVar25 + 0x8040,local_70);
                }
              }
              else if (sVar5 == 0) goto LAB_0115eba0;
            }
            plVar27 = (long *)0x0;
            bVar19 = true;
          }
          if (!bVar26) {
            *plVar28 = 0;
            nn::os::SignalLightEvent((LightEventType *)(plVar28 + 1));
          }
          *(undefined8 *)(lVar11 + 0x60) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x68));
          if (bVar19) goto LAB_0115e4fc;
          do {
            lVar11 = *plVar27;
            lVar25 = plVar27[1];
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar11;
              plVar27[1] = lVar25;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar12 = *plVar27;
            lVar20 = plVar27[1];
            if (lVar12 != lVar11 || lVar20 != lVar25) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115fec8;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar11;
              *(long *)((long)plVar27 + 4) = lVar25 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
joined_r0x0115fec8:
          if (!bVar26) {
            do {
              lVar11 = *plVar27;
              lVar25 = plVar27[1];
              if (lVar11 != lVar12 || lVar25 != lVar20) {
                bVar26 = false;
                ClearExclusiveLocal();
                lVar12 = lVar11;
                lVar20 = lVar25;
                goto joined_r0x0115fec8;
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar26) {
                *plVar27 = lVar12;
                *(long *)((long)plVar27 + 4) = lVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar26 = true;
            lVar12 = lVar11;
            lVar20 = lVar25;
            goto joined_r0x0115fec8;
          }
          nn::os::SignalLightEvent((LightEventType *)(plVar27 + 2));
        }
        else {
          do {
            lVar12 = *plVar27;
            lVar20 = *(long *)(lVar11 + 0x538);
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar12;
              *(long *)(lVar11 + 0x538) = lVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar18 = *plVar27;
            lVar4 = *(long *)(lVar11 + 0x538);
            if (lVar18 != lVar12 || lVar4 != lVar20) {
              bVar26 = false;
              ClearExclusiveLocal();
              goto joined_r0x0115f95c;
            }
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar26) {
              *plVar27 = lVar12;
              *(long *)(lVar11 + 0x534) = lVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar26 = true;
joined_r0x0115f95c:
          if (!bVar26) {
            do {
              lVar12 = *plVar27;
              lVar20 = *(long *)(lVar11 + 0x538);
              if (lVar12 != lVar18 || lVar20 != lVar4) {
                bVar26 = false;
                ClearExclusiveLocal();
                lVar18 = lVar12;
                lVar4 = lVar20;
                goto joined_r0x0115f95c;
              }
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar26) {
                *plVar27 = lVar18;
                *(long *)(lVar11 + 0x534) = lVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar26 = true;
            lVar18 = lVar12;
            lVar4 = lVar20;
            goto joined_r0x0115f95c;
          }
          nn::os::SignalLightEvent(pLVar14);
          puVar8 = puStack_90;
          plVar28 = local_98;
          local_78 = 0;
          local_88 = local_c8;
          local_80 = (undefined8 *)0x0;
          FUN_01161be4(&local_80,&local_c0);
          FUN_011651e8(lVar11,plVar28,puVar8,uVar13,lVar25,&local_88);
          puVar8 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_80 + 3);
            do {
              sVar5 = *psVar2;
              cVar6 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar26) {
                *psVar2 = sVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 1) {
              piVar3 = (int *)((long)local_80 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar6 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar26) {
                  *piVar3 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_70[0] = *puVar8;
                FUN_00c44438(lVar11 + 0x8040,local_70);
              }
            }
            else if (sVar5 == 0) goto LAB_0115eba0;
          }
        }
      }
    }
    else {
      local_f8 = (undefined8 *)0xffffffffffffffff;
    }
LAB_0115e4fc:
    local_88 = plVar31;
    local_80 = local_f8;
    lVar32 = FUN_01160bdc(lVar32 + 0x218,&local_88);
    plVar31 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar28 = local_c0 + 3;
      do {
        sVar5 = (short)*plVar28;
        cVar6 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar26) {
          *(short *)plVar28 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar26) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_98 = (long *)*plVar31;
          FUN_00c44438(lVar11 + 0x8040,&local_98);
        }
      }
      else if (sVar5 == 0) goto LAB_0115eba0;
    }
    puVar8 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_a8 + 3);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar26) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar26) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_c8 = (long *)*puVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_c8);
        }
      }
      else if (sVar5 == 0) goto LAB_0115eba0;
    }
    if (!bVar9) {
      *plVar24 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
    }
  }
  puVar8 = local_d8;
  *(long *)(param_1 + 0x1d8) = lVar32;
  if (local_d8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_d8 + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar32 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar32;
        local_88 = (long *)*puVar8;
        FUN_00c44438(lVar32 + 0x8040,&local_88);
      }
    }
    else if (sVar5 == 0) goto LAB_0115eba0;
    lVar32 = *(long *)(param_1 + 0x1d8);
  }
  if (lVar32 == -1) {
    local_88 = (long *)0x0;
    local_80 = (undefined8 *)0x0;
    FUN_01160880(&local_88,param_2);
    FUN_01163dac(uVar29,&local_88);
    plVar24 = local_88;
    if (local_88 != (long *)0x0) {
      plVar31 = local_88 + 3;
      do {
        sVar5 = (short)*plVar31;
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar9) {
          *(short *)plVar31 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_88 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar32 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar32;
          local_b0 = (long *)*plVar24;
          FUN_00c44438(lVar32 + 0x8040,&local_b0);
        }
      }
      else if (sVar5 == 0) {
LAB_0115eba0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x1d0) + 0x69) == '\0') {
      bVar9 = *(char *)(*(long *)(param_1 + 0x1d0) + 0x6a) != '\0';
    }
    else {
      bVar9 = true;
    }
    *(bool *)(param_1 + 0x1e0) = bVar9;
  }
  return;
code_r0x0115e0c8:
  cVar6 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar9) {
    *plVar24 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115e0d0;
  goto LAB_0115e0c0;
code_r0x0115e12c:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar26) {
    *plVar28 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115e134;
  goto LAB_0115e124;
code_r0x0115e674:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar26) {
    *plVar17 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115e67c;
  goto LAB_0115e66c;
code_r0x0115e784:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar26) {
    *plVar28 = lVar25;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115e78c;
  goto LAB_0115e77c;
code_r0x0115ec90:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar26) {
    *plVar15 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115ec98;
  goto LAB_0115ec88;
code_r0x0115f680:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar26) {
    *plVar28 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115f688;
  goto LAB_0115f678;
code_r0x0115f6ac:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar26) {
    *plVar28 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115f6b4;
  goto LAB_0115f6a4;
code_r0x0115fa1c:
  cVar6 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar19) {
    *plVar17 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  bVar19 = false;
  if (cVar6 == '\0') goto LAB_0115fa24;
  goto LAB_0115fa14;
code_r0x0115e334:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar26) {
    *plVar28 = lVar11;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115e33c;
  goto LAB_0115e32c;
code_r0x0115e8d8:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar26) {
    *plVar17 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115e8e0;
  goto LAB_0115e8d0;
code_r0x0115e9e8:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar26) {
    *plVar28 = lVar25;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115e9f0;
  goto LAB_0115e9e0;
code_r0x0115ed04:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar26) {
    *plVar15 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115ef30;
  goto LAB_0115ecfc;
code_r0x0115f7a0:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar26) {
    *plVar28 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115f7a8;
  goto LAB_0115f798;
code_r0x0115f7cc:
  cVar6 = '\x01';
  bVar26 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar26) {
    *plVar28 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0115f7d4;
  goto LAB_0115f7c4;
code_r0x0115fae0:
  cVar6 = '\x01';
  bVar19 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar19) {
    *plVar17 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  bVar19 = false;
  if (cVar6 == '\0') goto LAB_0115fae8;
  goto LAB_0115fad8;
}


