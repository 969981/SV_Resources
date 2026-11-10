/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132e8fc; name: FUN_0132e8fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0132e8fc(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  long *plVar4;
  short sVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  undefined *puVar11;
  undefined *puVar12;
  bool bVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  uint *puVar25;
  long lVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  ulong uVar30;
  undefined8 uVar31;
  long *local_1c8;
  long *local_1c0;
  undefined8 local_1b0;
  long *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  long *local_188;
  ulong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined1 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_ac;
  undefined4 local_a4;
  long *local_70 [2];
  
  if (*(long *)(param_2 + 8) == 0) {
    cVar10 = *(char *)(param_1 + 0x174);
  }
  else {
    cVar10 = *(char *)(*(long *)(param_2 + 8) + 600);
    *(char *)(param_1 + 0x174) = cVar10;
  }
  puVar11 = PTR_DAT_047d8c00;
  if (cVar10 == '\0') {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar14 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    puVar12 = PTR_DAT_047d8c10;
    puVar2 = PTR_DAT_047d8c08;
    lVar22 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar22;
    FUN_01330dd8(&local_1b0);
    puVar1 = PTR_DAT_047d1a08;
    local_140 = 0;
    uStack_128 = _UNK_03caaa98;
    local_130 = _DAT_03caaa90;
    local_1a8 = *(long **)(lVar22 + 0x68);
    local_70[0] = (long *)0x9b0;
    local_ac = 0x3f6666663e99999a;
    local_a4 = 2;
    uVar15 = (**(code **)PTR_DAT_047d1a08)(0,local_70,0);
    if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
      (**(code **)(puVar1 + 0x10))(uVar15,"hknpWorld");
    }
    FUN_01331c40(uVar15,&local_1b0);
    FUN_01330f00(&local_1b0);
    plVar16 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar15;
    if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
      plVar19 = plVar16 + 2;
      do {
        lVar22 = *plVar19;
        cVar10 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar13) {
          *plVar19 = lVar22 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar22 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))();
      }
    }
    if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar14 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar22 = *(long *)puVar2;
    *(long *)puVar12 = lVar22;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x50))
              (*(long **)(param_1 + 0x18),*(undefined8 *)(*(long *)(lVar22 + 0x70) + 0x110));
  }
  else {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar14 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar22 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar22;
    lVar22 = *(long *)(lVar22 + 0x70);
    plVar19 = *(long **)(param_1 + 0x18);
    plVar16 = *(long **)(lVar22 + 8);
    if (plVar19 != plVar16) {
      if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
        plVar16 = plVar16 + 2;
        do {
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar13) {
            *plVar16 = *plVar16 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        plVar19 = *(long **)(param_1 + 0x18);
        plVar16 = *(long **)(lVar22 + 8);
      }
      *(long **)(param_1 + 0x18) = plVar16;
      if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
        plVar16 = plVar19 + 2;
        do {
          lVar22 = *plVar16;
          cVar10 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar13) {
            *plVar16 = lVar22 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar22 + -1 == 0) {
          (**(code **)(*plVar19 + 0x18))();
        }
      }
    }
  }
  puVar17 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
  if (puVar17 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    uVar31 = 0;
    uVar15 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_01330644;
    *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = param_3;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[4] = 0;
    puVar17[6] = 0;
    puVar17[7] = param_3;
    uVar15 = 8;
    uVar31 = 0x68;
    *(undefined4 *)(puVar17 + 5) = 0;
    *(undefined4 *)(puVar17 + 10) = 0;
    puVar17[0xb] = 0;
    puVar17[2] = param_3;
    puVar17[3] = 0x3fffffffffffffff;
    puVar17[8] = 0x3fffffffffffffff;
    puVar17[9] = 0;
    *(undefined4 *)(puVar17 + 0xc) = 0x3f800000;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    plVar16 = param_3;
  }
  lVar22 = *(long *)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar17;
  if (lVar22 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar20 = FUN_00c4e600();
    iVar8 = *(int *)(lVar20 + 0x12c8);
    iVar14 = iVar8 + 1;
    *(int *)(lVar20 + 0x12c8) = iVar14;
    if (*(int *)(lVar20 + 0x12cc) <= iVar8) {
      *(int *)(lVar20 + 0x12cc) = iVar14;
    }
    FUN_013313fc(lVar22);
    plVar19 = *(long **)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar27 = *(undefined8 *)(param_1 + 0x38);
    uVar18 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar18 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar22,uVar6,uVar27);
    }
    else {
      FUN_00c48fe8(plVar19,lVar22,uVar6,uVar27);
    }
    lVar22 = FUN_00c4e600();
    iVar14 = *(int *)(lVar22 + 0x12c8) + -1;
    *(int *)(lVar22 + 0x12c8) = iVar14;
    if (iVar14 == 0) {
      plVar19 = (long *)FUN_00c4e600();
      if (plVar19[600] != 0) {
        local_70[0] = plVar19 + plVar19[600] * 3;
        local_1b0 = plVar19;
        FUN_00c4ea30(&local_1b0,local_70);
        plVar29 = (long *)*plVar19;
        plVar28 = plVar19;
        if (plVar19[600] != 0) {
          plVar28 = plVar19 + plVar19[600] * 3;
        }
        if (plVar28 == plVar19) {
          local_1c0 = (long *)0x0;
          uVar18 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar19 + 0xd0))();
          if ((long *)*plVar19 != plVar29) {
            (**(code **)(*plVar29 + 0x100))(plVar29,plVar19,plVar19);
            plVar29 = (long *)*plVar19;
          }
          plVar4 = plVar19 + 3;
          if (plVar28 == plVar4) {
            local_1c0 = (long *)0x0;
            uVar18 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar4 + 0xd0))();
            bVar13 = (long *)*plVar4 != plVar29;
            if (bVar13) {
              (**(code **)(*plVar29 + 0x100))(plVar29,plVar19,plVar19 + 3);
              plVar29 = (long *)plVar19[3];
            }
            local_1c0 = (long *)(ulong)bVar13;
            plVar4 = plVar19 + 6;
            if (plVar28 == plVar4) {
              uVar18 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar4 + 0xd0))();
              if ((long *)*plVar4 != plVar29) {
                (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 6);
                plVar29 = (long *)plVar19[6];
                local_1c0 = (long *)0x2;
              }
              plVar4 = plVar19 + 9;
              if (plVar28 == plVar4) {
                uVar18 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar4 + 0xd0))();
                if ((long *)*plVar4 != plVar29) {
                  (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 9)
                  ;
                  plVar29 = (long *)plVar19[9];
                  local_1c0 = (long *)0x3;
                }
                plVar4 = plVar19 + 0xc;
                if (plVar28 == plVar4) {
                  uVar18 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar4 + 0xd0))();
                  if ((long *)*plVar4 != plVar29) {
                    (**(code **)(*plVar29 + 0x100))
                              (plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 0xc);
                    plVar29 = (long *)plVar19[0xc];
                    local_1c0 = (long *)0x4;
                  }
                  plVar4 = plVar19 + 0xf;
                  if (plVar28 == plVar4) {
                    uVar18 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar4 + 0xd0))();
                    if ((long *)*plVar4 != plVar29) {
                      (**(code **)(*plVar29 + 0x100))
                                (plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 0xf);
                      plVar29 = (long *)plVar19[0xf];
                      local_1c0 = (long *)0x5;
                    }
                    local_1c8 = plVar19 + 0x12;
                    uVar18 = 6;
                    if (plVar28 != local_1c8) {
                      do {
                        (**(code **)(*(long *)*local_1c8 + 0xd0))();
                        if ((long *)*local_1c8 != plVar29) {
                          (**(code **)(*plVar29 + 0x100))
                                    (plVar29,plVar19 + (long)local_1c0 * 3,local_1c8);
                          plVar29 = (long *)*local_1c8;
                          local_1c0 = (long *)uVar18;
                        }
                        local_1c8 = local_1c8 + 3;
                        uVar18 = uVar18 + 1;
                      } while (plVar28 != local_1c8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + uVar18 * 3);
        plVar19[600] = 0;
      }
      *(undefined4 *)(lVar22 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x28) = plVar16;
  *(undefined8 *)(param_1 + 0x30) = uVar31;
  *(undefined8 *)(param_1 + 0x38) = uVar15;
  puVar17 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x68,8);
  if (puVar17 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    uVar31 = 0;
    uVar15 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_01330644;
    *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = param_3;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[4] = 0;
    puVar17[6] = 0;
    puVar17[7] = param_3;
    uVar15 = 8;
    uVar31 = 0x68;
    *(undefined4 *)(puVar17 + 5) = 0;
    *(undefined4 *)(puVar17 + 10) = 0;
    puVar17[0xb] = 0;
    puVar17[2] = param_3;
    puVar17[3] = 0x3fffffffffffffff;
    puVar17[8] = 0x3fffffffffffffff;
    puVar17[9] = 0;
    *(undefined4 *)(puVar17 + 0xc) = 0x3f800000;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    plVar16 = param_3;
  }
  lVar22 = *(long *)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar17;
  if (lVar22 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar20 = FUN_00c4e600();
    iVar8 = *(int *)(lVar20 + 0x12c8);
    iVar14 = iVar8 + 1;
    *(int *)(lVar20 + 0x12c8) = iVar14;
    if (*(int *)(lVar20 + 0x12cc) <= iVar8) {
      *(int *)(lVar20 + 0x12cc) = iVar14;
    }
    FUN_013315dc(lVar22);
    plVar19 = *(long **)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uVar27 = *(undefined8 *)(param_1 + 0x58);
    uVar18 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar18 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar22,uVar6,uVar27);
    }
    else {
      FUN_00c48fe8(plVar19,lVar22,uVar6,uVar27);
    }
    lVar22 = FUN_00c4e600();
    iVar14 = *(int *)(lVar22 + 0x12c8) + -1;
    *(int *)(lVar22 + 0x12c8) = iVar14;
    if (iVar14 == 0) {
      plVar19 = (long *)FUN_00c4e600();
      if (plVar19[600] != 0) {
        local_70[0] = plVar19 + plVar19[600] * 3;
        local_1b0 = plVar19;
        FUN_00c4ea30(&local_1b0,local_70);
        plVar29 = (long *)*plVar19;
        plVar28 = plVar19;
        if (plVar19[600] != 0) {
          plVar28 = plVar19 + plVar19[600] * 3;
        }
        if (plVar28 == plVar19) {
          local_1c0 = (long *)0x0;
          uVar18 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar19 + 0xd0))();
          if ((long *)*plVar19 != plVar29) {
            (**(code **)(*plVar29 + 0x100))(plVar29,plVar19,plVar19);
            plVar29 = (long *)*plVar19;
          }
          plVar4 = plVar19 + 3;
          if (plVar28 == plVar4) {
            local_1c0 = (long *)0x0;
            uVar18 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar4 + 0xd0))();
            bVar13 = (long *)*plVar4 != plVar29;
            if (bVar13) {
              (**(code **)(*plVar29 + 0x100))(plVar29,plVar19,plVar19 + 3);
              plVar29 = (long *)plVar19[3];
            }
            local_1c0 = (long *)(ulong)bVar13;
            plVar4 = plVar19 + 6;
            if (plVar28 == plVar4) {
              uVar18 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar4 + 0xd0))();
              if ((long *)*plVar4 != plVar29) {
                (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 6);
                plVar29 = (long *)plVar19[6];
                local_1c0 = (long *)0x2;
              }
              plVar4 = plVar19 + 9;
              if (plVar28 == plVar4) {
                uVar18 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar4 + 0xd0))();
                if ((long *)*plVar4 != plVar29) {
                  (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 9)
                  ;
                  plVar29 = (long *)plVar19[9];
                  local_1c0 = (long *)0x3;
                }
                plVar4 = plVar19 + 0xc;
                if (plVar28 == plVar4) {
                  uVar18 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar4 + 0xd0))();
                  if ((long *)*plVar4 != plVar29) {
                    (**(code **)(*plVar29 + 0x100))
                              (plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 0xc);
                    plVar29 = (long *)plVar19[0xc];
                    local_1c0 = (long *)0x4;
                  }
                  plVar4 = plVar19 + 0xf;
                  if (plVar28 == plVar4) {
                    uVar18 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar4 + 0xd0))();
                    if ((long *)*plVar4 != plVar29) {
                      (**(code **)(*plVar29 + 0x100))
                                (plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 0xf);
                      plVar29 = (long *)plVar19[0xf];
                      local_1c0 = (long *)0x5;
                    }
                    local_1c8 = plVar19 + 0x12;
                    uVar18 = 6;
                    if (plVar28 != local_1c8) {
                      do {
                        (**(code **)(*(long *)*local_1c8 + 0xd0))();
                        if ((long *)*local_1c8 != plVar29) {
                          (**(code **)(*plVar29 + 0x100))
                                    (plVar29,plVar19 + (long)local_1c0 * 3,local_1c8);
                          plVar29 = (long *)*local_1c8;
                          local_1c0 = (long *)uVar18;
                        }
                        local_1c8 = local_1c8 + 3;
                        uVar18 = uVar18 + 1;
                      } while (plVar28 != local_1c8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + uVar18 * 3);
        plVar19[600] = 0;
      }
      *(undefined4 *)(lVar22 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x48) = plVar16;
  *(undefined8 *)(param_1 + 0x50) = uVar31;
  *(undefined8 *)(param_1 + 0x58) = uVar15;
  puVar17 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  if (puVar17 == (undefined8 *)0x0) {
    local_1a0 = (undefined8 *)0x0;
    local_198 = (undefined8 *)0x0;
    local_1a8 = (long *)0x0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_01330644;
    *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = param_3;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[3] = param_3;
    *(undefined4 *)(puVar17 + 6) = 0;
    puVar17[4] = 0x1fffffffffffffff;
    puVar17[5] = 0;
    local_1a0 = (undefined8 *)&DAT_00000038;
    local_198 = (undefined8 *)&DAT_00000008;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    local_1a8 = param_3;
  }
  local_1b0 = (long *)0x0;
  lVar22 = *(long *)(param_1 + 0xa0);
  *(undefined8 **)(param_1 + 0xa0) = puVar17;
  if (lVar22 == 0) {
    *(undefined8 **)(param_1 + 0xb0) = local_1a0;
    *(undefined8 **)(param_1 + 0xb8) = local_198;
    *(long **)(param_1 + 0xa8) = local_1a8;
    local_1b0 = (long *)0x0;
  }
  else {
    FUN_01331820(param_1 + 0xa8);
    lVar22 = (long)local_1b0;
    *(long **)(param_1 + 0xa8) = local_1a8;
    *(undefined8 **)(param_1 + 0xb0) = local_1a0;
    *(undefined8 **)(param_1 + 0xb8) = local_198;
    local_1b0 = (long *)0x0;
    if (lVar22 != 0) {
      FUN_01331820(&local_1a8);
    }
  }
  puVar17 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  if (puVar17 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    uVar31 = 0;
    uVar15 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_01330644;
    *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = param_3;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
    *puVar17 = 0;
    puVar17[1] = 0;
    *(undefined4 *)(puVar17 + 6) = 0;
    puVar17[2] = 0;
    puVar17[3] = param_3;
    uVar15 = 8;
    uVar31 = 0x38;
    puVar17[4] = 0x3ffffffffffffff;
    puVar17[5] = 0;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    plVar16 = param_3;
  }
  lVar22 = *(long *)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x60) = puVar17;
  if (lVar22 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar20 = FUN_00c4e600();
    iVar8 = *(int *)(lVar20 + 0x12c8);
    iVar14 = iVar8 + 1;
    *(int *)(lVar20 + 0x12c8) = iVar14;
    if (*(int *)(lVar20 + 0x12cc) <= iVar8) {
      *(int *)(lVar20 + 0x12cc) = iVar14;
    }
    FUN_0133113c(lVar22);
    plVar19 = *(long **)(param_1 + 0x68);
    uVar6 = *(undefined8 *)(param_1 + 0x70);
    uVar27 = *(undefined8 *)(param_1 + 0x78);
    uVar18 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar18 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar22,uVar6,uVar27);
    }
    else {
      FUN_00c48fe8(plVar19,lVar22,uVar6,uVar27);
    }
    lVar22 = FUN_00c4e600();
    iVar14 = *(int *)(lVar22 + 0x12c8) + -1;
    *(int *)(lVar22 + 0x12c8) = iVar14;
    if (iVar14 == 0) {
      plVar19 = (long *)FUN_00c4e600();
      if (plVar19[600] != 0) {
        local_70[0] = plVar19 + plVar19[600] * 3;
        local_1b0 = plVar19;
        FUN_00c4ea30(&local_1b0,local_70);
        plVar29 = (long *)*plVar19;
        plVar28 = plVar19;
        if (plVar19[600] != 0) {
          plVar28 = plVar19 + plVar19[600] * 3;
        }
        if (plVar28 == plVar19) {
          local_1c0 = (long *)0x0;
          uVar18 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar19 + 0xd0))();
          if ((long *)*plVar19 != plVar29) {
            (**(code **)(*plVar29 + 0x100))(plVar29,plVar19,plVar19);
            plVar29 = (long *)*plVar19;
          }
          plVar4 = plVar19 + 3;
          if (plVar28 == plVar4) {
            local_1c0 = (long *)0x0;
            uVar18 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar4 + 0xd0))();
            bVar13 = (long *)*plVar4 != plVar29;
            if (bVar13) {
              (**(code **)(*plVar29 + 0x100))(plVar29,plVar19,plVar19 + 3);
              plVar29 = (long *)plVar19[3];
            }
            local_1c0 = (long *)(ulong)bVar13;
            plVar4 = plVar19 + 6;
            if (plVar28 == plVar4) {
              uVar18 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar4 + 0xd0))();
              if ((long *)*plVar4 != plVar29) {
                (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 6);
                plVar29 = (long *)plVar19[6];
                local_1c0 = (long *)0x2;
              }
              plVar4 = plVar19 + 9;
              if (plVar28 == plVar4) {
                uVar18 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar4 + 0xd0))();
                if ((long *)*plVar4 != plVar29) {
                  (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 9)
                  ;
                  plVar29 = (long *)plVar19[9];
                  local_1c0 = (long *)0x3;
                }
                plVar4 = plVar19 + 0xc;
                if (plVar28 == plVar4) {
                  uVar18 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar4 + 0xd0))();
                  if ((long *)*plVar4 != plVar29) {
                    (**(code **)(*plVar29 + 0x100))
                              (plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 0xc);
                    plVar29 = (long *)plVar19[0xc];
                    local_1c0 = (long *)0x4;
                  }
                  plVar4 = plVar19 + 0xf;
                  if (plVar28 == plVar4) {
                    uVar18 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar4 + 0xd0))();
                    if ((long *)*plVar4 != plVar29) {
                      (**(code **)(*plVar29 + 0x100))
                                (plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 0xf);
                      plVar29 = (long *)plVar19[0xf];
                      local_1c0 = (long *)0x5;
                    }
                    local_1c8 = plVar19 + 0x12;
                    uVar18 = 6;
                    if (plVar28 != local_1c8) {
                      do {
                        (**(code **)(*(long *)*local_1c8 + 0xd0))();
                        if ((long *)*local_1c8 != plVar29) {
                          (**(code **)(*plVar29 + 0x100))
                                    (plVar29,plVar19 + (long)local_1c0 * 3,local_1c8);
                          plVar29 = (long *)*local_1c8;
                          local_1c0 = (long *)uVar18;
                        }
                        local_1c8 = local_1c8 + 3;
                        uVar18 = uVar18 + 1;
                      } while (plVar28 != local_1c8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + uVar18 * 3);
        plVar19[600] = 0;
      }
      *(undefined4 *)(lVar22 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x68) = plVar16;
  *(undefined8 *)(param_1 + 0x70) = uVar31;
  *(undefined8 *)(param_1 + 0x78) = uVar15;
  puVar17 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  if (puVar17 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    uVar31 = 0;
    uVar15 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_01330644;
    *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = param_3;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
    *puVar17 = 0;
    puVar17[1] = 0;
    *(undefined4 *)(puVar17 + 6) = 0;
    puVar17[2] = 0;
    puVar17[3] = param_3;
    uVar15 = 8;
    uVar31 = 0x38;
    puVar17[4] = 0x3ffffffffffffff;
    puVar17[5] = 0;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    plVar16 = param_3;
  }
  lVar22 = *(long *)(param_1 + 0x80);
  *(undefined8 **)(param_1 + 0x80) = puVar17;
  if (lVar22 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar20 = FUN_00c4e600();
    iVar8 = *(int *)(lVar20 + 0x12c8);
    iVar14 = iVar8 + 1;
    *(int *)(lVar20 + 0x12c8) = iVar14;
    if (*(int *)(lVar20 + 0x12cc) <= iVar8) {
      *(int *)(lVar20 + 0x12cc) = iVar14;
    }
    FUN_0133113c(lVar22);
    plVar19 = *(long **)(param_1 + 0x88);
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    uVar27 = *(undefined8 *)(param_1 + 0x98);
    uVar18 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar18 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar22,uVar6,uVar27);
    }
    else {
      FUN_00c48fe8(plVar19,lVar22,uVar6,uVar27);
    }
    lVar22 = FUN_00c4e600();
    iVar14 = *(int *)(lVar22 + 0x12c8) + -1;
    *(int *)(lVar22 + 0x12c8) = iVar14;
    if (iVar14 == 0) {
      plVar19 = (long *)FUN_00c4e600();
      if (plVar19[600] != 0) {
        local_70[0] = plVar19 + plVar19[600] * 3;
        local_1b0 = plVar19;
        FUN_00c4ea30(&local_1b0,local_70);
        plVar29 = (long *)*plVar19;
        plVar28 = plVar19;
        if (plVar19[600] != 0) {
          plVar28 = plVar19 + plVar19[600] * 3;
        }
        if (plVar28 == plVar19) {
          local_1c0 = (long *)0x0;
          uVar18 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar19 + 0xd0))();
          if ((long *)*plVar19 != plVar29) {
            (**(code **)(*plVar29 + 0x100))(plVar29,plVar19,plVar19);
            plVar29 = (long *)*plVar19;
          }
          plVar4 = plVar19 + 3;
          if (plVar28 == plVar4) {
            local_1c0 = (long *)0x0;
            uVar18 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar4 + 0xd0))();
            bVar13 = (long *)*plVar4 != plVar29;
            if (bVar13) {
              (**(code **)(*plVar29 + 0x100))(plVar29,plVar19,plVar19 + 3);
              plVar29 = (long *)plVar19[3];
            }
            local_1c0 = (long *)(ulong)bVar13;
            plVar4 = plVar19 + 6;
            if (plVar28 == plVar4) {
              uVar18 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar4 + 0xd0))();
              if ((long *)*plVar4 != plVar29) {
                (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 6);
                plVar29 = (long *)plVar19[6];
                local_1c0 = (long *)0x2;
              }
              plVar4 = plVar19 + 9;
              if (plVar28 == plVar4) {
                uVar18 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar4 + 0xd0))();
                if ((long *)*plVar4 != plVar29) {
                  (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 9)
                  ;
                  plVar29 = (long *)plVar19[9];
                  local_1c0 = (long *)0x3;
                }
                plVar4 = plVar19 + 0xc;
                if (plVar28 == plVar4) {
                  uVar18 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar4 + 0xd0))();
                  if ((long *)*plVar4 != plVar29) {
                    (**(code **)(*plVar29 + 0x100))
                              (plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 0xc);
                    plVar29 = (long *)plVar19[0xc];
                    local_1c0 = (long *)0x4;
                  }
                  plVar4 = plVar19 + 0xf;
                  if (plVar28 == plVar4) {
                    uVar18 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar4 + 0xd0))();
                    if ((long *)*plVar4 != plVar29) {
                      (**(code **)(*plVar29 + 0x100))
                                (plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + 0xf);
                      plVar29 = (long *)plVar19[0xf];
                      local_1c0 = (long *)0x5;
                    }
                    local_1c8 = plVar19 + 0x12;
                    uVar18 = 6;
                    if (plVar28 != local_1c8) {
                      do {
                        (**(code **)(*(long *)*local_1c8 + 0xd0))();
                        if ((long *)*local_1c8 != plVar29) {
                          (**(code **)(*plVar29 + 0x100))
                                    (plVar29,plVar19 + (long)local_1c0 * 3,local_1c8);
                          plVar29 = (long *)*local_1c8;
                          local_1c0 = (long *)uVar18;
                        }
                        local_1c8 = local_1c8 + 3;
                        uVar18 = uVar18 + 1;
                      } while (plVar28 != local_1c8);
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar29 + 0x100))(plVar29,plVar19 + (long)local_1c0 * 3,plVar19 + uVar18 * 3);
        plVar19[600] = 0;
      }
      *(undefined4 *)(lVar22 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x88) = plVar16;
  *(undefined8 *)(param_1 + 0x90) = uVar31;
  *(undefined8 *)(param_1 + 0x98) = uVar15;
  puVar17 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x38,8);
  if (puVar17 == (undefined8 *)0x0) {
    param_3 = (long *)0x0;
    uVar31 = 0;
    uVar15 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar22 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar22 + 0x80)) {
LAB_01330644:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = param_3;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
    *puVar17 = 0;
    puVar17[1] = 0;
    *(undefined4 *)(puVar17 + 6) = 0;
    puVar17[2] = 0;
    puVar17[3] = param_3;
    uVar15 = 8;
    uVar31 = 0x38;
    puVar17[4] = 0x1ffffffffffffff;
    puVar17[5] = 0;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
  }
  plVar16 = *(long **)(param_1 + 0xc0);
  *(undefined8 **)(param_1 + 0xc0) = puVar17;
  if (plVar16 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar22 = FUN_00c4e600();
    iVar8 = *(int *)(lVar22 + 0x12c8);
    iVar14 = iVar8 + 1;
    *(int *)(lVar22 + 0x12c8) = iVar14;
    if (*(int *)(lVar22 + 0x12cc) <= iVar8) {
      *(int *)(lVar22 + 0x12cc) = iVar14;
    }
    lVar22 = *plVar16;
    if (lVar22 != 0) {
      lVar26 = plVar16[1];
      lVar20 = lVar22;
      if (lVar26 != lVar22) {
        *(undefined4 *)(lVar26 + -0x20) = 0;
        if ((-1 < (int)*(uint *)(lVar26 + -0x1c)) && (*(long *)(lVar26 + -0x28) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(lVar26 + -0x28),
                     (ulong)*(uint *)(lVar26 + -0x1c) << 2);
        }
        *(undefined8 *)(lVar26 + -0x28) = 0;
        *(undefined4 *)(lVar26 + -0x1c) = 0x80000000;
        if (lVar26 + -0x80 != lVar22) {
          *(undefined4 *)(lVar26 + -0xa0) = 0;
          if ((-1 < (int)*(uint *)(lVar26 + -0x9c)) && (*(long *)(lVar26 + -0xa8) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*(long *)(lVar26 + -0xa8),
                       (ulong)*(uint *)(lVar26 + -0x9c) << 2);
          }
          *(undefined8 *)(lVar26 + -0xa8) = 0;
          *(undefined4 *)(lVar26 + -0x9c) = 0x80000000;
          if (lVar26 + -0x100 != lVar22) {
            *(undefined4 *)(lVar26 + -0x120) = 0;
            uVar9 = *(uint *)(lVar26 + -0x11c);
            if ((-1 < (int)uVar9) && (lVar20 = *(long *)(lVar26 + -0x128), lVar20 != 0)) {
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                        (PTR_PTR_047d1a50,lVar20,(ulong)uVar9 << 2);
            }
            *(long *)(lVar26 + -0x128) = 0;
            *(uint *)(lVar26 + -0x11c) = 0x80000000;
            if (lVar26 + -0x180 != lVar22) {
              *(undefined4 *)(lVar26 + -0x1a0) = 0;
              uVar9 = *(uint *)(lVar26 + -0x19c);
              if ((-1 < (int)uVar9) && (lVar20 = *(long *)(lVar26 + -0x1a8), lVar20 != 0)) {
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                          (PTR_PTR_047d1a50,lVar20,(ulong)uVar9 << 2);
              }
              *(long *)(lVar26 + -0x1a8) = 0;
              *(uint *)(lVar26 + -0x19c) = 0x80000000;
              if (lVar26 + -0x200 != lVar22) {
                *(undefined4 *)(lVar26 + -0x220) = 0;
                uVar9 = *(uint *)(lVar26 + -0x21c);
                if ((-1 < (int)uVar9) && (lVar20 = *(long *)(lVar26 + -0x228), lVar20 != 0)) {
                  (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                            (PTR_PTR_047d1a50,lVar20,(ulong)uVar9 << 2);
                }
                *(long *)(lVar26 + -0x228) = 0;
                *(uint *)(lVar26 + -0x21c) = 0x80000000;
                if (lVar26 + -0x280 != lVar22) {
                  do {
                    *(undefined4 *)(lVar26 + -0x2a0) = 0;
                    puVar25 = (uint *)(lVar26 + -0x29c);
                    uVar9 = *puVar25;
                    if ((-1 < (int)uVar9) && (*(long *)(lVar26 + -0x2a8) != 0)) {
                      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                                (PTR_PTR_047d1a50,*(long *)(lVar26 + -0x2a8),(ulong)uVar9 << 2);
                    }
                    puVar17 = (undefined8 *)(lVar26 + -0x2a8);
                    lVar26 = lVar26 + -0x80;
                    *puVar17 = 0;
                    *puVar25 = 0x80000000;
                  } while (lVar22 + 0x280 != lVar26);
                }
              }
            }
          }
        }
        lVar20 = *plVar16;
      }
      lVar26 = plVar16[2];
      plVar19 = (long *)plVar16[3];
      plVar16[1] = lVar22;
      uVar18 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar18 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar20,lVar26 - lVar20,0x10);
      }
      else {
        FUN_00c48fe8(plVar19,lVar20,lVar26 - lVar20,0x10);
      }
    }
    plVar19 = *(long **)(param_1 + 200);
    uVar6 = *(undefined8 *)(param_1 + 0xd0);
    uVar27 = *(undefined8 *)(param_1 + 0xd8);
    uVar18 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar18 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar16,uVar6,uVar27);
    }
    else {
      FUN_00c48fe8(plVar19,plVar16,uVar6,uVar27);
    }
    lVar22 = FUN_00c4e600();
    iVar14 = *(int *)(lVar22 + 0x12c8) + -1;
    *(int *)(lVar22 + 0x12c8) = iVar14;
    if (iVar14 == 0) {
      plVar16 = (long *)FUN_00c4e600();
      if (plVar16[600] != 0) {
        local_70[0] = plVar16 + plVar16[600] * 3;
        local_1b0 = plVar16;
        FUN_00c4ea30(&local_1b0,local_70);
        plVar28 = (long *)*plVar16;
        plVar19 = plVar16;
        if (plVar16[600] != 0) {
          plVar19 = plVar16 + plVar16[600] * 3;
        }
        if (plVar19 == plVar16) {
          uVar30 = 0;
          uVar18 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar16 + 0xd0))();
          if ((long *)*plVar16 != plVar28) {
            (**(code **)(*plVar28 + 0x100))(plVar28,plVar16,plVar16);
            plVar28 = (long *)*plVar16;
          }
          plVar29 = plVar16 + 3;
          if (plVar19 == plVar29) {
            uVar30 = 0;
            uVar18 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar29 + 0xd0))();
            bVar13 = (long *)*plVar29 != plVar28;
            if (bVar13) {
              (**(code **)(*plVar28 + 0x100))(plVar28,plVar16,plVar16 + 3);
              plVar28 = (long *)plVar16[3];
            }
            uVar30 = (ulong)bVar13;
            plVar29 = plVar16 + 6;
            if (plVar19 == plVar29) {
              uVar18 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar29 + 0xd0))();
              if ((long *)*plVar29 != plVar28) {
                (**(code **)(*plVar28 + 0x100))(plVar28,plVar16 + uVar30 * 3,plVar16 + 6);
                plVar28 = (long *)plVar16[6];
                uVar30 = 2;
              }
              plVar29 = plVar16 + 9;
              if (plVar19 == plVar29) {
                uVar18 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar29 + 0xd0))();
                if ((long *)*plVar29 != plVar28) {
                  (**(code **)(*plVar28 + 0x100))(plVar28,plVar16 + uVar30 * 3,plVar16 + 9);
                  plVar28 = (long *)plVar16[9];
                  uVar30 = 3;
                }
                plVar29 = plVar16 + 0xc;
                if (plVar19 == plVar29) {
                  uVar18 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar29 + 0xd0))();
                  if ((long *)*plVar29 != plVar28) {
                    (**(code **)(*plVar28 + 0x100))(plVar28,plVar16 + uVar30 * 3,plVar16 + 0xc);
                    plVar28 = (long *)plVar16[0xc];
                    uVar30 = 4;
                  }
                  plVar29 = plVar16 + 0xf;
                  if (plVar19 == plVar29) {
                    uVar18 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar29 + 0xd0))();
                    if ((long *)*plVar29 != plVar28) {
                      (**(code **)(*plVar28 + 0x100))(plVar28,plVar16 + uVar30 * 3,plVar16 + 0xf);
                      plVar28 = (long *)plVar16[0xf];
                      uVar30 = 5;
                    }
                    uVar18 = 6;
                    for (local_1c0 = plVar16 + 0x12; plVar19 != local_1c0; local_1c0 = local_1c0 + 3
                        ) {
                      (**(code **)(*(long *)*local_1c0 + 0xd0))();
                      if ((long *)*local_1c0 != plVar28) {
                        (**(code **)(*plVar28 + 0x100))(plVar28,plVar16 + uVar30 * 3,local_1c0);
                        plVar28 = (long *)*local_1c0;
                        uVar30 = uVar18;
                      }
                      uVar18 = uVar18 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar28 + 0x100))(plVar28,plVar16 + uVar30 * 3,plVar16 + uVar18 * 3);
        plVar16[600] = 0;
      }
      *(undefined4 *)(lVar22 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 200) = param_3;
  *(undefined8 *)(param_1 + 0xd0) = uVar31;
  *(undefined8 *)(param_1 + 0xd8) = uVar15;
  lVar22 = *(long *)(param_2 + 8);
  if (lVar22 != 0) {
    local_1b0 = *(long **)(lVar22 + 0x210);
    local_1a8 = (long *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(lVar22 + 0x218));
    local_1a0 = (undefined8 *)0x0;
    local_198 = (undefined8 *)0x0;
    local_188 = *(long **)(lVar22 + 0x238);
    local_180 = *(ulong *)(lVar22 + 0x240);
    local_178 = *(undefined8 *)(lVar22 + 0x248);
    uStack_170 = *(undefined8 *)(lVar22 + 0x250);
    local_190 = (undefined8 *)0x0;
    lVar20 = *(long *)(lVar22 + 0x228) - *(long *)(lVar22 + 0x220);
    if (lVar20 != 0) {
      uVar18 = local_180;
      if (0x7ffffffffffffffe < local_180) {
        uVar18 = 0x7fffffffffffffff;
      }
      if (uVar18 < (ulong)((lVar20 >> 4) * 0x6db6db6db6db6db7)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      puVar17 = (undefined8 *)(**(code **)(*local_188 + 0x10))(local_188,lVar20,8);
      if (puVar17 == (undefined8 *)0x0) {
        (**(code **)(*local_188 + 0xe8))();
      }
      puVar11 = PTR_DAT_047e2ff8;
      local_190 = puVar17 + (lVar20 >> 4) * 2;
      puVar23 = *(undefined8 **)(lVar22 + 0x220);
      puVar24 = *(undefined8 **)(lVar22 + 0x228);
      local_1a0 = puVar17;
      if (puVar23 != puVar24) {
        puVar1 = PTR_DAT_047d9c80 + 0x10;
        puVar2 = PTR_DAT_047e2ff8 + 0x10;
        local_198 = puVar17;
        do {
          plVar16 = local_188;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar20 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar20 == 0) {
            *puVar17 = *puVar23;
            puVar17[1] = puVar23[1];
            puVar17[2] = puVar23[2];
            plVar16 = (long *)puVar23[3];
            puVar17[3] = plVar16;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x18))();
            }
            uVar15 = puVar23[4];
            uVar7 = *(undefined4 *)(puVar23 + 5);
            puVar17[0xc] = 0;
            puVar17[6] = puVar1;
            *(undefined4 *)(puVar17 + 5) = uVar7;
            puVar17[4] = uVar15;
            puVar17[0xb] = 0;
            puVar17[10] = 0;
            puVar17[8] = 0;
            puVar17[9] = 0;
            puVar17[0xd] = 0;
            puVar17[7] = 0;
            FUN_00fba0b8(puVar17 + 7,puVar23 + 7);
            lVar20 = puVar23[9];
            if (lVar20 != 0) {
              lVar26 = *(long *)(lVar20 + 0x30);
              if (*(long *)(lVar26 + 0x10) == 0) goto LAB_01330c6c;
              psVar3 = (short *)(lVar26 + 0x1a);
              do {
                sVar5 = *psVar3;
                cVar10 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar13) {
                  *psVar3 = sVar5 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (sVar5 == 0) {
                uVar15 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
                *(undefined8 *)(lVar26 + 8) = uVar15;
                *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
              }
              else if (sVar5 == -1) goto LAB_0132f000;
            }
            plVar16 = (long *)puVar17[9];
            puVar17[9] = lVar20;
            if (plVar16 != (long *)0x0) {
              lVar20 = plVar16[6];
              psVar3 = (short *)(lVar20 + 0x1a);
              do {
                sVar5 = *psVar3;
                cVar10 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar13) {
                  *psVar3 = sVar5 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar20 + 0x10) = 0;
                (**(code **)(*plVar16 + 0x50))();
              }
              else if (sVar5 == 0) goto LAB_0132f960;
            }
            FUN_00cef9d0(puVar17 + 10,puVar23 + 10);
            FUN_00ceffd4(puVar17 + 0xc,puVar23 + 0xc);
            puVar17[6] = puVar2;
          }
          else {
            if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_01330644;
            *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar16;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
            *puVar17 = *puVar23;
            puVar17[1] = puVar23[1];
            puVar17[2] = puVar23[2];
            plVar16 = (long *)puVar23[3];
            puVar17[3] = plVar16;
            if (plVar16 != (long *)0x0) {
              (**(code **)(*plVar16 + 0x18))();
            }
            uVar15 = puVar23[4];
            uVar7 = *(undefined4 *)(puVar23 + 5);
            puVar17[0xc] = 0;
            puVar12 = PTR_DAT_047d9c80;
            *(undefined4 *)(puVar17 + 5) = uVar7;
            puVar17[4] = uVar15;
            puVar17[0xb] = 0;
            puVar17[0xd] = 0;
            puVar17[6] = puVar12 + 0x10;
            puVar17[10] = 0;
            puVar17[8] = 0;
            puVar17[9] = 0;
            puVar17[7] = 0;
            FUN_00fba0b8(puVar17 + 7,puVar23 + 7);
            lVar26 = puVar23[9];
            if (lVar26 != 0) {
              lVar21 = *(long *)(lVar26 + 0x30);
              if (*(long *)(lVar21 + 0x10) == 0) {
LAB_01330c6c:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("m_object != nullptr","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x3d);
              }
              psVar3 = (short *)(lVar21 + 0x1a);
              do {
                sVar5 = *psVar3;
                cVar10 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar13) {
                  *psVar3 = sVar5 + 1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (sVar5 == 0) {
                uVar15 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
                *(undefined8 *)(lVar21 + 8) = uVar15;
                *(undefined4 *)(lVar21 + 0x1c) = 0xfffffffe;
              }
              else if (sVar5 == -1) {
LAB_0132f000:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != 0","AddReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x58,"Reference counter overflows.");
              }
            }
            plVar16 = (long *)puVar17[9];
            puVar17[9] = lVar26;
            if (plVar16 != (long *)0x0) {
              lVar26 = plVar16[6];
              psVar3 = (short *)(lVar26 + 0x1a);
              do {
                sVar5 = *psVar3;
                cVar10 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar13) {
                  *psVar3 = sVar5 + -1;
                  cVar10 = ExclusiveMonitorsStatus();
                }
              } while (cVar10 != '\0');
              if (sVar5 == 1) {
                *(undefined8 *)(lVar26 + 0x10) = 0;
                (**(code **)(*plVar16 + 0x50))();
              }
              else if (sVar5 == 0) {
LAB_0132f960:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            FUN_00cef9d0(puVar17 + 10,puVar23 + 10);
            FUN_00ceffd4(puVar17 + 0xc,puVar23 + 0xc);
            puVar17[6] = puVar11 + 0x10;
            *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
          }
          puVar23 = puVar23 + 0xe;
          puVar17 = puVar17 + 0xe;
        } while (puVar23 != puVar24);
      }
      local_198 = puVar17;
    }
    puVar23 = local_198;
    puVar17 = local_1a0;
    local_168 = *(undefined1 *)(lVar22 + 600);
    *(undefined4 *)(param_1 + 0x154) = (undefined4)local_1b0;
    *(undefined4 *)(param_1 + 0x158) = local_1b0._4_4_;
    *(undefined4 *)(param_1 + 0x15c) = local_1a8._0_4_;
    if ((local_1a0 != local_198) &&
       (FUN_01336810(*(undefined4 *)((long)local_1a0 + 0x24),*(undefined4 *)(local_1a0 + 5),param_1,
                     local_1a0 + 6,*(undefined4 *)(local_1a0 + 4)), puVar17 + 0xe != puVar23)) {
      FUN_01336810(*(undefined4 *)((long)puVar17 + 0x94),*(undefined4 *)(puVar17 + 0x13),param_1,
                   puVar17 + 0x14,*(undefined4 *)(puVar17 + 0x12));
      for (puVar17 = puVar17 + 0x1c; puVar17 != puVar23; puVar17 = puVar17 + 0xe) {
        FUN_01336810(*(undefined4 *)((long)puVar17 + 0x24),*(undefined4 *)(puVar17 + 5),param_1,
                     puVar17 + 6,*(undefined4 *)(puVar17 + 4));
      }
    }
    puVar23 = local_198;
    puVar17 = local_1a0;
    if (local_1a0 != (undefined8 *)0x0) {
      if (local_198 != local_1a0) {
        puVar24 = local_198 + -0xe;
        FUN_00db239c(local_198 + -8);
        if ((long *)puVar23[-0xb] != (long *)0x0) {
          (**(code **)(*(long *)puVar23[-0xb] + 0x20))();
        }
        if (puVar24 != puVar17) {
          FUN_00db239c(puVar23 + -0x16);
          if ((long *)puVar23[-0x19] != (long *)0x0) {
            (**(code **)(*(long *)puVar23[-0x19] + 0x20))();
          }
          if (puVar23 + -0x1c != puVar17) {
            do {
              FUN_00db239c(puVar23 + -0x24);
              if ((long *)puVar23[-0x27] != (long *)0x0) {
                (**(code **)(*(long *)puVar23[-0x27] + 0x20))();
              }
              puVar23 = puVar23 + -0xe;
            } while (puVar17 + 0x1c != puVar23);
          }
        }
      }
      plVar16 = local_188;
      puVar23 = local_1a0;
      lVar22 = (long)local_190 - (long)local_1a0;
      local_198 = puVar17;
      uVar18 = (**(code **)(*local_188 + 0xf8))(local_188);
      if (((uVar18 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,puVar23,lVar22,8);
      }
      else {
        FUN_00c48fe8(plVar16,puVar23,lVar22,8);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x198) = 0x3f80000000000001;
  *(undefined4 *)(param_1 + 0x160) = 1;
  return;
}


