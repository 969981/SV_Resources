/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014ee22c; name: FUN_014ee22c
 */


void FUN_014ee22c(long *param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  short sVar26;
  int iVar27;
  long *plVar28;
  long *plVar29;
  undefined8 uVar30;
  long *plVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  long *local_3f0;
  long *local_3e8;
  long *local_3e0;
  long *local_3d8;
  undefined8 *local_3c0;
  undefined1 *local_3b8;
  undefined8 local_3b0;
  long *local_3a8;
  long *local_3a0;
  char *local_398;
  long local_390;
  long *local_388;
  long *local_380;
  undefined1 *puStack_378;
  undefined1 *local_370;
  undefined8 uStack_368;
  long *local_360;
  undefined4 local_358;
  undefined2 local_350;
  undefined8 local_340;
  code *local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [96];
  undefined8 local_2c0;
  undefined8 local_2b0;
  code *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [96];
  undefined8 local_230;
  code *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [96];
  undefined8 local_1b0;
  long *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined8 local_190;
  long *local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined4 local_174;
  undefined8 local_170;
  long *local_158;
  long *local_150;
  char *local_148;
  undefined1 *puStack_140;
  long *local_138;
  long *local_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  long *local_110;
  undefined1 local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  long *local_78;
  long local_70 [2];
  
  lVar34 = *param_1;
  plVar28 = *(long **)(lVar34 + 0x68);
  if ((long *)(lVar34 + 0x60) != plVar28) {
    plVar1 = (long *)(lVar34 + 0x30);
    iVar27 = 4;
    do {
      if (iVar27 == 0) {
        return;
      }
      if ((int)plVar28[0x18] == 2) {
        lVar21 = *(long *)(plVar28[0x14] + 0x28);
        if ((lVar21 != 0) && (*(short *)(lVar21 + 0x1a) != 0)) {
          psVar2 = (short *)(lVar21 + 0x1a);
          sVar26 = *(short *)(lVar21 + 0x1a);
          do {
            sVar5 = *psVar2;
            if (sVar5 == sVar26) {
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar9) {
                *psVar2 = sVar26 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_014ef6f8;
              bVar9 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_014ef6f8:
              bVar9 = false;
            }
            if (bVar9) {
              lVar21 = *(long *)(lVar21 + 0x10);
              if (lVar21 != 0) {
                plVar29 = (long *)(lVar21 + -0x28);
                uVar11 = (**(code **)(*plVar29 + 0xd8))(plVar29);
                if ((uVar11 & 1) == 0) {
                  bVar9 = false;
                  goto LAB_014ef764;
                }
                plVar22 = (long *)(lVar21 + 0xe8);
                lVar25 = *plVar22;
                lVar24 = nn::os::GetCurrentThread();
                if (lVar24 != lVar25) {
                  lVar24 = nn::os::GetCurrentThread();
                  goto LAB_014efcbc;
                }
                bVar9 = true;
                goto LAB_014efcd0;
              }
              break;
            }
            sVar26 = sVar5;
          } while (sVar5 != 0);
        }
        *(undefined4 *)(plVar28 + 0x18) = 4;
switchD_014ee3a0_caseD_4:
        lVar21 = *(long *)(plVar28[0x14] + 0x28);
        if (lVar21 == 0) {
          plVar29 = (long *)0x0;
          bVar9 = true;
        }
        else if (*(short *)(lVar21 + 0x1a) == 0) {
LAB_014efb64:
          plVar29 = (long *)0x0;
          bVar9 = true;
        }
        else {
          psVar2 = (short *)(lVar21 + 0x1a);
          sVar26 = *(short *)(lVar21 + 0x1a);
          do {
            sVar5 = *psVar2;
            if (sVar5 == sVar26) {
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar9) {
                *psVar2 = sVar26 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_014ef6a4;
              bVar9 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_014ef6a4:
              bVar9 = false;
            }
            if (bVar9) {
              if (*(long *)(lVar21 + 0x10) == 0) goto LAB_014efb64;
              plVar29 = (long *)(*(long *)(lVar21 + 0x10) + -0x28);
              (**(code **)(*plVar29 + 0x120))(plVar29,1);
              bVar9 = false;
              break;
            }
            plVar29 = (long *)0x0;
            bVar9 = true;
            sVar26 = sVar5;
          } while (sVar5 != 0);
        }
        plVar22 = (long *)plVar28[1];
        *(long **)(*plVar28 + 8) = plVar22;
        *(long *)plVar28[1] = *plVar28;
        *(long *)(lVar34 + 0x70) = *(long *)(lVar34 + 0x70) + -1;
        FUN_014f0470(plVar28 + 2);
        plVar31 = *(long **)(lVar34 + 0x78);
        uVar11 = (**(code **)(*plVar31 + 0xf8))(plVar31);
        if (((uVar11 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
          (**(code **)(*plVar31 + 0x18))(plVar31,plVar28,0xd0,0x10);
        }
        else {
          FUN_00c48fe8(plVar31,plVar28,0xd0,0x10);
        }
        plVar28 = plVar22;
        if (!bVar9) {
          lVar21 = plVar29[6];
          psVar2 = (short *)(lVar21 + 0x1a);
          do {
            sVar26 = *psVar2;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar9) {
              *psVar2 = sVar26 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar26 == 1) {
            *(undefined8 *)(lVar21 + 0x10) = 0;
            (**(code **)(*plVar29 + 0x50))(plVar29);
          }
          else if (sVar26 == 0) {
LAB_014ee7c8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      else {
        switch((int)plVar28[0x18]) {
        case 0:
          plVar29 = *(long **)(lVar34 + 8);
          puVar15 = (undefined8 *)(**(code **)(*plVar29 + 0x10))(plVar29,0x38,8);
          if (puVar15 == (undefined8 *)0x0) {
            plVar29 = (long *)0x0;
            lVar24 = 0;
            lVar21 = 0;
          }
          else {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar21 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_014efe7c;
            *(long **)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = plVar29;
            *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
            *puVar15 = 0;
            puVar15[5] = 0;
            puVar15[6] = 0;
            lVar24 = 0x38;
            puVar15[3] = 0;
            puVar15[4] = 0;
            puVar15[1] = 0;
            puVar15[2] = 0;
            *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
            lVar21 = 8;
          }
          lVar25 = plVar28[0x14];
          plVar28[0x14] = (long)puVar15;
          if (lVar25 != 0) {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar16 = FUN_00c4e600();
            iVar4 = *(int *)(lVar16 + 0x12c8);
            iVar10 = iVar4 + 1;
            *(int *)(lVar16 + 0x12c8) = iVar10;
            if (*(int *)(lVar16 + 0x12cc) <= iVar4) {
              *(int *)(lVar16 + 0x12cc) = iVar10;
            }
            FUN_014f0a98(lVar25);
            plVar22 = (long *)plVar28[0x15];
            lVar16 = plVar28[0x16];
            lVar32 = plVar28[0x17];
            uVar11 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,lVar25,lVar16,lVar32);
            }
            else {
              FUN_00c48fe8(plVar22,lVar25,lVar16,lVar32);
            }
            lVar25 = FUN_00c4e600();
            iVar10 = *(int *)(lVar25 + 0x12c8) + -1;
            *(int *)(lVar25 + 0x12c8) = iVar10;
            if (iVar10 == 0) {
              plVar22 = (long *)FUN_00c4e600();
              if (plVar22[600] != 0) {
                local_150 = plVar22 + plVar22[600] * 3;
                local_3a0 = plVar22;
                FUN_00c4ea30(&local_3a0,&local_150);
                local_3e8 = (long *)*plVar22;
                plVar31 = plVar22;
                if (plVar22[600] != 0) {
                  plVar31 = plVar22 + plVar22[600] * 3;
                }
                if (plVar31 == plVar22) {
                  uVar33 = 0;
                  uVar11 = 0;
                }
                else {
                  (**(code **)(*(long *)*plVar22 + 0xd0))();
                  if ((long *)*plVar22 != local_3e8) {
                    (**(code **)(*local_3e8 + 0x100))(local_3e8,plVar22,plVar22);
                    local_3e8 = (long *)*plVar22;
                  }
                  plVar23 = plVar22 + 3;
                  if (plVar31 == plVar23) {
                    uVar33 = 0;
                    uVar11 = 1;
                  }
                  else {
                    (**(code **)(*(long *)*plVar23 + 0xd0))();
                    bVar9 = (long *)*plVar23 != local_3e8;
                    if (bVar9) {
                      (**(code **)(*local_3e8 + 0x100))(local_3e8,plVar22,plVar22 + 3);
                      local_3e8 = (long *)plVar22[3];
                    }
                    uVar33 = (ulong)bVar9;
                    plVar23 = plVar22 + 6;
                    if (plVar31 == plVar23) {
                      uVar11 = 2;
                    }
                    else {
                      (**(code **)(*(long *)*plVar23 + 0xd0))();
                      if ((long *)*plVar23 != local_3e8) {
                        (**(code **)(*local_3e8 + 0x100))
                                  (local_3e8,plVar22 + uVar33 * 3,plVar22 + 6);
                        local_3e8 = (long *)plVar22[6];
                        uVar33 = 2;
                      }
                      plVar23 = plVar22 + 9;
                      if (plVar31 == plVar23) {
                        uVar11 = 3;
                      }
                      else {
                        (**(code **)(*(long *)*plVar23 + 0xd0))();
                        if ((long *)*plVar23 != local_3e8) {
                          (**(code **)(*local_3e8 + 0x100))
                                    (local_3e8,plVar22 + uVar33 * 3,plVar22 + 9);
                          local_3e8 = (long *)plVar22[9];
                          uVar33 = 3;
                        }
                        plVar23 = plVar22 + 0xc;
                        if (plVar31 == plVar23) {
                          uVar11 = 4;
                        }
                        else {
                          (**(code **)(*(long *)*plVar23 + 0xd0))();
                          if ((long *)*plVar23 != local_3e8) {
                            (**(code **)(*local_3e8 + 0x100))
                                      (local_3e8,plVar22 + uVar33 * 3,plVar22 + 0xc);
                            local_3e8 = (long *)plVar22[0xc];
                            uVar33 = 4;
                          }
                          plVar23 = plVar22 + 0xf;
                          if (plVar31 == plVar23) {
                            uVar11 = 5;
                          }
                          else {
                            (**(code **)(*(long *)*plVar23 + 0xd0))();
                            if ((long *)*plVar23 != local_3e8) {
                              (**(code **)(*local_3e8 + 0x100))
                                        (local_3e8,plVar22 + uVar33 * 3,plVar22 + 0xf);
                              local_3e8 = (long *)plVar22[0xf];
                              uVar33 = 5;
                            }
                            uVar11 = 6;
                            for (plVar23 = plVar22 + 0x12; plVar31 != plVar23; plVar23 = plVar23 + 3
                                ) {
                              (**(code **)(*(long *)*plVar23 + 0xd0))();
                              if ((long *)*plVar23 != local_3e8) {
                                (**(code **)(*local_3e8 + 0x100))
                                          (local_3e8,plVar22 + uVar33 * 3,plVar23);
                                local_3e8 = (long *)*plVar23;
                                uVar33 = uVar11;
                              }
                              uVar11 = uVar11 + 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                (**(code **)(*local_3e8 + 0x100))
                          (local_3e8,plVar22 + uVar33 * 3,plVar22 + uVar11 * 3);
                plVar22[600] = 0;
              }
              *(undefined4 *)(lVar25 + 0x12cc) = 0;
            }
          }
          plVar28[0x15] = (long)plVar29;
          plVar28[0x16] = lVar24;
          plVar28[0x17] = lVar21;
          local_3d8 = *(long **)(lVar34 + 8);
          puVar15 = (undefined8 *)(**(code **)(*local_3d8 + 0x10))(local_3d8,0x38,8);
          if (puVar15 == (undefined8 *)0x0) {
            local_3d8 = (long *)0x0;
            lVar24 = 0;
            lVar21 = 0;
          }
          else {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar25 = nn::os::GetTlsValue(DAT_04865a30);
            if (0xf < *(ulong *)(lVar25 + 0x80)) {
LAB_014efe7c:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar25 + *(ulong *)(lVar25 + 0x80) * 8) = local_3d8;
            *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + 1;
            puVar15[1] = 0;
            puVar15[2] = 0;
            *puVar15 = 0;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar21 = nn::os::GetTlsValue(DAT_04865a30);
            if (((lVar21 == 0) || (*(long *)(lVar21 + 0x80) == 0)) ||
               (plVar29 = *(long **)(lVar21 + *(long *)(lVar21 + 0x80) * 8 + -8),
               plVar29 == (long *)0x0)) {
              lVar21 = tpidr_el0;
              plVar29 = *(long **)(lVar21 + 0x30);
              if (plVar29 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar29 = DAT_04859430;
                *(long **)(lVar21 + 0x30) = DAT_04859430;
              }
            }
            *(undefined4 *)(puVar15 + 6) = 0;
            puVar15[3] = plVar29;
            puVar15[4] = 0x1fffffffffffffff;
            puVar15[5] = 0;
            puVar12 = (undefined8 *)(**(code **)(*plVar29 + 0x10))(plVar29,8,8);
            if (puVar12 == (undefined8 *)0x0) {
              (**(code **)(*(long *)puVar15[3] + 0xe8))();
            }
            *puVar15 = puVar12;
            puVar15[1] = puVar12;
            uVar30 = puVar15[3];
            puVar15[2] = puVar12 + 1;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar21 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar21 == 0) {
              *puVar12 = 0;
            }
            else {
              if (0xf < *(ulong *)(lVar21 + 0x80)) goto LAB_014efe7c;
              *(undefined8 *)(lVar21 + *(ulong *)(lVar21 + 0x80) * 8) = uVar30;
              *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + 1;
              *puVar12 = 0;
              *(long *)(lVar21 + 0x80) = *(long *)(lVar21 + 0x80) + -1;
            }
            puVar15[1] = puVar12 + 1;
            lVar24 = 0x38;
            lVar21 = 8;
            *(long *)(lVar25 + 0x80) = *(long *)(lVar25 + 0x80) + -1;
          }
          plVar29 = (long *)plVar28[0x14];
          lVar25 = *plVar29;
          *plVar29 = (long)puVar15;
          if (lVar25 != 0) {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar16 = FUN_00c4e600();
            iVar4 = *(int *)(lVar16 + 0x12c8);
            iVar10 = iVar4 + 1;
            *(int *)(lVar16 + 0x12c8) = iVar10;
            if (*(int *)(lVar16 + 0x12cc) <= iVar4) {
              *(int *)(lVar16 + 0x12cc) = iVar10;
            }
            FUN_011add78(lVar25);
            plVar22 = (long *)plVar29[1];
            lVar16 = plVar29[2];
            lVar32 = plVar29[3];
            uVar11 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar11 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,lVar25,lVar16,lVar32);
            }
            else {
              FUN_00c48fe8(plVar22,lVar25,lVar16,lVar32);
            }
            lVar25 = FUN_00c4e600();
            iVar10 = *(int *)(lVar25 + 0x12c8) + -1;
            *(int *)(lVar25 + 0x12c8) = iVar10;
            if (iVar10 == 0) {
              plVar22 = (long *)FUN_00c4e600();
              if (plVar22[600] != 0) {
                local_150 = plVar22 + plVar22[600] * 3;
                local_3a0 = plVar22;
                FUN_00c4ea30(&local_3a0,&local_150);
                local_3f0 = (long *)*plVar22;
                plVar31 = plVar22;
                if (plVar22[600] != 0) {
                  plVar31 = plVar22 + plVar22[600] * 3;
                }
                if (plVar31 == plVar22) {
                  uVar33 = 0;
                  uVar11 = 0;
                }
                else {
                  (**(code **)(*(long *)*plVar22 + 0xd0))();
                  if ((long *)*plVar22 != local_3f0) {
                    (**(code **)(*local_3f0 + 0x100))(local_3f0,plVar22,plVar22);
                    local_3f0 = (long *)*plVar22;
                  }
                  plVar23 = plVar22 + 3;
                  if (plVar31 == plVar23) {
                    uVar33 = 0;
                    uVar11 = 1;
                  }
                  else {
                    (**(code **)(*(long *)*plVar23 + 0xd0))();
                    bVar9 = (long *)*plVar23 != local_3f0;
                    if (bVar9) {
                      (**(code **)(*local_3f0 + 0x100))(local_3f0,plVar22,plVar22 + 3);
                      local_3f0 = (long *)plVar22[3];
                    }
                    uVar33 = (ulong)bVar9;
                    plVar23 = plVar22 + 6;
                    if (plVar31 == plVar23) {
                      uVar11 = 2;
                    }
                    else {
                      (**(code **)(*(long *)*plVar23 + 0xd0))();
                      if ((long *)*plVar23 != local_3f0) {
                        (**(code **)(*local_3f0 + 0x100))
                                  (local_3f0,plVar22 + uVar33 * 3,plVar22 + 6);
                        local_3f0 = (long *)plVar22[6];
                        uVar33 = 2;
                      }
                      plVar23 = plVar22 + 9;
                      if (plVar31 == plVar23) {
                        uVar11 = 3;
                      }
                      else {
                        (**(code **)(*(long *)*plVar23 + 0xd0))();
                        if ((long *)*plVar23 != local_3f0) {
                          (**(code **)(*local_3f0 + 0x100))
                                    (local_3f0,plVar22 + uVar33 * 3,plVar22 + 9);
                          local_3f0 = (long *)plVar22[9];
                          uVar33 = 3;
                        }
                        plVar23 = plVar22 + 0xc;
                        if (plVar31 == plVar23) {
                          uVar11 = 4;
                        }
                        else {
                          (**(code **)(*(long *)*plVar23 + 0xd0))();
                          if ((long *)*plVar23 != local_3f0) {
                            (**(code **)(*local_3f0 + 0x100))
                                      (local_3f0,plVar22 + uVar33 * 3,plVar22 + 0xc);
                            local_3f0 = (long *)plVar22[0xc];
                            uVar33 = 4;
                          }
                          plVar23 = plVar22 + 0xf;
                          if (plVar31 == plVar23) {
                            uVar11 = 5;
                          }
                          else {
                            (**(code **)(*(long *)*plVar23 + 0xd0))();
                            if ((long *)*plVar23 != local_3f0) {
                              (**(code **)(*local_3f0 + 0x100))
                                        (local_3f0,plVar22 + uVar33 * 3,plVar22 + 0xf);
                              local_3f0 = (long *)plVar22[0xf];
                              uVar33 = 5;
                            }
                            uVar11 = 6;
                            for (plVar23 = plVar22 + 0x12; plVar31 != plVar23; plVar23 = plVar23 + 3
                                ) {
                              (**(code **)(*(long *)*plVar23 + 0xd0))();
                              if ((long *)*plVar23 != local_3f0) {
                                (**(code **)(*local_3f0 + 0x100))
                                          (local_3f0,plVar22 + uVar33 * 3,plVar23);
                                local_3f0 = (long *)*plVar23;
                                uVar33 = uVar11;
                              }
                              uVar11 = uVar11 + 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                (**(code **)(*local_3f0 + 0x100))
                          (local_3f0,plVar22 + uVar33 * 3,plVar22 + uVar11 * 3);
                plVar22[600] = 0;
              }
              *(undefined4 *)(lVar25 + 0x12cc) = 0;
            }
          }
          plVar29[1] = (long)local_3d8;
          plVar29[2] = lVar24;
          plVar29[3] = lVar21;
          lVar21 = FUN_0136418c(&local_3a0,*(undefined8 *)(lVar34 + 8));
          if (lVar21 != 0) {
            lVar24 = *(long *)(lVar21 + 0x30);
            if (*(long *)(lVar24 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar2 = (short *)(lVar24 + 0x1a);
            do {
              sVar26 = *psVar2;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar9) {
                *psVar2 = sVar26 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar26 == 0) {
              uVar30 = (**(code **)**(undefined8 **)(lVar24 + 0x10))();
              *(undefined8 *)(lVar24 + 8) = uVar30;
              *(undefined4 *)(lVar24 + 0x1c) = 0xfffffffe;
            }
            else if (sVar26 == -1) {
              pcVar13 = "count != 0";
              pcVar17 = "AddReference";
              pcVar18 = 
              "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
              ;
              pcVar19 = "Reference counter overflows.";
              goto LAB_014eef04;
            }
          }
          plVar29 = (long *)**(undefined8 **)plVar28[0x14];
          if ((long *)(*(undefined8 **)plVar28[0x14])[1] == plVar29) {
LAB_014efe58:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          plVar22 = (long *)*plVar29;
          *plVar29 = 0;
          if (plVar22 != (long *)0x0) {
            lVar24 = plVar22[6];
            psVar2 = (short *)(lVar24 + 0x1a);
            do {
              sVar26 = *psVar2;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar9) {
                *psVar2 = sVar26 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar26 == 1) {
              *(undefined8 *)(lVar24 + 0x10) = 0;
              (**(code **)(*plVar22 + 0x50))();
            }
            else if (sVar26 == 0) goto LAB_014ee7c8;
          }
          *plVar29 = lVar21;
          puVar15 = (undefined8 *)**(long **)plVar28[0x14];
          if ((undefined8 *)(*(long **)plVar28[0x14])[1] == puVar15) goto LAB_014efe58;
          uVar30 = *puVar15;
          FUN_011abe50(&local_3a0,plVar28 + 6);
          puVar15 = (undefined8 *)PTR_PTR_047d4508;
          if (plVar28[7] != 0) {
            puVar15 = (undefined8 *)(plVar28[7] + 0x38);
          }
          puVar12 = (undefined8 *)PTR_PTR_047d4508;
          if (plVar28[8] != 0) {
            puVar12 = (undefined8 *)(plVar28[8] + 0x38);
          }
          FUN_01364af4(uVar30,&local_3a0,*(undefined8 *)(lVar34 + 8),*puVar15,*puVar12,
                       (int)plVar28[9],0);
          if (local_380 != (long *)0x0) {
            (**(code **)(*local_380 + 0x20))();
          }
          if (local_3a0 != (long *)0x0) {
            (**(code **)(*local_3a0 + 0x20))();
          }
          plVar29 = (long *)plVar28[10];
          if ((plVar29 != (long *)0x0) && (*(char *)plVar29[7] != '\0')) {
            local_3a0 = (long *)plVar29[6];
            local_390 = plVar29[8];
            local_398 = (char *)plVar29[7];
            (**(code **)(*plVar29 + 0x18))(plVar29);
            local_388 = plVar29;
            FUN_01050078(&local_150,&local_3a0);
            lVar21 = plVar28[0x14];
            plVar29 = *(long **)(lVar21 + 0x20);
            *(undefined8 *)(lVar21 + 0x20) = 0;
            if (plVar29 != (long *)0x0) {
              lVar24 = plVar29[6];
              psVar2 = (short *)(lVar24 + 0x1a);
              do {
                sVar26 = *psVar2;
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar9) {
                  *psVar2 = sVar26 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar26 == 1) {
                *(undefined8 *)(lVar24 + 0x10) = 0;
                (**(code **)(*plVar29 + 0x50))();
              }
              else if (sVar26 == 0) goto LAB_014ee7c8;
            }
            plVar29 = local_150;
            local_150 = (long *)0x0;
            *(long **)(lVar21 + 0x20) = plVar29;
            if (local_388 != (long *)0x0) {
              (**(code **)(*local_388 + 0x20))();
            }
          }
          *(undefined4 *)(plVar28 + 0x18) = 1;
          break;
        case 1:
          plVar29 = (long *)**(long **)plVar28[0x14];
          if ((long *)(*(long **)plVar28[0x14])[1] == plVar29) goto LAB_014efe58;
          lVar21 = *plVar29;
          if (((*(char *)(lVar21 + 0x1b2) != '\0') ||
              ((*(long *)(lVar21 + 0xf8) != 0 &&
               ((*(byte *)(*(long *)(lVar21 + 0xf8) + 0x1e8) & 1) != 0)))) &&
             (*(char *)(lVar21 + 0x1b1) != '\0')) {
            for (plVar29 = *(long **)(lVar21 + 0x170); plVar29 != (long *)0x0;
                plVar29 = (long *)*plVar29) {
              lVar24 = plVar29[6];
              lVar21 = lVar24 + 0x138;
              if (*(long *)(lVar24 + 0x180) != 0) {
                lVar21 = lVar24 + 0x178;
              }
              if ((((*(long *)(lVar24 + 0x50) != 0) &&
                   ((*(byte *)(*(long *)(lVar24 + 0x50) + 0x1e8) & 1) == 0)) ||
                  ((*(long *)(lVar21 + 8) != 0 &&
                   ((*(byte *)(*(long *)(lVar21 + 8) + 0x1e8) & 1) == 0)))) ||
                 ((*(long *)(lVar24 + 0x90) != 0 &&
                  (((*(byte *)(*(long *)(lVar24 + 0x90) + 0x1e8) & 1) == 0 ||
                   (*(long *)(lVar24 + 200) == 0)))))) goto switchD_014ee3a0_caseD_2;
            }
            lVar21 = *(long *)(plVar28[0x14] + 0x20);
            if (lVar21 == 0) {
              lVar24 = plVar28[4];
LAB_014ef00c:
              plVar29 = (long *)plVar28[5];
              local_3a0 = (long *)PTR_DAT_047d8b70;
              if (plVar29 != (long *)0x0) {
                local_3a0 = plVar29 + 6;
              }
              local_3a0 = (long *)*local_3a0;
              plVar22 = (long *)PTR_PTR_047d4508;
              if (plVar29 != (long *)0x0) {
                plVar22 = plVar29 + 7;
              }
              local_398 = (char *)*plVar22;
              if (plVar29 == (long *)0x0) {
                local_390 = 0;
              }
              else {
                local_390 = plVar29[8];
                local_388 = (long *)0x0;
                (**(code **)(*plVar29 + 0x18))(plVar29);
              }
              local_388 = plVar29;
              FUN_0100e6b8(&local_158,lVar24,&local_3a0,1);
              if (local_388 != (long *)0x0) {
                (**(code **)(*local_388 + 0x20))();
              }
              puVar15 = (undefined8 *)PTR_DAT_047db100;
LAB_014ee4e8:
              lVar21 = plVar28[0x10];
              local_158[0x1d] = plVar28[0x11];
              local_158[0x1c] = lVar21;
              if (*(char *)((long)local_158 + 0xf4) == '\0') {
                *(undefined1 *)((long)local_158 + 0xf4) = 1;
                (**(code **)(*local_158 + 0x78))();
                lVar21 = plVar28[0xe];
                local_158[0x1b] = plVar28[0xf];
                local_158[0x1a] = lVar21;
                if (*(char *)((long)local_158 + 0xf4) != '\0') goto LAB_014eeca0;
                *(undefined1 *)((long)local_158 + 0xf4) = 1;
                (**(code **)(*local_158 + 0x78))();
                lVar21 = plVar28[0xc];
                local_158[0x19] = plVar28[0xd];
                local_158[0x18] = lVar21;
                if (*(char *)((long)local_158 + 0xf4) == '\0') {
                  *(undefined1 *)((long)local_158 + 0xf4) = 1;
                  (**(code **)(*local_158 + 0x78))();
                }
              }
              else {
                lVar21 = plVar28[0xe];
                local_158[0x1b] = plVar28[0xf];
                local_158[0x1a] = lVar21;
LAB_014eeca0:
                lVar21 = plVar28[0xc];
                local_158[0x19] = plVar28[0xd];
                local_158[0x18] = lVar21;
              }
              local_3a0 = (long *)0x0;
              local_360 = (long *)0x0;
              local_358 = 0;
              local_398 = (char *)0x0;
              local_350 = 0x101;
              local_380 = (long *)0x0;
              puStack_378 = &DAT_cbf29ce484222645;
              local_370 = &DAT_03c886bc;
              uStack_368 = 0;
              local_330 = 0;
              uStack_328 = 0;
              local_340 = 0;
              local_338 = (code *)0x0;
              local_2c0 = 0;
              local_2b0 = 0;
              local_2a8 = (code *)0x0;
              local_2a0 = 0;
              uStack_298 = 0;
              local_230 = 0;
              local_228 = (code *)0x0;
              local_220 = 0;
              uStack_218 = 0;
              local_1b0 = 0;
              local_1a8 = (long *)0x0;
              local_1a0 = &DAT_cbf29ce484222645;
              local_198 = &DAT_03c886bc;
              local_188 = (long *)0x0;
              local_190 = 0;
              local_178 = 1;
              local_174 = 0;
              local_170 = 0;
              local_390 = *(long *)plVar28[0x14];
              local_180 = (ulong)*(uint *)(plVar28 + 9);
              uVar20 = 0;
              if ((code *)*puVar15 != (code *)0x0) {
                iVar10 = (*(code *)*puVar15)(puVar15 + 4);
                uVar20 = (uint)(iVar10 != 0);
              }
              local_180 = CONCAT44(uVar20,(undefined4)local_180);
              local_3a0 = *(long **)(lVar34 + 8);
              local_150 = (long *)((ulong)local_150 & 0xffffffffffff0000);
              local_f8 = 0;
              local_148 = &DAT_cbf29ce484222645;
              puStack_140 = &DAT_03c886bc;
              local_138 = (long *)0x0;
              local_130 = (long *)0x0;
              local_128 = &DAT_cbf29ce484222645;
              puStack_120 = &DAT_03c886bc;
              local_118 = 0;
              local_110 = (long *)0x0;
              local_f0 = &DAT_cbf29ce484222645;
              puStack_e8 = &DAT_03c886bc;
              local_e0 = 0;
              local_d8 = (long *)0x0;
              local_d0 = &DAT_cbf29ce484222645;
              puStack_c8 = &DAT_03c886bc;
              local_c0 = 0;
              local_b8 = (long *)0x0;
              local_90 = &DAT_cbf29ce484222645;
              puStack_88 = &DAT_03c886bc;
              local_80 = 0;
              local_78 = (long *)0x0;
              FUN_0102e1b0(&local_380,local_3a0,&local_150);
              if (local_78 != (long *)0x0) {
                (**(code **)(*local_78 + 0x20))();
              }
              if (local_b8 != (long *)0x0) {
                (**(code **)(*local_b8 + 0x20))();
              }
              if (local_d8 != (long *)0x0) {
                (**(code **)(*local_d8 + 0x20))();
              }
              if (local_110 != (long *)0x0) {
                (**(code **)(*local_110 + 0x20))();
              }
              if (local_130 != (long *)0x0) {
                (**(code **)(*local_130 + 0x20))();
              }
              lVar21 = FUN_01444694(local_158,local_158[1],&local_3a0);
              *(undefined1 *)(lVar21 + 0x480) = 0;
              if (*(long *)(lVar21 + 0x488) != 0) {
                FUN_0143cdb0(*(long *)(lVar21 + 0x488),0);
              }
              FUN_010f5c50(local_158,local_158[1]);
              FUN_014f06d8(local_158,local_158[1]);
              plVar22 = local_158;
              plVar31 = local_158 + 5;
              (**(code **)(*local_158 + 0x18))(&local_150,local_158);
              local_3c0 = (undefined8 *)0x0;
              local_3b8 = (undefined1 *)0x0;
              plVar29 = (long *)0x0;
              if (plVar22 != (long *)0x0) {
                plVar29 = plVar31;
              }
              if ((long *)local_150[2] == plVar29) {
                FUN_00cbc6dc(&local_3c0,&local_150);
              }
              plVar29 = local_150;
              if (local_150 != (long *)0x0) {
                plVar22 = local_150 + 3;
                do {
                  sVar26 = (short)*plVar22;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar9) {
                    *(short *)plVar22 = sVar26 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar26 == 1) {
                  piVar3 = (int *)((long)local_150 + 0x1c);
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
                    lVar21 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar21;
                    local_70[0] = *plVar29;
                    FUN_00c44438(lVar21 + 0x8040,local_70);
                  }
                }
                else if (sVar26 == 0) goto LAB_014eee20;
              }
              FUN_00ca1ea4(plVar28[0x14] + 0x28,&local_3c0);
              puVar15 = local_3c0;
              if (local_3c0 != (undefined8 *)0x0) {
                psVar2 = (short *)(local_3c0 + 3);
                do {
                  sVar26 = *psVar2;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar9) {
                    *psVar2 = sVar26 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar26 == 1) {
                  piVar3 = (int *)((long)local_3c0 + 0x1c);
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
                    lVar21 = *(long *)PTR_DAT_047d3910;
                    *(long *)PTR_DAT_047d3918 = lVar21;
                    local_150 = (long *)*puVar15;
                    FUN_00c44438(lVar21 + 0x8040,&local_150);
                  }
                }
                else if (sVar26 == 0) {
LAB_014eee20:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x33,"Reference counter underflows.");
                }
              }
              *(undefined4 *)(plVar28 + 0x18) = 2;
              if (local_188 != (long *)0x0) {
                (**(code **)(*local_188 + 0x20))();
              }
              if (local_1a8 != (long *)0x0) {
                plVar29 = local_1a8 + 5;
                do {
                  lVar21 = *plVar29;
                  iVar10 = (int)lVar21 + -1;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar9) {
                    *(int *)plVar29 = iVar10;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar10 == 0) {
                  (**(code **)(*local_1a8 + 0x10))();
                }
                else if ((int)lVar21 == 0) {
                  pcVar13 = "count != std::numeric_limits<uint32_t>::max()";
                  pcVar17 = "DecrementReferenceInternal";
                  pcVar18 = 
                  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                  ;
                  pcVar19 = "Reference counter underflows.";
LAB_014eef04:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl(pcVar13,pcVar17,pcVar18,0x58,pcVar19);
                }
              }
              pcVar8 = local_228;
              if (local_228 != (code *)0x0) {
                local_220 = 0;
                uStack_218 = 0;
                local_230 = 0;
                local_228 = (code *)0x0;
                (*pcVar8)(auStack_210);
              }
              pcVar8 = local_2a8;
              if (local_2a8 != (code *)0x0) {
                local_2a0 = 0;
                uStack_298 = 0;
                local_2b0 = 0;
                local_2a8 = (code *)0x0;
                (*pcVar8)(auStack_290);
              }
              pcVar8 = local_338;
              if (local_338 != (code *)0x0) {
                local_330 = 0;
                uStack_328 = 0;
                local_340 = 0;
                local_338 = (code *)0x0;
                (*pcVar8)(auStack_320);
              }
              if (local_360 != (long *)0x0) {
                (**(code **)(*local_360 + 0x20))();
              }
              if (local_380 != (long *)0x0) {
                (**(code **)(*local_380 + 0x20))();
              }
              if (local_158 != (long *)0x0) {
                lVar21 = local_158[6];
                psVar2 = (short *)(lVar21 + 0x1a);
                do {
                  sVar26 = *psVar2;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar9) {
                    *psVar2 = sVar26 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (sVar26 == 1) {
                  *(undefined8 *)(lVar21 + 0x10) = 0;
                  (**(code **)(*local_158 + 0x50))();
                }
                else if (sVar26 == 0) goto LAB_014ee7c8;
              }
            }
            else if ((*(byte *)(*(long *)(lVar21 + 0xb0) + 0x6c) & 1) != 0) {
              lVar24 = *(long *)(lVar21 + 0xb0);
              plVar29 = (long *)(lVar24 + 0x78);
              lVar21 = nn::os::GetCurrentThread();
LAB_014ee358:
              if (*plVar29 == 0) goto code_r0x014ee360;
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x80));
              do {
                if (*plVar29 != 0) {
                  do {
                    ClearExclusiveLocal();
                    nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x80));
                    while (*plVar29 == 0) {
                      cVar6 = '\x01';
                      bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                      if (bVar9) {
                        *plVar29 = lVar21;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                      if (cVar6 == '\0') goto LAB_014ee42c;
                    }
                  } while( true );
                }
                cVar6 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar9) {
                  *plVar29 = lVar21;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
LAB_014ee42c:
              iVar10 = *(int *)(lVar24 + 0x68);
              cVar6 = *(char *)(lVar24 + 100);
              *(undefined8 *)(lVar24 + 0x78) = 0;
              nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0x80));
              puVar15 = (undefined8 *)PTR_DAT_047db100;
              if ((iVar10 == 0) && (cVar6 != '\0')) {
                lVar21 = plVar28[0x14];
                lVar24 = plVar28[4];
                if (*(long *)(lVar21 + 0x20) == 0) goto LAB_014ef00c;
                plVar29 = (long *)plVar28[5];
                local_3a0 = (long *)PTR_DAT_047d8b70;
                if (plVar29 != (long *)0x0) {
                  local_3a0 = plVar29 + 6;
                }
                local_3a0 = (long *)*local_3a0;
                plVar22 = (long *)PTR_PTR_047d4508;
                if (plVar29 != (long *)0x0) {
                  plVar22 = plVar29 + 7;
                }
                local_398 = (char *)*plVar22;
                if (plVar29 == (long *)0x0) {
                  local_390 = 0;
                  local_388 = (long *)0x0;
                }
                else {
                  local_390 = plVar29[8];
                  (**(code **)(*plVar29 + 0x18))(plVar29);
                  lVar21 = plVar28[0x14];
                  local_388 = plVar29;
                }
                FUN_010b6530(&local_158,lVar24,&local_3a0,lVar21 + 0x20,0,1);
                if (local_388 != (long *)0x0) {
                  (**(code **)(*local_388 + 0x20))();
                }
                goto LAB_014ee4e8;
              }
              break;
            }
          }
          break;
        case 3:
switchD_014ee3a0_caseD_3:
          lVar24 = plVar28[0x14];
          plVar22 = (long *)plVar28[0x15];
          uVar11 = plVar28[2];
          plVar28[0x14] = 0;
          lVar25 = plVar28[0x16];
          lVar21 = plVar28[0x17];
          plVar29 = plVar1;
          if ((long *)*plVar1 != (long *)0x0) {
            plVar31 = (long *)*plVar1;
            do {
              if (uVar11 < (ulong)plVar31[4]) {
                plVar23 = (long *)*plVar31;
                plVar29 = plVar31;
                if (plVar23 == (long *)0x0) {
                  goto LAB_014ef7ec;
                }
              }
              else {
                if (uVar11 <= (ulong)plVar31[4]) goto LAB_014ef7ec;
                plVar29 = plVar31 + 1;
                plVar23 = (long *)*plVar29;
                if (plVar23 == (long *)0x0) goto LAB_014ef7ec;
              }
              plVar31 = plVar23;
            } while( true );
          }
          plVar31 = plVar1;
LAB_014ef7ec:
          if (*plVar29 == 0) {
            puVar15 = (undefined8 *)
                      (**(code **)(**(long **)(lVar34 + 0x38) + 0x10))
                                (*(long **)(lVar34 + 0x38),0x48,8);
            if (puVar15 == (undefined8 *)0x0) {
              (**(code **)(**(long **)(lVar34 + 0x38) + 0xe8))();
            }
            uVar30 = *(undefined8 *)(lVar34 + 0x38);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar16 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar16 != 0) {
              if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_014efe7c;
              *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar30;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
            }
            puVar15[4] = uVar11;
            puVar15[5] = lVar24;
            puVar15[6] = plVar22;
            puVar15[7] = lVar25;
            puVar15[8] = lVar21;
            if (lVar16 != 0) {
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
            }
            *puVar15 = 0;
            puVar15[1] = 0;
            puVar15[2] = plVar31;
            *plVar29 = (long)puVar15;
            if (**(long **)(lVar34 + 0x28) != 0) {
              *(long *)(lVar34 + 0x28) = **(long **)(lVar34 + 0x28);
              puVar15 = (undefined8 *)*plVar29;
            }
            FUN_010108e0(*(undefined8 *)(lVar34 + 0x30),puVar15);
            *(long *)(lVar34 + 0x58) = *(long *)(lVar34 + 0x58) + 1;
          }
          else if (lVar24 != 0) {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar16 = FUN_00c4e600();
            iVar4 = *(int *)(lVar16 + 0x12c8);
            iVar10 = iVar4 + 1;
            *(int *)(lVar16 + 0x12c8) = iVar10;
            if (*(int *)(lVar16 + 0x12cc) <= iVar4) {
              *(int *)(lVar16 + 0x12cc) = iVar10;
            }
            FUN_014f0a98(lVar24);
            uVar11 = (**(code **)(*plVar22 + 0xf8))();
            if (((uVar11 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,lVar24,lVar25,lVar21);
            }
            else {
              FUN_00c48fe8(plVar22,lVar24,lVar25,lVar21);
            }
            lVar21 = FUN_00c4e600();
            iVar10 = *(int *)(lVar21 + 0x12c8) + -1;
            *(int *)(lVar21 + 0x12c8) = iVar10;
            if (iVar10 == 0) {
              plVar29 = (long *)FUN_00c4e600();
              if (plVar29[600] != 0) {
                local_150 = plVar29 + plVar29[600] * 3;
                local_3a0 = plVar29;
                FUN_00c4ea30(&local_3a0,&local_150);
                local_3d8 = (long *)*plVar29;
                plVar22 = plVar29;
                if (plVar29[600] != 0) {
                  plVar22 = plVar29 + plVar29[600] * 3;
                }
                if (plVar22 == plVar29) {
                  uVar33 = 0;
                  uVar11 = 0;
                }
                else {
                  (**(code **)(*(long *)*plVar29 + 0xd0))();
                  if ((long *)*plVar29 != local_3d8) {
                    (**(code **)(*local_3d8 + 0x100))(local_3d8,plVar29,plVar29);
                    local_3d8 = (long *)*plVar29;
                  }
                  plVar31 = plVar29 + 3;
                  if (plVar22 == plVar31) {
                    uVar33 = 0;
                    uVar11 = 1;
                  }
                  else {
                    (**(code **)(*(long *)*plVar31 + 0xd0))();
                    bVar9 = (long *)*plVar31 != local_3d8;
                    if (bVar9) {
                      (**(code **)(*local_3d8 + 0x100))(local_3d8,plVar29,plVar29 + 3);
                      local_3d8 = (long *)plVar29[3];
                    }
                    uVar33 = (ulong)bVar9;
                    plVar31 = plVar29 + 6;
                    if (plVar22 == plVar31) {
                      uVar11 = 2;
                    }
                    else {
                      (**(code **)(*(long *)*plVar31 + 0xd0))();
                      if ((long *)*plVar31 != local_3d8) {
                        (**(code **)(*local_3d8 + 0x100))
                                  (local_3d8,plVar29 + uVar33 * 3,plVar29 + 6);
                        local_3d8 = (long *)plVar29[6];
                        uVar33 = 2;
                      }
                      plVar31 = plVar29 + 9;
                      if (plVar22 == plVar31) {
                        uVar11 = 3;
                      }
                      else {
                        (**(code **)(*(long *)*plVar31 + 0xd0))();
                        if ((long *)*plVar31 != local_3d8) {
                          (**(code **)(*local_3d8 + 0x100))
                                    (local_3d8,plVar29 + uVar33 * 3,plVar29 + 9);
                          local_3d8 = (long *)plVar29[9];
                          uVar33 = 3;
                        }
                        plVar31 = plVar29 + 0xc;
                        if (plVar22 == plVar31) {
                          uVar11 = 4;
                        }
                        else {
                          (**(code **)(*(long *)*plVar31 + 0xd0))();
                          if ((long *)*plVar31 != local_3d8) {
                            (**(code **)(*local_3d8 + 0x100))
                                      (local_3d8,plVar29 + uVar33 * 3,plVar29 + 0xc);
                            local_3d8 = (long *)plVar29[0xc];
                            uVar33 = 4;
                          }
                          plVar31 = plVar29 + 0xf;
                          if (plVar22 == plVar31) {
                            uVar11 = 5;
                          }
                          else {
                            (**(code **)(*(long *)*plVar31 + 0xd0))();
                            if ((long *)*plVar31 != local_3d8) {
                              (**(code **)(*local_3d8 + 0x100))
                                        (local_3d8,plVar29 + uVar33 * 3,plVar29 + 0xf);
                              local_3d8 = (long *)plVar29[0xf];
                              uVar33 = 5;
                            }
                            uVar11 = 6;
                            for (local_3e0 = plVar29 + 0x12; plVar22 != local_3e0;
                                local_3e0 = local_3e0 + 3) {
                              (**(code **)(*(long *)*local_3e0 + 0xd0))();
                              if ((long *)*local_3e0 != local_3d8) {
                                (**(code **)(*local_3d8 + 0x100))
                                          (local_3d8,plVar29 + uVar33 * 3,local_3e0);
                                local_3d8 = (long *)*local_3e0;
                                uVar33 = uVar11;
                              }
                              uVar11 = uVar11 + 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                (**(code **)(*local_3d8 + 0x100))
                          (local_3d8,plVar29 + uVar33 * 3,plVar29 + uVar11 * 3);
                plVar29[600] = 0;
              }
              *(undefined4 *)(lVar21 + 0x12cc) = 0;
            }
          }
          plVar29 = (long *)plVar28[1];
          *(long **)(*plVar28 + 8) = plVar29;
          *(long *)plVar28[1] = *plVar28;
          *(long *)(lVar34 + 0x70) = *(long *)(lVar34 + 0x70) + -1;
          FUN_014f0470(plVar28 + 2);
          plVar22 = *(long **)(lVar34 + 0x78);
          uVar11 = (**(code **)(*plVar22 + 0xf8))(plVar22);
          if (((uVar11 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
            (**(code **)(*plVar22 + 0x18))(plVar22,plVar28,0xd0,0x10);
            plVar28 = plVar29;
          }
          else {
            FUN_00c48fe8(plVar22,plVar28,0xd0,0x10);
            plVar28 = plVar29;
          }
          goto LAB_014ee330;
        case 4:
          goto switchD_014ee3a0_caseD_4;
        }
switchD_014ee3a0_caseD_2:
        plVar28 = (long *)plVar28[1];
      }
LAB_014ee330:
      iVar27 = iVar27 + -1;
    } while ((long *)(lVar34 + 0x60) != plVar28);
  }
  return;
LAB_014efcbc:
  if (*plVar22 == 0) goto code_r0x014efcc4;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xf0));
  do {
    if (*plVar22 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar21 + 0xf0));
        while (*plVar22 == 0) {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar9) {
            *plVar22 = lVar24;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_014efccc;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar9) {
      *plVar22 = lVar24;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_014efccc:
  bVar9 = false;
LAB_014efcd0:
  plVar22 = (long *)FUN_01fb4c50(*(undefined8 *)(lVar21 + 0x100),*(undefined8 *)(lVar21 + 0x108));
  if ((*(long **)(lVar21 + 0x108) == plVar22) || (*plVar22 == 0)) {
    plVar22 = (long *)FUN_01fb4c50(*(undefined8 *)(lVar21 + 0x138),*(undefined8 *)(lVar21 + 0x140));
    if (*(long **)(lVar21 + 0x140) == plVar22) {
      lVar24 = 0;
    }
    else {
      lVar24 = 0;
      if (*plVar22 != 0) {
        lVar24 = *plVar22 + -0x20;
      }
    }
  }
  else {
    lVar24 = *plVar22 + -0x20;
  }
  if (!bVar9) {
    *(undefined8 *)(lVar21 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar21 + 0xf0));
  }
  if ((lVar24 != 0) && (0 < *(int *)(lVar24 + 0x1b0))) {
    iVar10 = 0;
    do {
      plVar22 = (long *)FUN_00d4fa5c(lVar24,iVar10);
      local_3a0 = (long *)*plVar22;
      local_398 = (char *)plVar22[1];
      local_390 = plVar22[2];
      local_388 = (long *)plVar22[3];
      if (local_388 != (long *)0x0) {
        (**(code **)(*local_388 + 0x18))();
      }
      local_138 = (long *)0x0;
      local_150 = (long *)0xbda3338428b079e3;
      local_70[0] = CONCAT44(local_70[0]._4_4_,1);
      local_148 = "LightReciveType";
      puStack_140 = (undefined1 *)0xf;
      local_3c0 = (undefined8 *)&DAT_cbf29ce484222645;
      local_3b8 = &DAT_03c886bc;
      local_3b0 = 0;
      local_3a8 = (long *)0x0;
      FUN_00f50e68(lVar24,&local_150,local_70,&local_3a0,&local_3c0);
      if (local_3a8 != (long *)0x0) {
        (**(code **)(*local_3a8 + 0x20))();
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_388 != (long *)0x0) {
        (**(code **)(*local_388 + 0x20))();
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar24 + 0x1b0));
  }
  bVar9 = true;
  *(undefined4 *)(plVar28 + 0x18) = 3;
LAB_014ef764:
  lVar21 = *(long *)(lVar21 + 8);
  psVar2 = (short *)(lVar21 + 0x1a);
  do {
    sVar26 = *psVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar7) {
      *psVar2 = sVar26 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar26 == 1) {
    *(undefined8 *)(lVar21 + 0x10) = 0;
    (**(code **)(*plVar29 + 0x50))(plVar29);
  }
  else if (sVar26 == 0) goto LAB_014ee7c8;
  if (bVar9) goto switchD_014ee3a0_caseD_3;
  goto switchD_014ee3a0_caseD_2;
code_r0x014efcc4:
  cVar6 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar22,0x10);
  if (bVar9) {
    *plVar22 = lVar24;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_014efccc;
  goto LAB_014efcbc;
code_r0x014ee360:
  cVar6 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(plVar29,0x10);
  if (bVar9) {
    *plVar29 = lVar21;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_014ee42c;
  goto LAB_014ee358;
}


