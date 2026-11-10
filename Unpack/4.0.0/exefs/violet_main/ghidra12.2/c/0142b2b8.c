/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0142b2b8; name: FUN_0142b2b8
 */


ulong FUN_0142b2b8(undefined8 param_1,long param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  char cVar7;
  undefined *puVar8;
  ulong uVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  void *pvVar13;
  ulong uVar14;
  code *pcVar15;
  ulong uVar16;
  ulong uVar17;
  float *pfVar18;
  ulong uVar19;
  long *plVar20;
  undefined8 *puVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long *plVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  float fVar36;
  float fVar37;
  undefined8 *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  undefined8 *local_128 [2];
  undefined8 *local_118;
  undefined8 uStack_110;
  ulong local_108;
  undefined8 uStack_100;
  undefined1 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  uint7 uStack_b7;
  undefined8 local_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80 [2];
  long *local_68;
  
  if (param_4 == 9) {
    param_4 = *(uint *)(param_2 + 0x130);
  }
  if (((*PTR_DAT_047d6c20 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar26 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar26;
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x90) == -1)) {
    uVar34 = 0xffffffffffffffff;
  }
  else {
    FUN_0142cac4(local_128,*(undefined8 *)(lVar26 + (long)*(int *)(lVar12 + 0x90) * 8 + 0x6a0));
    if (local_128[0] == (undefined8 *)0x0) {
      return 0xffffffffffffffff;
    }
    uVar34 = 0xffffffffffffffff;
    if (*(short *)((long)local_128[0] + 0x1a) != 0) {
      local_160 = (undefined8 *)0x0;
      uStack_158 = 0;
      FUN_00c43ef0(&local_160,local_128);
      local_150 = *param_3;
      uStack_148 = param_3[1];
      local_140 = param_3[2];
      local_138 = (long *)param_3[3];
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x18))();
      }
      puVar8 = PTR_PTR_047d6c38;
      local_130 = 0;
      if (*(long *)(param_2 + 0xe8) != 0) {
        local_130 = *(undefined8 *)(*(long *)(param_2 + 0xe8) + 0x48);
      }
      plVar31 = *(long **)(param_2 + 0x138);
      plVar1 = plVar31 + 0x1f;
      lVar12 = *plVar1;
      lVar26 = nn::os::GetCurrentThread();
      if (lVar26 != lVar12) {
        lVar26 = nn::os::GetCurrentThread();
LAB_0142b3e4:
        if (*plVar1 == 0) goto code_r0x0142b3ec;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar31 + 0x20));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar31 + 0x20));
              while (*plVar1 == 0) {
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar10) {
                  *plVar1 = lVar26;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_0142b3f4;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar26;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_0142b3f4:
        bVar10 = false;
        goto LAB_0142b3f8;
      }
      bVar10 = true;
