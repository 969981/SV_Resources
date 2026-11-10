/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0240c858; name: FUN_0240c858
 */


ulong FUN_0240c858(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

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
  plVar24 = (long *)(param_2 + 0x138);
  lVar20 = *plVar24;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar20) {
    lVar9 = nn::os::GetCurrentThread();
LAB_0240c8e8:
    if (*plVar24 == 0) goto code_r0x0240c8f0;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x140));
    do {
      if (*plVar24 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x140));
          while (*plVar24 == 0) {
            cVar6 = '\x01';
            bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar23) {
              *plVar24 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_0240c8f8;
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
LAB_0240c8f8:
    bVar23 = false;
    plVar13 = plVar24;
    goto LAB_0240c900;
  }
  plVar13 = (long *)0x0;
  bVar23 = true;
LAB_0240c900:
  do {
    lVar9 = *(long *)(param_2 + 0x1c8) - *(long *)(param_2 + 0x1c0);
    if (lVar9 == 0) {
      uVar21 = *(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 3;
      FUN_023708f8(param_2 + 0x150);
      goto LAB_0240c924;
    }
    uVar21 = *(ulong *)(*(long *)(param_2 + 0x1c8) + -8);
    *(long *)(param_2 + 0x1c8) = lVar9 + *(long *)(param_2 + 0x1c0) + -8;
    uVar17 = uVar21 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0x188) + uVar17) =
         *(ulong *)(*(long *)(param_2 + 0x188) + uVar17) &
         (1L << (uVar21 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 3) <= uVar21);
  *(undefined8 *)(*(long *)(param_2 + 0x150) + uVar21 * 8) = 0xffffffffffffffff;
  if (*(ulong *)(param_2 + 0x1f8) <= uVar21) {
LAB_0240c924:
    *(ulong *)(param_2 + 0x1f8) = uVar21 + 1;
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
          goto LAB_0240cad0;
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
LAB_0240cad0:
      lVar22 = lVar4;
      lVar15 = *(long *)(lVar9 + 0x538);
    } while (!bVar23);
    if (*(char *)(lVar9 + 0x550) == '\0') {
      plVar24 = (long *)(lVar9 + 0x60);
      lVar10 = nn::os::GetCurrentThread();
LAB_0240cca4:
      if (*plVar24 == 0) goto code_r0x0240ccac;
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
              if (cVar6 == '\0') goto LAB_0240ccb4;
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
LAB_0240ccb4:
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
            goto LAB_0240cd14;
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
LAB_0240cd14:
        lVar22 = lVar4;
        lVar15 = *(long *)(lVar9 + 0x298);
      } while (!bVar23);
      plVar24 = *(long **)(lVar9 + 0x2b0);
      lVar10 = *(long *)(lVar9 + 0x2e8);
      if ((lVar10 == 0) || (*plVar24 == lVar20)) {
        plVar13 = plVar24;
LAB_0240cd60:
        if (plVar13 == plVar24 + lVar10 * 4) goto LAB_0240d1fc;
        uVar11 = FUN_0240f080(param_1,*(undefined8 *)
                                       (*(long *)(lVar9 + 0x348) + plVar13[3] * 0x130 + 0x118),
                              param_3,param_4);
        FUN_0240fde4(&local_d8,uVar11);
      }
      else {
        lVar22 = lVar10 * 0x20;
        plVar16 = plVar24;
        while (lVar22 = lVar22 + -0x20, lVar22 != 0) {
          plVar18 = plVar16 + 4;
          plVar13 = plVar16 + 4;
          plVar16 = plVar16 + 4;
          if (*plVar18 == lVar20) goto LAB_0240cd60;
        }
LAB_0240d1fc:
        plVar24 = (long *)(lVar9 + 0x948);
        lVar22 = *plVar24;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 != lVar22) {
          lVar10 = nn::os::GetCurrentThread();
LAB_0240d218:
          if (*plVar24 == 0) goto code_r0x0240d220;
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
                  if (cVar6 == '\0') goto LAB_0240d228;
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
LAB_0240d228:
          bVar23 = false;
          goto LAB_0240d22c;
        }
        plVar24 = (long *)0x0;
        bVar23 = true;
