/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df0360; name: FUN_00df0360
 */


void FUN_00df0360(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  short *psVar5;
  short sVar6;
  char *pcVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  bool bVar20;
  undefined1 uVar21;
  long *plVar22;
  int *piVar23;
  ulong uVar24;
  long *plVar25;
  int *piVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  int *piVar30;
  long *plVar31;
  long *plVar32;
  undefined8 uVar33;
  long lVar34;
  long *plVar35;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  long **pplStack_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  long local_70;
  undefined8 local_68;
  
  uVar18 = *param_2;
  *(undefined8 *)(param_1 + 800) = param_2[1];
  *(undefined8 *)(param_1 + 0x318) = uVar18;
  FUN_00df0ef4();
  plVar3 = (long *)(param_1 + 0x2e0);
  lVar16 = nn::os::GetCurrentThread();
  do {
    lVar34 = *plVar3;
    lVar17 = *(long *)(param_1 + 0x2e8);
    cVar8 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar20) {
      *plVar3 = lVar34;
      *(long *)(param_1 + 0x2e8) = lVar17;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_00df03b0:
  while ((lVar34 != 0 && (lVar16 != lVar34))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f0));
    do {
      lVar34 = *plVar3;
      lVar17 = *(long *)(param_1 + 0x2e8);
      cVar8 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar20) {
        *plVar3 = lVar34;
        *(long *)(param_1 + 0x2e8) = lVar17;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  do {
    lVar29 = *plVar3;
    if (lVar29 != lVar34 || *(long *)(param_1 + 0x2e8) != lVar17) {
      bVar20 = false;
      ClearExclusiveLocal();
      goto LAB_00df03e0;
    }
    cVar8 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar20) {
      *plVar3 = lVar34;
      *(long *)(param_1 + 0x2e4) = lVar17 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar20 = true;
LAB_00df03e0:
  if (!bVar20) {
    lVar34 = lVar29;
    lVar17 = *(long *)(param_1 + 0x2e8);
    goto LAB_00df03b0;
  }
  if ((*(char *)(param_1 + 0x168) != '\0') &&
     ((*(char *)(param_1 + 0x308) == '\0' ||
      (*(int *)(param_1 + 0x30c) != *(int *)(param_1 + 0x16c))))) {
    lVar16 = *(long *)(param_1 + 0x148);
    pcVar7 = *(char **)(param_1 + 0x150);
    plVar31 = *(long **)(param_1 + 0x160);
    if (plVar31 != (long *)0x0) {
      (**(code **)(*plVar31 + 0x18))(plVar31);
    }
    puVar12 = PTR_DAT_047d88e0;
    puVar11 = PTR_DAT_047d88d8;
    puVar10 = PTR_DAT_047d88d0;
    if (*pcVar7 != '\0') {
      if (*(char *)(param_1 + 0x308) != '\0') {
        if (((*PTR_DAT_047d88d0 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d88d0);
        }
        uVar18 = *(undefined8 *)puVar11;
        *(undefined8 *)puVar12 = uVar18;
        FUN_015a3e8c(uVar18,*(undefined4 *)(param_1 + 0x30c));
      }
      *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 0x308) = 1;
      if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar15 != 0)) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
      lVar34 = *(long *)puVar11;
      *(long *)puVar12 = lVar34;
      iVar15 = *(int *)(param_1 + 0x16c);
      local_88 = (long *)0x0;
      local_80 = 0;
      FUN_00c43ef0(&local_88,param_1 + 0x98);
      local_b8 = (undefined8 *)0x0;
      uStack_b0 = 0;
      if (local_88[2] == param_1 + 0x28) {
        FUN_00ded5e0(&local_b8,&local_88);
      }
      plVar35 = local_88;
      if (local_88 != (long *)0x0) {
        plVar32 = local_88 + 3;
        do {
          sVar6 = (short)*plVar32;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar20) {
            *(short *)plVar32 = sVar6 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 1) {
          piVar23 = (int *)((long)local_88 + 0x1c);
          do {
            iVar14 = *piVar23;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar20) {
              *piVar23 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar14 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar14 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar17 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar17;
            local_a0 = *plVar35;
            FUN_00c44438(lVar17 + 0x8040,&local_a0);
          }
        }
        else if (sVar6 == 0) goto LAB_00df0a6c;
      }
      local_a8 = 0;
      if (local_b8 != (undefined8 *)0x0) {
        local_a8 = *local_b8;
      }
      plVar35 = (long *)(lVar34 + 0x788);
      lVar29 = *plVar35;
      lVar17 = nn::os::GetCurrentThread();
      if (lVar17 != lVar29) {
        lVar17 = nn::os::GetCurrentThread();
LAB_00df05dc:
        if (*plVar35 == 0) goto code_r0x00df05e4;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x790));
        do {
          if (*plVar35 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x790));
              while (*plVar35 == 0) {
                cVar8 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                if (bVar20) {
                  *plVar35 = lVar17;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB_00df05ec;
              }
            } while( true );
          }
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar20) {
            *plVar35 = lVar17;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
LAB_00df05ec:
        bVar20 = false;
        goto LAB_00df05f0;
      }
      plVar35 = (long *)0x0;
      bVar20 = true;
