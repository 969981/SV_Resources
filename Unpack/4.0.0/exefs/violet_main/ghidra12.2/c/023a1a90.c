/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023a1a90; name: FUN_023a1a90
 */


ulong FUN_023a1a90(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long lVar4;
  short sVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long **pplVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  bool bVar23;
  long *plVar24;
  long *local_d8;
  ulong uStack_d0;
  long *local_c8;
  ulong local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long *local_88;
  long *local_80;
  char local_78;
  undefined8 local_68;
  
  if ((*(long *)(param_2 + 0x40) == 0) && (*(long *)(param_2 + 0x48) == 0)) {
    return 0xffffffffffffffff;
  }
  if (*(char *)(param_2 + 0x68) != '\0') {
    return 0xffffffffffffffff;
  }
  plVar24 = (long *)(param_2 + 0x70);
  lVar20 = *plVar24;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar20) {
    lVar9 = nn::os::GetCurrentThread();
LAB_023a1b20:
    if (*plVar24 == 0) goto code_r0x023a1b28;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x78));
    do {
      if (*plVar24 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x78));
          while (*plVar24 == 0) {
            cVar6 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar23) {
              *plVar24 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_023a1b30;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar23) {
        *plVar24 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_023a1b30:
    bVar23 = false;
    plVar13 = plVar24;
    goto LAB_023a1b38;
  }
  plVar13 = (long *)0x0;
  bVar23 = true;