LAB_0240d22c:
        plVar13 = *(long **)(lVar9 + 0x960);
        lVar10 = *(long *)(lVar9 + 0x998);
        if ((lVar10 == 0) || (*plVar13 == lVar20)) {
          plVar16 = plVar13;
LAB_0240d23c:
          if (plVar16 == plVar13 + lVar10 * 2) goto LAB_0240d658;
          *(undefined1 *)(plVar16 + 1) = 1;
        }
        else {
          lVar22 = lVar10 * 0x10;
          plVar18 = plVar13;
          while (lVar22 = lVar22 + -0x10, lVar22 != 0) {
            plVar16 = plVar18 + 2;
            plVar19 = plVar18 + 2;
            plVar18 = plVar16;
            if (*plVar19 == lVar20) goto LAB_0240d23c;
          }
LAB_0240d658:
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
                goto LAB_0240d6b4;
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
LAB_0240d6b4:
            if (!bVar14) {
              do {
                lVar10 = *local_80;
                lVar22 = local_80[1];
                if (lVar10 != lVar15 || lVar22 != lVar4) {
                  bVar14 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x0240d898;
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
joined_r0x0240d898:
              if (!bVar14) {
                do {
                  lVar15 = *local_80;
                  lVar4 = local_80[1];
                  if (lVar15 != lVar10 || lVar4 != lVar22) {
                    bVar14 = false;
                    ClearExclusiveLocal();
                    lVar10 = lVar15;
                    lVar22 = lVar4;
                    goto joined_r0x0240d898;
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
                goto joined_r0x0240d898;
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
          FUN_0240f258(param_1,lVar9,plVar13,uVar17,uVar11,lVar20,&local_b8,param_4);
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
            else if (sVar5 == 0) goto LAB_0240ce74;
          }
        }
        if (!bVar23) {
          *plVar24 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
        }
      }
      FUN_00f08b20(&local_c8);
      goto LAB_0240d078;
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
          goto LAB_0240d0a4;
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
LAB_0240d0a4:
      if (!bVar23) {
        do {
          lVar10 = *local_80;
          lVar22 = local_80[1];
          if (lVar10 != lVar15 || lVar22 != lVar4) {
            bVar23 = false;
            ClearExclusiveLocal();
            goto joined_r0x0240d548;
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
joined_r0x0240d548:
        if (!bVar23) {
          do {
            lVar15 = *local_80;
            lVar4 = local_80[1];
            if (lVar15 != lVar10 || lVar4 != lVar22) {
              bVar23 = false;
              ClearExclusiveLocal();
              lVar10 = lVar15;
              lVar22 = lVar4;
              goto joined_r0x0240d548;
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
          goto joined_r0x0240d548;
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
    FUN_0240f258(param_1,lVar9,plVar24,uVar17,uVar11,lVar20,&local_b8,param_4);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    puVar7 = local_b0;
    if (local_b0 == (undefined8 *)0x0) goto LAB_0240d088;
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
LAB_0240ce70:
      if (sVar5 == 0) {
LAB_0240ce74:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      goto LAB_0240d088;
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
    if (iVar8 == -1) goto LAB_0240d088;
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
          goto LAB_0240c9c8;
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
LAB_0240c9c8:
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
        if (cVar6 == '\0') goto LAB_0240cb48;
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
              if (cVar6 == '\0') goto LAB_0240cb48;
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
LAB_0240cb48:
      plVar24 = (long *)(lVar9 + 0x2f0);
      lVar22 = *plVar24;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar22) {
        lVar10 = nn::os::GetCurrentThread();
LAB_0240cb64:
        if (*plVar24 == 0) goto code_r0x0240cb6c;
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
                if (cVar6 == '\0') goto LAB_0240cb74;
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
LAB_0240cb74:
        bVar23 = false;
        goto LAB_0240cb78;
      }
      plVar24 = (long *)0x0;
      bVar23 = true;
LAB_0240cb78:
      plVar13 = *(long **)(lVar9 + 0x308);
      lVar10 = *(long *)(lVar9 + 0x340);
      if ((lVar10 == 0) || (*plVar13 == lVar20)) {
        plVar16 = plVar13;
LAB_0240cbb8:
        if (plVar16 == plVar13 + lVar10 * 8) goto LAB_0240cc60;
        uVar11 = FUN_0240f080(param_1,plVar16[3],param_3,param_4);
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
              goto LAB_0240cc3c;
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
LAB_0240cc3c:
          lVar10 = lVar15;
          lVar22 = *(long *)(lVar9 + 0x298);
        } while (!bVar14);
        FUN_0240f184(&local_c8,uVar11);
        FUN_00f08b20(&local_b8);
        goto LAB_0240d074;
      }
      lVar22 = lVar10 * 0x40;
      plVar18 = plVar13;
      while (lVar22 = lVar22 + -0x40, lVar22 != 0) {
        plVar19 = plVar18 + 8;
        plVar16 = plVar18 + 8;
        plVar18 = plVar18 + 8;
        if (*plVar19 == lVar20) goto LAB_0240cbb8;
      }
LAB_0240cc60:
      plVar13 = (long *)(lVar9 + 0x730);
      lVar22 = *plVar13;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar22) {
        lVar10 = nn::os::GetCurrentThread();
LAB_0240cc7c:
        if (*plVar13 == 0) goto code_r0x0240cc84;
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
                if (cVar6 == '\0') goto LAB_0240cfc0;
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
LAB_0240cfc0:
        bVar14 = false;
        goto LAB_0240cfcc;
      }
      plVar13 = (long *)0x0;
      bVar14 = true;
      goto LAB_0240cfcc;
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
          goto LAB_0240cdb0;
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
LAB_0240cdb0:
      if (!bVar23) {
        do {
          lVar10 = *local_80;
          lVar22 = local_80[1];
          if (lVar10 != lVar15 || lVar22 != lVar4) {
            bVar23 = false;
            ClearExclusiveLocal();
            goto joined_r0x0240d4e4;
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
joined_r0x0240d4e4:
        if (!bVar23) {
          do {
            lVar15 = *local_80;
            lVar4 = local_80[1];
            if (lVar15 != lVar10 || lVar4 != lVar22) {
              bVar23 = false;
              ClearExclusiveLocal();
              lVar10 = lVar15;
              lVar22 = lVar4;
              goto joined_r0x0240d4e4;
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
          goto joined_r0x0240d4e4;
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
    FUN_0240e4f4(param_1,lVar9,plVar24,uVar17,uVar11,lVar20,&local_b8,param_4);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    puVar7 = local_b0;
    if (local_b0 == (undefined8 *)0x0) goto LAB_0240d088;
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
    if (sVar5 != 1) goto LAB_0240ce70;
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
    if (iVar8 == -1) goto LAB_0240d088;
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
LAB_0240d088:
  FUN_00f08b20(&local_80);
  return uVar21;
code_r0x0240c8f0:
  cVar6 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar23) {
    *plVar24 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0240c8f8;
  goto LAB_0240c8e8;
code_r0x0240ccac:
  cVar6 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar23) {
    *plVar24 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0240ccb4;
  goto LAB_0240cca4;
code_r0x0240d220:
  cVar6 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar23) {
    *plVar24 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0240d228;
  goto LAB_0240d218;
code_r0x0240cb6c:
  cVar6 = '\x01';
  bVar23 = (bool)ExclusiveMonitorPass(plVar24,0x10);
  if (bVar23) {
    *plVar24 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0240cb74;
  goto LAB_0240cb64;
code_r0x0240cc84:
  cVar6 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar14) {
    *plVar13 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto code_r0x0240cc8c;
  goto LAB_0240cc7c;
code_r0x0240cc8c:
  bVar14 = false;
LAB_0240cfcc:
  plVar16 = *(long **)(lVar9 + 0x748);
  lVar10 = *(long *)(lVar9 + 0x780);
  if ((lVar10 == 0) || (*plVar16 == lVar20)) {
    plVar18 = plVar16;
LAB_0240d00c:
    if ((plVar18 != plVar16 + lVar10 * 2) && (plVar18[1] != 0)) {
      if (!bVar14) {
        *plVar13 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
      }
      local_b8 = (long *)0x0;
      local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffffffffff00);
      if (local_78 == '\0') {
        local_80 = (long *)0x0;
        local_78 = '\0';
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
            goto LAB_0240d2c8;
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
LAB_0240d2c8:
        if (!bVar14) {
          do {
            lVar10 = *local_80;
            lVar22 = local_80[1];
            if (lVar10 != lVar15 || lVar22 != lVar4) {
              bVar14 = false;
              ClearExclusiveLocal();
              goto joined_r0x0240d7a8;
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
joined_r0x0240d7a8:
          if (!bVar14) {
            do {
              lVar15 = *local_80;
              lVar4 = local_80[1];
              if (lVar15 != lVar10 || lVar4 != lVar22) {
                bVar14 = false;
                ClearExclusiveLocal();
                lVar10 = lVar15;
                lVar22 = lVar4;
                goto joined_r0x0240d7a8;
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
            goto joined_r0x0240d7a8;
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
      FUN_0240e4f4(param_1,lVar9,plVar13,uVar17,uVar11,lVar20,&local_b8,param_4);
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
        else if (sVar5 == 0) goto LAB_0240ce74;
      }
      goto LAB_0240d074;
    }
  }
  else {
    lVar22 = lVar10 * 0x10;
    plVar19 = plVar16;
    while (lVar22 = lVar22 + -0x10, lVar22 != 0) {
      plVar1 = plVar19 + 2;
      plVar18 = plVar19 + 2;
      plVar19 = plVar19 + 2;
      if (*plVar1 == lVar20) goto LAB_0240d00c;
    }
  }
  if (!bVar14) {
    *plVar13 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
  }
LAB_0240d074:
  if (!bVar23) {
    *plVar24 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plVar24 + 1));
  }
LAB_0240d078:
  *(undefined8 *)(lVar9 + 0x60) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x68));
  goto LAB_0240d088;
}