LAB_0142b3f8:
      uVar25 = *(undefined8 *)(puVar8 + (ulong)param_4 * 8);
      local_b0 = 0xffffffffffffffff;
      local_b8 = 0;
      do {
        lVar26 = plVar31[0x18] - plVar31[0x17];
        if (lVar26 == 0) {
          uVar34 = plVar31[10] - plVar31[9] >> 4;
          FUN_0142ca9c(plVar31 + 9,&local_b8);
          goto LAB_0142b434;
        }
        uVar34 = *(ulong *)(plVar31[0x18] + -8);
        plVar31[0x18] = lVar26 + plVar31[0x17] + -8;
        uVar29 = uVar34 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(plVar31[0x10] + uVar29) =
             *(ulong *)(plVar31[0x10] + uVar29) & (1L << (uVar34 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((ulong)(plVar31[10] - plVar31[9] >> 4) <= uVar34);
      plVar35 = (long *)(plVar31[9] + uVar34 * 0x10);
      *plVar35 = (ulong)uStack_b7 << 8;
      plVar35[1] = -1;
      if ((ulong)plVar31[0x1e] <= uVar34) {
LAB_0142b434:
        plVar31[0x1e] = uVar34 + 1;
      }
      if (!bVar10) {
        plVar31[0x1f] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar31 + 0x20));
      }
      lVar26 = plVar31[8];
      (**(code **)(*plVar31 + 0x18))(&local_a0,plVar31);
      local_118 = (undefined8 *)0x0;
      uStack_110 = 0;
      if ((long *)local_a0[2] == plVar31 + 5) {
        FUN_0142d514(&local_118,&local_a0);
      }
      plVar35 = local_a0;
      if (local_a0 != (long *)0x0) {
        plVar20 = local_a0 + 3;
        do {
          sVar5 = (short)*plVar20;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar10) {
            *(short *)plVar20 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)local_a0 + 0x1c);
          do {
            iVar11 = *piVar4;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar10) {
              *piVar4 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_68 = (long *)*plVar35;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar5 == 0) goto LAB_0142b7e8;
      }
      local_f8 = &LAB_02b7477c;
      local_f0 = (undefined8 *)0x0;
      local_e8 = 0;
      local_108 = uVar34;
      uStack_100 = uVar25;
      FUN_00c96b7c(&local_f0,&local_160);
      local_e0 = local_150;
      uStack_d8 = uStack_148;
      local_d0 = local_140;
      local_c8 = local_138;
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x18))();
      }
      local_c0 = local_130;
      plVar35 = (long *)(lVar26 + 0x30);
      lVar23 = *plVar35;
      lVar12 = nn::os::GetCurrentThread();
      if (lVar12 != lVar23) {
        lVar12 = nn::os::GetCurrentThread();
LAB_0142b4fc:
        if (*plVar35 == 0) goto code_r0x0142b504;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x38));
        do {
          if (*plVar35 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x38));
              while (*plVar35 == 0) {
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar35,0x10);
                if (bVar10) {
                  *plVar35 = lVar12;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_0142b50c;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar10) {
            *plVar35 = lVar12;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_0142b50c:
        lVar12 = *(long *)(lVar26 + 0x1d8);
        if (lVar12 == 0) {
          local_a8 = *(undefined8 *)(lVar26 + 8);
          FUN_0142ce50(&local_a0,local_a8,&local_a8);
          plVar35 = local_a0;
          local_a0 = (long *)0x0;
          lVar12 = *(long *)(lVar26 + 0x1d8);
          *(long **)(lVar26 + 0x1d8) = plVar35;
          if (lVar12 == 0) {
            *(undefined8 *)(lVar26 + 0x1e8) = local_90;
            *(undefined8 *)(lVar26 + 0x1f0) = local_88;
            *(long **)(lVar26 + 0x1e0) = local_98;
            local_a0 = (long *)0x0;
          }
          else {
            FUN_00c4e600();
            FUN_00c4e600();
            lVar23 = FUN_00c4e600();
            iVar6 = *(int *)(lVar23 + 0x12c8);
            iVar11 = iVar6 + 1;
            *(int *)(lVar23 + 0x12c8) = iVar11;
            if (*(int *)(lVar23 + 0x12cc) <= iVar6) {
              *(int *)(lVar23 + 0x12cc) = iVar11;
            }
            lVar23 = *(long *)(lVar12 + 0xf8);
            if (lVar23 != 0) {
              plVar35 = *(long **)(lVar12 + 0x110);
              *(long *)(lVar12 + 0x100) = lVar23;
              lVar24 = *(long *)(lVar12 + 0x108) - lVar23;
              uVar29 = (**(code **)(*plVar35 + 0xf8))(plVar35);
              if (((uVar29 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
                (**(code **)(*plVar35 + 0x18))(plVar35,lVar23,lVar24,8);
              }
              else {
                FUN_00c48fe8(plVar35,lVar23,lVar24,8);
              }
            }
            lVar23 = *(long *)(lVar12 + 0xc0);
            if (lVar23 != 0) {
              plVar35 = *(long **)(lVar12 + 0xd8);
              *(long *)(lVar12 + 200) = lVar23;
              lVar24 = *(long *)(lVar12 + 0xd0) - lVar23;
              uVar29 = (**(code **)(*plVar35 + 0xf8))(plVar35);
              if (((uVar29 & 1) == 0) || (lVar33 = FUN_00c4e600(), *(int *)(lVar33 + 0x12c8) < 1)) {
                (**(code **)(*plVar35 + 0x18))(plVar35,lVar23,lVar24,8);
              }
              else {
                FUN_00c48fe8(plVar35,lVar23,lVar24,8);
              }
            }
            FUN_01278210(lVar12 + 8);
            plVar35 = *(long **)(lVar26 + 0x1e0);
            uVar25 = *(undefined8 *)(lVar26 + 0x1e8);
            uVar32 = *(undefined8 *)(lVar26 + 0x1f0);
            uVar29 = (**(code **)(*plVar35 + 0xf8))(plVar35);
            if (((uVar29 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
              (**(code **)(*plVar35 + 0x18))(plVar35,lVar12,uVar25,uVar32);
            }
            else {
              FUN_00c48fe8(plVar35,lVar12,uVar25,uVar32);
            }
            lVar12 = FUN_00c4e600();
            iVar11 = *(int *)(lVar12 + 0x12c8) + -1;
            *(int *)(lVar12 + 0x12c8) = iVar11;
            if (iVar11 == 0) {
              plVar35 = (long *)FUN_00c4e600();
              if (plVar35[600] != 0) {
                local_80[0] = plVar35 + plVar35[600] * 3;
                local_68 = plVar35;
                FUN_00c4ea30(&local_68,local_80);
                plVar28 = (long *)*plVar35;
                plVar20 = plVar35;
                if (plVar35[600] != 0) {
                  plVar20 = plVar35 + plVar35[600] * 3;
                }
                if (plVar20 == plVar35) {
                  uVar19 = 0;
                  uVar29 = 0;
                }
                else {
                  (**(code **)(*(long *)*plVar35 + 0xd0))();
                  if ((long *)*plVar35 != plVar28) {
                    (**(code **)(*plVar28 + 0x100))(plVar28,plVar35,plVar35);
                    plVar28 = (long *)*plVar35;
                  }
                  plVar22 = plVar35 + 3;
                  if (plVar20 == plVar22) {
                    uVar19 = 0;
                    uVar29 = 1;
                  }
                  else {
                    (**(code **)(*(long *)*plVar22 + 0xd0))();
                    bVar10 = (long *)*plVar22 != plVar28;
                    if (bVar10) {
                      (**(code **)(*plVar28 + 0x100))(plVar28,plVar35,plVar35 + 3);
                      plVar28 = (long *)plVar35[3];
                    }
                    uVar19 = (ulong)bVar10;
                    plVar22 = plVar35 + 6;
                    if (plVar20 == plVar22) {
                      uVar29 = 2;
                    }
                    else {
                      (**(code **)(*(long *)*plVar22 + 0xd0))();
                      if ((long *)*plVar22 != plVar28) {
                        (**(code **)(*plVar28 + 0x100))(plVar28,plVar35 + uVar19 * 3,plVar35 + 6);
                        plVar28 = (long *)plVar35[6];
                        uVar19 = 2;
                      }
                      plVar22 = plVar35 + 9;
                      if (plVar20 == plVar22) {
                        uVar29 = 3;
                      }
                      else {
                        (**(code **)(*(long *)*plVar22 + 0xd0))();
                        if ((long *)*plVar22 != plVar28) {
                          (**(code **)(*plVar28 + 0x100))(plVar28,plVar35 + uVar19 * 3,plVar35 + 9);
                          plVar28 = (long *)plVar35[9];
                          uVar19 = 3;
                        }
                        plVar22 = plVar35 + 0xc;
                        if (plVar20 == plVar22) {
                          uVar29 = 4;
                        }
                        else {
                          (**(code **)(*(long *)*plVar22 + 0xd0))();
                          if ((long *)*plVar22 != plVar28) {
                            (**(code **)(*plVar28 + 0x100))
                                      (plVar28,plVar35 + uVar19 * 3,plVar35 + 0xc);
                            plVar28 = (long *)plVar35[0xc];
                            uVar19 = 4;
                          }
                          plVar22 = plVar35 + 0xf;
                          if (plVar20 == plVar22) {
                            uVar29 = 5;
                          }
                          else {
                            (**(code **)(*(long *)*plVar22 + 0xd0))();
                            if ((long *)*plVar22 != plVar28) {
                              (**(code **)(*plVar28 + 0x100))
                                        (plVar28,plVar35 + uVar19 * 3,plVar35 + 0xf);
                              plVar28 = (long *)plVar35[0xf];
                              uVar19 = 5;
                            }
                            plVar22 = plVar35 + 0x12;
                            if (plVar20 == plVar22) {
                              uVar29 = 6;
                            }
                            else {
                              uVar29 = 6;
                              do {
                                (**(code **)(*(long *)*plVar22 + 0xd0))();
                                if ((long *)*plVar22 != plVar28) {
                                  (**(code **)(*plVar28 + 0x100))
                                            (plVar28,plVar35 + uVar19 * 3,plVar22);
                                  plVar28 = (long *)*plVar22;
                                  uVar19 = uVar29;
                                }
                                plVar22 = plVar22 + 3;
                                uVar29 = uVar29 + 1;
                              } while (plVar20 != plVar22);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                (**(code **)(*plVar28 + 0x100))(plVar28,plVar35 + uVar19 * 3,plVar35 + uVar29 * 3);
                plVar35[600] = 0;
              }
              *(undefined4 *)(lVar12 + 0x12cc) = 0;
            }
            plVar35 = local_a0;
            *(long **)(lVar26 + 0x1e0) = local_98;
            *(undefined8 *)(lVar26 + 0x1e8) = local_90;
            *(undefined8 *)(lVar26 + 0x1f0) = local_88;
            local_a0 = (long *)0x0;
            if (plVar35 != (long *)0x0) {
              FUN_00c4e600();
              FUN_00c4e600();
              lVar12 = FUN_00c4e600();
              iVar6 = *(int *)(lVar12 + 0x12c8);
              iVar11 = iVar6 + 1;
              *(int *)(lVar12 + 0x12c8) = iVar11;
              if (*(int *)(lVar12 + 0x12cc) <= iVar6) {
                *(int *)(lVar12 + 0x12cc) = iVar11;
              }
              lVar12 = plVar35[0x1f];
              if (lVar12 != 0) {
                lVar23 = plVar35[0x21];
                plVar20 = (long *)plVar35[0x22];
                plVar35[0x20] = lVar12;
                uVar29 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                if (((uVar29 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar20 + 0x18))(plVar20,lVar12,lVar23 - lVar12,8);
                }
                else {
                  FUN_00c48fe8(plVar20,lVar12,lVar23 - lVar12,8);
                }
              }
              lVar12 = plVar35[0x18];
              if (lVar12 != 0) {
                lVar23 = plVar35[0x1a];
                plVar20 = (long *)plVar35[0x1b];
                plVar35[0x19] = lVar12;
                uVar29 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                if (((uVar29 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar20 + 0x18))(plVar20,lVar12,lVar23 - lVar12,8);
                }
                else {
                  FUN_00c48fe8(plVar20,lVar12,lVar23 - lVar12,8);
                }
              }
              FUN_01278210(plVar35 + 1);
              uVar29 = (**(code **)(*local_98 + 0xf8))(local_98);
              if (((uVar29 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                (**(code **)(*local_98 + 0x18))(local_98,plVar35,local_90,local_88);
              }
              else {
                FUN_00c48fe8(local_98,plVar35,local_90,local_88);
              }
              lVar12 = FUN_00c4e600();
              iVar11 = *(int *)(lVar12 + 0x12c8) + -1;
              *(int *)(lVar12 + 0x12c8) = iVar11;
              if (iVar11 == 0) {
                plVar35 = (long *)FUN_00c4e600();
                if (plVar35[600] != 0) {
                  local_80[0] = plVar35 + plVar35[600] * 3;
                  local_68 = plVar35;
                  FUN_00c4ea30(&local_68,local_80);
                  plVar28 = (long *)*plVar35;
                  plVar20 = plVar35;
                  if (plVar35[600] != 0) {
                    plVar20 = plVar35 + plVar35[600] * 3;
                  }
                  if (plVar20 == plVar35) {
                    uVar19 = 0;
                    uVar29 = 0;
                  }
                  else {
                    (**(code **)(*(long *)*plVar35 + 0xd0))();
                    if ((long *)*plVar35 != plVar28) {
                      (**(code **)(*plVar28 + 0x100))(plVar28,plVar35,plVar35);
                      plVar28 = (long *)*plVar35;
                    }
                    plVar22 = plVar35 + 3;
                    if (plVar20 == plVar22) {
                      uVar19 = 0;
                      uVar29 = 1;
                    }
                    else {
                      (**(code **)(*(long *)*plVar22 + 0xd0))();
                      bVar10 = (long *)*plVar22 != plVar28;
                      if (bVar10) {
                        (**(code **)(*plVar28 + 0x100))(plVar28,plVar35,plVar35 + 3);
                        plVar28 = (long *)plVar35[3];
                      }
                      uVar19 = (ulong)bVar10;
                      plVar22 = plVar35 + 6;
                      if (plVar20 == plVar22) {
                        uVar29 = 2;
                      }
                      else {
                        (**(code **)(*(long *)*plVar22 + 0xd0))();
                        if ((long *)*plVar22 != plVar28) {
                          (**(code **)(*plVar28 + 0x100))(plVar28,plVar35 + uVar19 * 3,plVar35 + 6);
                          plVar28 = (long *)plVar35[6];
                          uVar19 = 2;
                        }
                        plVar22 = plVar35 + 9;
                        if (plVar20 == plVar22) {
                          uVar29 = 3;
                        }
                        else {
                          (**(code **)(*(long *)*plVar22 + 0xd0))();
                          if ((long *)*plVar22 != plVar28) {
                            (**(code **)(*plVar28 + 0x100))
                                      (plVar28,plVar35 + uVar19 * 3,plVar35 + 9);
                            plVar28 = (long *)plVar35[9];
                            uVar19 = 3;
                          }
                          plVar22 = plVar35 + 0xc;
                          if (plVar20 == plVar22) {
                            uVar29 = 4;
                          }
                          else {
                            (**(code **)(*(long *)*plVar22 + 0xd0))();
                            if ((long *)*plVar22 != plVar28) {
                              (**(code **)(*plVar28 + 0x100))
                                        (plVar28,plVar35 + uVar19 * 3,plVar35 + 0xc);
                              plVar28 = (long *)plVar35[0xc];
                              uVar19 = 4;
                            }
                            plVar22 = plVar35 + 0xf;
                            if (plVar20 == plVar22) {
                              uVar29 = 5;
                            }
                            else {
                              (**(code **)(*(long *)*plVar22 + 0xd0))();
                              if ((long *)*plVar22 != plVar28) {
                                (**(code **)(*plVar28 + 0x100))
                                          (plVar28,plVar35 + uVar19 * 3,plVar35 + 0xf);
                                plVar28 = (long *)plVar35[0xf];
                                uVar19 = 5;
                              }
                              plVar22 = plVar35 + 0x12;
                              if (plVar20 == plVar22) {
                                uVar29 = 6;
                              }
                              else {
                                uVar29 = 6;
                                do {
                                  (**(code **)(*(long *)*plVar22 + 0xd0))();
                                  if ((long *)*plVar22 != plVar28) {
                                    (**(code **)(*plVar28 + 0x100))
                                              (plVar28,plVar35 + uVar19 * 3,plVar22);
                                    plVar28 = (long *)*plVar22;
                                    uVar19 = uVar29;
                                  }
                                  plVar22 = plVar22 + 3;
                                  uVar29 = uVar29 + 1;
                                } while (plVar20 != plVar22);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  (**(code **)(*plVar28 + 0x100))(plVar28,plVar35 + uVar19 * 3,plVar35 + uVar29 * 3)
                  ;
                  plVar35[600] = 0;
                }
                *(undefined4 *)(lVar12 + 0x12cc) = 0;
              }
            }
          }
          lVar12 = *(long *)(lVar26 + 0x1d8);
        }
        fVar37 = (float)param_1;
        local_68 = (long *)CONCAT44(local_68._4_4_,fVar37);
LAB_0142b56c:
        lVar23 = *(long *)(lVar12 + 0x80) - *(long *)(lVar12 + 0x78);
        if (lVar23 != 0) goto LAB_0142bbcc;
        uVar29 = *(ulong *)(lVar12 + 0x10);
        plVar35 = (long *)((long)(uVar29 - *(long *)(lVar12 + 8)) >> 7);
        if (uVar29 < *(ulong *)(lVar12 + 0x18)) {
          FUN_0142cfd8(*(undefined8 *)(lVar12 + 0x20),uVar29,&local_118);
          *(ulong *)(lVar12 + 0x10) = uVar29 + 0x80;
        }
        else {
          uVar19 = *(ulong *)(lVar12 + 0x28);
          uVar29 = (long)plVar35 + 1;
          if (0x7ffffffffffffffe < uVar19) {
            uVar19 = 0x7fffffffffffffff;
          }
          if (uVar19 < uVar29) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar23 = *(ulong *)(lVar12 + 0x18) - *(long *)(lVar12 + 8);
          uVar14 = lVar23 >> 6;
          if (uVar29 <= uVar14) {
            uVar29 = uVar14;
          }
          puVar2 = (undefined8 *)(lVar12 + 0x20);
          if (uVar19 >> 1 <= (ulong)(lVar23 >> 7)) {
            uVar29 = uVar19;
          }
          if (uVar29 == 0) {
            lVar23 = 0;
          }
          else {
            lVar23 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar29 << 7,0x10);
            if (lVar23 == 0) {
              (**(code **)(*(long *)*puVar2 + 0xe8))();
            }
          }
          lVar33 = lVar23 + (long)plVar35 * 0x80;
          FUN_0142cfd8(*(undefined8 *)(lVar12 + 0x20),lVar33,&local_118);
          puVar27 = *(undefined8 **)(lVar12 + 8);
          puVar30 = *(undefined8 **)(lVar12 + 0x10);
          lVar24 = lVar33 + 0x80;
          if (puVar30 == puVar27) {
            puVar30 = puVar27;
          }
          else {
            lVar33 = lVar33 + -0x80;
            FUN_015385dc(puVar2,lVar33);
            if (puVar30 + -0x10 != puVar27) {
              do {
                lVar33 = lVar33 + -0x80;
                FUN_015385dc(puVar2,lVar33,puVar30 + -0x20);
                puVar30 = puVar30 + -0x10;
              } while (puVar27 + 0x10 != puVar30);
            }
            puVar27 = *(undefined8 **)(lVar12 + 8);
            puVar30 = *(undefined8 **)(lVar12 + 0x10);
          }
          *(long *)(lVar12 + 8) = lVar33;
          *(long *)(lVar12 + 0x10) = lVar24;
          lVar24 = *(long *)(lVar12 + 0x18);
          *(ulong *)(lVar12 + 0x18) = lVar23 + uVar29 * 0x80;
          if (puVar30 != puVar27) {
            pcVar15 = (code *)puVar30[-0xf];
            puVar21 = puVar30 + -0x10;
            if (pcVar15 != (code *)0x0) {
              puVar30[-0xe] = 0;
              puVar30[-0xd] = 0;
              *puVar21 = 0;
              puVar30[-0xf] = 0;
              (*pcVar15)(puVar30 + -0xc);
            }
            while (puVar30 = puVar21, puVar30 != puVar27) {
              pcVar15 = (code *)puVar30[-0xf];
              puVar21 = puVar30 + -0x10;
              if (pcVar15 != (code *)0x0) {
                puVar30[-0xe] = 0;
                puVar30[-0xd] = 0;
                puVar30[-0x10] = 0;
                puVar30[-0xf] = 0;
                (*pcVar15)(puVar30 + -0xc);
              }
            }
          }
          if (puVar27 != (undefined8 *)0x0) {
            lVar24 = lVar24 - (long)puVar27;
            plVar20 = (long *)*puVar2;
            uVar29 = (**(code **)(*plVar20 + 0xf8))(plVar20);
            if (((uVar29 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
              (**(code **)(*plVar20 + 0x18))(plVar20,puVar27,lVar24,0x10);
            }
            else {
              FUN_00c48fe8(plVar20,puVar27,lVar24,0x10);
            }
          }
        }
        *(long *)(lVar12 + 0xb0) = (long)plVar35 + 1;
        goto LAB_0142b640;
      }
      uVar29 = FUN_0142d93c(param_1,lVar26,&local_118);
LAB_0142b754:
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      puVar2 = local_f0;
      if (local_f0 != (undefined8 *)0x0) {
        psVar3 = (short *)(local_f0 + 3);
        do {
          sVar5 = *psVar3;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar10) {
            *psVar3 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)local_f0 + 0x1c);
          do {
            iVar11 = *piVar4;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar10) {
              *piVar4 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_a0 = (long *)*puVar2;
            FUN_00c44438(lVar26 + 0x8040,&local_a0);
          }
        }
        else if (sVar5 == 0) goto LAB_0142b7e8;
      }
      puVar2 = local_118;
      if (local_118 != (undefined8 *)0x0) {
        psVar3 = (short *)(local_118 + 3);
        do {
          sVar5 = *psVar3;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar10) {
            *psVar3 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)local_118 + 0x1c);
          do {
            iVar11 = *piVar4;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar10) {
              *piVar4 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_a0 = (long *)*puVar2;
            FUN_00c44438(lVar26 + 0x8040,&local_a0);
          }
        }
        else if (sVar5 == 0) goto LAB_0142b7e8;
      }
      lVar12 = *plVar1;
      lVar26 = nn::os::GetCurrentThread();
      if (lVar26 != lVar12) {
        lVar26 = nn::os::GetCurrentThread();
LAB_0142b784:
        if (*plVar1 == 0) goto code_r0x0142b78c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar31 + 0x20));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(plVar31 + 0x20));
              while (*plVar1 == 0) {
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar10) {
                  *plVar1 = lVar26;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_0142b794;
              }
            } while( true );
          }
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar26;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_0142b794:
        *(ulong *)(plVar31[9] + uVar34 * 0x10 + 8) = uVar29;
        plVar31[0x1f] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar31 + 0x20));
        goto LAB_0142b7b0;
      }
      *(ulong *)(plVar31[9] + uVar34 * 0x10 + 8) = uVar29;
LAB_0142b7b0:
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      puVar2 = local_160;
      if (local_160 != (undefined8 *)0x0) {
        psVar3 = (short *)(local_160 + 3);
        do {
          sVar5 = *psVar3;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar10) {
            *psVar3 = sVar5 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)local_160 + 0x1c);
          do {
            iVar11 = *piVar4;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar10) {
              *piVar4 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar11 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar26 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar26;
            local_118 = (undefined8 *)*puVar2;
            FUN_00c44438(lVar26 + 0x8040,&local_118);
          }
        }
        else if (sVar5 == 0) goto LAB_0142b7e8;
      }
    }
    if (local_128[0] != (undefined8 *)0x0) {
      psVar3 = (short *)(local_128[0] + 3);
      do {
        sVar5 = *psVar3;
        cVar7 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar10) {
          *psVar3 = sVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_128[0] + 0x1c);
        do {
          iVar11 = *piVar4;
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar10) {
            *piVar4 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar26 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar26;
          local_118 = (undefined8 *)*local_128[0];
          FUN_00c44438(lVar26 + 0x8040,&local_118);
        }
      }
      else if (sVar5 == 0) {
LAB_0142b7e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return uVar34;
code_r0x0142b3ec:
  cVar7 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar10) {
    *plVar1 = lVar26;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0142b3f4;
  goto LAB_0142b3e4;
code_r0x0142b504:
  cVar7 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar35,0x10);
  if (bVar10) {
    *plVar35 = lVar12;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0142b50c;
  goto LAB_0142b4fc;
LAB_0142bbcc:
  plVar35 = *(long **)(*(long *)(lVar12 + 0x80) + -8);
  *(long *)(lVar12 + 0x80) = lVar23 + *(long *)(lVar12 + 0x78) + -8;
  uVar29 = (ulong)plVar35 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(*(long *)(lVar12 + 0x40) + uVar29) =
       *(ulong *)(*(long *)(lVar12 + 0x40) + uVar29) &
       (1L << ((ulong)plVar35 & 0x3f) ^ 0xffffffffffffffffU);
  if (plVar35 < (long *)(*(long *)(lVar12 + 0x10) - *(long *)(lVar12 + 8) >> 7))
  goto code_r0x0142bc08;
  goto LAB_0142b56c;
code_r0x0142bc08:
  FUN_02201d90(*(long *)(lVar12 + 8) + (long)plVar35 * 0x80,&local_118);
  if (*(long **)(lVar12 + 0xb0) <= plVar35) {
    *(long *)(lVar12 + 0xb0) = (long)plVar35 + 1;
  }
LAB_0142b640:
  plVar28 = (long *)(lVar12 + 0xc0);
  lVar23 = *plVar28;
  lVar24 = *(long *)(lVar12 + 200) - lVar23 >> 3;
  plVar20 = (long *)(lVar24 * -0x5555555555555555);
  local_a0 = plVar35;
  if (plVar20 <= plVar35) {
    plVar22 = (long *)((long)plVar35 + 1);
    lVar24 = (long)plVar22 + lVar24 * 0x5555555555555555;
    if (plVar22 < plVar20 || lVar24 == 0) {
      if (plVar22 < plVar20) {
        *(long *)(lVar12 + 200) = lVar23 + (long)plVar22 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar28,lVar24);
      lVar23 = *plVar28;
    }
  }
  *(float *)(lVar23 + (long)plVar35 * 0x18 + 0x10) = fVar37;
  uVar19 = *(ulong *)(lVar12 + 0x130);
  uVar29 = uVar19 + 1;
  plVar20 = (long *)(lVar12 + 0xf8);
  *(ulong *)(lVar12 + 0x130) = uVar29;
  if (uVar19 == 0) {
    if (*(long *)(lVar12 + 0x100) - (long)*(undefined8 **)(lVar12 + 0xf8) >> 4 == 0) {
      FUN_0142d14c(plVar20,&local_a0,&local_68);
    }
    else {
      **(undefined8 **)(lVar12 + 0xf8) = plVar35;
      *(float *)(*plVar20 + 8) = fVar37;
    }
  }
  else {
    pvVar13 = *(void **)(lVar12 + 0xf8);
    uVar14 = uVar19 - 1;
    uVar17 = *(long *)(lVar12 + 0x100) - (long)pvVar13 >> 4;
    if (*(float *)((long)pvVar13 + uVar14 * 0x10 + 8) <= fVar37) {
      if (uVar17 < uVar29) {
        FUN_0142d14c(plVar20,&local_a0,&local_68);
        goto LAB_0142b6c4;
      }
      *(long **)((long)pvVar13 + uVar19 * 0x10) = plVar35;
      lVar12 = *plVar20 + uVar19 * 0x10;
    }
    else {
      if (uVar17 <= uVar29 && uVar29 - uVar17 != 0) {
        FUN_0103e51c(plVar20,uVar29 - uVar17);
        pvVar13 = (void *)*plVar20;
      }
      if (*(float *)((long)pvVar13 + 8) <= fVar37) {
        if (uVar19 - 2 < 3) {
          uVar16 = 1;
        }
        else {
          uVar29 = (ulong)((float)(uVar19 - 2) * 0.5);
          fVar36 = *(float *)((long)pvVar13 + (uVar29 + 1) * 0x10 + 8);
          if (fVar36 <= fVar37) {
            uVar17 = uVar14 - (uVar29 + 1);
          }
          else {
            uVar14 = uVar29 + 1;
            uVar17 = uVar29;
          }
          uVar16 = 1;
          uVar9 = uVar14;
          if (fVar36 <= fVar37) {
            uVar16 = uVar29 + 1;
          }
          while (uVar14 = uVar9, 2 < uVar17) {
            uVar29 = uVar16 + (long)((float)uVar17 * 0.5);
            uVar9 = uVar29;
            uVar17 = (long)((float)uVar17 * 0.5);
            if (*(float *)((long)pvVar13 + uVar29 * 0x10 + 8) <= fVar37) {
              uVar16 = uVar29;
              uVar9 = uVar14;
              uVar17 = uVar14 - uVar29;
            }
          }
        }
        if (uVar14 <= uVar19 && uVar16 <= uVar14) {
          pfVar18 = (float *)((long)pvVar13 + uVar14 * 0x10 + 8);
          while (fVar37 < *pfVar18) {
            uVar14 = uVar14 - 1;
            if ((uVar14 < uVar16) || (pfVar18 = pfVar18 + -4, uVar19 < uVar14)) goto LAB_0142c0c8;
          }
          uVar14 = uVar14 + 1;
        }
LAB_0142c0c8:
        if (uVar14 <= uVar19 && uVar16 <= uVar14) {
          uVar16 = uVar14;
        }
        pvVar13 = (void *)((long)pvVar13 + uVar16 * 0x10);
        memmove((void *)((long)pvVar13 + 0x10),pvVar13,(uVar19 - uVar16) * 0x10);
        *(long **)(*plVar20 + uVar16 * 0x10) = plVar35;
        lVar12 = *plVar20 + uVar16 * 0x10;
      }
      else {
        memmove((void *)((long)pvVar13 + 0x10),pvVar13,uVar19 << 4);
        *(long **)*plVar20 = plVar35;
        lVar12 = *plVar20;
      }
    }
    *(float *)(lVar12 + 8) = fVar37;
  }
LAB_0142b6c4:
  local_a0 = (long *)0x2;
  do {
    lVar12 = *(long *)(lVar26 + 0x160) - *(long *)(lVar26 + 0x158);
    local_98 = plVar35;
    if (lVar12 == 0) {
      uVar29 = *(long *)(lVar26 + 0xf0) - *(long *)(lVar26 + 0xe8) >> 4;
      FUN_013d2fe0(lVar26 + 0xe8,&local_a0);
LAB_0142b73c:
      *(ulong *)(lVar26 + 400) = uVar29 + 1;
      goto LAB_0142b744;
    }
    uVar29 = *(ulong *)(*(long *)(lVar26 + 0x160) + -8);
    *(long *)(lVar26 + 0x160) = lVar12 + *(long *)(lVar26 + 0x158) + -8;
    uVar19 = uVar29 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(lVar26 + 0x120) + uVar19) =
         *(ulong *)(*(long *)(lVar26 + 0x120) + uVar19) &
         (1L << (uVar29 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(lVar26 + 0xf0) - *(long *)(lVar26 + 0xe8) >> 4) <= uVar29);
  puVar2 = (undefined8 *)(*(long *)(lVar26 + 0xe8) + uVar29 * 0x10);
  *puVar2 = 2;
  puVar2[1] = plVar35;
  if (*(ulong *)(lVar26 + 400) <= uVar29) goto LAB_0142b73c;
LAB_0142b744:
  *(undefined8 *)(lVar26 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x38));
  goto LAB_0142b754;
code_r0x0142b78c:
  cVar7 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar10) {
    *plVar1 = lVar26;
    cVar7 = ExclusiveMonitorsStatus();
  }
  if (cVar7 == '\0') goto LAB_0142b794;
  goto LAB_0142b784;
}


