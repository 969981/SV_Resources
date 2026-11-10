/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd268c; name: FUN_00dd268c
 */


void FUN_00dd268c(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  char *pcVar29;
  long *plVar30;
  long *local_a8;
  long *local_70;
  long *plStack_68;
  
  if ((*param_2 == '\0') || (*param_3 == '\0')) {
    return;
  }
  lVar24 = *(long *)(*(long *)(param_1 + 0x6030) + (ulong)*(uint *)(param_3 + 4) * 0x20);
  plVar22 = *(long **)(param_1 + 0x60a0);
  plVar2 = plVar22 + 8;
  uVar4 = *(undefined4 *)(lVar24 + 0x180);
  lVar9 = nn::os::GetCurrentThread();
  do {
    lVar23 = *plVar2;
    lVar10 = plVar22[9];
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar23;
      plVar22[9] = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00dd26f8:
  while ((lVar23 != 0 && (lVar9 != lVar23))) {
    nn::os::WaitLightEvent((LightEventType *)(plVar22 + 10));
    do {
      lVar23 = *plVar2;
      lVar10 = plVar22[9];
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar23;
        plVar22[9] = lVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  do {
    lVar27 = *plVar2;
    if (lVar27 != lVar23 || plVar22[9] != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00dd2728;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar23;
      *(long *)((long)plVar22 + 0x44) = lVar10 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00dd2728:
  if (!bVar8) {
    lVar23 = lVar27;
    lVar10 = plVar22[9];
    goto LAB_00dd26f8;
  }
  if (*param_2 != '\0') {
    if (*(ulong *)(param_2 + 8) < (ulong)(plVar22[1] - *plVar22 >> 5)) {
      uVar26 = *(undefined8 *)(*plVar22 + *(ulong *)(param_2 + 8) * 0x20);
      goto LAB_00dd2760;
    }
  }
  uVar26 = 0;
LAB_00dd2760:
  do {
    lVar9 = *plVar2;
    lVar23 = plVar22[9];
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      plVar22[9] = lVar23;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar10 = *plVar2;
    lVar27 = plVar22[9];
    if (lVar10 != lVar9 || lVar27 != lVar23) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00dd279c;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      *(long *)((long)plVar22 + 0x44) = lVar23 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00dd279c:
  if (!bVar8) {
    do {
      lVar9 = *plVar2;
      lVar23 = plVar22[9];
      if (lVar9 != lVar10 || lVar23 != lVar27) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00dd2f64;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar10;
        *(long *)((long)plVar22 + 0x44) = lVar27 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x00dd2f64:
    if (!bVar8) {
      do {
        lVar10 = *plVar2;
        lVar27 = plVar22[9];
        if (lVar10 != lVar9 || lVar27 != lVar23) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar9 = lVar10;
          lVar23 = lVar27;
          goto joined_r0x00dd2f64;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar9;
          *(long *)((long)plVar22 + 0x44) = lVar23 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar9 = lVar10;
      lVar23 = lVar27;
      goto joined_r0x00dd2f64;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(plVar22 + 10));
  (**(code **)PTR_DAT_047e1988)(uVar26,lVar24,uVar4);
  plVar2 = (long *)(param_1 + 0x62d0);
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar2 == 0) {
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00dd27e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x62d8));
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x62d8));
        while (*plVar2 == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00dd27e4;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00dd27e4:
  *(uint *)(param_1 + 0x6390) = (*(int *)(param_1 + 0x6390) + 1U) % 3;
  *(undefined8 *)(param_1 + 0x62d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x62d8));
  lVar9 = param_1 + (ulong)((*(int *)(param_1 + 0x6390) + 1U) % 3) * 0x38;
  pcVar29 = *(char **)(lVar9 + 0x62e8);
  pcVar12 = *(char **)(lVar9 + 0x62f0);
  if (pcVar29 == pcVar12) {
LAB_00dd2df0:
    *(char **)(lVar9 + 0x62f0) = pcVar29;
    return;
  }
  while (*pcVar29 == '\0') {
LAB_00dd2d80:
    pcVar29 = pcVar29 + 0x10;
    if (pcVar29 == pcVar12) {
      pcVar29 = *(char **)(lVar9 + 0x62e8);
      goto LAB_00dd2df0;
    }
  }
  lVar23 = *(long *)(param_1 + 0x6100);
  plVar2 = (long *)(lVar23 + 0x70);
  lVar24 = nn::os::GetCurrentThread();
LAB_00dd2880:
  if (*plVar2 == 0 && *(long *)(lVar23 + 0x78) == 0) goto code_r0x00dd288c;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x80));
  do {
    if (*plVar2 != 0 || *(long *)(lVar23 + 0x78) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x80));
        while (*plVar2 == 0 && *(long *)(lVar23 + 0x78) == 0) {
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar24;
            *(undefined8 *)(lVar23 + 0x78) = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00dd2894;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar24;
      *(undefined8 *)(lVar23 + 0x78) = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00dd2894:
  uVar13 = *(ulong *)(lVar23 + 0x10);
  if (uVar13 != 0) {
    uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar15 = *(ulong *)(pcVar29 + 8);
    uVar20 = 0;
    if (uVar13 != 0) {
      uVar20 = uVar15 / uVar13;
    }
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar19 = uVar13 - 1 & uVar15;
    }
    else {
      uVar19 = uVar15;
      if (uVar13 <= uVar15) {
        uVar19 = uVar15 - uVar20 * uVar13;
      }
    }
    lVar24 = *(long *)(lVar23 + 8);
    puVar16 = *(undefined8 **)(lVar24 + uVar19 * 8);
    if ((puVar16 != (undefined8 *)0x0) && (plVar22 = (long *)*puVar16, plVar22 != (long *)0x0)) {
      uVar17 = uVar13 - 1;
      if (uVar14 < 2) {
        do {
          if (plVar22[1] == uVar15) {
            if (plVar22[2] == uVar15) goto LAB_00dd2950;
          }
          else if ((plVar22[1] & uVar17) != uVar19) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar22[1];
          if (uVar21 != uVar15) {
            if (uVar13 <= uVar21) {
              uVar7 = 0;
              if (uVar13 != 0) {
                uVar7 = uVar21 / uVar13;
              }
              uVar21 = uVar21 - uVar7 * uVar13;
            }
            if (uVar21 == uVar19) goto LAB_00dd2944;
            break;
          }
          if (plVar22[2] == uVar15) goto LAB_00dd2950;
LAB_00dd2944:
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  goto LAB_00dd2cf0;
code_r0x00dd288c:
  cVar6 = '\x01';
  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar8) {
    *plVar2 = lVar24;
    *(undefined8 *)(lVar23 + 0x78) = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00dd2894;
  goto LAB_00dd2880;
LAB_00dd2950:
  if (uVar14 < 2) {
    uVar15 = uVar17 & uVar15;
  }
  else if (uVar13 <= uVar15) {
    uVar15 = uVar15 - uVar20 * uVar13;
  }
  plVar18 = *(long **)(lVar24 + uVar15 * 8);
  for (plVar25 = (long *)*plVar18; plVar25 != plVar22; plVar25 = (long *)*plVar25) {
    plVar18 = plVar25;
  }
  if (plVar18 == (long *)(lVar23 + 0x38)) {
LAB_00dd29a4:
    if (*plVar22 != 0) {
      uVar20 = *(ulong *)(*plVar22 + 8);
      if (uVar14 < 2) {
        uVar20 = uVar20 & uVar17;
      }
      else if (uVar13 <= uVar20) {
        uVar19 = 0;
        if (uVar13 != 0) {
          uVar19 = uVar20 / uVar13;
        }
        uVar20 = uVar20 - uVar19 * uVar13;
      }
      if (uVar20 == uVar15) goto LAB_00dd29d4;
    }
    *(undefined8 *)(lVar24 + uVar15 * 8) = 0;
  }
  else {
    uVar20 = plVar18[1];
    if (uVar14 < 2) {
      uVar20 = uVar20 & uVar17;
    }
    else if (uVar13 <= uVar20) {
      uVar19 = 0;
      if (uVar13 != 0) {
        uVar19 = uVar20 / uVar13;
      }
      uVar20 = uVar20 - uVar19 * uVar13;
    }
    if (uVar20 != uVar15) goto LAB_00dd29a4;
  }
LAB_00dd29d4:
  lVar24 = *plVar22;
  if (lVar24 != 0) {
    uVar20 = *(ulong *)(lVar24 + 8);
    if (uVar14 < 2) {
      uVar20 = uVar20 & uVar17;
    }
    else if (uVar13 <= uVar20) {
      uVar14 = 0;
      if (uVar13 != 0) {
        uVar14 = uVar20 / uVar13;
      }
      uVar20 = uVar20 - uVar14 * uVar13;
    }
    if (uVar20 != uVar15) {
      *(long **)(*(long *)(lVar23 + 8) + uVar20 * 8) = plVar18;
      lVar24 = *plVar22;
    }
  }
  *plVar18 = lVar24;
  *plVar22 = 0;
  *(long *)(lVar23 + 0x60) = *(long *)(lVar23 + 0x60) + -1;
  lVar24 = plVar22[3];
  plVar22[3] = 0;
  if (lVar24 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar5 = *(int *)(lVar10 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar1;
    if (*(int *)(lVar10 + 0x12cc) <= iVar5) {
      *(int *)(lVar10 + 0x12cc) = iVar1;
    }
    if (*(char *)(lVar24 + 0x150) != '\0') {
      (**(code **)PTR_DAT_047e1990)(lVar24);
    }
    plVar18 = *(long **)(lVar24 + 0xe0);
    if (plVar18 != (long *)0x0) {
      plVar30 = *(long **)(lVar24 + 0xe8);
      plVar25 = plVar18;
      if (plVar30 != plVar18) {
        plVar25 = plVar30 + -4;
        lVar10 = *plVar25;
        *plVar25 = 0;
        if (lVar10 != 0) {
          plVar3 = (long *)plVar30[-3];
          lVar27 = plVar30[-2];
          lVar28 = plVar30[-1];
          uVar13 = (**(code **)(*plVar3 + 0xf8))(plVar3);
          if (((uVar13 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar10,lVar27,lVar28);
          }
          else {
            FUN_00c48fe8(plVar3,lVar10,lVar27,lVar28);
          }
        }
        if (plVar25 != plVar18) {
          plVar25 = plVar30 + -8;
          lVar10 = *plVar25;
          *plVar25 = 0;
          if (lVar10 != 0) {
            plVar3 = (long *)plVar30[-7];
            lVar27 = plVar30[-6];
            lVar28 = plVar30[-5];
            uVar13 = (**(code **)(*plVar3 + 0xf8))(plVar3);
            if (((uVar13 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
              (**(code **)(*plVar3 + 0x18))(plVar3,lVar10,lVar27,lVar28);
            }
            else {
              FUN_00c48fe8(plVar3,lVar10,lVar27,lVar28);
            }
          }
          if (plVar25 != plVar18) {
            do {
              lVar10 = plVar30[-0xc];
              plVar30[-0xc] = 0;
              if (lVar10 != 0) {
                plVar25 = (long *)plVar30[-0xb];
                lVar27 = plVar30[-10];
                lVar28 = plVar30[-9];
                uVar13 = (**(code **)(*plVar25 + 0xf8))(plVar25);
                if (((uVar13 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar25 + 0x18))(plVar25,lVar10,lVar27,lVar28);
                }
                else {
                  FUN_00c48fe8(plVar25,lVar10,lVar27,lVar28);
                }
              }
              plVar30 = plVar30 + -4;
            } while (plVar18 + 8 != plVar30);
          }
        }
        plVar25 = *(long **)(lVar24 + 0xe0);
      }
      plVar30 = *(long **)(lVar24 + 0xf8);
      *(long **)(lVar24 + 0xe8) = plVar18;
      lVar10 = *(long *)(lVar24 + 0xf0) - (long)plVar25;
      uVar13 = (**(code **)(*plVar30 + 0xf8))(plVar30);
      if (((uVar13 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
        (**(code **)(*plVar30 + 0x18))(plVar30,plVar25,lVar10,8);
      }
      else {
        FUN_00c48fe8(plVar30,plVar25,lVar10,8);
      }
    }
    lVar10 = *(long *)(lVar24 + 0xa8);
    if (lVar10 != 0) {
      lVar27 = *(long *)(lVar24 + 0xb0);
      lVar28 = lVar10;
      if (*(long *)(lVar24 + 0xb0) != lVar10) {
        do {
          lVar28 = lVar27 + -0x20;
          plVar18 = *(long **)(lVar27 + -0x18);
          if (plVar18 != (long *)0x0) {
            (**(code **)(*plVar18 + 0x38))(plVar18,lVar28);
            plVar18 = *(long **)(lVar27 + -0x18);
            *(undefined8 *)(lVar27 + -0x20) = 0;
            *(undefined8 *)(lVar27 + -0x18) = 0;
            if (plVar18 != (long *)0x0) {
              plVar25 = plVar18 + 5;
              do {
                lVar11 = *plVar25;
                iVar1 = (int)lVar11 + -1;
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar8) {
                  *(int *)plVar25 = iVar1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))();
              }
              else if ((int)lVar11 == 0) goto LAB_00dd3400;
            }
            plVar18 = *(long **)(lVar27 + -0x18);
            *(undefined8 *)(lVar27 + -0x10) = 0xffffffffffffffff;
            *(undefined8 *)(lVar27 + -8) = 0;
            if (plVar18 != (long *)0x0) {
              plVar25 = plVar18 + 5;
              do {
                lVar27 = *plVar25;
                iVar1 = (int)lVar27 + -1;
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar8) {
                  *(int *)plVar25 = iVar1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))();
              }
              else if ((int)lVar27 == 0) {
LAB_00dd3400:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          }
          lVar27 = lVar28;
        } while (lVar28 != lVar10);
        lVar28 = *(long *)(lVar24 + 0xa8);
      }
      plVar18 = *(long **)(lVar24 + 0xc0);
      *(long *)(lVar24 + 0xb0) = lVar10;
      lVar10 = *(long *)(lVar24 + 0xb8) - lVar28;
      uVar13 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar13 & 1) == 0) || (lVar27 = FUN_00c4e600(), *(int *)(lVar27 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar28,lVar10,8);
      }
      else {
        FUN_00c48fe8(plVar18,lVar28,lVar10,8);
      }
    }
    plVar18 = (long *)plVar22[4];
    lVar10 = plVar22[5];
    lVar27 = plVar22[6];
    uVar13 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar13 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar24,lVar10,lVar27);
    }
    else {
      FUN_00c48fe8(plVar18,lVar24,lVar10,lVar27);
    }
    lVar24 = FUN_00c4e600();
    iVar1 = *(int *)(lVar24 + 0x12c8) + -1;
    *(int *)(lVar24 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar18 = (long *)FUN_00c4e600();
      if (plVar18[600] != 0) {
        local_70 = plVar18 + plVar18[600] * 3;
        plStack_68 = plVar18;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar30 = (long *)*plVar18;
        plVar25 = plVar18;
        if (plVar18[600] != 0) {
          plVar25 = plVar18 + plVar18[600] * 3;
        }
        if (plVar25 == plVar18) {
          uVar14 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar18 + 0xd0))();
          if ((long *)*plVar18 != plVar30) {
            (**(code **)(*plVar30 + 0x100))(plVar30,plVar18,plVar18);
            plVar30 = (long *)*plVar18;
          }
          plVar3 = plVar18 + 3;
          if (plVar25 == plVar3) {
            uVar14 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar8 = (long *)*plVar3 != plVar30;
            if (bVar8) {
              (**(code **)(*plVar30 + 0x100))(plVar30,plVar18,plVar18 + 3);
              plVar30 = (long *)plVar18[3];
            }
            uVar14 = (ulong)bVar8;
            plVar3 = plVar18 + 6;
            if (plVar25 == plVar3) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar30) {
                (**(code **)(*plVar30 + 0x100))(plVar30,plVar18 + uVar14 * 3,plVar18 + 6);
                plVar30 = (long *)plVar18[6];
                uVar14 = 2;
              }
              plVar3 = plVar18 + 9;
              if (plVar25 == plVar3) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar30) {
                  (**(code **)(*plVar30 + 0x100))(plVar30,plVar18 + uVar14 * 3,plVar18 + 9);
                  plVar30 = (long *)plVar18[9];
                  uVar14 = 3;
                }
                plVar3 = plVar18 + 0xc;
                if (plVar25 == plVar3) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar30) {
                    (**(code **)(*plVar30 + 0x100))(plVar30,plVar18 + uVar14 * 3,plVar18 + 0xc);
                    plVar30 = (long *)plVar18[0xc];
                    uVar14 = 4;
                  }
                  plVar3 = plVar18 + 0xf;
                  if (plVar25 == plVar3) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar30) {
                      (**(code **)(*plVar30 + 0x100))(plVar30,plVar18 + uVar14 * 3,plVar18 + 0xf);
                      plVar30 = (long *)plVar18[0xf];
                      uVar14 = 5;
                    }
                    local_a8 = plVar18 + 0x12;
                    uVar13 = 6;
                    if (plVar25 != local_a8) {
                      do {
                        (**(code **)(*(long *)*local_a8 + 0xd0))();
                        if ((long *)*local_a8 != plVar30) {
                          (**(code **)(*plVar30 + 0x100))(plVar30,plVar18 + uVar14 * 3,local_a8);
                          plVar30 = (long *)*local_a8;
                          uVar14 = uVar13;
                        }
                        local_a8 = local_a8 + 3;
                        uVar13 = uVar13 + 1;
                      } while (plVar25 != local_a8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar30 + 0x100))(plVar30,plVar18 + uVar14 * 3,plVar18 + uVar13 * 3);
        plVar18[600] = 0;
      }
      *(undefined4 *)(lVar24 + 0x12cc) = 0;
    }
  }
  plVar18 = *(long **)(lVar23 + 0x40);
  uVar13 = (**(code **)(*plVar18 + 0xf8))(plVar18);
  if (((uVar13 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
    (**(code **)(*plVar18 + 0x18))(plVar18,plVar22,0x38,8);
  }
  else {
    FUN_00c48fe8(plVar18,plVar22,0x38,8);
  }
LAB_00dd2cf0:
  do {
    lVar24 = *plVar2;
    lVar10 = *(long *)(lVar23 + 0x78);
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = lVar24;
      *(long *)(lVar23 + 0x78) = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  do {
    lVar27 = *plVar2;
    lVar28 = *(long *)(lVar23 + 0x78);
    if (lVar27 != lVar24 || lVar28 != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_00dd2d74;
    }
    cVar6 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar8) {
      *plVar2 = 0;
      *(long *)(lVar23 + 0x74) = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  bVar8 = true;
LAB_00dd2d74:
  if (!bVar8) {
    do {
      lVar24 = *plVar2;
      lVar10 = *(long *)(lVar23 + 0x78);
      if (lVar24 != lVar27 || lVar10 != lVar28) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x00dd331c;
      }
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = 0;
        *(long *)(lVar23 + 0x74) = lVar28;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    bVar8 = true;
joined_r0x00dd331c:
    if (!bVar8) {
      do {
        lVar27 = *plVar2;
        lVar28 = *(long *)(lVar23 + 0x78);
        if (lVar27 != lVar24 || lVar28 != lVar10) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar24 = lVar27;
          lVar10 = lVar28;
          goto joined_r0x00dd331c;
        }
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = 0;
          *(long *)(lVar23 + 0x74) = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      bVar8 = true;
      lVar24 = lVar27;
      lVar10 = lVar28;
      goto joined_r0x00dd331c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar23 + 0x80));
  goto LAB_00dd2d80;
}


