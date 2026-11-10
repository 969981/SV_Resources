/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01084ad4; name: FUN_01084ad4
 */


/* WARNING: Removing unreachable block (ram,0x01085194) */
/* WARNING: Removing unreachable block (ram,0x01085198) */
/* WARNING: Removing unreachable block (ram,0x010851a0) */
/* WARNING: Removing unreachable block (ram,0x010851a8) */
/* WARNING: Removing unreachable block (ram,0x01085494) */
/* WARNING: Removing unreachable block (ram,0x0108549c) */
/* WARNING: Removing unreachable block (ram,0x010854a0) */
/* WARNING: Removing unreachable block (ram,0x010854a8) */
/* WARNING: Removing unreachable block (ram,0x010854b0) */
/* WARNING: Removing unreachable block (ram,0x01085e94) */
/* WARNING: Removing unreachable block (ram,0x01085ea4) */
/* WARNING: Removing unreachable block (ram,0x010854b8) */
/* WARNING: Removing unreachable block (ram,0x010851b0) */
/* WARNING: Removing unreachable block (ram,0x010851b4) */
/* WARNING: Removing unreachable block (ram,0x01085128) */
/* WARNING: Removing unreachable block (ram,0x0108512c) */
/* WARNING: Removing unreachable block (ram,0x01085134) */
/* WARNING: Removing unreachable block (ram,0x0108513c) */
/* WARNING: Removing unreachable block (ram,0x010853bc) */
/* WARNING: Removing unreachable block (ram,0x010853c4) */
/* WARNING: Removing unreachable block (ram,0x010853c8) */
/* WARNING: Removing unreachable block (ram,0x010853d0) */
/* WARNING: Removing unreachable block (ram,0x010853d8) */
/* WARNING: Removing unreachable block (ram,0x01085de0) */
/* WARNING: Removing unreachable block (ram,0x01085df0) */
/* WARNING: Removing unreachable block (ram,0x010853e0) */
/* WARNING: Removing unreachable block (ram,0x01085144) */
/* WARNING: Removing unreachable block (ram,0x01085148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01084ad4(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  short sVar8;
  char cVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  short sVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  bool bVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  long *local_e0;
  long *local_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  long *aplStack_b8 [2];
  long *local_a8;
  long *local_88;
  long *local_78;
  long local_70 [2];
  
  if (*(int *)(param_1 + 0x128) != 4) {
    if ((((*(long *)(param_1 + 400) != 0) && (*(short *)(*(long *)(param_1 + 400) + 0x1a) != 0)) &&
        (lVar20 = *(long *)(param_1 + 400), lVar20 != 0)) && (*(short *)(lVar20 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar20 + 0x1a);
      sVar24 = *(short *)(lVar20 + 0x1a);
      do {
        sVar8 = *psVar1;
        if (sVar8 == sVar24) {
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar29) {
            *psVar1 = sVar24 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 != '\0') goto LAB_0108562c;
          bVar29 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0108562c:
          bVar29 = false;
        }
        if (bVar29) {
          lVar20 = *(long *)(lVar20 + 0x10);
          if (lVar20 != 0) {
            iVar15 = *(int *)(lVar20 + 0x108);
            (**(code **)(*(long *)(lVar20 + -0x28) + 0x60))(lVar20 + -0x28);
            if (iVar15 != 3) {
              return;
            }
            goto LAB_01084c28;
          }
          break;
        }
        sVar24 = sVar8;
      } while (sVar8 != 0);
    }
    if (*(long *)(param_1 + 0xe8) == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = *(long *)(*(long *)(param_1 + 0xe8) + 0x48);
    }
    plVar17 = (long *)(lVar20 + 0x110);
    lVar27 = *plVar17;
    lVar16 = nn::os::GetCurrentThread();
    if (lVar16 != lVar27) {
      lVar16 = nn::os::GetCurrentThread();
LAB_01084b70:
      if (*plVar17 == 0) goto code_r0x01084b78;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x118));
      do {
        if (*plVar17 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x118));
            while (*plVar17 == 0) {
              cVar9 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar29) {
                *plVar17 = lVar16;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_01084b80;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar29) {
          *plVar17 = lVar16;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_01084b80:
      bVar29 = false;
      goto LAB_01084b84;
    }
    bVar29 = true;
LAB_01084b84:
    plVar17 = (long *)FUN_01086030(*(undefined8 *)(lVar20 + 0x128),*(undefined8 *)(lVar20 + 0x130));
    if ((*(long **)(lVar20 + 0x130) == plVar17) || (*plVar17 == 0)) {
      plVar17 = (long *)FUN_01086030(*(undefined8 *)(lVar20 + 0x160),*(undefined8 *)(lVar20 + 0x168)
                                    );
      if (*(long **)(lVar20 + 0x168) == plVar17) {
        lVar16 = 0;
      }
      else {
        lVar16 = 0;
        if (*plVar17 != 0) {
          lVar16 = *plVar17 + -0x20;
        }
      }
    }
    else {
      lVar16 = *plVar17 + -0x20;
    }
    if (!bVar29) {
      *(undefined8 *)(lVar20 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x118));
    }
    if (lVar16 == 0) {
      return;
    }
    local_c0 = (long *)0x0;
    aplStack_b8[0] = (long *)0x0;
    FUN_00c43ef0(&local_c0,lVar16 + 0x98);
    local_e0 = (long *)0x0;
    local_d8 = (long *)0x0;
    if (local_c0[2] == lVar16 + 0x28) {
      FUN_00c953a8(&local_e0,&local_c0);
    }
    plVar17 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar28 = local_c0 + 3;
      do {
        sVar24 = (short)*plVar28;
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar29) {
          *(short *)plVar28 = sVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar24 == 1) {
        piVar2 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar15 = *piVar2;
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar29) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar15 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar20;
          local_70[0] = *plVar17;
          FUN_00c44438(lVar20 + 0x8040,local_70);
        }
      }
      else if (sVar24 == 0) goto LAB_01084d24;
    }
    FUN_00cacc64((long *)(param_1 + 400),&local_e0);
    plVar17 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar28 = local_e0 + 3;
      do {
        sVar24 = (short)*plVar28;
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar29) {
          *(short *)plVar28 = sVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar24 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar15 = *piVar2;
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar29) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar15 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar20 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar20;
          local_c0 = (long *)*plVar17;
          FUN_00c44438(lVar20 + 0x8040,&local_c0);
        }
      }
      else if (sVar24 == 0) goto LAB_01084d24;
    }
    if (*(int *)(lVar16 + 0x130) != 3) {
      return;
    }
LAB_01084c28:
    iVar15 = *(int *)(param_1 + 0x128);
    if (iVar15 != 2) {
      if (iVar15 != 3) {
        if (iVar15 != 1) {
          return;
        }
        lVar20 = *(long *)(param_1 + 400);
        if (lVar20 == 0) {
          return;
        }
        if (*(short *)(lVar20 + 0x1a) == 0) {
          return;
        }
        psVar1 = (short *)(lVar20 + 0x1a);
        sVar24 = *(short *)(lVar20 + 0x1a);
LAB_01085084:
        sVar8 = *psVar1;
        if (sVar8 == sVar24) {
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar29) {
            *psVar1 = sVar24 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 != '\0') goto LAB_010850a8;
          bVar29 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_010850a8:
          bVar29 = false;
        }
        if (!bVar29) goto code_r0x010850b0;
        lVar20 = *(long *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          return;
        }
        plVar17 = (long *)(lVar20 + -0x28);
        if (*(int *)(lVar20 + 0x108) == 3) {
          FUN_00d8fb98(&local_c0,PTR_DAT_047d9c48);
          puVar19 = (undefined8 *)FUN_00cb7028(plVar17,&local_c0);
          plVar28 = (long *)*puVar19;
          if (plVar28 != (long *)0x0) {
            plVar6 = plVar28 + 5;
            do {
              lVar20 = *plVar6;
              cVar9 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar29) {
                *(int *)plVar6 = (int)lVar20 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if ((int)lVar20 == -1) goto LAB_01086008;
          }
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          FUN_0104f80c(plVar28,param_1 + 0x160);
          FUN_02187774(plVar28,1);
          FUN_02187878(plVar28);
          plVar11 = _UNK_03cabf48;
          plVar10 = _DAT_03cabf40;
          plVar7 = (long *)plVar28[0x1b];
          for (plVar6 = (long *)plVar28[0x1a]; plVar6 != plVar7; plVar6 = plVar6 + 1) {
            lVar16 = *plVar6;
            for (lVar20 = *(long *)(lVar16 + 0x70); lVar20 != lVar16 + 0x68;
                lVar20 = *(long *)(lVar20 + 8)) {
              plVar25 = (long *)(lVar20 + 0x10);
              *(undefined1 *)(*plVar25 + 0x240) = 0;
              aplStack_b8[0] = plVar11;
              local_c0 = plVar10;
              FUN_02187928(*plVar25,&local_c0);
              FUN_011c5978(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x130) + 0x38) + 0x78),
                           plVar25,0xffffffff);
              lVar27 = *plVar25;
              if ((int)((ulong)(*(long *)(lVar27 + 0x58) - *(long *)(lVar27 + 0x50)) >> 3) != 0) {
                uVar26 = 0;
                do {
                  plVar30 = *(long **)(*(long *)(lVar27 + 0x50) + uVar26 * 8);
                  if (plVar30 != (long *)0x0) {
                    plVar31 = plVar30 + 5;
                    do {
                      lVar27 = *plVar31;
                      cVar9 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                      if (bVar29) {
                        *(int *)plVar31 = (int)lVar27 + 1;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    if ((int)lVar27 == -1) goto LAB_01086008;
                  }
                  plVar31 = *(long **)(*(long *)(param_1 + 0x130) + 0x40);
                  if (plVar31 != (long *)0x0) {
                    plVar3 = plVar31 + 5;
                    do {
                      lVar27 = *plVar3;
                      cVar9 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                      if (bVar29) {
                        *(int *)plVar3 = (int)lVar27 + 1;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    if ((int)lVar27 == -1) goto LAB_01086008;
                    plVar4 = plVar30 + 0xe;
                    lVar27 = nn::os::GetCurrentThread();
                    do {
                      lVar21 = *plVar4;
                      lVar23 = plVar30[0xf];
                      cVar9 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                      if (bVar29) {
                        *plVar4 = lVar21;
                        plVar30[0xf] = lVar23;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
LAB_010858c4:
                    while ((lVar21 != 0 && (lVar27 != lVar21))) {
                      nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x10));
                      do {
                        lVar21 = *plVar4;
                        lVar23 = plVar30[0xf];
                        cVar9 = '\x01';
                        bVar29 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                        if (bVar29) {
                          *plVar4 = lVar21;
                          plVar30[0xf] = lVar23;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                    }
                    do {
                      lVar5 = *plVar4;
                      if (lVar5 != lVar21 || plVar30[0xf] != lVar23) {
                        bVar29 = false;
                        ClearExclusiveLocal();
                        goto LAB_01085900;
                      }
                      cVar9 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                      if (bVar29) {
                        *plVar4 = lVar21;
                        *(long *)((long)plVar30 + 0x74) = lVar23 + 1;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    bVar29 = true;
LAB_01085900:
                    if (!bVar29) {
                      lVar21 = lVar5;
                      lVar23 = plVar30[0xf];
                      goto LAB_010858c4;
                    }
                    if ((int)((ulong)(plVar30[7] - plVar30[6]) >> 3) != 0) {
                      FUN_00d101e0(*(undefined8 *)(*(long *)plVar30[6] + 200),1,0,
                                   *(long *)(param_1 + 0x130) + 0x40);
                      if ((plVar30[7] - plVar30[6] & 0x7fffffff0U) != 0) {
                        FUN_00d101e0(*(undefined8 *)(*(long *)(plVar30[6] + 8) + 200),1,0,
                                     *(long *)(param_1 + 0x130) + 0x40);
                        lVar27 = plVar30[6];
                        if (0x10 < (plVar30[7] - lVar27 & 0x7fffffff8U)) {
                          uVar32 = 2;
                          do {
                            FUN_00d101e0(*(undefined8 *)(*(long *)(lVar27 + uVar32 * 8) + 200),1,0,
                                         *(long *)(param_1 + 0x130) + 0x40);
                            lVar27 = plVar30[6];
                            uVar32 = uVar32 + 1;
                          } while (uVar32 < ((ulong)(plVar30[7] - lVar27) >> 3 & 0xffffffff));
                        }
                      }
                    }
                    do {
                      lVar27 = *plVar4;
                      lVar21 = plVar30[0xf];
                      cVar9 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                      if (bVar29) {
                        *plVar4 = lVar27;
                        plVar30[0xf] = lVar21;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    do {
                      lVar23 = *plVar4;
                      lVar5 = plVar30[0xf];
                      if (lVar23 != lVar27 || lVar5 != lVar21) {
                        bVar29 = false;
                        ClearExclusiveLocal();
                        goto joined_r0x010859c8;
                      }
                      cVar9 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                      if (bVar29) {
                        *plVar4 = lVar27;
                        *(long *)((long)plVar30 + 0x74) = lVar21 + -1;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    bVar29 = true;
joined_r0x010859c8:
                    if (!bVar29) {
                      do {
                        lVar27 = *plVar4;
                        lVar21 = plVar30[0xf];
                        if (lVar27 != lVar23 || lVar21 != lVar5) {
                          bVar29 = false;
                          ClearExclusiveLocal();
                          lVar23 = lVar27;
                          lVar5 = lVar21;
                          goto joined_r0x010859c8;
                        }
                        cVar9 = '\x01';
                        bVar29 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                        if (bVar29) {
                          *plVar4 = lVar23;
                          *(long *)((long)plVar30 + 0x74) = lVar5 + -1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      bVar29 = true;
                      lVar23 = lVar27;
                      lVar5 = lVar21;
                      goto joined_r0x010859c8;
                    }
                    nn::os::SignalLightEvent((LightEventType *)(plVar30 + 0x10));
                    do {
                      lVar27 = *plVar3;
                      iVar15 = (int)lVar27 + -1;
                      cVar9 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                      if (bVar29) {
                        *(int *)plVar3 = iVar15;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    if (iVar15 == 0) {
                      (**(code **)(*plVar31 + 0x10))(plVar31);
                    }
                    else if ((int)lVar27 == 0) goto LAB_01085f0c;
                  }
                  local_c0 = *(long **)(*(long *)(param_1 + 0x130) + 0x48);
                  if (local_c0 != (long *)0x0) {
                    plVar31 = local_c0 + 5;
                    do {
                      lVar27 = *plVar31;
                      cVar9 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                      if (bVar29) {
                        *(int *)plVar31 = (int)lVar27 + 1;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    if ((int)lVar27 == -1) goto LAB_01086008;
                    if (local_c0 != (long *)0x0) {
                      plVar31 = plVar30 + 0xe;
                      lVar27 = nn::os::GetCurrentThread();
                      do {
                        lVar21 = *plVar31;
                        lVar23 = plVar30[0xf];
                        cVar9 = '\x01';
                        bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                        if (bVar29) {
                          *plVar31 = lVar21;
                          plVar30[0xf] = lVar23;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
LAB_01085a78:
                      while ((lVar21 != 0 && (lVar27 != lVar21))) {
                        nn::os::WaitLightEvent((LightEventType *)(plVar30 + 0x10));
                        do {
                          lVar21 = *plVar31;
                          lVar23 = plVar30[0xf];
                          cVar9 = '\x01';
                          bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                          if (bVar29) {
                            *plVar31 = lVar21;
                            plVar30[0xf] = lVar23;
                            cVar9 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar9 != '\0');
                      }
                      do {
                        lVar5 = *plVar31;
                        if (lVar5 != lVar21 || plVar30[0xf] != lVar23) {
                          bVar29 = false;
                          ClearExclusiveLocal();
                          goto LAB_01085ab4;
                        }
                        cVar9 = '\x01';
                        bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                        if (bVar29) {
                          *plVar31 = lVar21;
                          *(long *)((long)plVar30 + 0x74) = lVar23 + 1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      bVar29 = true;
LAB_01085ab4:
                      if (!bVar29) {
                        lVar21 = lVar5;
                        lVar23 = plVar30[0xf];
                        goto LAB_01085a78;
                      }
                      if ((int)((ulong)(plVar30[7] - plVar30[6]) >> 3) != 0) {
                        FUN_00d101e0(*(undefined8 *)(*(long *)plVar30[6] + 200),1,1,&local_c0);
                        if ((plVar30[7] - plVar30[6] & 0x7fffffff0U) != 0) {
                          FUN_00d101e0(*(undefined8 *)(*(long *)(plVar30[6] + 8) + 200),1,1,
                                       &local_c0);
                          lVar27 = plVar30[6];
                          if (0x10 < (plVar30[7] - lVar27 & 0x7fffffff8U)) {
                            uVar32 = 2;
                            do {
                              FUN_00d101e0(*(undefined8 *)(*(long *)(lVar27 + uVar32 * 8) + 200),1,1
                                           ,&local_c0);
                              lVar27 = plVar30[6];
                              uVar32 = uVar32 + 1;
                            } while (uVar32 < ((ulong)(plVar30[7] - lVar27) >> 3 & 0xffffffff));
                          }
                        }
                      }
                      do {
                        lVar27 = *plVar31;
                        lVar21 = plVar30[0xf];
                        cVar9 = '\x01';
                        bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                        if (bVar29) {
                          *plVar31 = lVar27;
                          plVar30[0xf] = lVar21;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      do {
                        lVar23 = *plVar31;
                        lVar5 = plVar30[0xf];
                        if (lVar23 != lVar27 || lVar5 != lVar21) {
                          bVar29 = false;
                          ClearExclusiveLocal();
                          goto joined_r0x01085b74;
                        }
                        cVar9 = '\x01';
                        bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                        if (bVar29) {
                          *plVar31 = lVar27;
                          *(long *)((long)plVar30 + 0x74) = lVar21 + -1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      bVar29 = true;
joined_r0x01085b74:
                      if (!bVar29) {
                        do {
                          lVar27 = *plVar31;
                          lVar21 = plVar30[0xf];
                          if (lVar27 != lVar23 || lVar21 != lVar5) {
                            bVar29 = false;
                            ClearExclusiveLocal();
                            lVar23 = lVar27;
                            lVar5 = lVar21;
                            goto joined_r0x01085b74;
                          }
                          cVar9 = '\x01';
                          bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                          if (bVar29) {
                            *plVar31 = lVar23;
                            *(long *)((long)plVar30 + 0x74) = lVar5 + -1;
                            cVar9 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar9 != '\0');
                        bVar29 = true;
                        lVar23 = lVar27;
                        lVar5 = lVar21;
                        goto joined_r0x01085b74;
                      }
                      nn::os::SignalLightEvent((LightEventType *)(plVar30 + 0x10));
                      if (local_c0 != (long *)0x0) {
                        plVar31 = local_c0 + 5;
                        do {
                          lVar27 = *plVar31;
                          iVar15 = (int)lVar27 + -1;
                          cVar9 = '\x01';
                          bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                          if (bVar29) {
                            *(int *)plVar31 = iVar15;
                            cVar9 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar9 != '\0');
                        if (iVar15 == 0) {
                          (**(code **)(*local_c0 + 0x10))();
                        }
                        else if ((int)lVar27 == 0) goto LAB_01085f0c;
                      }
                    }
                  }
                  if (plVar30 != (long *)0x0) {
                    plVar31 = plVar30 + 5;
                    do {
                      lVar27 = *plVar31;
                      iVar15 = (int)lVar27 + -1;
                      cVar9 = '\x01';
                      bVar29 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                      if (bVar29) {
                        *(int *)plVar31 = iVar15;
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    if (iVar15 == 0) {
                      (**(code **)(*plVar30 + 0x10))(plVar30);
                    }
                    else if ((int)lVar27 == 0) goto LAB_01085f0c;
                  }
                  uVar26 = uVar26 + 1;
                  lVar27 = *plVar25;
                } while (uVar26 < ((ulong)(*(long *)(lVar27 + 0x58) - *(long *)(lVar27 + 0x50)) >> 3
                                  & 0xffffffff));
              }
            }
          }
          *(undefined4 *)(param_1 + 0x128) = 2;
          if (plVar28 != (long *)0x0) {
            plVar6 = plVar28 + 5;
            do {
              lVar20 = *plVar6;
              iVar15 = (int)lVar20 + -1;
              cVar9 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar29) {
                *(int *)plVar6 = iVar15;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar15 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
            }
            else if ((int)lVar20 == 0) goto LAB_01085f0c;
          }
        }
        lVar20 = *plVar17;
        local_a8 = plVar17;
        goto LAB_01085c8c;
      }
      lVar20 = *(long *)(param_1 + 400);
      if (lVar20 == 0) {
        return;
      }
      if (*(short *)(lVar20 + 0x1a) == 0) {
        return;
      }
      psVar1 = (short *)(lVar20 + 0x1a);
      sVar24 = *(short *)(lVar20 + 0x1a);
LAB_01084c54:
      sVar8 = *psVar1;
      if (sVar8 == sVar24) {
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar29) {
          *psVar1 = sVar24 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 != '\0') goto LAB_01084c78;
        bVar29 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01084c78:
        bVar29 = false;
      }
      if (!bVar29) goto code_r0x01084c80;
      lVar20 = *(long *)(lVar20 + 0x10);
      if (lVar20 == 0) {
        return;
      }
      plVar17 = (long *)(lVar20 + -0x28);
      if (*(int *)(lVar20 + 0x108) == 3) {
        FUN_00d8fb98(&local_c0,PTR_DAT_047d9c48);
        puVar19 = (undefined8 *)FUN_00cb7028(plVar17,&local_c0);
        plVar28 = (long *)*puVar19;
        if (plVar28 != (long *)0x0) {
          plVar6 = plVar28 + 5;
          do {
            lVar20 = *plVar6;
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar29) {
              *(int *)plVar6 = (int)lVar20 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if ((int)lVar20 == -1) {
LAB_01086008:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
        }
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        plVar7 = (long *)plVar28[0x1b];
        for (plVar6 = (long *)plVar28[0x1a]; plVar6 != plVar7; plVar6 = plVar6 + 1) {
          lVar20 = *plVar6;
          for (lVar16 = *(long *)(lVar20 + 0x70); lVar16 != lVar20 + 0x68;
              lVar16 = *(long *)(lVar16 + 8)) {
            *(undefined1 *)(*(long *)(lVar16 + 0x10) + 0x240) = 1;
          }
        }
        *(undefined4 *)(param_1 + 0x128) = 4;
        if (plVar28 != (long *)0x0) {
          plVar6 = plVar28 + 5;
          do {
            lVar20 = *plVar6;
            iVar15 = (int)lVar20 + -1;
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar29) {
              *(int *)plVar6 = iVar15;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar15 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
          }
          else if ((int)lVar20 == 0) goto LAB_01085f0c;
        }
      }
      lVar20 = *plVar17;
      local_a8 = plVar17;
LAB_01085c8c:
      pcVar22 = *(code **)(lVar20 + 0x60);
      goto LAB_0108505c;
    }
    FUN_00c9e664(&local_c0,param_1 + 0xe8);
    lVar20 = 0;
    if (aplStack_b8[0] != (long *)0x0) {
      lVar20 = aplStack_b8[0][9];
    }
    lVar20 = FUN_01086108(lVar20 + 0x108,&local_e0);
    if (aplStack_b8[0] != (long *)0x0) {
      plVar17 = aplStack_b8[0] + 5;
      do {
        lVar16 = *plVar17;
        iVar15 = (int)lVar16 + -1;
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar29) {
          *(int *)plVar17 = iVar15;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar15 == 0) {
        (**(code **)(*aplStack_b8[0] + 0x10))();
      }
      else if ((int)lVar16 == 0) {
LAB_01085f0c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x60))();
    }
    if (lVar20 == 0) {
      return;
    }
    if (*(int *)(lVar20 + 0x128) != 2) {
      return;
    }
    local_c0 = (long *)0x0;
    aplStack_b8[0] = (long *)0x0;
    FUN_00c43ef0(&local_c0,lVar20 + 0x98);
    puVar14 = PTR_DAT_047d3918;
    puVar13 = PTR_DAT_047d3910;
    puVar12 = PTR_DAT_047d3908;
    local_e0 = (long *)0x0;
    local_d8 = (long *)0x0;
    if (local_c0[2] == lVar20 + 0x28) {
      do {
        plVar17 = aplStack_b8[0];
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(aplStack_b8,0x10);
        if (bVar29) {
          aplStack_b8[0] = (long *)0x0;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      uVar18 = *(undefined8 *)puVar13;
      *(undefined8 *)puVar14 = uVar18;
      FUN_00c44204(&local_78,uVar18,plVar17);
      plVar28 = local_c0;
      local_c0 = (long *)0x0;
      if (plVar28 != (long *)0x0) {
        plVar6 = plVar28 + 3;
        do {
          sVar24 = (short)*plVar6;
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar29) {
            *(short *)plVar6 = sVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar24 == 1) {
          piVar2 = (int *)((long)plVar28 + 0x1c);
          do {
            iVar15 = *piVar2;
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar29) {
              *piVar2 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar15 != -1) {
            if (((*puVar12 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)puVar13;
            *(long *)puVar14 = lVar16;
            local_70[0] = *plVar28;
            FUN_00c44438(lVar16 + 0x8040,local_70);
          }
        }
        else if (sVar24 == 0) goto LAB_01084d24;
      }
      plVar28 = local_e0;
      if (local_78 == (long *)0x0) {
        FUN_01087670(&local_e0);
      }
      else {
        local_e0 = (long *)0x0;
        if (plVar28 != (long *)0x0) {
          plVar6 = plVar28 + 3;
          do {
            sVar24 = (short)*plVar6;
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar29) {
              *(short *)plVar6 = sVar24 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar24 == 1) {
            piVar2 = (int *)((long)plVar28 + 0x1c);
            do {
              iVar15 = *piVar2;
              cVar9 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar29) {
                *piVar2 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar15 != -1) {
              if (((*puVar12 & 1) == 0) &&
                 (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar16 = *(long *)puVar13;
              *(long *)puVar14 = lVar16;
              local_70[0] = *plVar28;
              FUN_00c44438(lVar16 + 0x8040,local_70);
            }
          }
          else if (sVar24 == 0) goto LAB_01084d24;
        }
        local_e0 = local_78;
        local_78 = (long *)0x0;
        local_d8 = plVar17;
      }
    }
    plVar17 = local_c0;
    if (local_c0 != (long *)0x0) {
      plVar28 = local_c0 + 3;
      do {
        sVar24 = (short)*plVar28;
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar29) {
          *(short *)plVar28 = sVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar24 == 1) {
        piVar2 = (int *)((long)local_c0 + 0x1c);
        do {
          iVar15 = *piVar2;
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar29) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar15 != -1) {
          if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)
             ) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar13;
          *(long *)puVar14 = lVar16;
          local_70[0] = *plVar17;
          FUN_00c44438(lVar16 + 0x8040,local_70);
        }
      }
      else if (sVar24 == 0) goto LAB_01084d24;
    }
    puVar19 = (undefined8 *)(param_1 + 0x180);
    do {
      plVar17 = local_d8;
      cVar9 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(&local_d8,0x10);
      if (bVar29) {
        local_d8 = (long *)0x0;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    uVar18 = *(undefined8 *)puVar13;
    *(undefined8 *)puVar14 = uVar18;
    FUN_00c44204(local_70,uVar18,plVar17);
    plVar28 = local_e0;
    local_e0 = (long *)0x0;
    if (plVar28 != (long *)0x0) {
      plVar6 = plVar28 + 3;
      do {
        sVar24 = (short)*plVar6;
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar29) {
          *(short *)plVar6 = sVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar24 == 1) {
        piVar2 = (int *)((long)plVar28 + 0x1c);
        do {
          iVar15 = *piVar2;
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar29) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar15 != -1) {
          if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)
             ) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar13;
          *(long *)puVar14 = lVar16;
          local_c0 = (long *)*plVar28;
          FUN_00c44438(lVar16 + 0x8040,&local_c0);
        }
      }
      else if (sVar24 == 0) goto LAB_01084d24;
    }
    if (local_70[0] == 0) {
      FUN_01087670(puVar19);
    }
    else {
      plVar28 = (long *)*puVar19;
      *puVar19 = 0;
      if (plVar28 != (long *)0x0) {
        plVar6 = plVar28 + 3;
        do {
          sVar24 = (short)*plVar6;
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar29) {
            *(short *)plVar6 = sVar24 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (sVar24 == 1) {
          piVar2 = (int *)((long)plVar28 + 0x1c);
          do {
            iVar15 = *piVar2;
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar29) {
              *piVar2 = -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar15 != -1) {
            if (((*puVar12 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)puVar13;
            *(long *)puVar14 = lVar16;
            local_c0 = (long *)*plVar28;
            FUN_00c44438(lVar16 + 0x8040,&local_c0);
          }
        }
        else if (sVar24 == 0) goto LAB_01084d24;
      }
      lVar16 = local_70[0];
      local_70[0] = 0;
      *(long *)(param_1 + 0x180) = lVar16;
      *(long **)(param_1 + 0x188) = plVar17;
    }
    plVar17 = local_e0;
    if (local_e0 != (long *)0x0) {
      plVar28 = local_e0 + 3;
      do {
        sVar24 = (short)*plVar28;
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar29) {
          *(short *)plVar28 = sVar24 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar24 == 1) {
        piVar2 = (int *)((long)local_e0 + 0x1c);
        do {
          iVar15 = *piVar2;
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar29) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar15 != -1) {
          if (((*puVar12 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)
             ) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar13;
          *(long *)puVar14 = lVar16;
          local_c0 = (long *)*plVar17;
          FUN_00c44438(lVar16 + 0x8040,&local_c0);
        }
      }
      else if (sVar24 == 0) {
LAB_01084d24:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    local_e0 = (long *)&DAT_ee0d701bcf283f34;
    local_d8 = (long *)0x3bd5749;
    local_d0 = 6;
    local_c8 = (long *)0x0;
    (**(code **)(*DAT_0485a020 + 0xa8))(&local_c0,DAT_0485a020,&local_e0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    lVar16 = *(long *)(lVar20 + 0x130);
    if ((int)((ulong)(*(long *)(lVar16 + 0x78) - *(long *)(lVar16 + 0x70)) >> 3) * -0x33333333 != 0)
    {
      uVar26 = 0;
      do {
        FUN_00c5ecb4(&local_e0,*(undefined8 *)(lVar16 + 0x30),
                     *(long *)(lVar16 + 0x70) + uVar26 * 0x28);
        if (local_e0 != (long *)0x0) {
          if ((((int)((ulong)(local_e0[0x27] - local_e0[0x26]) >> 5) != 0) &&
              (FUN_01086da0(local_e0,local_e0[0x26],&local_c0),
              (local_e0[0x27] - local_e0[0x26] & 0x1fffffffc0U) != 0)) &&
             (FUN_01086da0(local_e0,local_e0[0x26] + 0x20,&local_c0),
             0x40 < (local_e0[0x27] - local_e0[0x26] & 0x1fffffffe0U))) {
            lVar16 = 0x40;
            uVar32 = 2;
            do {
              FUN_01086da0(local_e0,local_e0[0x26] + lVar16,&local_c0);
              uVar32 = uVar32 + 1;
              lVar16 = lVar16 + 0x20;
            } while (uVar32 < ((ulong)(local_e0[0x27] - local_e0[0x26]) >> 5 & 0xffffffff));
          }
          FUN_010f7c04();
          if (local_e0 != (long *)0x0) {
            plVar17 = local_e0 + 5;
            do {
              lVar16 = *plVar17;
              iVar15 = (int)lVar16 + -1;
              cVar9 = '\x01';
              bVar29 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar29) {
                *(int *)plVar17 = iVar15;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar15 == 0) {
              (**(code **)(*local_e0 + 0x10))();
            }
            else if ((int)lVar16 == 0) goto LAB_01085f0c;
          }
        }
        lVar16 = *(long *)(lVar20 + 0x130);
        uVar26 = uVar26 + 1;
      } while (uVar26 < (uint)((int)((ulong)(*(long *)(lVar16 + 0x78) - *(long *)(lVar16 + 0x70)) >>
                                    3) * -0x33333333));
    }
    FUN_01086348(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x130) + 0x38) + 0x78));
    *(undefined4 *)(param_1 + 0x128) = 3;
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      pcVar22 = *(code **)(*local_a8 + 0x20);
LAB_0108505c:
      (*pcVar22)(local_a8);
    }
  }
  return;
code_r0x01084b78:
  cVar9 = '\x01';
  bVar29 = (bool)ExclusiveMonitorPass(plVar17,0x10);
  if (bVar29) {
    *plVar17 = lVar16;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_01084b80;
  goto LAB_01084b70;
code_r0x010850b0:
  sVar24 = sVar8;
  if (sVar8 == 0) {
    return;
  }
  goto LAB_01085084;
code_r0x01084c80:
  sVar24 = sVar8;
  if (sVar8 == 0) {
    return;
  }
  goto LAB_01084c54;
}