LAB_023a1b38:
  do {
    lVar9 = *(long *)(param_2 + 0x100) - *(long *)(param_2 + 0xf8);
    if (lVar9 == 0) {
      uVar21 = *(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x88) >> 3;
      FUN_023708f8(param_2 + 0x88);
      goto LAB_023a1b5c;
    }
    uVar21 = *(ulong *)(*(long *)(param_2 + 0x100) + -8);
    *(long *)(param_2 + 0x100) = lVar9 + *(long *)(param_2 + 0xf8) + -8;
    uVar17 = uVar21 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0xc0) + uVar17) =
         *(ulong *)(*(long *)(param_2 + 0xc0) + uVar17) &
         (1L << (uVar21 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0x90) - *(long *)(param_2 + 0x88) >> 3) <= uVar21);
  *(undefined8 *)(*(long *)(param_2 + 0x88) + uVar21 * 8) = 0xffffffffffffffff;
  if (*(ulong *)(param_2 + 0x130) <= uVar21) {
LAB_023a1b5c:
    *(ulong *)(param_2 + 0x130) = uVar21 + 1;
  }
  if (!bVar23) {
    *plVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  }
  cVar6 = *(char *)(param_2 + 0x398);
  if (((*PTR_DAT_047d88d0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d88d0);
  }
  lVar9 = *(long *)PTR_DAT_047d88d8;
  *(long *)PTR_DAT_047d88e0 = lVar9;
  if (cVar6 == '\0') {
    plVar13 = (long *)(lVar9 + 0x530);
    lVar20 = *(long *)(param_2 + 0x40);
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    local_78 = '\x01';
    local_d8 = plVar24;
    uStack_d0 = uVar21;
    local_80 = plVar13;
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar22 = *plVar13;
      lVar15 = *(long *)(lVar9 + 0x538);
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar23) {
        *plVar13 = lVar22;
        *(long *)(lVar9 + 0x538) = lVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      while ((lVar22 != 0 && (lVar10 != lVar22))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x540));
        do {
          lVar22 = *plVar13;
          lVar15 = *(long *)(lVar9 + 0x538);
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar23) {
            *plVar13 = lVar22;
            *(long *)(lVar9 + 0x538) = lVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      do {
        lVar4 = *plVar13;
        if (lVar4 != lVar22 || *(long *)(lVar9 + 0x538) != lVar15) {
          bVar23 = false;
          ClearExclusiveLocal();
          goto LAB_023a1d08;
        }
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar23) {
          *plVar13 = lVar22;
          *(long *)(lVar9 + 0x534) = lVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar23 = true;
LAB_023a1d08:
      lVar22 = lVar4;
      lVar15 = *(long *)(lVar9 + 0x538);
    } while (!bVar23);
    if (*(char *)(lVar9 + 0x550) == '\0') {
      plVar24 = (long *)(lVar9 + 0x60);
      lVar10 = nn::os::GetCurrentThread();
LAB_023a1edc:
      if (*plVar24 == 0) goto code_r0x023a1ee4;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x68));
      do {
        if (*plVar24 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x68));
            while (*plVar24 == 0) {
              cVar6 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar23) {
                *plVar24 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_023a1eec;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar23) {
          *plVar24 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_023a1eec:
      plVar24 = (long *)(lVar9 + 0x290);
      local_c0 = CONCAT71(local_c0._1_7_,1);
      local_c8 = plVar24;
      lVar10 = nn::os::GetCurrentThread();
      do {
        lVar22 = *plVar24;
        lVar15 = *(long *)(lVar9 + 0x298);
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar23) {
          *plVar24 = lVar22;
          *(long *)(lVar9 + 0x298) = lVar15;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        while ((lVar22 != 0 && (lVar10 != lVar22))) {
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x2a0));
          do {
            lVar22 = *plVar24;
            lVar15 = *(long *)(lVar9 + 0x298);
            cVar6 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar23) {
              *plVar24 = lVar22;
              *(long *)(lVar9 + 0x298) = lVar15;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        do {
          lVar4 = *plVar24;
          if (lVar4 != lVar22 || *(long *)(lVar9 + 0x298) != lVar15) {
            bVar23 = false;
            ClearExclusiveLocal();
            goto LAB_023a1f4c;
          }
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar23) {
            *plVar24 = lVar22;
            *(long *)(lVar9 + 0x294) = lVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar23 = true;
LAB_023a1f4c:
        lVar22 = lVar4;
        lVar15 = *(long *)(lVar9 + 0x298);
      } while (!bVar23);
      plVar24 = *(long **)(lVar9 + 0x2b0);
      lVar10 = *(long *)(lVar9 + 0x2e8);
      if ((lVar10 == 0) || (*plVar24 == lVar20)) {
        plVar13 = plVar24;
LAB_023a1f98:
        if (plVar13 == plVar24 + lVar10 * 4) goto LAB_023a2424;
        uVar11 = FUN_023a42c8(param_1,*(undefined8 *)
                                       (*(long *)(lVar9 + 0x348) + plVar13[3] * 0x130 + 0x110),
                              param_3,param_4);
        FUN_023a4890(&local_d8,uVar11);
      }
      else {
        lVar22 = lVar10 * 0x20;
        plVar16 = plVar24;
        while (lVar22 = lVar22 + -0x20, lVar22 != 0) {
          plVar18 = plVar16 + 4;
          plVar13 = plVar16 + 4;
          plVar16 = plVar16 + 4;
          if (*plVar18 == lVar20) goto LAB_023a1f98;
        }
LAB_023a2424:
        plVar24 = (long *)(lVar9 + 0x948);
        lVar22 = *plVar24;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 != lVar22) {
          lVar10 = nn::os::GetCurrentThread();
LAB_023a2440:
          if (*plVar24 == 0) goto code_r0x023a2448;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x950));
          do {
            if (*plVar24 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x950));
                while (*plVar24 == 0) {
                  cVar6 = '\x01';
                  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                  if (bVar23) {
                    *plVar24 = lVar10;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') goto LAB_023a2450;
                }
              } while( true );
            }
            cVar6 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar23) {
              *plVar24 = lVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_023a2450:
          bVar23 = false;
          goto LAB_023a2454;
        }
        plVar24 = (long *)0x0;
        bVar23 = true;
