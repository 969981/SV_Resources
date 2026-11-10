/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0133424c; name: FUN_0133424c
 */


void FUN_0133424c(undefined8 *param_1)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  long *local_68;
  long *local_48;
  
  *param_1 = &DAT_046044b8;
  if (*(char *)((long)param_1 + 0x174) == '\0') {
    plVar9 = (long *)param_1[3];
    if (plVar9 != (long *)0x0) {
      puVar14 = *(undefined8 **)param_1[0x14];
      puVar17 = (undefined8 *)((long *)param_1[0x14])[1];
      if (puVar14 != puVar17) {
        while( true ) {
          lVar10 = (**(code **)(*plVar9 + 0x2f0))(plVar9,*puVar14);
          if (*(int *)(lVar10 + 0x34) != 0x7fffffff) {
            (**(code **)(*(long *)param_1[3] + 0x328))();
          }
          (**(code **)(*(long *)param_1[3] + 0x2a0))((long *)param_1[3],puVar14,1,0);
          if (puVar17 + -1 == puVar14) break;
          plVar9 = (long *)param_1[3];
          puVar14 = puVar14 + 1;
        }
      }
      lVar10 = *(long *)param_1[0xc];
      lVar11 = ((long *)param_1[0xc])[1];
      if (lVar10 != lVar11) {
        (**(code **)(*(long *)param_1[3] + 0xe0))((long *)param_1[3],lVar10,1,0);
        if (lVar10 + 0x40 != lVar11) {
          (**(code **)(*(long *)param_1[3] + 0xe0))((long *)param_1[3],lVar10 + 0x40,1,0);
          if (lVar10 + 0x80 != lVar11) {
            (**(code **)(*(long *)param_1[3] + 0xe0))((long *)param_1[3],lVar10 + 0x80,1,0);
            for (lVar10 = lVar10 + 0xc0; lVar10 != lVar11; lVar10 = lVar10 + 0x40) {
              (**(code **)(*(long *)param_1[3] + 0xe0))((long *)param_1[3],lVar10,1,0);
            }
          }
        }
      }
      lVar10 = *(long *)param_1[0x10];
      lVar11 = ((long *)param_1[0x10])[1];
      if (lVar10 != lVar11) {
        (**(code **)(*(long *)param_1[3] + 0xe0))((long *)param_1[3],lVar10,1,0);
        if (lVar10 + 0x40 != lVar11) {
          (**(code **)(*(long *)param_1[3] + 0xe0))((long *)param_1[3],lVar10 + 0x40,1,0);
          if (lVar10 + 0x80 != lVar11) {
            (**(code **)(*(long *)param_1[3] + 0xe0))((long *)param_1[3],lVar10 + 0x80,1,0);
            if (lVar10 + 0xc0 != lVar11) {
              (**(code **)(*(long *)param_1[3] + 0xe0))((long *)param_1[3],lVar10 + 0xc0,1,0);
              for (lVar10 = lVar10 + 0x100; lVar10 != lVar11; lVar10 = lVar10 + 0x40) {
                (**(code **)(*(long *)param_1[3] + 0xe0))((long *)param_1[3],lVar10,1,0);
              }
            }
          }
        }
      }
      for (plVar9 = *(long **)(param_1[8] + 0x30); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9)
      {
        (**(code **)(*(long *)param_1[3] + 0x98))((long *)param_1[3],(long)plVar9 + 0x12,1);
      }
      for (plVar9 = *(long **)(param_1[4] + 0x30); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9)
      {
        (**(code **)(*(long *)param_1[3] + 0x88))((long *)param_1[3],(long)plVar9 + 0x12,1);
      }
    }
  }
  else {
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar10 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar10;
    uVar15 = *(undefined8 *)(lVar10 + 0x70);
    puVar14 = (undefined8 *)param_1[0x14];
    for (puVar17 = (undefined8 *)*puVar14; puVar17 != (undefined8 *)puVar14[1];
        puVar17 = puVar17 + 1) {
      FUN_01335be4(uVar15,*puVar17);
      puVar14 = (undefined8 *)param_1[0x14];
    }
    puVar17 = (undefined8 *)((long *)param_1[0xc])[1];
    for (puVar14 = *(undefined8 **)param_1[0xc]; puVar14 != puVar17; puVar14 = puVar14 + 8) {
      FUN_01336468(uVar15,*puVar14);
    }
    puVar2 = (ulong *)((long *)param_1[0x10])[1];
    for (puVar18 = *(ulong **)param_1[0x10]; puVar18 != puVar2; puVar18 = puVar18 + 8) {
      FUN_01336468(uVar15,*puVar18);
      FUN_01335dcc(uVar15,*(undefined8 *)
                           (*(long *)(param_1[3] + 0x38) + (*puVar18 & 0xffffff) * 0xc0 + 0x98));
    }
    for (plVar9 = *(long **)(param_1[8] + 0x30); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      FUN_01335c30(uVar15,*(undefined2 *)((long)plVar9 + 0x12));
    }
    for (plVar9 = *(long **)(param_1[4] + 0x30); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      FUN_01335c7c(uVar15,*(undefined2 *)((long)plVar9 + 0x12));
    }
  }
  pcVar13 = (code *)param_1[0x37];
  if (pcVar13 != (code *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (*pcVar13)(param_1 + 0x3a);
  }
  plVar9 = (long *)param_1[0x22];
  if (plVar9 != (long *)0x0) {
    plVar20 = (long *)param_1[0x23];
    plVar16 = (long *)*plVar9;
    uVar12 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar9,0x30,0x10);
    }
    else {
      FUN_00c48fe8(plVar20,plVar9,0x30,0x10);
    }
    while (plVar16 != (long *)0x0) {
      plVar9 = (long *)param_1[0x23];
      plVar20 = (long *)*plVar16;
      uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar16,0x30,0x10);
        plVar16 = plVar20;
      }
      else {
        FUN_00c48fe8(plVar9,plVar16,0x30,0x10);
        plVar16 = plVar20;
      }
    }
  }
  lVar10 = param_1[0x1c];
  param_1[0x1c] = 0;
  if (lVar10 != 0) {
    FUN_0133c0cc(param_1 + 0x1d);
  }
  plVar9 = (long *)param_1[0x18];
  param_1[0x18] = 0;
  if (plVar9 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar10 = FUN_00c4e600();
    iVar4 = *(int *)(lVar10 + 0x12c8);
    iVar8 = iVar4 + 1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
      *(int *)(lVar10 + 0x12cc) = iVar8;
    }
    lVar10 = *plVar9;
    if (lVar10 != 0) {
      lVar21 = plVar9[1];
      lVar11 = lVar10;
      if (lVar21 != lVar10) {
        *(undefined4 *)(lVar21 + -0x20) = 0;
        if ((-1 < (int)*(uint *)(lVar21 + -0x1c)) && (*(long *)(lVar21 + -0x28) != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*(long *)(lVar21 + -0x28),
                     (ulong)*(uint *)(lVar21 + -0x1c) << 2);
        }
        *(undefined8 *)(lVar21 + -0x28) = 0;
        *(undefined4 *)(lVar21 + -0x1c) = 0x80000000;
        if (lVar21 + -0x80 != lVar10) {
          *(undefined4 *)(lVar21 + -0xa0) = 0;
          if ((-1 < (int)*(uint *)(lVar21 + -0x9c)) && (*(long *)(lVar21 + -0xa8) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*(long *)(lVar21 + -0xa8),
                       (ulong)*(uint *)(lVar21 + -0x9c) << 2);
          }
          *(undefined8 *)(lVar21 + -0xa8) = 0;
          *(undefined4 *)(lVar21 + -0x9c) = 0x80000000;
          if (lVar21 + -0x100 != lVar10) {
            *(undefined4 *)(lVar21 + -0x120) = 0;
            uVar3 = *(uint *)(lVar21 + -0x11c);
            if ((-1 < (int)uVar3) && (lVar11 = *(long *)(lVar21 + -0x128), lVar11 != 0)) {
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                        (PTR_PTR_047d1a50,lVar11,(ulong)uVar3 << 2);
            }
            *(long *)(lVar21 + -0x128) = 0;
            *(uint *)(lVar21 + -0x11c) = 0x80000000;
            if (lVar21 + -0x180 != lVar10) {
              *(undefined4 *)(lVar21 + -0x1a0) = 0;
              uVar3 = *(uint *)(lVar21 + -0x19c);
              if ((-1 < (int)uVar3) && (lVar11 = *(long *)(lVar21 + -0x1a8), lVar11 != 0)) {
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                          (PTR_PTR_047d1a50,lVar11,(ulong)uVar3 << 2);
              }
              *(long *)(lVar21 + -0x1a8) = 0;
              *(uint *)(lVar21 + -0x19c) = 0x80000000;
              if (lVar21 + -0x200 != lVar10) {
                *(undefined4 *)(lVar21 + -0x220) = 0;
                uVar3 = *(uint *)(lVar21 + -0x21c);
                if ((-1 < (int)uVar3) && (lVar11 = *(long *)(lVar21 + -0x228), lVar11 != 0)) {
                  (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                            (PTR_PTR_047d1a50,lVar11,(ulong)uVar3 << 2);
                }
                *(long *)(lVar21 + -0x228) = 0;
                *(uint *)(lVar21 + -0x21c) = 0x80000000;
                puVar6 = PTR_PTR_047d1a50;
                if (lVar21 + -0x280 != lVar10) {
                  do {
                    *(undefined4 *)(lVar21 + -0x2a0) = 0;
                    puVar23 = (uint *)(lVar21 + -0x29c);
                    uVar3 = *puVar23;
                    if ((-1 < (int)uVar3) && (*(long *)(lVar21 + -0x2a8) != 0)) {
                      (**(code **)(*(long *)puVar6 + 0x20))
                                (puVar6,*(long *)(lVar21 + -0x2a8),(ulong)uVar3 << 2);
                    }
                    puVar14 = (undefined8 *)(lVar21 + -0x2a8);
                    lVar21 = lVar21 + -0x80;
                    *puVar14 = 0;
                    *puVar23 = 0x80000000;
                  } while (lVar10 + 0x280 != lVar21);
                }
              }
            }
          }
        }
        lVar11 = *plVar9;
      }
      lVar21 = plVar9[2];
      plVar16 = (long *)plVar9[3];
      plVar9[1] = lVar10;
      uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar11,lVar21 - lVar11,0x10);
      }
      else {
        FUN_00c48fe8(plVar16,lVar11,lVar21 - lVar11,0x10);
      }
    }
    plVar16 = (long *)param_1[0x19];
    uVar15 = param_1[0x1a];
    uVar19 = param_1[0x1b];
    uVar12 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar9,uVar15,uVar19);
    }
    else {
      FUN_00c48fe8(plVar16,plVar9,uVar15,uVar19);
    }
    lVar10 = FUN_00c4e600();
    iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar20 = (long *)*plVar9;
        plVar16 = plVar9;
        if (plVar9[600] != 0) {
          plVar16 = plVar9 + plVar9[600] * 3;
        }
        if (plVar16 == plVar9) {
          uVar22 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9);
            plVar20 = (long *)*plVar9;
          }
          plVar1 = plVar9 + 3;
          if (plVar16 == plVar1) {
            uVar22 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar7 = (long *)*plVar1 != plVar20;
            if (bVar7) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9 + 3);
              plVar20 = (long *)plVar9[3];
            }
            uVar22 = (ulong)bVar7;
            plVar1 = plVar9 + 6;
            if (plVar16 == plVar1) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 6);
                plVar20 = (long *)plVar9[6];
                uVar22 = 2;
              }
              plVar1 = plVar9 + 9;
              if (plVar16 == plVar1) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 9);
                  plVar20 = (long *)plVar9[9];
                  uVar22 = 3;
                }
                plVar1 = plVar9 + 0xc;
                if (plVar16 == plVar1) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xc);
                    plVar20 = (long *)plVar9[0xc];
                    uVar22 = 4;
                  }
                  plVar1 = plVar9 + 0xf;
                  if (plVar16 == plVar1) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xf);
                      plVar20 = (long *)plVar9[0xf];
                      uVar22 = 5;
                    }
                    uVar12 = 6;
                    for (plVar1 = plVar9 + 0x12; plVar16 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar1);
                        plVar20 = (long *)*plVar1;
                        uVar22 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + uVar12 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = param_1[0x14];
  param_1[0x14] = 0;
  if (lVar10 != 0) {
    FUN_01331820(param_1 + 0x15);
  }
  lVar10 = param_1[0x10];
  param_1[0x10] = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar4 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar4 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    FUN_0133113c(lVar10);
    plVar9 = (long *)param_1[0x11];
    uVar15 = param_1[0x12];
    uVar19 = param_1[0x13];
    uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar15,uVar19);
    }
    else {
      FUN_00c48fe8(plVar9,lVar10,uVar15,uVar19);
    }
    lVar10 = FUN_00c4e600();
    iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar20 = (long *)*plVar9;
        plVar16 = plVar9;
        if (plVar9[600] != 0) {
          plVar16 = plVar9 + plVar9[600] * 3;
        }
        if (plVar16 == plVar9) {
          uVar22 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9);
            plVar20 = (long *)*plVar9;
          }
          plVar1 = plVar9 + 3;
          if (plVar16 == plVar1) {
            uVar22 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar7 = (long *)*plVar1 != plVar20;
            if (bVar7) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9 + 3);
              plVar20 = (long *)plVar9[3];
            }
            uVar22 = (ulong)bVar7;
            plVar1 = plVar9 + 6;
            if (plVar16 == plVar1) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 6);
                plVar20 = (long *)plVar9[6];
                uVar22 = 2;
              }
              plVar1 = plVar9 + 9;
              if (plVar16 == plVar1) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 9);
                  plVar20 = (long *)plVar9[9];
                  uVar22 = 3;
                }
                plVar1 = plVar9 + 0xc;
                if (plVar16 == plVar1) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xc);
                    plVar20 = (long *)plVar9[0xc];
                    uVar22 = 4;
                  }
                  plVar1 = plVar9 + 0xf;
                  if (plVar16 == plVar1) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xf);
                      plVar20 = (long *)plVar9[0xf];
                      uVar22 = 5;
                    }
                    uVar12 = 6;
                    for (plVar1 = plVar9 + 0x12; plVar16 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar1);
                        plVar20 = (long *)*plVar1;
                        uVar22 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + uVar12 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar4 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar4 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    FUN_0133113c(lVar10);
    plVar9 = (long *)param_1[0xd];
    uVar15 = param_1[0xe];
    uVar19 = param_1[0xf];
    uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar15,uVar19);
    }
    else {
      FUN_00c48fe8(plVar9,lVar10,uVar15,uVar19);
    }
    lVar10 = FUN_00c4e600();
    iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar20 = (long *)*plVar9;
        plVar16 = plVar9;
        if (plVar9[600] != 0) {
          plVar16 = plVar9 + plVar9[600] * 3;
        }
        if (plVar16 == plVar9) {
          uVar22 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9);
            plVar20 = (long *)*plVar9;
          }
          plVar1 = plVar9 + 3;
          if (plVar16 == plVar1) {
            uVar22 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar7 = (long *)*plVar1 != plVar20;
            if (bVar7) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9 + 3);
              plVar20 = (long *)plVar9[3];
            }
            uVar22 = (ulong)bVar7;
            plVar1 = plVar9 + 6;
            if (plVar16 == plVar1) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 6);
                plVar20 = (long *)plVar9[6];
                uVar22 = 2;
              }
              plVar1 = plVar9 + 9;
              if (plVar16 == plVar1) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 9);
                  plVar20 = (long *)plVar9[9];
                  uVar22 = 3;
                }
                plVar1 = plVar9 + 0xc;
                if (plVar16 == plVar1) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xc);
                    plVar20 = (long *)plVar9[0xc];
                    uVar22 = 4;
                  }
                  plVar1 = plVar9 + 0xf;
                  if (plVar16 == plVar1) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xf);
                      plVar20 = (long *)plVar9[0xf];
                      uVar22 = 5;
                    }
                    uVar12 = 6;
                    for (plVar1 = plVar9 + 0x12; plVar16 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar1);
                        plVar20 = (long *)*plVar1;
                        uVar22 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + uVar12 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = param_1[8];
  param_1[8] = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar4 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar4 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    FUN_013315dc(lVar10);
    plVar9 = (long *)param_1[9];
    uVar15 = param_1[10];
    uVar19 = param_1[0xb];
    uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar15,uVar19);
    }
    else {
      FUN_00c48fe8(plVar9,lVar10,uVar15,uVar19);
    }
    lVar10 = FUN_00c4e600();
    iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar20 = (long *)*plVar9;
        plVar16 = plVar9;
        if (plVar9[600] != 0) {
          plVar16 = plVar9 + plVar9[600] * 3;
        }
        if (plVar16 == plVar9) {
          uVar22 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9);
            plVar20 = (long *)*plVar9;
          }
          plVar1 = plVar9 + 3;
          if (plVar16 == plVar1) {
            uVar22 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar7 = (long *)*plVar1 != plVar20;
            if (bVar7) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9 + 3);
              plVar20 = (long *)plVar9[3];
            }
            uVar22 = (ulong)bVar7;
            plVar1 = plVar9 + 6;
            if (plVar16 == plVar1) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 6);
                plVar20 = (long *)plVar9[6];
                uVar22 = 2;
              }
              plVar1 = plVar9 + 9;
              if (plVar16 == plVar1) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 9);
                  plVar20 = (long *)plVar9[9];
                  uVar22 = 3;
                }
                plVar1 = plVar9 + 0xc;
                if (plVar16 == plVar1) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xc);
                    plVar20 = (long *)plVar9[0xc];
                    uVar22 = 4;
                  }
                  plVar1 = plVar9 + 0xf;
                  if (plVar16 == plVar1) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xf);
                      plVar20 = (long *)plVar9[0xf];
                      uVar22 = 5;
                    }
                    uVar12 = 6;
                    for (plVar1 = plVar9 + 0x12; plVar16 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar1);
                        plVar20 = (long *)*plVar1;
                        uVar22 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + uVar12 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  lVar10 = param_1[4];
  param_1[4] = 0;
  if (lVar10 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar4 = *(int *)(lVar11 + 0x12c8);
    iVar8 = iVar4 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar8;
    if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
      *(int *)(lVar11 + 0x12cc) = iVar8;
    }
    FUN_013313fc(lVar10);
    plVar9 = (long *)param_1[5];
    uVar15 = param_1[6];
    uVar19 = param_1[7];
    uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar15,uVar19);
    }
    else {
      FUN_00c48fe8(plVar9,lVar10,uVar15,uVar19);
    }
    lVar10 = FUN_00c4e600();
    iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
    *(int *)(lVar10 + 0x12c8) = iVar8;
    if (iVar8 == 0) {
      plVar9 = (long *)FUN_00c4e600();
      if (plVar9[600] != 0) {
        local_68 = plVar9 + plVar9[600] * 3;
        local_48 = plVar9;
        FUN_00c4ea30(&local_48,&local_68);
        plVar20 = (long *)*plVar9;
        plVar16 = plVar9;
        if (plVar9[600] != 0) {
          plVar16 = plVar9 + plVar9[600] * 3;
        }
        if (plVar16 == plVar9) {
          uVar22 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar9 + 0xd0))();
          if ((long *)*plVar9 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9);
            plVar20 = (long *)*plVar9;
          }
          plVar1 = plVar9 + 3;
          if (plVar16 == plVar1) {
            uVar22 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar1 + 0xd0))();
            bVar7 = (long *)*plVar1 != plVar20;
            if (bVar7) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar9,plVar9 + 3);
              plVar20 = (long *)plVar9[3];
            }
            uVar22 = (ulong)bVar7;
            plVar1 = plVar9 + 6;
            if (plVar16 == plVar1) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              if ((long *)*plVar1 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 6);
                plVar20 = (long *)plVar9[6];
                uVar22 = 2;
              }
              plVar1 = plVar9 + 9;
              if (plVar16 == plVar1) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 9);
                  plVar20 = (long *)plVar9[9];
                  uVar22 = 3;
                }
                plVar1 = plVar9 + 0xc;
                if (plVar16 == plVar1) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xc);
                    plVar20 = (long *)plVar9[0xc];
                    uVar22 = 4;
                  }
                  plVar1 = plVar9 + 0xf;
                  if (plVar16 == plVar1) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + 0xf);
                      plVar20 = (long *)plVar9[0xf];
                      uVar22 = 5;
                    }
                    uVar12 = 6;
                    for (plVar1 = plVar9 + 0x12; plVar16 != plVar1; plVar1 = plVar1 + 3) {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar1);
                        plVar20 = (long *)*plVar1;
                        uVar22 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar9 + uVar22 * 3,plVar9 + uVar12 * 3);
        plVar9[600] = 0;
      }
      *(undefined4 *)(lVar10 + 0x12cc) = 0;
    }
  }
  plVar9 = (long *)param_1[3];
  if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
    plVar16 = plVar9 + 2;
    do {
      lVar10 = *plVar16;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *plVar16 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))();
    }
  }
  return;
}


