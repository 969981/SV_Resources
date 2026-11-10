/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ed155c; name: FUN_00ed155c
 */


void FUN_00ed155c(long param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  short sVar6;
  char cVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  LightEventType *pLVar14;
  long **pplVar15;
  bool bVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  bool bVar29;
  long lVar30;
  long *local_108;
  undefined8 *local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
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
  long *local_70 [2];
  
  if (((*PTR_DAT_047d88d0 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  puVar8 = PTR_DAT_047d88d8;
  uVar25 = *(undefined8 *)PTR_DAT_047d88d8;
  *(undefined8 *)PTR_DAT_047d88e0 = uVar25;
  if (*(long *)(param_1 + 0x2e8) != -1) {
    FUN_00ed45e8(*param_2);
    *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  }
  lVar30 = *param_2;
  local_88 = (long *)0x0;
  local_80 = (undefined8 *)0x0;
  FUN_00c43ef0(&local_88,param_1 + 0x98);
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  if (local_88[2] == param_1 + 0x28) {
    FUN_00c953a8(&local_d8,&local_88);
  }
  plVar18 = local_88;
  if (local_88 != (long *)0x0) {
    plVar28 = local_88 + 3;
    do {
      sVar6 = (short)*plVar28;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar9) {
        *(short *)plVar28 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_88 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_b0 = (long *)*plVar18;
        FUN_00c44438(lVar11 + 0x8040,&local_b0);
      }
    }
    else if (sVar6 == 0) goto LAB_00ed183c;
  }
  if (((*(long *)(lVar30 + 0x40) == 0) && (*(long *)(lVar30 + 0x48) == 0)) ||
     (*(char *)(lVar30 + 0x68) != '\0')) {
    uVar26 = 0xffffffffffffffff;
  }
  else {
    local_f0 = (long *)(lVar30 + 0x200);
    lVar27 = *local_f0;
    lVar11 = nn::os::GetCurrentThread();
    if (lVar11 != lVar27) {
      lVar11 = nn::os::GetCurrentThread();
LAB_00ed1a08:
      if (*local_f0 == 0) goto code_r0x00ed1a14;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x208));
      do {
        if (*local_f0 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x208));
            while (*local_f0 == 0) {
              cVar7 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(local_f0,0x10);
              if (bVar9) {
                *local_f0 = lVar11;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_00ed1a1c;
            }
          } while( true );
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(local_f0,0x10);
        if (bVar9) {
          *local_f0 = lVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_00ed1a1c:
      bVar9 = false;
      goto LAB_00ed1a20;
    }
    local_f0 = (long *)0x0;
    bVar9 = true;
LAB_00ed1a20:
    local_b0 = *(long **)(lVar30 + 0x48);
    local_a0 = 0;
    local_a8 = (undefined8 *)0x0;
    FUN_00c6c994(&local_a8,&local_d8);
    if ((*(long *)(lVar30 + 0x40) == 0) && (*(long *)(lVar30 + 0x48) == 0)) {
      local_108 = (long *)0xffffffffffffffff;
    }
    else if (*(char *)(lVar30 + 0x68) == '\0') {
      plVar18 = (long *)(lVar30 + 0x70);
      lVar27 = *plVar18;
      lVar11 = nn::os::GetCurrentThread();
      if (lVar11 != lVar27) {
        lVar11 = nn::os::GetCurrentThread();
LAB_00ed1a74:
        if (*plVar18 == 0) goto code_r0x00ed1a80;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x78));
        do {
          if (*plVar18 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x78));
              while (*plVar18 == 0) {
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar29) {
                  *plVar18 = lVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_00ed1a88;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar29) {
            *plVar18 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00ed1a88:
        bVar29 = false;
        plVar28 = plVar18;
        goto LAB_00ed1a90;
      }
      plVar28 = (long *)0x0;
      bVar29 = true;
LAB_00ed1a90:
      do {
        lVar11 = *(long *)(lVar30 + 0x100) - *(long *)(lVar30 + 0xf8);
        if (lVar11 == 0) {
          local_108 = (long *)(*(long *)(lVar30 + 0x90) - *(long *)(lVar30 + 0x88) >> 3);
          FUN_027641b8(lVar30 + 0x88);
          goto LAB_00ed1abc;
        }
        local_108 = *(long **)(*(long *)(lVar30 + 0x100) + -8);
        *(long *)(lVar30 + 0x100) = lVar11 + *(long *)(lVar30 + 0xf8) + -8;
        uVar26 = (ulong)local_108 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(lVar30 + 0xc0) + uVar26) =
             *(ulong *)(*(long *)(lVar30 + 0xc0) + uVar26) &
             (1L << ((ulong)local_108 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((long *)(*(long *)(lVar30 + 0x90) - *(long *)(lVar30 + 0x88) >> 3) <= local_108);
      *(undefined8 *)(*(long *)(lVar30 + 0x88) + (long)local_108 * 8) = 0xffffffffffffffff;
      if (*(long **)(lVar30 + 0x130) <= local_108) {
LAB_00ed1abc:
        *(long *)(lVar30 + 0x130) = (long)local_108 + 1;
      }
      if (!bVar29) {
        *plVar28 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar28 + 1));
      }
      cVar7 = *(char *)(lVar30 + 0x398);
      if (((*PTR_DAT_047d88d0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
      lVar11 = *(long *)puVar8;
      *(long *)PTR_DAT_047d88e0 = lVar11;
      if (cVar7 == '\0') {
        local_e0 = (long *)(lVar11 + 0x530);
        lVar27 = *(long *)(lVar30 + 0x40);
        uVar13 = *(undefined8 *)(lVar30 + 0x48);
        lVar12 = nn::os::GetCurrentThread();
        do {
          lVar21 = *local_e0;
          lVar19 = *(long *)(lVar11 + 0x538);
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
          if (bVar29) {
            *local_e0 = lVar21;
            *(long *)(lVar11 + 0x538) = lVar19;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        pLVar14 = (LightEventType *)(lVar11 + 0x540);
LAB_00ed1b34:
        while ((lVar21 != 0 && (lVar12 != lVar21))) {
          nn::os::WaitLightEvent(pLVar14);
          do {
            lVar21 = *local_e0;
            lVar19 = *(long *)(lVar11 + 0x538);
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar21;
              *(long *)(lVar11 + 0x538) = lVar19;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        do {
          lVar5 = *local_e0;
          if (lVar5 != lVar21 || *(long *)(lVar11 + 0x538) != lVar19) {
            bVar29 = false;
            ClearExclusiveLocal();
            goto LAB_00ed1b78;
          }
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
          if (bVar29) {
            *local_e0 = lVar21;
            *(long *)(lVar11 + 0x534) = lVar19 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar29 = true;
LAB_00ed1b78:
        if (!bVar29) {
          lVar21 = lVar5;
          lVar19 = *(long *)(lVar11 + 0x538);
          goto LAB_00ed1b34;
        }
        if (*(char *)(lVar11 + 0x550) == '\0') {
          plVar28 = (long *)(lVar11 + 0x60);
          lVar12 = nn::os::GetCurrentThread();
LAB_00ed1c80:
          if (*plVar28 == 0) goto code_r0x00ed1c88;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
          do {
            if (*plVar28 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
                while (*plVar28 == 0) {
                  cVar7 = '\x01';
                  bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar29) {
                    *plVar28 = lVar12;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_00ed1c90;
                }
              } while( true );
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00ed1c90:
          plVar28 = (long *)(lVar11 + 0x290);
          lVar12 = nn::os::GetCurrentThread();
          do {
            lVar21 = *plVar28;
            lVar19 = *(long *)(lVar11 + 0x298);
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar21;
              *(long *)(lVar11 + 0x298) = lVar19;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00ed1cbc:
          while ((lVar21 != 0 && (lVar12 != lVar21))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2a0));
            do {
              lVar21 = *plVar28;
              lVar19 = *(long *)(lVar11 + 0x298);
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar29) {
                *plVar28 = lVar21;
                *(long *)(lVar11 + 0x298) = lVar19;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          do {
            lVar5 = *plVar28;
            if (lVar5 != lVar21 || *(long *)(lVar11 + 0x298) != lVar19) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto LAB_00ed1cf8;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar21;
              *(long *)(lVar11 + 0x294) = lVar19 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
LAB_00ed1cf8:
          if (!bVar29) {
            lVar21 = lVar5;
            lVar19 = *(long *)(lVar11 + 0x298);
            goto LAB_00ed1cbc;
          }
          plVar20 = *(long **)(lVar11 + 0x2b0);
          lVar12 = *(long *)(lVar11 + 0x2e8);
          if ((lVar12 == 0) || (*plVar20 == lVar27)) {
            plVar17 = plVar20;
LAB_00ed1d40:
            if (plVar17 == plVar20 + lVar12 * 4) goto LAB_00ed2488;
            uVar13 = FUN_010628c0(*(undefined8 *)
                                   (*(long *)(lVar11 + 0x348) + plVar17[3] * 0x130 + 0x110),
                                  &local_b0);
            lVar12 = *plVar18;
            lVar27 = nn::os::GetCurrentThread();
            if (lVar27 != lVar12) {
              lVar27 = nn::os::GetCurrentThread();
LAB_00ed1d90:
              if (*plVar18 == 0) goto code_r0x00ed1d9c;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x78));
              do {
                if (*plVar18 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x78));
                    while (*plVar18 == 0) {
                      cVar7 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar29) {
                        *plVar18 = lVar27;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                      if (cVar7 == '\0') goto LAB_00ed1da4;
                    }
                  } while( true );
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar29) {
                  *plVar18 = lVar27;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
LAB_00ed1da4:
              *(undefined8 *)(*(long *)(lVar30 + 0x88) + (long)local_108 * 8) = uVar13;
              *(undefined8 *)(lVar30 + 0x70) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar30 + 0x78));
              goto LAB_00ed1dc4;
            }
            *(undefined8 *)(*(long *)(lVar30 + 0x88) + (long)local_108 * 8) = uVar13;
LAB_00ed1dc4:
            bVar29 = true;
          }
          else {
            lVar21 = lVar12 * 0x20;
            plVar23 = plVar20;
            while (lVar21 = lVar21 + -0x20, lVar21 != 0) {
              plVar24 = plVar23 + 4;
              plVar17 = plVar23 + 4;
              plVar23 = plVar23 + 4;
              if (*plVar24 == lVar27) goto LAB_00ed1d40;
            }
LAB_00ed2488:
            local_f8 = (long *)(lVar11 + 0x948);
            lVar21 = *local_f8;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar21) {
              lVar12 = nn::os::GetCurrentThread();
LAB_00ed24b0:
              if (*local_f8 == 0) goto code_r0x00ed24bc;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x950));
              do {
                if (*local_f8 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x950));
                    while (*local_f8 == 0) {
                      cVar7 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(local_f8,0x10);
                      if (bVar29) {
                        *local_f8 = lVar12;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                      if (cVar7 == '\0') goto LAB_00ed24c4;
                    }
                  } while( true );
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(local_f8,0x10);
                if (bVar29) {
                  *local_f8 = lVar12;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
LAB_00ed24c4:
              bVar16 = false;
              goto LAB_00ed24c8;
            }
            local_f8 = (long *)0x0;
            bVar16 = true;
LAB_00ed24c8:
            plVar20 = *(long **)(lVar11 + 0x960);
            lVar12 = *(long *)(lVar11 + 0x998);
            if ((lVar12 == 0) || (*plVar20 == lVar27)) {
              plVar17 = plVar20;
LAB_00ed24dc:
              if (plVar17 == plVar20 + lVar12 * 2) goto LAB_00ed2cfc;
              bVar29 = true;
              *(undefined1 *)(plVar17 + 1) = 1;
            }
            else {
              lVar21 = lVar12 * 0x10;
              plVar23 = plVar20;
              while (lVar21 = lVar21 + -0x10, lVar21 != 0) {
                plVar17 = plVar23 + 2;
                plVar24 = plVar23 + 2;
                plVar23 = plVar17;
                if (*plVar24 == lVar27) goto LAB_00ed24dc;
              }
LAB_00ed2cfc:
              do {
                lVar12 = *local_e0;
                lVar21 = *(long *)(lVar11 + 0x538);
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                if (bVar29) {
                  *local_e0 = lVar12;
                  *(long *)(lVar11 + 0x538) = lVar21;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              do {
                lVar19 = *local_e0;
                lVar5 = *(long *)(lVar11 + 0x538);
                if (lVar19 != lVar12 || lVar5 != lVar21) {
                  bVar29 = false;
                  ClearExclusiveLocal();
                  goto LAB_00ed2d40;
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                if (bVar29) {
                  *local_e0 = lVar12;
                  *(long *)(lVar11 + 0x534) = lVar21 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar29 = true;
LAB_00ed2d40:
              if (!bVar29) {
                do {
                  lVar12 = *local_e0;
                  lVar21 = *(long *)(lVar11 + 0x538);
                  if (lVar12 != lVar19 || lVar21 != lVar5) {
                    bVar29 = false;
                    ClearExclusiveLocal();
                    goto joined_r0x00ed2fc4;
                  }
                  cVar7 = '\x01';
                  bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                  if (bVar29) {
                    *local_e0 = lVar19;
                    *(long *)(lVar11 + 0x534) = lVar5 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                bVar29 = true;
joined_r0x00ed2fc4:
                if (!bVar29) {
                  do {
                    lVar19 = *local_e0;
                    lVar5 = *(long *)(lVar11 + 0x538);
                    if (lVar19 != lVar12 || lVar5 != lVar21) {
                      bVar29 = false;
                      ClearExclusiveLocal();
                      lVar12 = lVar19;
                      lVar21 = lVar5;
                      goto joined_r0x00ed2fc4;
                    }
                    cVar7 = '\x01';
                    bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                    if (bVar29) {
                      *local_e0 = lVar12;
                      *(long *)(lVar11 + 0x534) = lVar21 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  bVar29 = true;
                  lVar12 = lVar19;
                  lVar21 = lVar5;
                  goto joined_r0x00ed2fc4;
                }
              }
              nn::os::SignalLightEvent(pLVar14);
              local_88 = local_b0;
              local_80 = (undefined8 *)0x0;
              local_78 = 0;
              FUN_00cacc64(&local_80,&local_a8);
              FUN_01031e84(lVar11,plVar18,local_108,uVar13,lVar27,&local_88);
              puVar4 = local_80;
              if (local_80 == (undefined8 *)0x0) {
                local_e0 = (long *)0x0;
                bVar29 = false;
              }
              else {
                psVar2 = (short *)(local_80 + 3);
                do {
                  sVar6 = *psVar2;
                  cVar7 = '\x01';
                  bVar29 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar29) {
                    *psVar2 = sVar6 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (sVar6 == 1) {
                  piVar3 = (int *)((long)local_80 + 0x1c);
                  do {
                    iVar10 = *piVar3;
                    cVar7 = '\x01';
                    bVar29 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar29) {
                      *piVar3 = -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar10 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar27 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar27;
                    local_c8 = (long *)*puVar4;
                    FUN_00c44438(lVar27 + 0x8040,&local_c8);
                  }
                }
                else if (sVar6 == 0) goto LAB_00ed183c;
                local_e0 = (long *)0x0;
                bVar29 = false;
              }
            }
            if (!bVar16) {
              *local_f8 = 0;
              nn::os::SignalLightEvent((LightEventType *)(local_f8 + 1));
            }
          }
          do {
            lVar27 = *plVar28;
            lVar12 = *(long *)(lVar11 + 0x298);
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar16) {
              *plVar28 = lVar27;
              *(long *)(lVar11 + 0x298) = lVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar21 = *plVar28;
            lVar19 = *(long *)(lVar11 + 0x298);
            if (lVar21 != lVar27 || lVar19 != lVar12) {
              bVar16 = false;
              ClearExclusiveLocal();
              goto LAB_00ed237c;
            }
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar16) {
              *plVar28 = lVar27;
              *(long *)(lVar11 + 0x294) = lVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar16 = true;
LAB_00ed237c:
          if (!bVar16) {
            do {
              lVar27 = *plVar28;
              lVar12 = *(long *)(lVar11 + 0x298);
              if (lVar27 != lVar21 || lVar12 != lVar19) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto joined_r0x00ed2b54;
              }
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = lVar21;
                *(long *)(lVar11 + 0x294) = lVar19 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar16 = true;
joined_r0x00ed2b54:
            if (!bVar16) {
              do {
                lVar21 = *plVar28;
                lVar19 = *(long *)(lVar11 + 0x298);
                if (lVar21 != lVar27 || lVar19 != lVar12) {
                  bVar16 = false;
                  ClearExclusiveLocal();
                  lVar27 = lVar21;
                  lVar12 = lVar19;
                  goto joined_r0x00ed2b54;
                }
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar16) {
                  *plVar28 = lVar27;
                  *(long *)(lVar11 + 0x294) = lVar12 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar16 = true;
              lVar27 = lVar21;
              lVar12 = lVar19;
              goto joined_r0x00ed2b54;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x2a0));
          *(undefined8 *)(lVar11 + 0x60) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x68));
          if (!bVar29) goto LAB_00ed1e54;
          do {
            lVar11 = *local_e0;
            lVar27 = local_e0[1];
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar11;
              local_e0[1] = lVar27;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar12 = *local_e0;
            lVar21 = local_e0[1];
            if (lVar12 != lVar11 || lVar21 != lVar27) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto LAB_00ed2740;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar11;
              *(long *)((long)local_e0 + 4) = lVar27 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
LAB_00ed2740:
          if (bVar29) goto LAB_00ed2744;
          do {
            lVar11 = *local_e0;
            lVar27 = local_e0[1];
            if (lVar11 != lVar12 || lVar27 != lVar21) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto joined_r0x00ed2c44;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar12;
              *(long *)((long)local_e0 + 4) = lVar21 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
joined_r0x00ed2c44:
          if (!bVar29) {
            do {
              lVar12 = *local_e0;
              lVar21 = local_e0[1];
              if (lVar12 != lVar11 || lVar21 != lVar27) {
                bVar29 = false;
                ClearExclusiveLocal();
                lVar11 = lVar12;
                lVar27 = lVar21;
                goto joined_r0x00ed2c44;
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
              if (bVar29) {
                *local_e0 = lVar11;
                *(long *)((long)local_e0 + 4) = lVar27 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar29 = true;
            lVar11 = lVar12;
            lVar27 = lVar21;
            goto joined_r0x00ed2c44;
          }
          goto LAB_00ed2744;
        }
        do {
          lVar12 = *local_e0;
          lVar21 = *(long *)(lVar11 + 0x538);
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
          if (bVar29) {
            *local_e0 = lVar12;
            *(long *)(lVar11 + 0x538) = lVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar19 = *local_e0;
          lVar5 = *(long *)(lVar11 + 0x538);
          if (lVar19 != lVar12 || lVar5 != lVar21) {
            bVar29 = false;
            ClearExclusiveLocal();
            goto LAB_00ed1e08;
          }
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
          if (bVar29) {
            *local_e0 = lVar12;
            *(long *)(lVar11 + 0x534) = lVar21 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar29 = true;
LAB_00ed1e08:
        if (!bVar29) {
          do {
            lVar12 = *local_e0;
            lVar21 = *(long *)(lVar11 + 0x538);
            if (lVar12 != lVar19 || lVar21 != lVar5) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto joined_r0x00ed2a80;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar19;
              *(long *)(lVar11 + 0x534) = lVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
joined_r0x00ed2a80:
          if (!bVar29) {
            do {
              lVar19 = *local_e0;
              lVar5 = *(long *)(lVar11 + 0x538);
              if (lVar19 != lVar12 || lVar5 != lVar21) {
                bVar29 = false;
                ClearExclusiveLocal();
                lVar12 = lVar19;
                lVar21 = lVar5;
                goto joined_r0x00ed2a80;
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
              if (bVar29) {
                *local_e0 = lVar12;
                *(long *)(lVar11 + 0x534) = lVar21 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar29 = true;
            lVar12 = lVar19;
            lVar21 = lVar5;
            goto joined_r0x00ed2a80;
          }
        }
        nn::os::SignalLightEvent(pLVar14);
        local_88 = local_b0;
        local_80 = (undefined8 *)0x0;
        local_78 = 0;
        FUN_00cacc64(&local_80,&local_a8);
        FUN_01031e84(lVar11,plVar18,local_108,uVar13,lVar27,&local_88);
        puVar4 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_80 + 3);
          do {
            sVar6 = *psVar2;
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar29) {
              *psVar2 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 != 1) goto LAB_00ed25a4;
          piVar3 = (int *)((long)local_80 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar29) {
              *piVar3 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            pplVar15 = &local_c8;
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_c8 = (long *)*puVar4;
            goto LAB_00ed29b8;
          }
        }
      }
      else {
        local_c0 = local_108;
        lVar27 = *(long *)(lVar30 + 0x40);
        uVar13 = *(undefined8 *)(lVar30 + 0x48);
        plVar28 = (long *)(lVar11 + 0x530);
        local_c8 = plVar18;
        lVar12 = nn::os::GetCurrentThread();
        do {
          lVar21 = *plVar28;
          lVar19 = *(long *)(lVar11 + 0x538);
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar29) {
            *plVar28 = lVar21;
            *(long *)(lVar11 + 0x538) = lVar19;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        pLVar14 = (LightEventType *)(lVar11 + 0x540);
LAB_00ed3128:
        while ((local_e0 = (long *)(lVar11 + 0x530), lVar21 != 0 && (lVar12 != lVar21))) {
          nn::os::WaitLightEvent(pLVar14);
          do {
            lVar21 = *local_e0;
            lVar19 = *(long *)(lVar11 + 0x538);
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar21;
              *(long *)(lVar11 + 0x538) = lVar19;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        do {
          lVar5 = *local_e0;
          if (lVar5 != lVar21 || *(long *)(lVar11 + 0x538) != lVar19) {
            bVar29 = false;
            ClearExclusiveLocal();
            goto LAB_00ed316c;
          }
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
          if (bVar29) {
            *local_e0 = lVar21;
            *(long *)(lVar11 + 0x534) = lVar19 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar29 = true;
LAB_00ed316c:
        if (!bVar29) {
          lVar21 = lVar5;
          lVar19 = *(long *)(lVar11 + 0x538);
          goto LAB_00ed3128;
        }
        if (*(char *)(lVar11 + 0x550) == '\0') {
          plVar18 = (long *)(lVar11 + 0x60);
          lVar12 = nn::os::GetCurrentThread();
LAB_00ed3288:
          if (*plVar18 == 0) goto code_r0x00ed3290;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
          do {
            if (*plVar18 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
                while (*plVar18 == 0) {
                  cVar7 = '\x01';
                  bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar29) {
                    *plVar18 = lVar12;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_00ed3298;
                }
              } while( true );
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar29) {
              *plVar18 = lVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00ed3298:
          local_e8 = (long *)(lVar11 + 0x2f0);
          lVar21 = *local_e8;
          lVar12 = nn::os::GetCurrentThread();
          if (lVar12 != lVar21) {
            lVar12 = nn::os::GetCurrentThread();
LAB_00ed32c0:
            if (*local_e8 == 0) goto code_r0x00ed32cc;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2f8));
            do {
              if (*local_e8 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2f8));
                  while (*local_e8 == 0) {
                    cVar7 = '\x01';
                    bVar29 = (bool)ExclusiveMonitorPass(local_e8,0x10);
                    if (bVar29) {
                      *local_e8 = lVar12;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                    if (cVar7 == '\0') goto LAB_00ed32d4;
                  }
                } while( true );
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(local_e8,0x10);
              if (bVar29) {
                *local_e8 = lVar12;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
LAB_00ed32d4:
            bVar29 = false;
            goto LAB_00ed32d8;
          }
          local_e8 = (long *)0x0;
          bVar29 = true;
LAB_00ed32d8:
          plVar18 = *(long **)(lVar11 + 0x308);
          lVar12 = *(long *)(lVar11 + 0x340);
          if ((lVar12 == 0) || (*plVar18 == lVar27)) {
            plVar28 = plVar18;
LAB_00ed331c:
            if (plVar28 == plVar18 + lVar12 * 8) goto LAB_00ed36f0;
            uVar13 = FUN_010628c0(plVar28[2],&local_b0);
            plVar18 = (long *)(lVar11 + 0x290);
            lVar27 = nn::os::GetCurrentThread();
            do {
              lVar12 = *plVar18;
              lVar21 = *(long *)(lVar11 + 0x298);
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar16) {
                *plVar18 = lVar12;
                *(long *)(lVar11 + 0x298) = lVar21;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            pLVar14 = (LightEventType *)(lVar11 + 0x2a0);
LAB_00ed3360:
            while ((lVar12 != 0 && (lVar27 != lVar12))) {
              nn::os::WaitLightEvent(pLVar14);
              do {
                lVar12 = *plVar18;
                lVar21 = *(long *)(lVar11 + 0x298);
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar16) {
                  *plVar18 = lVar12;
                  *(long *)(lVar11 + 0x298) = lVar21;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            do {
              lVar19 = *plVar18;
              if (lVar19 != lVar12 || *(long *)(lVar11 + 0x298) != lVar21) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto LAB_00ed339c;
              }
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar16) {
                *plVar18 = lVar12;
                *(long *)(lVar11 + 0x294) = lVar21 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar16 = true;
LAB_00ed339c:
            if (!bVar16) {
              lVar12 = lVar19;
              lVar21 = *(long *)(lVar11 + 0x298);
              goto LAB_00ed3360;
            }
            FUN_02764658(&local_c8,uVar13);
            do {
              lVar27 = *plVar18;
              lVar12 = *(long *)(lVar11 + 0x298);
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar16) {
                *plVar18 = lVar27;
                *(long *)(lVar11 + 0x298) = lVar12;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              lVar21 = *plVar18;
              lVar19 = *(long *)(lVar11 + 0x298);
              if (lVar21 != lVar27 || lVar19 != lVar12) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto LAB_00ed3d60;
              }
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar16) {
                *plVar18 = lVar27;
                *(long *)(lVar11 + 0x294) = lVar12 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar16 = true;
LAB_00ed3d60:
            if (!bVar16) {
              do {
                lVar27 = *plVar18;
                lVar12 = *(long *)(lVar11 + 0x298);
                if (lVar27 != lVar21 || lVar12 != lVar19) {
                  bVar16 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x00ed42e0;
                }
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar16) {
                  *plVar18 = lVar21;
                  *(long *)(lVar11 + 0x294) = lVar19 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar16 = true;
joined_r0x00ed42e0:
              if (!bVar16) {
                do {
                  lVar21 = *plVar18;
                  lVar19 = *(long *)(lVar11 + 0x298);
                  if (lVar21 != lVar27 || lVar19 != lVar12) {
                    bVar16 = false;
                    ClearExclusiveLocal();
                    lVar27 = lVar21;
                    lVar12 = lVar19;
                    goto joined_r0x00ed42e0;
                  }
                  cVar7 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar16) {
                    *plVar18 = lVar27;
                    *(long *)(lVar11 + 0x294) = lVar12 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                bVar16 = true;
                lVar27 = lVar21;
                lVar12 = lVar19;
                goto joined_r0x00ed42e0;
              }
            }
LAB_00ed3aec:
            nn::os::SignalLightEvent(pLVar14);
LAB_00ed3af0:
            bVar16 = false;
          }
          else {
            lVar21 = lVar12 * 0x40;
            plVar20 = plVar18;
            while (lVar21 = lVar21 + -0x40, lVar21 != 0) {
              plVar17 = plVar20 + 8;
              plVar28 = plVar20 + 8;
              plVar20 = plVar20 + 8;
              if (*plVar17 == lVar27) goto LAB_00ed331c;
            }
LAB_00ed36f0:
            plVar18 = (long *)(lVar11 + 0x730);
            lVar21 = *plVar18;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar21) {
              lVar12 = nn::os::GetCurrentThread();
LAB_00ed3714:
              if (*plVar18 == 0) goto code_r0x00ed371c;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x738));
              do {
                if (*plVar18 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x738));
                    while (*plVar18 == 0) {
                      cVar7 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar16) {
                        *plVar18 = lVar12;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                      if (cVar7 == '\0') {
                        bVar16 = false;
                        goto LAB_00ed3724;
                      }
                    }
                  } while( true );
                }
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar16) {
                  *plVar18 = lVar12;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar16 = false;
              goto LAB_00ed3724;
            }
            plVar18 = (long *)0x0;
            bVar16 = true;
LAB_00ed3724:
            plVar28 = *(long **)(lVar11 + 0x748);
            lVar12 = *(long *)(lVar11 + 0x780);
            if ((lVar12 != 0) && (*plVar28 != lVar27)) {
              lVar21 = lVar12 * 0x10;
              plVar20 = plVar28;
              while (lVar21 = lVar21 + -0x10, lVar21 != 0) {
                plVar17 = plVar20 + 2;
                plVar23 = plVar20 + 2;
                plVar20 = plVar20 + 2;
                if (*plVar17 == lVar27) goto LAB_00ed3768;
              }
LAB_00ed3ae0:
              if (!bVar16) {
                pLVar14 = (LightEventType *)(plVar18 + 1);
                *plVar18 = 0;
                goto LAB_00ed3aec;
              }
              goto LAB_00ed3af0;
            }
            plVar23 = plVar28;
LAB_00ed3768:
            if (plVar23 == plVar28 + lVar12 * 2) goto LAB_00ed3ae0;
            lVar12 = plVar23[1];
            if (!bVar16) {
              *plVar18 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
            }
            if (lVar12 == 0) goto LAB_00ed3af0;
            do {
              lVar12 = *local_e0;
              lVar21 = *(long *)(lVar11 + 0x538);
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(local_e0,0x10);
              if (bVar16) {
                *local_e0 = lVar12;
                *(long *)(lVar11 + 0x538) = lVar21;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              lVar19 = *local_e0;
              lVar5 = *(long *)(lVar11 + 0x538);
              if (lVar19 != lVar12 || lVar5 != lVar21) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto LAB_00ed3bdc;
              }
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(local_e0,0x10);
              if (bVar16) {
                *local_e0 = lVar12;
                *(long *)(lVar11 + 0x534) = lVar21 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar16 = true;
LAB_00ed3bdc:
            if (!bVar16) {
              do {
                lVar12 = *local_e0;
                lVar21 = *(long *)(lVar11 + 0x538);
                if (lVar12 != lVar19 || lVar21 != lVar5) {
                  bVar16 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x00ed4210;
                }
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                if (bVar16) {
                  *local_e0 = lVar19;
                  *(long *)(lVar11 + 0x534) = lVar5 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar16 = true;
joined_r0x00ed4210:
              if (!bVar16) {
                do {
                  lVar19 = *local_e0;
                  lVar5 = *(long *)(lVar11 + 0x538);
                  if (lVar19 != lVar12 || lVar5 != lVar21) {
                    bVar16 = false;
                    ClearExclusiveLocal();
                    lVar12 = lVar19;
                    lVar21 = lVar5;
                    goto joined_r0x00ed4210;
                  }
                  cVar7 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                  if (bVar16) {
                    *local_e0 = lVar12;
                    *(long *)(lVar11 + 0x534) = lVar21 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                bVar16 = true;
                lVar12 = lVar19;
                lVar21 = lVar5;
                goto joined_r0x00ed4210;
              }
            }
            nn::os::SignalLightEvent(pLVar14);
            plVar28 = local_c0;
            plVar18 = local_c8;
            local_78 = 0;
            local_88 = local_b0;
            local_80 = (undefined8 *)0x0;
            FUN_00cacc64(&local_80,&local_a8);
            FUN_027642b0(lVar11,plVar18,plVar28,uVar13,lVar27,&local_88);
            puVar4 = local_80;
            if (local_80 != (undefined8 *)0x0) {
              psVar2 = (short *)(local_80 + 3);
              do {
                sVar6 = *psVar2;
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar16) {
                  *psVar2 = sVar6 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar6 == 1) {
                piVar3 = (int *)((long)local_80 + 0x1c);
                do {
                  iVar10 = *piVar3;
                  cVar7 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar16) {
                    *piVar3 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar27 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar27;
                  local_98 = (long *)*puVar4;
                  FUN_00c44438(lVar27 + 0x8040,&local_98);
                }
              }
              else if (sVar6 == 0) goto LAB_00ed183c;
            }
            bVar16 = true;
            local_e0 = (long *)0x0;
          }
          if (!bVar29) {
            *local_e8 = 0;
            nn::os::SignalLightEvent((LightEventType *)(local_e8 + 1));
          }
          *(undefined8 *)(lVar11 + 0x60) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x68));
          if (bVar16) goto LAB_00ed1e54;
          do {
            lVar11 = *local_e0;
            lVar27 = local_e0[1];
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar11;
              local_e0[1] = lVar27;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar12 = *local_e0;
            lVar21 = local_e0[1];
            if (lVar12 != lVar11 || lVar21 != lVar27) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto LAB_00ed3ba0;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar11;
              *(long *)((long)local_e0 + 4) = lVar27 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
LAB_00ed3ba0:
          if (!bVar29) {
            do {
              lVar11 = *local_e0;
              lVar27 = local_e0[1];
              if (lVar11 != lVar12 || lVar27 != lVar21) {
                bVar29 = false;
                ClearExclusiveLocal();
                goto joined_r0x00ed415c;
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
              if (bVar29) {
                *local_e0 = lVar12;
                *(long *)((long)local_e0 + 4) = lVar21 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar29 = true;
joined_r0x00ed415c:
            do {
              if (bVar29) break;
              do {
                lVar12 = *local_e0;
                lVar21 = local_e0[1];
                if (lVar12 != lVar11 || lVar21 != lVar27) {
                  bVar29 = false;
                  ClearExclusiveLocal();
                  lVar11 = lVar12;
                  lVar27 = lVar21;
                  goto joined_r0x00ed415c;
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                if (bVar29) {
                  *local_e0 = lVar11;
                  *(long *)((long)local_e0 + 4) = lVar27 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar29 = true;
              lVar11 = lVar12;
              lVar27 = lVar21;
            } while( true );
          }
LAB_00ed2744:
          nn::os::SignalLightEvent((LightEventType *)(local_e0 + 2));
        }
        else {
          do {
            lVar12 = *local_e0;
            lVar21 = *(long *)(lVar11 + 0x538);
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar12;
              *(long *)(lVar11 + 0x538) = lVar21;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar19 = *local_e0;
            lVar5 = *(long *)(lVar11 + 0x538);
            if (lVar19 != lVar12 || lVar5 != lVar21) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto LAB_00ed3560;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
            if (bVar29) {
              *local_e0 = lVar12;
              *(long *)(lVar11 + 0x534) = lVar21 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
LAB_00ed3560:
          if (!bVar29) {
            do {
              lVar12 = *local_e0;
              lVar21 = *(long *)(lVar11 + 0x538);
              if (lVar12 != lVar19 || lVar21 != lVar5) {
                bVar29 = false;
                ClearExclusiveLocal();
                goto joined_r0x00ed3ee8;
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
              if (bVar29) {
                *local_e0 = lVar19;
                *(long *)(lVar11 + 0x534) = lVar5 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar29 = true;
joined_r0x00ed3ee8:
            if (!bVar29) {
              do {
                lVar19 = *local_e0;
                lVar5 = *(long *)(lVar11 + 0x538);
                if (lVar19 != lVar12 || lVar5 != lVar21) {
                  bVar29 = false;
                  ClearExclusiveLocal();
                  lVar12 = lVar19;
                  lVar21 = lVar5;
                  goto joined_r0x00ed3ee8;
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                if (bVar29) {
                  *local_e0 = lVar12;
                  *(long *)(lVar11 + 0x534) = lVar21 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar29 = true;
              lVar12 = lVar19;
              lVar21 = lVar5;
              goto joined_r0x00ed3ee8;
            }
          }
          nn::os::SignalLightEvent(pLVar14);
          plVar28 = local_c0;
          plVar18 = local_c8;
          local_78 = 0;
          local_88 = local_b0;
          local_80 = (undefined8 *)0x0;
          FUN_00cacc64(&local_80,&local_a8);
          FUN_027642b0(lVar11,plVar18,plVar28,uVar13,lVar27,&local_88);
          puVar4 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_80 + 3);
            do {
              sVar6 = *psVar2;
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar29) {
                *psVar2 = sVar6 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar6 == 1) {
              piVar3 = (int *)((long)local_80 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar29) {
                  *piVar3 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                pplVar15 = &local_98;
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_98 = (long *)*puVar4;
LAB_00ed29b8:
                FUN_00c44438(lVar11 + 0x8040,pplVar15);
              }
            }
            else {
LAB_00ed25a4:
              if (sVar6 == 0) goto LAB_00ed183c;
            }
          }
        }
      }
    }
    else {
      local_108 = (long *)0xffffffffffffffff;
    }
LAB_00ed1e54:
    local_c8 = *(long **)(lVar30 + 0x48);
    local_b8 = 0;
    local_c0 = (long *)0x0;
    FUN_00c6c994(&local_c0,&local_d8);
    if ((*(long *)(lVar30 + 0x40) == 0) && (*(long *)(lVar30 + 0x48) == 0)) {
      local_100 = (undefined8 *)0xffffffffffffffff;
    }
    else if (*(char *)(lVar30 + 0x68) == '\0') {
      plVar18 = (long *)(lVar30 + 0x138);
      lVar27 = *plVar18;
      lVar11 = nn::os::GetCurrentThread();
      if (lVar11 != lVar27) {
        lVar11 = nn::os::GetCurrentThread();
LAB_00ed1ea8:
        if (*plVar18 == 0) goto code_r0x00ed1eb4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x140));
        do {
          if (*plVar18 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x140));
              while (*plVar18 == 0) {
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar29) {
                  *plVar18 = lVar11;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_00ed1ebc;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar29) {
            *plVar18 = lVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00ed1ebc:
        bVar29 = false;
        plVar28 = plVar18;
        goto LAB_00ed1ec4;
      }
      plVar28 = (long *)0x0;
      bVar29 = true;
LAB_00ed1ec4:
      do {
        lVar11 = *(long *)(lVar30 + 0x1c8) - *(long *)(lVar30 + 0x1c0);
        if (lVar11 == 0) {
          local_100 = (undefined8 *)(*(long *)(lVar30 + 0x158) - *(long *)(lVar30 + 0x150) >> 3);
          FUN_027641b8(lVar30 + 0x150);
          goto LAB_00ed1ef0;
        }
        local_100 = *(undefined8 **)(*(long *)(lVar30 + 0x1c8) + -8);
        *(long *)(lVar30 + 0x1c8) = lVar11 + *(long *)(lVar30 + 0x1c0) + -8;
        uVar26 = (ulong)local_100 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(lVar30 + 0x188) + uVar26) =
             *(ulong *)(*(long *)(lVar30 + 0x188) + uVar26) &
             (1L << ((ulong)local_100 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((undefined8 *)(*(long *)(lVar30 + 0x158) - *(long *)(lVar30 + 0x150) >> 3) <=
               local_100);
      *(undefined8 *)(*(long *)(lVar30 + 0x150) + (long)local_100 * 8) = 0xffffffffffffffff;
      if (*(undefined8 **)(lVar30 + 0x1f8) <= local_100) {
LAB_00ed1ef0:
        *(long *)(lVar30 + 0x1f8) = (long)local_100 + 1;
      }
      if (!bVar29) {
        *plVar28 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar28 + 1));
      }
      cVar7 = *(char *)(lVar30 + 0x398);
      if (((*PTR_DAT_047d88d0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
      lVar11 = *(long *)puVar8;
      *(long *)PTR_DAT_047d88e0 = lVar11;
      if (cVar7 == '\0') {
        plVar28 = (long *)(lVar11 + 0x530);
        lVar27 = *(long *)(lVar30 + 0x40);
        uVar13 = *(undefined8 *)(lVar30 + 0x48);
        lVar12 = nn::os::GetCurrentThread();
        do {
          lVar21 = *plVar28;
          lVar19 = *(long *)(lVar11 + 0x538);
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar29) {
            *plVar28 = lVar21;
            *(long *)(lVar11 + 0x538) = lVar19;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        pLVar14 = (LightEventType *)(lVar11 + 0x540);
LAB_00ed1f60:
        while ((lVar21 != 0 && (lVar12 != lVar21))) {
          nn::os::WaitLightEvent(pLVar14);
          do {
            lVar21 = *plVar28;
            lVar19 = *(long *)(lVar11 + 0x538);
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar21;
              *(long *)(lVar11 + 0x538) = lVar19;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        do {
          lVar5 = *plVar28;
          if (lVar5 != lVar21 || *(long *)(lVar11 + 0x538) != lVar19) {
            bVar29 = false;
            ClearExclusiveLocal();
            goto LAB_00ed1f9c;
          }
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar29) {
            *plVar28 = lVar21;
            *(long *)(lVar11 + 0x534) = lVar19 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar29 = true;
LAB_00ed1f9c:
        if (!bVar29) {
          lVar21 = lVar5;
          lVar19 = *(long *)(lVar11 + 0x538);
          goto LAB_00ed1f60;
        }
        if (*(char *)(lVar11 + 0x550) == '\0') {
          plVar20 = (long *)(lVar11 + 0x60);
          lVar12 = nn::os::GetCurrentThread();
LAB_00ed2044:
          if (*plVar20 == 0) goto code_r0x00ed204c;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
          do {
            if (*plVar20 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
                while (*plVar20 == 0) {
                  cVar7 = '\x01';
                  bVar29 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                  if (bVar29) {
                    *plVar20 = lVar12;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_00ed2054;
                }
              } while( true );
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar29) {
              *plVar20 = lVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00ed2054:
          plVar20 = (long *)(lVar11 + 0x290);
          lVar12 = nn::os::GetCurrentThread();
          do {
            lVar21 = *plVar20;
            lVar19 = *(long *)(lVar11 + 0x298);
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar29) {
              *plVar20 = lVar21;
              *(long *)(lVar11 + 0x298) = lVar19;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00ed207c:
          while ((lVar21 != 0 && (lVar12 != lVar21))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2a0));
            do {
              lVar21 = *plVar20;
              lVar19 = *(long *)(lVar11 + 0x298);
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar29) {
                *plVar20 = lVar21;
                *(long *)(lVar11 + 0x298) = lVar19;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          do {
            lVar5 = *plVar20;
            if (lVar5 != lVar21 || *(long *)(lVar11 + 0x298) != lVar19) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto LAB_00ed20b8;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar29) {
              *plVar20 = lVar21;
              *(long *)(lVar11 + 0x294) = lVar19 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
LAB_00ed20b8:
          if (!bVar29) {
            lVar21 = lVar5;
            lVar19 = *(long *)(lVar11 + 0x298);
            goto LAB_00ed207c;
          }
          plVar17 = *(long **)(lVar11 + 0x2b0);
          lVar12 = *(long *)(lVar11 + 0x2e8);
          if ((lVar12 == 0) || (*plVar17 == lVar27)) {
            plVar23 = plVar17;
LAB_00ed2100:
            if (plVar23 == plVar17 + lVar12 * 4) goto LAB_00ed2508;
            uVar13 = FUN_0110cf04(*(undefined8 *)
                                   (*(long *)(lVar11 + 0x348) + plVar23[3] * 0x130 + 0x118),
                                  &local_c8);
            lVar12 = *plVar18;
            lVar27 = nn::os::GetCurrentThread();
            if (lVar27 != lVar12) {
              lVar27 = nn::os::GetCurrentThread();
LAB_00ed2150:
              if (*plVar18 == 0) goto code_r0x00ed215c;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x140));
              do {
                if (*plVar18 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x140));
                    while (*plVar18 == 0) {
                      cVar7 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar29) {
                        *plVar18 = lVar27;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                      if (cVar7 == '\0') goto LAB_00ed2164;
                    }
                  } while( true );
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar29) {
                  *plVar18 = lVar27;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
LAB_00ed2164:
              *(undefined8 *)(*(long *)(lVar30 + 0x150) + (long)local_100 * 8) = uVar13;
              *(undefined8 *)(lVar30 + 0x138) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar30 + 0x140));
              goto LAB_00ed2184;
            }
            *(undefined8 *)(*(long *)(lVar30 + 0x150) + (long)local_100 * 8) = uVar13;
LAB_00ed2184:
            bVar29 = true;
          }
          else {
            lVar21 = lVar12 * 0x20;
            plVar24 = plVar17;
            while (lVar21 = lVar21 + -0x20, lVar21 != 0) {
              plVar1 = plVar24 + 4;
              plVar23 = plVar24 + 4;
              plVar24 = plVar24 + 4;
              if (*plVar1 == lVar27) goto LAB_00ed2100;
            }
LAB_00ed2508:
            local_e8 = (long *)(lVar11 + 0x948);
            lVar21 = *local_e8;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar21) {
              lVar12 = nn::os::GetCurrentThread();
LAB_00ed2530:
              if (*local_e8 == 0) goto code_r0x00ed253c;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x950));
              do {
                if (*local_e8 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x950));
                    while (*local_e8 == 0) {
                      cVar7 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(local_e8,0x10);
                      if (bVar29) {
                        *local_e8 = lVar12;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                      if (cVar7 == '\0') goto LAB_00ed2544;
                    }
                  } while( true );
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(local_e8,0x10);
                if (bVar29) {
                  *local_e8 = lVar12;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
LAB_00ed2544:
              bVar16 = false;
              goto LAB_00ed2548;
            }
            local_e8 = (long *)0x0;
            bVar16 = true;
LAB_00ed2548:
            plVar17 = *(long **)(lVar11 + 0x960);
            lVar12 = *(long *)(lVar11 + 0x998);
            if ((lVar12 == 0) || (*plVar17 == lVar27)) {
              plVar23 = plVar17;
LAB_00ed255c:
              if (plVar23 == plVar17 + lVar12 * 2) goto LAB_00ed2ddc;
              bVar29 = true;
              *(undefined1 *)(plVar23 + 1) = 1;
            }
            else {
              lVar21 = lVar12 * 0x10;
              plVar24 = plVar17;
              while (lVar21 = lVar21 + -0x10, lVar21 != 0) {
                plVar23 = plVar24 + 2;
                plVar1 = plVar24 + 2;
                plVar24 = plVar23;
                if (*plVar1 == lVar27) goto LAB_00ed255c;
              }
LAB_00ed2ddc:
              do {
                lVar12 = *plVar28;
                lVar21 = *(long *)(lVar11 + 0x538);
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar29) {
                  *plVar28 = lVar12;
                  *(long *)(lVar11 + 0x538) = lVar21;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              do {
                lVar19 = *plVar28;
                lVar5 = *(long *)(lVar11 + 0x538);
                if (lVar19 != lVar12 || lVar5 != lVar21) {
                  bVar29 = false;
                  ClearExclusiveLocal();
                  goto LAB_00ed2e18;
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar29) {
                  *plVar28 = lVar12;
                  *(long *)(lVar11 + 0x534) = lVar21 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar29 = true;
LAB_00ed2e18:
              if (!bVar29) {
                do {
                  lVar12 = *plVar28;
                  lVar21 = *(long *)(lVar11 + 0x538);
                  if (lVar12 != lVar19 || lVar21 != lVar5) {
                    bVar29 = false;
                    ClearExclusiveLocal();
                    goto joined_r0x00ed3018;
                  }
                  cVar7 = '\x01';
                  bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar29) {
                    *plVar28 = lVar19;
                    *(long *)(lVar11 + 0x534) = lVar5 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                bVar29 = true;
joined_r0x00ed3018:
                if (!bVar29) {
                  do {
                    lVar19 = *plVar28;
                    lVar5 = *(long *)(lVar11 + 0x538);
                    if (lVar19 != lVar12 || lVar5 != lVar21) {
                      bVar29 = false;
                      ClearExclusiveLocal();
                      lVar12 = lVar19;
                      lVar21 = lVar5;
                      goto joined_r0x00ed3018;
                    }
                    cVar7 = '\x01';
                    bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar29) {
                      *plVar28 = lVar12;
                      *(long *)(lVar11 + 0x534) = lVar21 + -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  bVar29 = true;
                  lVar12 = lVar19;
                  lVar21 = lVar5;
                  goto joined_r0x00ed3018;
                }
              }
              nn::os::SignalLightEvent(pLVar14);
              local_88 = local_c8;
              local_80 = (undefined8 *)0x0;
              local_78 = 0;
              FUN_00cacc64(&local_80,&local_c0);
              FUN_0276554c(lVar11,plVar18,local_100,uVar13,lVar27,&local_88);
              puVar4 = local_80;
              if (local_80 != (undefined8 *)0x0) {
                psVar2 = (short *)(local_80 + 3);
                do {
                  sVar6 = *psVar2;
                  cVar7 = '\x01';
                  bVar29 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar29) {
                    *psVar2 = sVar6 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (sVar6 == 1) {
                  piVar3 = (int *)((long)local_80 + 0x1c);
                  do {
                    iVar10 = *piVar3;
                    cVar7 = '\x01';
                    bVar29 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                    if (bVar29) {
                      *piVar3 = -1;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar7 != '\0');
                  if (iVar10 != -1) {
                    if (((*PTR_DAT_047d3908 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                      __cxa_guard_release(PTR_DAT_047d3908);
                    }
                    lVar27 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar27;
                    local_98 = (long *)*puVar4;
                    FUN_00c44438(lVar27 + 0x8040,&local_98);
                  }
                }
                else if (sVar6 == 0) goto LAB_00ed183c;
              }
              plVar28 = (long *)0x0;
              bVar29 = false;
            }
            if (!bVar16) {
              *local_e8 = 0;
              nn::os::SignalLightEvent((LightEventType *)(local_e8 + 1));
            }
          }
          do {
            lVar27 = *plVar20;
            lVar12 = *(long *)(lVar11 + 0x298);
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar16) {
              *plVar20 = lVar27;
              *(long *)(lVar11 + 0x298) = lVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar21 = *plVar20;
            lVar19 = *(long *)(lVar11 + 0x298);
            if (lVar21 != lVar27 || lVar19 != lVar12) {
              bVar16 = false;
              ClearExclusiveLocal();
              goto LAB_00ed2430;
            }
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
            if (bVar16) {
              *plVar20 = lVar27;
              *(long *)(lVar11 + 0x294) = lVar12 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar16 = true;
LAB_00ed2430:
          if (!bVar16) {
            do {
              lVar27 = *plVar20;
              lVar12 = *(long *)(lVar11 + 0x298);
              if (lVar27 != lVar21 || lVar12 != lVar19) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto joined_r0x00ed2ba0;
              }
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar16) {
                *plVar20 = lVar21;
                *(long *)(lVar11 + 0x294) = lVar19 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar16 = true;
joined_r0x00ed2ba0:
            if (!bVar16) {
              do {
                lVar21 = *plVar20;
                lVar19 = *(long *)(lVar11 + 0x298);
                if (lVar21 != lVar27 || lVar19 != lVar12) {
                  bVar16 = false;
                  ClearExclusiveLocal();
                  lVar27 = lVar21;
                  lVar12 = lVar19;
                  goto joined_r0x00ed2ba0;
                }
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar16) {
                  *plVar20 = lVar27;
                  *(long *)(lVar11 + 0x294) = lVar12 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar16 = true;
              lVar27 = lVar21;
              lVar12 = lVar19;
              goto joined_r0x00ed2ba0;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x2a0));
          *(undefined8 *)(lVar11 + 0x60) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x68));
          if (!bVar29) goto LAB_00ed2210;
          do {
            lVar11 = *plVar28;
            lVar27 = plVar28[1];
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar11;
              plVar28[1] = lVar27;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar12 = *plVar28;
            lVar21 = plVar28[1];
            if (lVar12 != lVar11 || lVar21 != lVar27) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto LAB_00ed275c;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar11;
              *(long *)((long)plVar28 + 4) = lVar27 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
LAB_00ed275c:
          if (bVar29) goto LAB_00ed2760;
          do {
            lVar11 = *plVar28;
            lVar27 = plVar28[1];
            if (lVar11 != lVar12 || lVar27 != lVar21) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto joined_r0x00ed2c98;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar12;
              *(long *)((long)plVar28 + 4) = lVar21 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
joined_r0x00ed2c98:
          if (!bVar29) {
            do {
              lVar12 = *plVar28;
              lVar21 = plVar28[1];
              if (lVar12 != lVar11 || lVar21 != lVar27) {
                bVar29 = false;
                ClearExclusiveLocal();
                lVar11 = lVar12;
                lVar27 = lVar21;
                goto joined_r0x00ed2c98;
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar29) {
                *plVar28 = lVar11;
                *(long *)((long)plVar28 + 4) = lVar27 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar29 = true;
            lVar11 = lVar12;
            lVar27 = lVar21;
            goto joined_r0x00ed2c98;
          }
          goto LAB_00ed2760;
        }
        do {
          lVar12 = *plVar28;
          lVar21 = *(long *)(lVar11 + 0x538);
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar29) {
            *plVar28 = lVar12;
            *(long *)(lVar11 + 0x538) = lVar21;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar19 = *plVar28;
          lVar5 = *(long *)(lVar11 + 0x538);
          if (lVar19 != lVar12 || lVar5 != lVar21) {
            bVar29 = false;
            ClearExclusiveLocal();
            goto LAB_00ed21c4;
          }
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar29) {
            *plVar28 = lVar12;
            *(long *)(lVar11 + 0x534) = lVar21 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar29 = true;
LAB_00ed21c4:
        if (!bVar29) {
          do {
            lVar12 = *plVar28;
            lVar21 = *(long *)(lVar11 + 0x538);
            if (lVar12 != lVar19 || lVar21 != lVar5) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto joined_r0x00ed2ad4;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar19;
              *(long *)(lVar11 + 0x534) = lVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
joined_r0x00ed2ad4:
          if (!bVar29) {
            do {
              lVar19 = *plVar28;
              lVar5 = *(long *)(lVar11 + 0x538);
              if (lVar19 != lVar12 || lVar5 != lVar21) {
                bVar29 = false;
                ClearExclusiveLocal();
                lVar12 = lVar19;
                lVar21 = lVar5;
                goto joined_r0x00ed2ad4;
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar29) {
                *plVar28 = lVar12;
                *(long *)(lVar11 + 0x534) = lVar21 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar29 = true;
            lVar12 = lVar19;
            lVar21 = lVar5;
            goto joined_r0x00ed2ad4;
          }
        }
        nn::os::SignalLightEvent(pLVar14);
        local_88 = local_c8;
        local_80 = (undefined8 *)0x0;
        local_78 = 0;
        FUN_00cacc64(&local_80,&local_c0);
        FUN_0276554c(lVar11,plVar18,local_100,uVar13,lVar27,&local_88);
        puVar4 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_80 + 3);
          do {
            sVar6 = *psVar2;
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar29) {
              *psVar2 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 != 1) goto LAB_00ed25c8;
          piVar3 = (int *)((long)local_80 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar29) {
              *piVar3 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            pplVar15 = &local_98;
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_98 = (long *)*puVar4;
            goto LAB_00ed2a18;
          }
        }
      }
      else {
        puStack_90 = local_100;
        lVar27 = *(long *)(lVar30 + 0x40);
        uVar13 = *(undefined8 *)(lVar30 + 0x48);
        plVar28 = (long *)(lVar11 + 0x530);
        local_98 = plVar18;
        lVar12 = nn::os::GetCurrentThread();
        do {
          lVar21 = *plVar28;
          lVar19 = *(long *)(lVar11 + 0x538);
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar29) {
            *plVar28 = lVar21;
            *(long *)(lVar11 + 0x538) = lVar19;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        pLVar14 = (LightEventType *)(lVar11 + 0x540);
LAB_00ed31f8:
        while ((lVar21 != 0 && (lVar12 != lVar21))) {
          nn::os::WaitLightEvent(pLVar14);
          do {
            lVar21 = *plVar28;
            lVar19 = *(long *)(lVar11 + 0x538);
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar21;
              *(long *)(lVar11 + 0x538) = lVar19;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        do {
          lVar5 = *plVar28;
          if (lVar5 != lVar21 || *(long *)(lVar11 + 0x538) != lVar19) {
            bVar29 = false;
            ClearExclusiveLocal();
            goto LAB_00ed3234;
          }
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar29) {
            *plVar28 = lVar21;
            *(long *)(lVar11 + 0x534) = lVar19 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        bVar29 = true;
LAB_00ed3234:
        if (!bVar29) {
          lVar21 = lVar5;
          lVar19 = *(long *)(lVar11 + 0x538);
          goto LAB_00ed31f8;
        }
        if (*(char *)(lVar11 + 0x550) == '\0') {
          plVar18 = (long *)(lVar11 + 0x60);
          lVar12 = nn::os::GetCurrentThread();
LAB_00ed33f0:
          if (*plVar18 == 0) goto code_r0x00ed33f8;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
          do {
            if (*plVar18 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x68));
                while (*plVar18 == 0) {
                  cVar7 = '\x01';
                  bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar29) {
                    *plVar18 = lVar12;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_00ed3400;
                }
              } while( true );
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar29) {
              *plVar18 = lVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00ed3400:
          local_e0 = (long *)(lVar11 + 0x2f0);
          lVar21 = *local_e0;
          lVar12 = nn::os::GetCurrentThread();
          if (lVar12 != lVar21) {
            lVar12 = nn::os::GetCurrentThread();
LAB_00ed3428:
            if (*local_e0 == 0) goto code_r0x00ed3434;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2f8));
            do {
              if (*local_e0 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x2f8));
                  while (*local_e0 == 0) {
                    cVar7 = '\x01';
                    bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
                    if (bVar29) {
                      *local_e0 = lVar12;
                      cVar7 = ExclusiveMonitorsStatus();
                    }
                    if (cVar7 == '\0') goto LAB_00ed343c;
                  }
                } while( true );
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
              if (bVar29) {
                *local_e0 = lVar12;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
LAB_00ed343c:
            bVar29 = false;
            goto LAB_00ed3440;
          }
          local_e0 = (long *)0x0;
          bVar29 = true;
LAB_00ed3440:
          plVar18 = *(long **)(lVar11 + 0x308);
          lVar12 = *(long *)(lVar11 + 0x340);
          if ((lVar12 == 0) || (*plVar18 == lVar27)) {
            plVar20 = plVar18;
LAB_00ed3484:
            if (plVar20 == plVar18 + lVar12 * 8) goto LAB_00ed37cc;
            uVar13 = FUN_0110cf04(plVar20[3],&local_c8);
            plVar18 = (long *)(lVar11 + 0x290);
            lVar27 = nn::os::GetCurrentThread();
            do {
              lVar12 = *plVar18;
              lVar21 = *(long *)(lVar11 + 0x298);
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar16) {
                *plVar18 = lVar12;
                *(long *)(lVar11 + 0x298) = lVar21;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            pLVar14 = (LightEventType *)(lVar11 + 0x2a0);
LAB_00ed34c4:
            while ((lVar12 != 0 && (lVar27 != lVar12))) {
              nn::os::WaitLightEvent(pLVar14);
              do {
                lVar12 = *plVar18;
                lVar21 = *(long *)(lVar11 + 0x298);
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar16) {
                  *plVar18 = lVar12;
                  *(long *)(lVar11 + 0x298) = lVar21;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            do {
              lVar19 = *plVar18;
              if (lVar19 != lVar12 || *(long *)(lVar11 + 0x298) != lVar21) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto LAB_00ed3504;
              }
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar16) {
                *plVar18 = lVar12;
                *(long *)(lVar11 + 0x294) = lVar21 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar16 = true;
LAB_00ed3504:
            if (!bVar16) {
              lVar12 = lVar19;
              lVar21 = *(long *)(lVar11 + 0x298);
              goto LAB_00ed34c4;
            }
            FUN_02765478(&local_98,uVar13);
            do {
              lVar27 = *plVar18;
              lVar12 = *(long *)(lVar11 + 0x298);
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar16) {
                *plVar18 = lVar27;
                *(long *)(lVar11 + 0x298) = lVar12;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              lVar21 = *plVar18;
              lVar19 = *(long *)(lVar11 + 0x298);
              if (lVar21 != lVar27 || lVar19 != lVar12) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto LAB_00ed3d74;
              }
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
              if (bVar16) {
                *plVar18 = lVar27;
                *(long *)(lVar11 + 0x294) = lVar12 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar16 = true;
LAB_00ed3d74:
            if (!bVar16) {
              do {
                lVar27 = *plVar18;
                lVar12 = *(long *)(lVar11 + 0x298);
                if (lVar27 != lVar21 || lVar12 != lVar19) {
                  bVar16 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x00ed432c;
                }
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar16) {
                  *plVar18 = lVar21;
                  *(long *)(lVar11 + 0x294) = lVar19 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar16 = true;
joined_r0x00ed432c:
              if (!bVar16) {
                do {
                  lVar21 = *plVar18;
                  lVar19 = *(long *)(lVar11 + 0x298);
                  if (lVar21 != lVar27 || lVar19 != lVar12) {
                    bVar16 = false;
                    ClearExclusiveLocal();
                    lVar27 = lVar21;
                    lVar12 = lVar19;
                    goto joined_r0x00ed432c;
                  }
                  cVar7 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                  if (bVar16) {
                    *plVar18 = lVar27;
                    *(long *)(lVar11 + 0x294) = lVar12 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                bVar16 = true;
                lVar27 = lVar21;
                lVar12 = lVar19;
                goto joined_r0x00ed432c;
              }
            }
LAB_00ed39e4:
            nn::os::SignalLightEvent(pLVar14);
LAB_00ed39e8:
            bVar16 = false;
          }
          else {
            lVar21 = lVar12 * 0x40;
            plVar17 = plVar18;
            while (lVar21 = lVar21 + -0x40, lVar21 != 0) {
              plVar23 = plVar17 + 8;
              plVar20 = plVar17 + 8;
              plVar17 = plVar17 + 8;
              if (*plVar23 == lVar27) goto LAB_00ed3484;
            }
LAB_00ed37cc:
            plVar18 = (long *)(lVar11 + 0x730);
            lVar21 = *plVar18;
            lVar12 = nn::os::GetCurrentThread();
            if (lVar12 != lVar21) {
              lVar12 = nn::os::GetCurrentThread();
LAB_00ed37ec:
              if (*plVar18 == 0) goto code_r0x00ed37f4;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x738));
              do {
                if (*plVar18 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x738));
                    while (*plVar18 == 0) {
                      cVar7 = '\x01';
                      bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                      if (bVar16) {
                        *plVar18 = lVar12;
                        cVar7 = ExclusiveMonitorsStatus();
                      }
                      if (cVar7 == '\0') {
                        bVar16 = false;
                        goto LAB_00ed37fc;
                      }
                    }
                  } while( true );
                }
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
                if (bVar16) {
                  *plVar18 = lVar12;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar16 = false;
              goto LAB_00ed37fc;
            }
            plVar18 = (long *)0x0;
            bVar16 = true;
LAB_00ed37fc:
            plVar20 = *(long **)(lVar11 + 0x748);
            lVar12 = *(long *)(lVar11 + 0x780);
            if ((lVar12 != 0) && (*plVar20 != lVar27)) {
              lVar21 = lVar12 * 0x10;
              plVar17 = plVar20;
              while (lVar21 = lVar21 + -0x10, lVar21 != 0) {
                plVar23 = plVar17 + 2;
                plVar24 = plVar17 + 2;
                plVar17 = plVar17 + 2;
                if (*plVar23 == lVar27) goto LAB_00ed3840;
              }
LAB_00ed39d8:
              if (!bVar16) {
                *plVar18 = 0;
                pLVar14 = (LightEventType *)(plVar18 + 1);
                goto LAB_00ed39e4;
              }
              goto LAB_00ed39e8;
            }
            plVar24 = plVar20;
LAB_00ed3840:
            if ((plVar24 == plVar20 + lVar12 * 2) || (plVar24[1] == 0)) goto LAB_00ed39d8;
            if (!bVar16) {
              *plVar18 = 0;
              nn::os::SignalLightEvent((LightEventType *)(plVar18 + 1));
            }
            do {
              lVar12 = *plVar28;
              lVar21 = *(long *)(lVar11 + 0x538);
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = lVar12;
                *(long *)(lVar11 + 0x538) = lVar21;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            do {
              lVar19 = *plVar28;
              lVar5 = *(long *)(lVar11 + 0x538);
              if (lVar19 != lVar12 || lVar5 != lVar21) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto LAB_00ed3c44;
              }
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = lVar12;
                *(long *)(lVar11 + 0x534) = lVar21 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar16 = true;
LAB_00ed3c44:
            if (!bVar16) {
              do {
                lVar12 = *plVar28;
                lVar21 = *(long *)(lVar11 + 0x538);
                if (lVar12 != lVar19 || lVar21 != lVar5) {
                  bVar16 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x00ed4264;
                }
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar16) {
                  *plVar28 = lVar19;
                  *(long *)(lVar11 + 0x534) = lVar5 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar16 = true;
joined_r0x00ed4264:
              if (!bVar16) {
                do {
                  lVar19 = *plVar28;
                  lVar5 = *(long *)(lVar11 + 0x538);
                  if (lVar19 != lVar12 || lVar5 != lVar21) {
                    bVar16 = false;
                    ClearExclusiveLocal();
                    lVar12 = lVar19;
                    lVar21 = lVar5;
                    goto joined_r0x00ed4264;
                  }
                  cVar7 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar16) {
                    *plVar28 = lVar12;
                    *(long *)(lVar11 + 0x534) = lVar21 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                bVar16 = true;
                lVar12 = lVar19;
                lVar21 = lVar5;
                goto joined_r0x00ed4264;
              }
            }
            nn::os::SignalLightEvent(pLVar14);
            puVar4 = puStack_90;
            plVar18 = local_98;
            local_78 = 0;
            local_88 = local_c8;
            local_80 = (undefined8 *)0x0;
            FUN_00cacc64(&local_80,&local_c0);
            FUN_0276472c(lVar11,plVar18,puVar4,uVar13,lVar27,&local_88);
            puVar4 = local_80;
            if (local_80 != (undefined8 *)0x0) {
              psVar2 = (short *)(local_80 + 3);
              do {
                sVar6 = *psVar2;
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar16) {
                  *psVar2 = sVar6 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (sVar6 == 1) {
                piVar3 = (int *)((long)local_80 + 0x1c);
                do {
                  iVar10 = *piVar3;
                  cVar7 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar16) {
                    *piVar3 = -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (iVar10 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar27 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar27;
                  local_70[0] = (long *)*puVar4;
                  FUN_00c44438(lVar27 + 0x8040,local_70);
                }
              }
              else if (sVar6 == 0) goto LAB_00ed183c;
            }
            plVar28 = (long *)0x0;
            bVar16 = true;
          }
          if (!bVar29) {
            *local_e0 = 0;
            nn::os::SignalLightEvent((LightEventType *)(local_e0 + 1));
          }
          *(undefined8 *)(lVar11 + 0x60) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x68));
          if (bVar16) goto LAB_00ed2210;
          do {
            lVar11 = *plVar28;
            lVar27 = plVar28[1];
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar11;
              plVar28[1] = lVar27;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar12 = *plVar28;
            lVar21 = plVar28[1];
            if (lVar12 != lVar11 || lVar21 != lVar27) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto LAB_00ed3b6c;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar11;
              *(long *)((long)plVar28 + 4) = lVar27 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
LAB_00ed3b6c:
          if (!bVar29) {
            do {
              lVar11 = *plVar28;
              lVar27 = plVar28[1];
              if (lVar11 != lVar12 || lVar27 != lVar21) {
                bVar29 = false;
                ClearExclusiveLocal();
                goto joined_r0x00ed4110;
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar29) {
                *plVar28 = lVar12;
                *(long *)((long)plVar28 + 4) = lVar21 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar29 = true;
joined_r0x00ed4110:
            do {
              if (bVar29) break;
              do {
                lVar12 = *plVar28;
                lVar21 = plVar28[1];
                if (lVar12 != lVar11 || lVar21 != lVar27) {
                  bVar29 = false;
                  ClearExclusiveLocal();
                  lVar11 = lVar12;
                  lVar27 = lVar21;
                  goto joined_r0x00ed4110;
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar29) {
                  *plVar28 = lVar11;
                  *(long *)((long)plVar28 + 4) = lVar27 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar29 = true;
              lVar11 = lVar12;
              lVar27 = lVar21;
            } while( true );
          }
LAB_00ed2760:
          nn::os::SignalLightEvent((LightEventType *)(plVar28 + 2));
        }
        else {
          do {
            lVar12 = *plVar28;
            lVar21 = *(long *)(lVar11 + 0x538);
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar12;
              *(long *)(lVar11 + 0x538) = lVar21;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          do {
            lVar19 = *plVar28;
            lVar5 = *(long *)(lVar11 + 0x538);
            if (lVar19 != lVar12 || lVar5 != lVar21) {
              bVar29 = false;
              ClearExclusiveLocal();
              goto LAB_00ed362c;
            }
            cVar7 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar29) {
              *plVar28 = lVar12;
              *(long *)(lVar11 + 0x534) = lVar21 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          bVar29 = true;
LAB_00ed362c:
          if (!bVar29) {
            do {
              lVar12 = *plVar28;
              lVar21 = *(long *)(lVar11 + 0x538);
              if (lVar12 != lVar19 || lVar21 != lVar5) {
                bVar29 = false;
                ClearExclusiveLocal();
                goto joined_r0x00ed3f3c;
              }
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar29) {
                *plVar28 = lVar19;
                *(long *)(lVar11 + 0x534) = lVar5 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            bVar29 = true;
joined_r0x00ed3f3c:
            if (!bVar29) {
              do {
                lVar19 = *plVar28;
                lVar5 = *(long *)(lVar11 + 0x538);
                if (lVar19 != lVar12 || lVar5 != lVar21) {
                  bVar29 = false;
                  ClearExclusiveLocal();
                  lVar12 = lVar19;
                  lVar21 = lVar5;
                  goto joined_r0x00ed3f3c;
                }
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar29) {
                  *plVar28 = lVar12;
                  *(long *)(lVar11 + 0x534) = lVar21 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              bVar29 = true;
              lVar12 = lVar19;
              lVar21 = lVar5;
              goto joined_r0x00ed3f3c;
            }
          }
          nn::os::SignalLightEvent(pLVar14);
          puVar4 = puStack_90;
          plVar18 = local_98;
          local_78 = 0;
          local_88 = local_c8;
          local_80 = (undefined8 *)0x0;
          FUN_00cacc64(&local_80,&local_c0);
          FUN_0276472c(lVar11,plVar18,puVar4,uVar13,lVar27,&local_88);
          puVar4 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_80 + 3);
            do {
              sVar6 = *psVar2;
              cVar7 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar29) {
                *psVar2 = sVar6 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar6 == 1) {
              piVar3 = (int *)((long)local_80 + 0x1c);
              do {
                iVar10 = *piVar3;
                cVar7 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar29) {
                  *piVar3 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar10 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                pplVar15 = local_70;
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_70[0] = (long *)*puVar4;
LAB_00ed2a18:
                FUN_00c44438(lVar11 + 0x8040,pplVar15);
              }
            }
            else {
LAB_00ed25c8:
              if (sVar6 == 0) goto LAB_00ed183c;
            }
          }
        }
      }
    }
    else {
      local_100 = (undefined8 *)0xffffffffffffffff;
    }
LAB_00ed2210:
    local_88 = local_108;
    local_80 = local_100;
    do {
      lVar11 = *(long *)(lVar30 + 0x290) - *(long *)(lVar30 + 0x288);
      if (lVar11 == 0) {
        uVar26 = *(long *)(lVar30 + 0x220) - *(long *)(lVar30 + 0x218) >> 4;
        FUN_02766298(lVar30 + 0x218,&local_88);
        goto LAB_00ed22b0;
      }
      uVar26 = *(ulong *)(*(long *)(lVar30 + 0x290) + -8);
      *(long *)(lVar30 + 0x290) = lVar11 + *(long *)(lVar30 + 0x288) + -8;
      uVar22 = uVar26 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(*(long *)(lVar30 + 0x250) + uVar22) =
           *(ulong *)(*(long *)(lVar30 + 0x250) + uVar22) &
           (1L << (uVar26 & 0x3f) ^ 0xffffffffffffffffU);
    } while ((ulong)(*(long *)(lVar30 + 0x220) - *(long *)(lVar30 + 0x218) >> 4) <= uVar26);
    puVar4 = (undefined8 *)(*(long *)(lVar30 + 0x218) + uVar26 * 0x10);
    *puVar4 = local_108;
    puVar4[1] = local_100;
    if (*(ulong *)(lVar30 + 0x2c0) <= uVar26) {
LAB_00ed22b0:
      *(ulong *)(lVar30 + 0x2c0) = uVar26 + 1;
    }
    plVar18 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar28 = local_c0 + 3;
      do {
        sVar6 = (short)*plVar28;
        cVar7 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar29) {
          *(short *)plVar28 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar3 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar29) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar30 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar30;
          local_98 = (long *)*plVar18;
          FUN_00c44438(lVar30 + 0x8040,&local_98);
        }
      }
      else if (sVar6 == 0) goto LAB_00ed183c;
    }
    puVar4 = local_a8;
    if (local_a8 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_a8 + 3);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar29) {
          *psVar2 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar3 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar29) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar30 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar30;
          local_c8 = (long *)*puVar4;
          FUN_00c44438(lVar30 + 0x8040,&local_c8);
        }
      }
      else if (sVar6 == 0) goto LAB_00ed183c;
    }
    if (!bVar9) {
      *local_f0 = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_f0 + 1));
    }
  }
  puVar4 = local_d8;
  *(ulong *)(param_1 + 0x2e8) = uVar26;
  if (local_d8 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_d8 + 3);
    do {
      sVar6 = *psVar2;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar9) {
        *psVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)local_d8 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar30 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar30;
        local_88 = (long *)*puVar4;
        FUN_00c44438(lVar30 + 0x8040,&local_88);
      }
    }
    else if (sVar6 == 0) goto LAB_00ed183c;
    uVar26 = *(ulong *)(param_1 + 0x2e8);
  }
  if (uVar26 == 0xffffffffffffffff) {
    local_88 = (long *)0x0;
    local_80 = (undefined8 *)0x0;
    FUN_00c43ef0(&local_88,param_1 + 0x98);
    local_b0 = (long *)0x0;
    local_a8 = (undefined8 *)0x0;
    if (local_88[2] == param_1 + 0x28) {
      FUN_00c953a8(&local_b0,&local_88);
    }
    plVar18 = local_88;
    if (local_88 != (long *)0x0) {
      plVar28 = local_88 + 3;
      do {
        sVar6 = (short)*plVar28;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *(short *)plVar28 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar3 = (int *)((long)local_88 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar30 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar30;
          local_c8 = (long *)*plVar18;
          FUN_00c44438(lVar30 + 0x8040,&local_c8);
        }
      }
      else if (sVar6 == 0) goto LAB_00ed183c;
    }
    FUN_00ee3f3c(uVar25,&local_b0);
    plVar18 = local_b0;
    if (local_b0 != (long *)0x0) {
      plVar28 = local_b0 + 3;
      do {
        sVar6 = (short)*plVar28;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar9) {
          *(short *)plVar28 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar3 = (int *)((long)local_b0 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar9) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar30 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar30;
          local_88 = (long *)*plVar18;
          FUN_00c44438(lVar30 + 0x8040,&local_88);
        }
      }
      else if (sVar6 == 0) {
LAB_00ed183c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x120) + 0x211) = 0;
    }
  }
  else {
    if (*(char *)(*param_2 + 0x69) == '\0') {
      bVar9 = *(char *)(*param_2 + 0x6a) != '\0';
    }
    else {
      bVar9 = true;
    }
    if (*(long *)(param_1 + 0x120) != 0) {
      *(char *)(*(long *)(param_1 + 0x120) + 0x211) = bVar9 & *(char *)(param_1 + 0x332) != '\0';
    }
  }
  return;
code_r0x00ed1a14:
  cVar7 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(local_f0,0x10);
  if (bVar9) {
    *local_f0 = lVar11;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed1a1c;
  goto LAB_00ed1a08;
code_r0x00ed1a80:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar29) {
    *plVar18 = lVar11;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed1a88;
  goto LAB_00ed1a74;
code_r0x00ed1c88:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar29) {
    *plVar28 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed1c90;
  goto LAB_00ed1c80;
code_r0x00ed1d9c:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar29) {
    *plVar18 = lVar27;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed1da4;
  goto LAB_00ed1d90;
code_r0x00ed24bc:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(local_f8,0x10);
  if (bVar29) {
    *local_f8 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed24c4;
  goto LAB_00ed24b0;
code_r0x00ed3290:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar29) {
    *plVar18 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed3298;
  goto LAB_00ed3288;
code_r0x00ed32cc:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(local_e8,0x10);
  if (bVar29) {
    *local_e8 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed32d4;
  goto LAB_00ed32c0;
code_r0x00ed371c:
  cVar7 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar16) {
    *plVar18 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  bVar16 = false;
  if (cVar7 == '\0') goto LAB_00ed3724;
  goto LAB_00ed3714;
code_r0x00ed1eb4:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar29) {
    *plVar18 = lVar11;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed1ebc;
  goto LAB_00ed1ea8;
code_r0x00ed204c:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar20,0x10);
  if (bVar29) {
    *plVar20 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed2054;
  goto LAB_00ed2044;
code_r0x00ed215c:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar29) {
    *plVar18 = lVar27;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed2164;
  goto LAB_00ed2150;
code_r0x00ed253c:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(local_e8,0x10);
  if (bVar29) {
    *local_e8 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed2544;
  goto LAB_00ed2530;
code_r0x00ed33f8:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar29) {
    *plVar18 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed3400;
  goto LAB_00ed33f0;
code_r0x00ed3434:
  cVar7 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(local_e0,0x10);
  if (bVar29) {
    *local_e0 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_00ed343c;
  goto LAB_00ed3428;
code_r0x00ed37f4:
  cVar7 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar18,0x10);
  if (bVar16) {
    *plVar18 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  bVar16 = false;
  if (cVar7 == '\0') goto LAB_00ed37fc;
  goto LAB_00ed37ec;
}