LAB_023a2454:
        plVar13 = *(long **)(lVar9 + 0x960);
        lVar10 = *(long *)(lVar9 + 0x998);
        if ((lVar10 == 0) || (*plVar13 == lVar20)) {
          plVar16 = plVar13;
LAB_023a2464:
          if (plVar16 == plVar13 + lVar10 * 2) goto LAB_023a2890;
          *(undefined1 *)(plVar16 + 1) = 1;
        }
        else {
          lVar22 = lVar10 * 0x10;
          plVar18 = plVar13;
          while (lVar22 = lVar22 + -0x10, lVar22 != 0) {
            plVar16 = plVar18 + 2;
            plVar19 = plVar18 + 2;
            plVar18 = plVar16;
            if (*plVar19 == lVar20) goto LAB_023a2464;
          }
LAB_023a2890:
          local_b8 = (long *)0x0;
          local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
          if (local_78 == '\0') {
            local_80 = (long *)0x0;
          }
          else {
            do {
              lVar10 = *local_80;
              lVar22 = local_80[1];
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(local_80,0x10);
              if (bVar14) {
                *local_80 = lVar10;
                local_80[1] = lVar22;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              lVar15 = *local_80;
              lVar4 = local_80[1];
              if (lVar15 != lVar10 || lVar4 != lVar22) {
                bVar14 = false;
                ClearExclusiveLocal();
                goto LAB_023a28ec;
              }
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(local_80,0x10);
              if (bVar14) {
                *local_80 = lVar10;
                *(long *)((long)local_80 + 4) = lVar22 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar14 = true;
LAB_023a28ec:
            if (!bVar14) {
              do {
                lVar10 = *local_80;
                lVar22 = local_80[1];
                if (lVar10 != lVar15 || lVar22 != lVar4) {
                  bVar14 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x023a2ad0;
                }
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(local_80,0x10);
                if (bVar14) {
                  *local_80 = lVar15;
                  *(long *)((long)local_80 + 4) = lVar4 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar14 = true;
joined_r0x023a2ad0:
              if (!bVar14) {
                do {
                  lVar15 = *local_80;
                  lVar4 = local_80[1];
                  if (lVar15 != lVar10 || lVar4 != lVar22) {
                    bVar14 = false;
                    ClearExclusiveLocal();
                    lVar10 = lVar15;
                    lVar22 = lVar4;
                    goto joined_r0x023a2ad0;
                  }
                  cVar6 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(local_80,0x10);
                  if (bVar14) {
                    *local_80 = lVar10;
                    *(long *)((long)local_80 + 4) = lVar22 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                bVar14 = true;
                lVar10 = lVar15;
                lVar22 = lVar4;
                goto joined_r0x023a2ad0;
              }
            }
            nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
            local_80 = local_b8;
            local_78 = (char)local_b0;
          }
          local_b8 = (long *)0x0;
          local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
          FUN_00f08b20(&local_b8);
          uVar17 = uStack_d0;
          plVar13 = local_d8;
          local_b8 = (long *)*param_3;
          local_a8 = 0;
          local_b0 = (undefined8 *)0x0;
          FUN_00c96b7c(&local_b0,param_3 + 1);
          local_a0 = param_3[3];
          lStack_98 = param_3[4];
          local_90 = param_3[5];
          local_88 = (long *)param_3[6];
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x18))();
          }
          FUN_023a44a0(param_1,lVar9,plVar13,uVar17,uVar11,lVar20,&local_b8,param_4);
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          puVar7 = local_b0;
          if (local_b0 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_b0 + 3);
            do {
              sVar5 = *psVar2;
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar14) {
                *psVar2 = sVar5 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 1) {
              piVar3 = (int *)((long)local_b0 + 0x1c);
              do {
                iVar8 = *piVar3;
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar14) {
                  *piVar3 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar20 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar20;
                local_68 = *puVar7;
                FUN_00c44438(lVar20 + 0x8040,&local_68);
              }
            }
            else if (sVar5 == 0) goto LAB_023a20ac;
          }
        }
        if (!bVar23) {
          *plVar24 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
        }
      }
      FUN_00f08b20(&local_c8);
      goto LAB_023a259c;
    }
    local_b8 = (long *)0x0;
    local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
    if (local_78 == '\0') {
      local_80 = (long *)0x0;
    }
    else {
      do {
        lVar10 = *local_80;
        lVar22 = local_80[1];
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar23) {
          *local_80 = lVar10;
          local_80[1] = lVar22;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar15 = *local_80;
        lVar4 = local_80[1];
        if (lVar15 != lVar10 || lVar4 != lVar22) {
          bVar23 = false;
          ClearExclusiveLocal();
          goto LAB_023a22b8;
        }
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar23) {
          *local_80 = lVar10;
          *(long *)((long)local_80 + 4) = lVar22 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar23 = true;
LAB_023a22b8:
      if (!bVar23) {
        do {
          lVar10 = *local_80;
          lVar22 = local_80[1];
          if (lVar10 != lVar15 || lVar22 != lVar4) {
            bVar23 = false;
            ClearExclusiveLocal();
            goto joined_r0x023a2780;
          }
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar23) {
            *local_80 = lVar15;
            *(long *)((long)local_80 + 4) = lVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar23 = true;
joined_r0x023a2780:
        if (!bVar23) {
          do {
            lVar15 = *local_80;
            lVar4 = local_80[1];
            if (lVar15 != lVar10 || lVar4 != lVar22) {
              bVar23 = false;
              ClearExclusiveLocal();
              lVar10 = lVar15;
              lVar22 = lVar4;
              goto joined_r0x023a2780;
            }
            cVar6 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar23) {
              *local_80 = lVar10;
              *(long *)((long)local_80 + 4) = lVar22 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar23 = true;
          lVar10 = lVar15;
          lVar22 = lVar4;
          goto joined_r0x023a2780;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
      local_80 = local_b8;
      local_78 = (char)local_b0;
    }
    local_b8 = (long *)0x0;
    local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
    FUN_00f08b20(&local_b8);
    uVar17 = uStack_d0;
    plVar24 = local_d8;
    local_b8 = (long *)*param_3;
    local_a8 = 0;
    local_b0 = (undefined8 *)0x0;
    FUN_00c96b7c(&local_b0,param_3 + 1);
    local_a0 = param_3[3];
    lStack_98 = param_3[4];
    local_90 = param_3[5];
    local_88 = (long *)param_3[6];
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
    FUN_023a44a0(param_1,lVar9,plVar24,uVar17,uVar11,lVar20,&local_b8,param_4);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    puVar7 = local_b0;
    if (local_b0 == (undefined8 *)0x0) goto LAB_023a25ac;
    psVar2 = (short *)(local_b0 + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar23) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 != 1) {
LAB_023a20a8:
      if (sVar5 == 0) {
LAB_023a20ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      goto LAB_023a25ac;
    }
    piVar3 = (int *)((long)local_b0 + 0x1c);
    do {
      iVar8 = *piVar3;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar23) {
        *piVar3 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == -1) goto LAB_023a25ac;
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    pplVar12 = &local_c8;
    lVar9 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar9;
    local_c8 = (long *)*puVar7;
  }
  else {
    plVar13 = (long *)(lVar9 + 0x530);
    lVar20 = *(long *)(param_2 + 0x40);
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    local_78 = '\x01';
    local_c8 = plVar24;
    local_c0 = uVar21;
    local_80 = plVar13;
    lVar10 = nn::os::GetCurrentThread();
    do {
      lVar22 = *plVar13;
      lVar15 = *(long *)(lVar9 + 0x538);
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar23) {
        *plVar13 = lVar22;
        *(long *)(lVar9 + 0x538) = lVar15;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    do {
      while ((lVar22 != 0 && (lVar10 != lVar22))) {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x540));
        do {
          lVar22 = *plVar13;
          lVar15 = *(long *)(lVar9 + 0x538);
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar23) {
            *plVar13 = lVar22;
            *(long *)(lVar9 + 0x538) = lVar15;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      do {
        lVar4 = *plVar13;
        if (lVar4 != lVar22 || *(long *)(lVar9 + 0x538) != lVar15) {
          bVar23 = false;
          ClearExclusiveLocal();
          goto LAB_023a1c00;
        }
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar23) {
          *plVar13 = lVar22;
          *(long *)(lVar9 + 0x534) = lVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar23 = true;
LAB_023a1c00:
      lVar22 = lVar4;
      lVar15 = *(long *)(lVar9 + 0x538);
    } while (!bVar23);
    if (*(char *)(lVar9 + 0x550) == '\0') {
      plVar24 = (long *)(lVar9 + 0x60);
      lVar10 = nn::os::GetCurrentThread();
      while (*plVar24 == 0) {
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar23) {
          *plVar24 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_023a1d80;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x68));
      do {
        if (*plVar24 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x68));
            while (*plVar24 == 0) {
              cVar6 = '\x01';
              bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar23) {
                *plVar24 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_023a1d80;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar23) {
          *plVar24 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_023a1d80:
      plVar24 = (long *)(lVar9 + 0x2f0);
      lVar22 = *plVar24;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar22) {
        lVar10 = nn::os::GetCurrentThread();
LAB_023a1d9c:
        if (*plVar24 == 0) goto code_r0x023a1da4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x2f8));
        do {
          if (*plVar24 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x2f8));
              while (*plVar24 == 0) {
                cVar6 = '\x01';
                bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar23) {
                  *plVar24 = lVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_023a1dac;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar23) {
            *plVar24 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_023a1dac:
        bVar23 = false;
        goto LAB_023a1db0;
      }
      plVar24 = (long *)0x0;
      bVar23 = true;
LAB_023a1db0:
      plVar13 = *(long **)(lVar9 + 0x308);
      lVar10 = *(long *)(lVar9 + 0x340);
      if ((lVar10 == 0) || (*plVar13 == lVar20)) {
        plVar16 = plVar13;
LAB_023a1df0:
        if (plVar16 == plVar13 + lVar10 * 8) goto LAB_023a1e98;
        uVar11 = FUN_023a42c8(param_1,plVar16[2],param_3,param_4);
        plVar13 = (long *)(lVar9 + 0x290);
        local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,1);
        local_b8 = plVar13;
        lVar20 = nn::os::GetCurrentThread();
        do {
          lVar10 = *plVar13;
          lVar22 = *(long *)(lVar9 + 0x298);
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar14) {
            *plVar13 = lVar10;
            *(long *)(lVar9 + 0x298) = lVar22;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          while ((lVar10 != 0 && (lVar20 != lVar10))) {
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x2a0));
            do {
              lVar10 = *plVar13;
              lVar22 = *(long *)(lVar9 + 0x298);
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar14) {
                *plVar13 = lVar10;
                *(long *)(lVar9 + 0x298) = lVar22;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          do {
            lVar15 = *plVar13;
            if (lVar15 != lVar10 || *(long *)(lVar9 + 0x298) != lVar22) {
              bVar14 = false;
              ClearExclusiveLocal();
              goto LAB_023a1e74;
            }
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar14) {
              *plVar13 = lVar10;
              *(long *)(lVar9 + 0x294) = lVar22 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar14 = true;
LAB_023a1e74:
          lVar10 = lVar15;
          lVar22 = *(long *)(lVar9 + 0x298);
        } while (!bVar14);
        FUN_023a43cc(&local_c8,uVar11);
        FUN_00f08b20(&local_b8);
        goto LAB_023a2598;
      }
      lVar22 = lVar10 * 0x40;
      plVar18 = plVar13;
      while (lVar22 = lVar22 + -0x40, lVar22 != 0) {
        plVar19 = plVar18 + 8;
        plVar16 = plVar18 + 8;
        plVar18 = plVar18 + 8;
        if (*plVar19 == lVar20) goto LAB_023a1df0;
      }
LAB_023a1e98:
      plVar13 = (long *)(lVar9 + 0x730);
      lVar22 = *plVar13;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar22) {
        lVar10 = nn::os::GetCurrentThread();
LAB_023a1eb4:
        if (*plVar13 == 0) goto code_r0x023a1ebc;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x738));
        do {
          if (*plVar13 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x738));
              while (*plVar13 == 0) {
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar14) {
                  *plVar13 = lVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_023a21f8;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar14) {
            *plVar13 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_023a21f8:
        bVar14 = false;
        goto LAB_023a2204;
      }
      plVar13 = (long *)0x0;
      bVar14 = true;
      goto LAB_023a2204;
    }
    local_b8 = (long *)0x0;
    local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
    if (local_78 == '\0') {
      local_80 = (long *)0x0;
    }
    else {
      do {
        lVar10 = *local_80;
        lVar22 = local_80[1];
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar23) {
          *local_80 = lVar10;
          local_80[1] = lVar22;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      do {
        lVar15 = *local_80;
        lVar4 = local_80[1];
        if (lVar15 != lVar10 || lVar4 != lVar22) {
          bVar23 = false;
          ClearExclusiveLocal();
          goto LAB_023a1fe8;
        }
        cVar6 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(local_80,0x10);
        if (bVar23) {
          *local_80 = lVar10;
          *(long *)((long)local_80 + 4) = lVar22 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar23 = true;
LAB_023a1fe8:
      if (!bVar23) {
        do {
          lVar10 = *local_80;
          lVar22 = local_80[1];
          if (lVar10 != lVar15 || lVar22 != lVar4) {
            bVar23 = false;
            ClearExclusiveLocal();
            goto joined_r0x023a271c;
          }
          cVar6 = '\x01';
          bVar23 = (bool)ExclusiveMonitorPass(local_80,0x10);
          if (bVar23) {
            *local_80 = lVar15;
            *(long *)((long)local_80 + 4) = lVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar23 = true;
joined_r0x023a271c:
        if (!bVar23) {
          do {
            lVar15 = *local_80;
            lVar4 = local_80[1];
            if (lVar15 != lVar10 || lVar4 != lVar22) {
              bVar23 = false;
              ClearExclusiveLocal();
              lVar10 = lVar15;
              lVar22 = lVar4;
              goto joined_r0x023a271c;
            }
            cVar6 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar23) {
              *local_80 = lVar10;
              *(long *)((long)local_80 + 4) = lVar22 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar23 = true;
          lVar10 = lVar15;
          lVar22 = lVar4;
          goto joined_r0x023a271c;
        }
      }
      nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
      local_80 = local_b8;
      local_78 = (char)local_b0;
    }
    local_b8 = (long *)0x0;
    local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
    FUN_00f08b20(&local_b8);
    uVar17 = local_c0;
    plVar24 = local_c8;
    local_b8 = (long *)*param_3;
    local_a8 = 0;
    local_b0 = (undefined8 *)0x0;
    FUN_00c96b7c(&local_b0,param_3 + 1);
    local_a0 = param_3[3];
    lStack_98 = param_3[4];
    local_90 = param_3[5];
    local_88 = (long *)param_3[6];
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
    FUN_023a3ed8(param_1,lVar9,plVar24,uVar17,uVar11,lVar20,&local_b8,param_4);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    puVar7 = local_b0;
    if (local_b0 == (undefined8 *)0x0) goto LAB_023a25ac;
    psVar2 = (short *)(local_b0 + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar23) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 != 1) goto LAB_023a20a8;
    piVar3 = (int *)((long)local_b0 + 0x1c);
    do {
      iVar8 = *piVar3;
      cVar6 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar23) {
        *piVar3 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == -1) goto LAB_023a25ac;
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    pplVar12 = &local_d8;
    lVar9 = *(long *)PTR_DAT_047d3910;
    *(long *)PTR_DAT_047d3918 = lVar9;
    local_d8 = (long *)*puVar7;
  }
  FUN_00c44438(lVar9 + 0x8040,pplVar12);
LAB_023a25ac:
  FUN_00f08b20(&local_80);
  return uVar21;
code_r0x023a1b28:
  cVar6 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar23) {
    *plVar24 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_023a1b30;
  goto LAB_023a1b20;
code_r0x023a1ee4:
  cVar6 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar23) {
    *plVar24 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_023a1eec;
  goto LAB_023a1edc;
code_r0x023a2448:
  cVar6 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar23) {
    *plVar24 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_023a2450;
  goto LAB_023a2440;
code_r0x023a1da4:
  cVar6 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar23) {
    *plVar24 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_023a1dac;
  goto LAB_023a1d9c;
code_r0x023a1ebc:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar14) {
    *plVar13 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto code_r0x023a1ec4;
  goto LAB_023a1eb4;
code_r0x023a1ec4:
  bVar14 = false;
LAB_023a2204:
  plVar16 = *(long **)(lVar9 + 0x748);
  lVar10 = *(long *)(lVar9 + 0x780);
  if ((lVar10 == 0) || (*plVar16 == lVar20)) {
    plVar18 = plVar16;
LAB_023a2244:
    if (plVar18 != plVar16 + lVar10 * 2) {
      lVar10 = plVar18[1];
      if (!bVar14) {
        *plVar13 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
      }
      if (lVar10 != 0) {
        local_b8 = (long *)0x0;
        local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
        if (local_78 == '\0') {
          local_80 = (long *)0x0;
        }
        else {
          do {
            lVar10 = *local_80;
            lVar22 = local_80[1];
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar14) {
              *local_80 = lVar10;
              local_80[1] = lVar22;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            lVar15 = *local_80;
            lVar4 = local_80[1];
            if (lVar15 != lVar10 || lVar4 != lVar22) {
              bVar14 = false;
              ClearExclusiveLocal();
              goto LAB_023a24f0;
            }
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar14) {
              *local_80 = lVar10;
              *(long *)((long)local_80 + 4) = lVar22 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar14 = true;
LAB_023a24f0:
          if (!bVar14) {
            do {
              lVar10 = *local_80;
              lVar22 = local_80[1];
              if (lVar10 != lVar15 || lVar22 != lVar4) {
                bVar14 = false;
                ClearExclusiveLocal();
                goto joined_r0x023a29e0;
              }
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(local_80,0x10);
              if (bVar14) {
                *local_80 = lVar15;
                *(long *)((long)local_80 + 4) = lVar4 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar14 = true;
joined_r0x023a29e0:
            if (!bVar14) {
              do {
                lVar15 = *local_80;
                lVar4 = local_80[1];
                if (lVar15 != lVar10 || lVar4 != lVar22) {
                  bVar14 = false;
                  ClearExclusiveLocal();
                  lVar10 = lVar15;
                  lVar22 = lVar4;
                  goto joined_r0x023a29e0;
                }
                cVar6 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(local_80,0x10);
                if (bVar14) {
                  *local_80 = lVar10;
                  *(long *)((long)local_80 + 4) = lVar22 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar14 = true;
              lVar10 = lVar15;
              lVar22 = lVar4;
              goto joined_r0x023a29e0;
            }
          }
          nn::os::SignalLightEvent((LightEventType *)(local_80 + 2));
          local_80 = local_b8;
          local_78 = (char)local_b0;
        }
        local_b8 = (long *)0x0;
        local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
        FUN_00f08b20(&local_b8);
        uVar17 = local_c0;
        plVar13 = local_c8;
        local_b8 = (long *)*param_3;
        local_a8 = 0;
        local_b0 = (undefined8 *)0x0;
        FUN_00c96b7c(&local_b0,param_3 + 1);
        local_a0 = param_3[3];
        lStack_98 = param_3[4];
        local_90 = param_3[5];
        local_88 = (long *)param_3[6];
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x18))();
        }
        FUN_023a3ed8(param_1,lVar9,plVar13,uVar17,uVar11,lVar20,&local_b8,param_4);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        puVar7 = local_b0;
        if (local_b0 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_b0 + 3);
          do {
            sVar5 = *psVar2;
            cVar6 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar14) {
              *psVar2 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            piVar3 = (int *)((long)local_b0 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar6 = '\x01';
              bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar14) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar20 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar20;
              local_d8 = (long *)*puVar7;
              FUN_00c44438(lVar20 + 0x8040,&local_d8);
            }
          }
          else if (sVar5 == 0) goto LAB_023a20ac;
        }
      }
      goto LAB_023a2598;
    }
  }
  else {
    lVar22 = lVar10 * 0x10;
    plVar19 = plVar16;
    while (lVar22 = lVar22 + -0x10, lVar22 != 0) {
      plVar1 = plVar19 + 2;
      plVar18 = plVar19 + 2;
      plVar19 = plVar19 + 2;
      if (*plVar1 == lVar20) goto LAB_023a2244;
    }
  }
  if (!bVar14) {
    *plVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  }
LAB_023a2598:
  if (!bVar23) {
    *plVar24 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
  }
LAB_023a259c:
  *(undefined8 *)(lVar9 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x68));
  goto LAB_023a25ac;
}


