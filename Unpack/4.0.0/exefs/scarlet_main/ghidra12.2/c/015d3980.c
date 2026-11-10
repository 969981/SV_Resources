/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015d3980; name: FUN_015d3980
 */


void FUN_015d3980(long param_1,undefined8 param_2,undefined2 param_3,undefined2 param_4,uint param_5
                 )

{
  MutexType *pMVar1;
  short *psVar2;
  undefined8 *puVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  long lVar25;
  float fVar26;
  undefined2 local_104;
  undefined1 local_102;
  long *local_100;
  undefined *local_f8;
  long *plStack_f0;
  long local_e8;
  long *local_e0;
  long *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  ulong local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  undefined4 local_90;
  undefined2 local_88;
  undefined2 uStack_86;
  byte bStack_84;
  undefined2 uStack_83;
  undefined1 uStack_81;
  long *local_80;
  long lStack_78;
  long *local_70;
  
  uVar19 = (ulong)param_5;
  uVar11 = FUN_015d4638();
  if ((uVar11 & 1) != 0) {
    return;
  }
  FUN_0105016c(&local_b8,param_2);
  pMVar1 = (MutexType *)(param_1 + 0x60);
  nn::os::LockMutex(pMVar1);
  uVar11 = local_b0;
  local_c8 = 0;
  uStack_c0 = 0;
  plVar22 = (long *)(param_1 + 0x80);
  local_d8 = (long *)0x0;
  uStack_d0 = 0;
  local_f8 = PTR_DAT_047d8e88 + 0x10;
  local_e8 = 0;
  local_e0 = (long *)0x0;
  plStack_f0 = (long *)0x0;
  uVar20 = *(ulong *)(param_1 + 0x88);
  if (uVar20 == 0) {
LAB_015d3a68:
    plVar23 = (long *)(**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
                                (*(long **)(param_1 + 0xb8),0x80,8);
    if (plVar23 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xb8) + 0xe8))();
    }
    uVar24 = *(undefined8 *)(param_1 + 0xb8);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 != 0) {
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_015d4630:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar24;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    }
    plVar23[2] = (long)local_b8;
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x18))();
    }
    plVar23[3] = local_b0;
    plVar23[4] = local_a8;
    plVar23[5] = local_a0;
    plVar23[6] = (long)local_98;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))();
    }
    plVar23[9] = 0;
    plVar23[10] = 0;
    plVar23[0xb] = 0;
    puVar9 = PTR_DAT_047d9c80;
    *(undefined4 *)(plVar23 + 7) = local_90;
    plVar23[0xe] = 0;
    plVar23[0xf] = 0;
    plVar23[8] = (long)(puVar9 + 0x10);
    plVar23[0xc] = 0;
    plVar23[0xd] = 0;
    FUN_01060890(plVar23 + 9,&plStack_f0);
    plVar13 = (long *)plVar23[0xb];
    plVar23[0xb] = 0;
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[6];
      psVar2 = (short *)(lVar15 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_015d4434;
    }
    plVar13 = local_e0;
    local_e0 = (long *)0x0;
    plVar23[0xb] = (long)plVar13;
    FUN_00ecc978(plVar23 + 0xc,&local_d8);
    FUN_00eccc4c(plVar23 + 0xe,&local_c8);
    plVar23[8] = (long)(PTR_DAT_047d8e88 + 0x10);
    if (lVar12 != 0) {
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    *plVar23 = 0;
    plVar23[1] = uVar11;
    fVar26 = (float)(*(long *)(param_1 + 0xd8) + 1);
    if ((uVar20 == 0) || (*(float *)(param_1 + 0xe0) * (float)uVar20 < fVar26)) {
      uVar19 = (ulong)(uVar20 < 3 || (uVar20 & uVar20 - 1) != 0) | uVar20 << 1;
      uVar20 = (ulong)(fVar26 / *(float *)(param_1 + 0xe0));
      if (uVar20 <= uVar19) {
        uVar20 = uVar19;
      }
      if (uVar20 - 1 == 0) {
        uVar20 = 2;
      }
      else if ((uVar20 & uVar20 - 1) != 0) {
        uVar20 = std::__next_prime(uVar20);
      }
      uVar19 = *(ulong *)(param_1 + 0x88);
      if (uVar19 < uVar20) {
        uVar18 = uVar20;
LAB_015d4158:
        FUN_015d4750(plVar22,uVar18);
      }
      else if (uVar20 < uVar19) {
        uVar18 = (ulong)((float)*(ulong *)(param_1 + 0xd8) / *(float *)(param_1 + 0xe0));
        if ((uVar19 < 3) ||
           (uVar17 = uVar19 - (uVar19 >> 1 & 0x5555555555555555),
           uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333),
           1 < (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar18 = std::__next_prime(uVar18);
        }
        else if (1 < uVar18) {
          uVar18 = 1L << (-LZCOUNT(uVar18 - 1) & 0x3fU);
        }
        if (uVar18 <= uVar20) {
          uVar18 = uVar20;
        }
        if (uVar18 < uVar19) goto LAB_015d4158;
      }
      uVar20 = *(ulong *)(param_1 + 0x88);
      if ((uVar20 & uVar20 - 1) == 0) {
        uVar19 = uVar20 - 1 & uVar11;
      }
      else if (uVar11 < uVar20) {
        uVar19 = uVar11;
      }
      else {
        uVar19 = 0;
        if (uVar20 != 0) {
          uVar19 = uVar11 / uVar20;
        }
        uVar19 = uVar11 - uVar19 * uVar20;
      }
    }
    plVar13 = *(long **)(*plVar22 + uVar19 * 8);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)(param_1 + 0xb0);
      *plVar23 = *plVar13;
      *plVar13 = (long)plVar23;
      *(long **)(*(long *)(param_1 + 0x80) + uVar19 * 8) = plVar13;
      if (*plVar23 != 0) {
        uVar19 = *(ulong *)(*plVar23 + 8);
        if ((uVar20 & uVar20 - 1) == 0) {
          uVar19 = uVar19 & uVar20 - 1;
        }
        else if (uVar20 <= uVar19) {
          uVar11 = 0;
          if (uVar20 != 0) {
            uVar11 = uVar19 / uVar20;
          }
          uVar19 = uVar19 - uVar11 * uVar20;
        }
        plVar13 = (long *)(*plVar22 + uVar19 * 8);
        goto LAB_015d3c28;
      }
    }
    else {
      *plVar23 = *plVar13;
LAB_015d3c28:
      *plVar13 = (long)plVar23;
    }
    bVar7 = false;
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  }
  else {
    uVar19 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar18 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar18 < 2) {
      uVar19 = uVar20 - 1 & local_b0;
    }
    else {
      uVar19 = local_b0;
      if (uVar20 <= local_b0) {
        uVar19 = 0;
        if (uVar20 != 0) {
          uVar19 = local_b0 / uVar20;
        }
        uVar19 = local_b0 - uVar19 * uVar20;
      }
    }
    plVar23 = *(long **)(*plVar22 + uVar19 * 8);
    if (plVar23 == (long *)0x0) goto LAB_015d3a68;
    plVar13 = (long *)PTR_DAT_047d8b70;
    if (local_b8 != (long *)0x0) {
      plVar13 = local_b8 + 6;
    }
    if (uVar18 < 2) {
      bVar7 = true;
      do {
        plVar23 = (long *)*plVar23;
        if ((plVar23 == (long *)0x0) ||
           (plVar23[1] != local_b0 && (plVar23[1] & uVar20 - 1) != uVar19)) goto LAB_015d3a68;
        plVar4 = (long *)PTR_DAT_047d8b70;
        if (plVar23[2] != 0) {
          plVar4 = (long *)(plVar23[2] + 0x30);
        }
      } while (*plVar4 != *plVar13);
    }
    else {
      bVar7 = true;
      do {
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) goto LAB_015d3a68;
        uVar18 = plVar23[1];
        if (uVar18 != local_b0) {
          if (uVar20 <= uVar18) {
            uVar17 = 0;
            if (uVar20 != 0) {
              uVar17 = uVar18 / uVar20;
            }
            uVar18 = uVar18 - uVar17 * uVar20;
          }
          if (uVar18 != uVar19) goto LAB_015d3a68;
        }
        plVar4 = (long *)PTR_DAT_047d8b70;
        if (plVar23[2] != 0) {
          plVar4 = (long *)(plVar23[2] + 0x30);
        }
      } while (*plVar4 != *plVar13);
    }
  }
  FUN_00db239c(&local_f8);
  if (bVar7) {
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    plVar22 = plVar23 + 8;
    nn::os::UnlockMutex(pMVar1);
    uVar19 = FUN_00dc5c18(plVar22,1,&local_b8,0,*(undefined8 *)(param_1 + 8));
    if ((uVar19 & 1) == 0) {
      plVar23 = (long *)0x0;
    }
    else {
      plVar23 = (long *)plVar23[0xc];
      if (plVar23 != (long *)0x0) {
        lVar12 = plVar23[6];
        if (*(long *)(lVar12 + 0x10) == 0) goto LAB_015d4610;
        psVar2 = (short *)(lVar12 + 0x1a);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 0) {
          uVar24 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
          *(undefined8 *)(lVar12 + 8) = uVar24;
          *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) goto LAB_015d41b4;
      }
    }
    bVar8 = (byte)param_5 & 1;
    if (((*PTR_DAT_047d8c58 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c58);
    }
    uVar24 = *(undefined8 *)PTR_DAT_047d8c60;
    *(undefined8 *)PTR_DAT_047d8c68 = uVar24;
    FUN_00cbf5d4(&local_100,uVar24,plVar23[1]);
    uStack_81 = local_102;
    uStack_83 = local_104;
    local_70 = local_100;
    local_88 = param_3;
    uStack_86 = param_4;
    bStack_84 = bVar8;
    local_80 = plVar22;
    lStack_78 = param_1;
    if (local_100 != (long *)0x0) {
      lVar12 = local_100[6];
      if (*(long *)(lVar12 + 0x10) == 0) {
LAB_015d4610:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar5 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 0) {
        uVar24 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar24;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) {
LAB_015d41b4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar22 = (long *)0x0;
    if (local_100 != (long *)0x0) {
      plVar22 = local_100 + 0xb;
    }
    if ((*(byte *)((long)plVar23 + 0x6d) & 1) == 0) {
      if ((*(byte *)((long)plVar23 + 0x6c) & 1) == 0) {
        plVar13 = plVar23 + 0xf;
        lVar12 = nn::os::GetCurrentThread();
LAB_015d3d4c:
        if (*plVar13 == 0) goto code_r0x015d3d54;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x10));
        do {
          if (*plVar13 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0x10));
              while (*plVar13 == 0) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar7) {
                  *plVar13 = lVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_015d3d5c;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar7) {
            *plVar13 = lVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_015d3d5c:
        if ((*(byte *)((long)plVar23 + 0x6c) & 1) == 0) {
          local_f8 = (undefined *)
                     CONCAT17(uStack_81,
                              CONCAT25(uStack_83,CONCAT14(bStack_84,CONCAT22(uStack_86,local_88))));
          plStack_f0 = local_80;
          local_e8 = lStack_78;
          local_e0 = local_70;
          if (local_70 != (long *)0x0) {
            lVar12 = local_70[6];
            if (*(long *)(lVar12 + 0x10) == 0) goto LAB_015d4610;
            psVar2 = (short *)(lVar12 + 0x1a);
            do {
              sVar5 = *psVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar7) {
                *psVar2 = sVar5 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar5 == 0) {
              uVar24 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
              *(undefined8 *)(lVar12 + 8) = uVar24;
              *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
            }
            else if (sVar5 == -1) goto LAB_015d41b4;
          }
          local_d8 = plVar22;
          if ((ulong)plVar23[0x1a] < (ulong)plVar23[0x1b]) {
            FUN_015d4ae8(plVar23 + 0x19,&local_f8);
            if (local_e0 != (long *)0x0) {
              lVar12 = local_e0[6];
              psVar2 = (short *)(lVar12 + 0x1a);
              do {
                sVar5 = *psVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar7) {
                  *psVar2 = sVar5 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar12 + 0x10) = 0;
                (**(code **)(*local_e0 + 0x50))();
              }
              else if (sVar5 == 0) goto LAB_015d4434;
            }
          }
          else {
            uVar19 = plVar23[0x1d];
            lVar12 = plVar23[0x1a] - plVar23[0x19] >> 4;
            if (0x7ffffffffffffffe < uVar19) {
              uVar19 = 0x7fffffffffffffff;
            }
            uVar11 = lVar12 * -0x71c71c71c71c71c7 + 1;
            if (uVar19 < uVar11) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar15 = plVar23[0x1b] - plVar23[0x19] >> 4;
            uVar20 = lVar15 * 0x1c71c71c71c71c72;
            if (uVar11 <= uVar20) {
              uVar11 = uVar20;
            }
            plVar13 = plVar23 + 0x1c;
            if (uVar19 >> 1 <= (ulong)(lVar15 * -0x71c71c71c71c71c7)) {
              uVar11 = uVar19;
            }
            if (uVar11 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar11 * 0x90,0x10);
              if (lVar15 == 0) {
                (**(code **)(*(long *)*plVar13 + 0xe8))();
              }
            }
            lVar25 = *plVar13;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar14 = nn::os::GetTlsValue(DAT_04865a30);
            plVar4 = local_e0;
            if (lVar14 != 0) {
              if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_015d4630;
              *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar25;
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
              plVar22 = local_d8;
            }
            lVar25 = lVar15 + lVar12 * 0x10;
            *(undefined8 *)(lVar25 + 0x10) = 0;
            *(undefined8 *)(lVar25 + 0x18) = 0;
            *(long **)(lVar25 + 0x28) = plStack_f0;
            *(long *)(lVar25 + 0x30) = local_e8;
            *(undefined **)(lVar25 + 0x20) = local_f8;
            puVar21 = (undefined8 *)(lVar15 + lVar12 * 0x10);
            local_e0 = (long *)0x0;
            *(long **)(lVar25 + 0x38) = plVar4;
            *puVar21 = &LAB_01415b80;
            *(undefined1 **)(lVar25 + 8) = &LAB_02a7c640;
            *(undefined1 **)(lVar25 + 0x10) = &LAB_02a7c6b8;
            *(undefined1 **)(lVar25 + 0x18) = &LAB_02a7c788;
            *(long **)(lVar25 + 0x80) = plVar22;
            if (lVar14 != 0) {
              *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
            }
            lVar12 = plVar23[0x19];
            lVar25 = plVar23[0x1a];
            puVar3 = puVar21 + 0x12;
            if (lVar25 == lVar12) {
              lVar25 = lVar12;
            }
            else {
              do {
                puVar21 = puVar21 + -0x12;
                lVar25 = lVar25 + -0x90;
                FUN_00cbf394(plVar13,puVar21,lVar25);
              } while (lVar12 != lVar25);
              lVar12 = plVar23[0x19];
              lVar25 = plVar23[0x1a];
            }
            plVar23[0x19] = (long)puVar21;
            plVar23[0x1a] = (long)puVar3;
            lVar14 = plVar23[0x1b];
            plVar23[0x1b] = lVar15 + uVar11 * 0x90;
            while (lVar15 = lVar25, lVar15 != lVar12) {
              pcVar16 = *(code **)(lVar15 + -0x88);
              lVar25 = lVar15 + -0x90;
              if (pcVar16 != (code *)0x0) {
                *(undefined8 *)(lVar15 + -0x80) = 0;
                *(undefined8 *)(lVar15 + -0x78) = 0;
                *(undefined8 *)(lVar15 + -0x90) = 0;
                *(undefined8 *)(lVar15 + -0x88) = 0;
                (*pcVar16)(lVar15 + -0x70);
              }
            }
            if (lVar12 != 0) {
              plVar13 = (long *)*plVar13;
              uVar19 = (**(code **)(*plVar13 + 0xf8))(plVar13);
              if (((uVar19 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,lVar14 - lVar12,0x10);
              }
              else {
                FUN_00c48fe8(plVar13,lVar12,lVar14 - lVar12,0x10);
              }
            }
          }
        }
        else {
          FUN_01415b90(&local_88,plVar23[0xc],(int)plVar23[0xd]);
        }
        plVar23[0xf] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar23 + 0x10));
        goto LAB_015d3f84;
      }
      FUN_01415b90(&local_88,plVar23[0xc],(int)plVar23[0xd]);
    }
LAB_015d3f84:
    if (local_70 != (long *)0x0) {
      lVar12 = local_70[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_015d4434;
    }
    if (local_100 != (long *)0x0) {
      lVar12 = local_100[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar5 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_100 + 0x50))();
      }
      else if (sVar5 == 0) goto LAB_015d4434;
    }
    lVar12 = plVar23[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))(plVar23);
    }
    else if (sVar5 == 0) {
LAB_015d4434:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  return;
code_r0x015d3d54:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
  if (bVar7) {
    *plVar13 = lVar12;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_015d3d5c;
  goto LAB_015d3d4c;
}