LAB_00df05f0:
      plVar32 = (long *)(lVar34 + 0x7e0);
      lVar29 = *plVar32;
      lVar17 = nn::os::GetCurrentThread();
      if (lVar17 != lVar29) {
        lVar17 = nn::os::GetCurrentThread();
LAB_00df060c:
        if (*plVar32 == 0) goto code_r0x00df0614;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x7e8));
        do {
          if (*plVar32 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar34 + 0x7e8));
              while (*plVar32 == 0) {
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
                if (bVar9) {
                  *plVar32 = lVar17;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB_00df061c;
              }
            } while( true );
          }
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar9) {
            *plVar32 = lVar17;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
LAB_00df061c:
        uVar21 = 1;
        goto LAB_00df0620;
      }
      uVar21 = 0;
      plVar32 = (long *)0x0;
LAB_00df0620:
      local_78 = (long *)(lVar34 + 0x7f8);
      local_80 = CONCAT71(local_80._1_7_,uVar21);
      pplStack_98 = &local_88;
      plVar22 = *(long **)(lVar34 + 0x7a0);
      lVar17 = *(long *)(lVar34 + 0x7d8);
      if ((lVar17 == 0) || (*plVar22 == lVar16)) {
        plVar25 = plVar22;
      }
      else {
        lVar29 = lVar17 * 0x10;
        plVar28 = plVar22;
        do {
          lVar29 = lVar29 + -0x10;
          if (lVar29 == 0) {
            plVar25 = plVar22 + lVar17 * 2;
            break;
          }
          plVar2 = plVar28 + 2;
          plVar25 = plVar28 + 2;
          plVar28 = plVar28 + 2;
        } while (*plVar2 != lVar16);
      }
      local_a0 = lVar34;
      local_90 = lVar16;
      local_88 = plVar32;
      if (plVar22 + lVar17 * 2 == plVar25) {
        if (lVar17 == *(long *)(lVar34 + 0x7a8) - (long)plVar22 >> 4) {
          local_70 = lVar16;
          local_68 = FUN_00df2f9c(&local_a0);
          FUN_00df2dac(lVar34 + 0x7a0,&local_70);
        }
        else {
          lVar17 = FUN_00df2f9c(&local_a0);
          plVar32 = (long *)(*(long *)(lVar34 + 0x7a0) + *(long *)(lVar34 + 0x7d8) * 0x10);
          *plVar32 = lVar16;
          plVar32[1] = lVar17;
        }
        lVar17 = *(long *)(lVar34 + 0x7d8);
        *(long *)(lVar34 + 0x7d8) = lVar17 + 1;
        plVar25 = (long *)(*(long *)(lVar34 + 0x7a0) + lVar17 * 0x10);
      }
      piVar23 = *(int **)(lVar34 + 0x8a8);
      lVar17 = *(long *)(lVar34 + 0x8e0);
      if ((lVar17 == 0) || (*piVar23 == iVar15)) {
        piVar30 = piVar23;
      }
      else {
        lVar29 = lVar17 * 0x18;
        piVar26 = piVar23;
        do {
          lVar29 = lVar29 + -0x18;
          if (lVar29 == 0) goto LAB_00df0770;
          piVar30 = piVar26 + 6;
          piVar1 = piVar26 + 6;
          piVar26 = piVar30;
        } while (*piVar1 != iVar15);
      }
      if (piVar23 + lVar17 * 6 == piVar30) {
LAB_00df0770:
        lVar29 = *(long *)(lVar34 + 0x8b0);
        uVar18 = FUN_00df269c(*(undefined8 *)(*local_78 + plVar25[1] * 0x20),&local_a8);
        if ((lVar29 - (long)piVar23 >> 3) * -0x5555555555555555 == lVar17) {
          piVar23 = *(int **)(lVar34 + 0x8b0);
          if (piVar23 < *(int **)(lVar34 + 0x8b8)) {
            uVar33 = *(undefined8 *)(lVar34 + 0x8c0);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar17 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar17 == 0) {
              *piVar23 = iVar15;
              *(long *)(piVar23 + 2) = lVar16;
              *(undefined8 *)(piVar23 + 4) = uVar18;
            }
            else {
              if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_00df0ec4:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar33;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
              *piVar23 = iVar15;
              *(long *)(piVar23 + 2) = lVar16;
              *(undefined8 *)(piVar23 + 4) = uVar18;
              *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
            }
            *(int **)(lVar34 + 0x8b0) = piVar23 + 6;
          }
          else {
            lVar17 = (long)piVar23 - *(long *)(lVar34 + 0x8a8) >> 3;
            uVar27 = *(ulong *)(lVar34 + 0x8c8);
            if (0x7ffffffffffffffe < uVar27) {
              uVar27 = 0x7fffffffffffffff;
            }
            uVar4 = lVar17 * -0x5555555555555555 + 1;
            if (uVar27 < uVar4) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar29 = (long)*(int **)(lVar34 + 0x8b8) - *(long *)(lVar34 + 0x8a8) >> 3;
            uVar24 = lVar29 * 0x5555555555555556;
            if (uVar4 <= uVar24) {
              uVar4 = uVar24;
            }
            if (uVar27 >> 1 <= (ulong)(lVar29 * -0x5555555555555555)) {
              uVar4 = uVar27;
            }
            if (uVar4 == 0) {
              lVar29 = 0;
            }
            else {
              lVar29 = (**(code **)(**(long **)(lVar34 + 0x8c0) + 0x10))
                                 (*(long **)(lVar34 + 0x8c0),uVar4 * 0x18,8);
              if (lVar29 == 0) {
                (**(code **)(**(long **)(lVar34 + 0x8c0) + 0xe8))();
              }
            }
            piVar23 = (int *)(lVar29 + lVar17 * 8);
            uVar33 = *(undefined8 *)(lVar34 + 0x8c0);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar19 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar19 == 0) {
              lVar17 = lVar29 + lVar17 * 8;
              *piVar23 = iVar15;
              *(long *)(lVar17 + 8) = lVar16;
              *(undefined8 *)(lVar17 + 0x10) = uVar18;
            }
            else {
              if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00df0ec4;
              *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar33;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
              lVar17 = lVar29 + lVar17 * 8;
              *piVar23 = iVar15;
              *(long *)(lVar17 + 8) = lVar16;
              *(undefined8 *)(lVar17 + 0x10) = uVar18;
              *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
            }
            lVar16 = *(long *)(lVar34 + 0x8a8);
            lVar17 = *(long *)(lVar34 + 0x8b0);
            piVar30 = piVar23;
            if (lVar17 != lVar16) {
              do {
                uVar18 = *(undefined8 *)(lVar34 + 0x8c0);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar15 = __cxa_guard_acquire(&DAT_04865a38), iVar15 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar19 == 0) {
                  uVar18 = *(undefined8 *)(lVar17 + -0x18);
                  uVar33 = *(undefined8 *)(lVar17 + -8);
                  *(undefined8 *)(piVar30 + -4) = *(undefined8 *)(lVar17 + -0x10);
                  *(undefined8 *)(piVar30 + -2) = uVar33;
                  *(undefined8 *)(piVar30 + -6) = uVar18;
                }
                else {
                  if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00df0ec4;
                  *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar18;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                  uVar33 = *(undefined8 *)(lVar17 + -8);
                  uVar18 = *(undefined8 *)(lVar17 + -0x10);
                  *(undefined8 *)(piVar30 + -6) = *(undefined8 *)(lVar17 + -0x18);
                  *(undefined8 *)(piVar30 + -4) = uVar18;
                  *(undefined8 *)(piVar30 + -2) = uVar33;
                  *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                }
                lVar17 = lVar17 + -0x18;
                piVar30 = piVar30 + -6;
              } while (lVar16 != lVar17);
              lVar16 = *(long *)(lVar34 + 0x8a8);
            }
            *(int **)(lVar34 + 0x8b0) = piVar23 + 6;
            lVar17 = *(long *)(lVar34 + 0x8b8);
            *(int **)(lVar34 + 0x8a8) = piVar30;
            *(ulong *)(lVar34 + 0x8b8) = lVar29 + uVar4 * 0x18;
            if (lVar16 != 0) {
              plVar32 = *(long **)(lVar34 + 0x8c0);
              lVar17 = lVar17 - lVar16;
              uVar27 = (**(code **)(*plVar32 + 0xf8))(plVar32);
              if (((uVar27 & 1) == 0) || (lVar29 = FUN_00c4e600(), *(int *)(lVar29 + 0x12c8) < 1)) {
                (**(code **)(*plVar32 + 0x18))(plVar32,lVar16,lVar17,8);
              }
              else {
                FUN_00c48fe8(plVar32,lVar16,lVar17,8);
              }
            }
          }
        }
        else {
          piVar23 = (int *)(*(long *)(lVar34 + 0x8a8) + *(long *)(lVar34 + 0x8e0) * 0x18);
          *piVar23 = iVar15;
          *(long *)(piVar23 + 2) = lVar16;
          *(undefined8 *)(piVar23 + 4) = uVar18;
        }
        *(long *)(lVar34 + 0x8e0) = *(long *)(lVar34 + 0x8e0) + 1;
      }
      else {
        lVar16 = plVar25[1] * 0x20;
        FUN_015a4158(*(undefined8 *)(*(long *)(*local_78 + lVar16) + 8),*(undefined8 *)(piVar30 + 4)
                    );
        uVar18 = FUN_00df269c(*(undefined8 *)(*local_78 + lVar16),&local_a8);
        *(undefined8 *)(piVar30 + 4) = uVar18;
      }
      if ((char)local_80 != '\0') {
        *local_88 = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_88 + 1));
      }
      if (!bVar20) {
        *plVar35 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar35 + 1));
      }
      puVar13 = local_b8;
      if (local_b8 != (undefined8 *)0x0) {
        psVar5 = (short *)(local_b8 + 3);
        do {
          sVar6 = *psVar5;
          cVar8 = '\x01';
          bVar20 = (bool)ExclusiveMonitorPass(psVar5,0x10);
          if (bVar20) {
            *psVar5 = sVar6 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar6 == 1) {
          piVar23 = (int *)((long)local_b8 + 0x1c);
          do {
            iVar15 = *piVar23;
            cVar8 = '\x01';
            bVar20 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar20) {
              *piVar23 = -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar15 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar15 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar15 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar16 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar16;
            local_88 = (long *)*puVar13;
            FUN_00c44438(lVar16 + 0x8040,&local_88);
          }
        }
        else if (sVar6 == 0) {
LAB_00df0a6c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    if (plVar31 != (long *)0x0) {
      (**(code **)(*plVar31 + 0x20))(plVar31);
    }
  }
  do {
    lVar16 = *plVar3;
    lVar34 = *(long *)(param_1 + 0x2e8);
    cVar8 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar20) {
      *plVar3 = lVar16;
      *(long *)(param_1 + 0x2e8) = lVar34;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  do {
    lVar17 = *plVar3;
    lVar29 = *(long *)(param_1 + 0x2e8);
    if (lVar17 != lVar16 || lVar29 != lVar34) {
      bVar20 = false;
      ClearExclusiveLocal();
      goto LAB_00df0450;
    }
    cVar8 = '\x01';
    bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar20) {
      *plVar3 = lVar16;
      *(long *)(param_1 + 0x2e4) = lVar34 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  bVar20 = true;
LAB_00df0450:
  if (!bVar20) {
    do {
      lVar16 = *plVar3;
      lVar34 = *(long *)(param_1 + 0x2e8);
      if (lVar16 != lVar17 || lVar34 != lVar29) {
        bVar20 = false;
        ClearExclusiveLocal();
        goto joined_r0x00df04c4;
      }
      cVar8 = '\x01';
      bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar20) {
        *plVar3 = lVar17;
        *(long *)(param_1 + 0x2e4) = lVar29 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    bVar20 = true;
joined_r0x00df04c4:
    if (!bVar20) {
      do {
        lVar17 = *plVar3;
        lVar29 = *(long *)(param_1 + 0x2e8);
        if (lVar17 != lVar16 || lVar29 != lVar34) {
          bVar20 = false;
          ClearExclusiveLocal();
          lVar16 = lVar17;
          lVar34 = lVar29;
          goto joined_r0x00df04c4;
        }
        cVar8 = '\x01';
        bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar20) {
          *plVar3 = lVar16;
          *(long *)(param_1 + 0x2e4) = lVar34 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      bVar20 = true;
      lVar16 = lVar17;
      lVar34 = lVar29;
      goto joined_r0x00df04c4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f0));
  return;
code_r0x00df05e4:
  cVar8 = '\x01';
  bVar20 = (bool)ExclusiveMonitorPass(plVar35,0x10);
  if (bVar20) {
    *plVar35 = lVar17;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_00df05ec;
  goto LAB_00df05dc;
code_r0x00df0614:
  cVar8 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
  if (bVar9) {
    *plVar32 = lVar17;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_00df061c;
  goto LAB_00df060c;
}


