/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022099d8; name: FUN_022099d8
 */


ulong FUN_022099d8(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 local_98;
  long local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  long *plStack_68;
  
  lVar8 = *(long *)(param_1 + 0x1d8);
  if (lVar8 == 0) {
    local_98 = *(undefined8 *)(param_1 + 8);
    FUN_0142ce50(&local_90,local_98,&local_98);
    lVar8 = local_90;
    local_90 = 0;
    lVar13 = *(long *)(param_1 + 0x1d8);
    *(long *)(param_1 + 0x1d8) = lVar8;
    if (lVar13 == 0) {
      *(undefined8 *)(param_1 + 0x1e8) = local_80;
      *(undefined8 *)(param_1 + 0x1f0) = local_78;
      *(long **)(param_1 + 0x1e0) = local_88;
      local_90 = 0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar8 = FUN_00c4e600();
      iVar6 = *(int *)(lVar8 + 0x12c8);
      iVar1 = iVar6 + 1;
      *(int *)(lVar8 + 0x12c8) = iVar1;
      if (*(int *)(lVar8 + 0x12cc) <= iVar6) {
        *(int *)(lVar8 + 0x12cc) = iVar1;
      }
      lVar8 = *(long *)(lVar13 + 0xf8);
      if (lVar8 != 0) {
        plVar9 = *(long **)(lVar13 + 0x110);
        *(long *)(lVar13 + 0x100) = lVar8;
        lVar14 = *(long *)(lVar13 + 0x108) - lVar8;
        uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar14,8);
        }
        else {
          FUN_00c48fe8(plVar9,lVar8,lVar14,8);
        }
      }
      lVar8 = *(long *)(lVar13 + 0xc0);
      if (lVar8 != 0) {
        plVar9 = *(long **)(lVar13 + 0xd8);
        *(long *)(lVar13 + 200) = lVar8;
        lVar14 = *(long *)(lVar13 + 0xd0) - lVar8;
        uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,lVar14,8);
        }
        else {
          FUN_00c48fe8(plVar9,lVar8,lVar14,8);
        }
      }
      FUN_01278210(lVar13 + 8);
      plVar9 = *(long **)(param_1 + 0x1e0);
      uVar5 = *(undefined8 *)(param_1 + 0x1e8);
      uVar15 = *(undefined8 *)(param_1 + 0x1f0);
      uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar12 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,uVar5,uVar15);
      }
      else {
        FUN_00c48fe8(plVar9,lVar13,uVar5,uVar15);
      }
      lVar8 = FUN_00c4e600();
      iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
      *(int *)(lVar8 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          plStack_68 = plVar9;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar16 = (long *)*plVar9;
          plVar4 = plVar9;
          if (plVar9[600] != 0) {
            plVar4 = plVar9 + plVar9[600] * 3;
          }
          if (plVar4 == plVar9) {
            uVar11 = 0;
            uVar12 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9);
              plVar16 = (long *)*plVar9;
            }
            plVar2 = plVar9 + 3;
            if (plVar4 == plVar2) {
              uVar11 = 0;
              uVar12 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar7 = (long *)*plVar2 != plVar16;
              if (bVar7) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9 + 3);
                plVar16 = (long *)plVar9[3];
              }
              uVar11 = (ulong)bVar7;
              plVar2 = plVar9 + 6;
              if (plVar4 == plVar2) {
                uVar12 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + 6);
                  plVar16 = (long *)plVar9[6];
                  uVar11 = 2;
                }
                plVar2 = plVar9 + 9;
                if (plVar4 == plVar2) {
                  uVar12 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + 9);
                    plVar16 = (long *)plVar9[9];
                    uVar11 = 3;
                  }
                  plVar2 = plVar9 + 0xc;
                  if (plVar4 == plVar2) {
                    uVar12 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + 0xc);
                      plVar16 = (long *)plVar9[0xc];
                      uVar11 = 4;
                    }
                    plVar2 = plVar9 + 0xf;
                    if (plVar4 == plVar2) {
                      uVar12 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + 0xf);
                        plVar16 = (long *)plVar9[0xf];
                        uVar11 = 5;
                      }
                      uVar12 = 6;
                      for (plVar2 = plVar9 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar2);
                          plVar16 = (long *)*plVar2;
                          uVar11 = uVar12;
                        }
                        uVar12 = uVar12 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + uVar12 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar8 + 0x12cc) = 0;
      }
      lVar8 = local_90;
      *(long **)(param_1 + 0x1e0) = local_88;
      *(undefined8 *)(param_1 + 0x1e8) = local_80;
      *(undefined8 *)(param_1 + 0x1f0) = local_78;
      local_90 = 0;
      if (lVar8 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar13 = FUN_00c4e600();
        iVar6 = *(int *)(lVar13 + 0x12c8);
        iVar1 = iVar6 + 1;
        *(int *)(lVar13 + 0x12c8) = iVar1;
        if (*(int *)(lVar13 + 0x12cc) <= iVar6) {
          *(int *)(lVar13 + 0x12cc) = iVar1;
        }
        lVar13 = *(long *)(lVar8 + 0xf8);
        if (lVar13 != 0) {
          plVar9 = *(long **)(lVar8 + 0x110);
          *(long *)(lVar8 + 0x100) = lVar13;
          lVar14 = *(long *)(lVar8 + 0x108) - lVar13;
          uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,lVar14,8);
          }
          else {
            FUN_00c48fe8(plVar9,lVar13,lVar14,8);
          }
        }
        lVar13 = *(long *)(lVar8 + 0xc0);
        if (lVar13 != 0) {
          plVar9 = *(long **)(lVar8 + 0xd8);
          *(long *)(lVar8 + 200) = lVar13;
          lVar14 = *(long *)(lVar8 + 0xd0) - lVar13;
          uVar12 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar12 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,lVar13,lVar14,8);
          }
          else {
            FUN_00c48fe8(plVar9,lVar13,lVar14,8);
          }
        }
        FUN_01278210(lVar8 + 8);
        uVar12 = (**(code **)(*local_88 + 0xf8))(local_88);
        if (((uVar12 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
          (**(code **)(*local_88 + 0x18))(local_88,lVar8,local_80,local_78);
        }
        else {
          FUN_00c48fe8(local_88,lVar8,local_80,local_78);
        }
        lVar8 = FUN_00c4e600();
        iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar9 = (long *)FUN_00c4e600();
          if (plVar9[600] != 0) {
            local_70 = plVar9 + plVar9[600] * 3;
            plStack_68 = plVar9;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar16 = (long *)*plVar9;
            plVar4 = plVar9;
            if (plVar9[600] != 0) {
              plVar4 = plVar9 + plVar9[600] * 3;
            }
            if (plVar4 == plVar9) {
              uVar11 = 0;
              uVar12 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar9 + 0xd0))();
              if ((long *)*plVar9 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9);
                plVar16 = (long *)*plVar9;
              }
              plVar2 = plVar9 + 3;
              if (plVar4 == plVar2) {
                uVar11 = 0;
                uVar12 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar7 = (long *)*plVar2 != plVar16;
                if (bVar7) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar9,plVar9 + 3);
                  plVar16 = (long *)plVar9[3];
                }
                uVar11 = (ulong)bVar7;
                plVar2 = plVar9 + 6;
                if (plVar4 == plVar2) {
                  uVar12 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + 6);
                    plVar16 = (long *)plVar9[6];
                    uVar11 = 2;
                  }
                  plVar2 = plVar9 + 9;
                  if (plVar4 == plVar2) {
                    uVar12 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + 9);
                      plVar16 = (long *)plVar9[9];
                      uVar11 = 3;
                    }
                    plVar2 = plVar9 + 0xc;
                    if (plVar4 == plVar2) {
                      uVar12 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + 0xc);
                        plVar16 = (long *)plVar9[0xc];
                        uVar11 = 4;
                      }
                      plVar2 = plVar9 + 0xf;
                      if (plVar4 == plVar2) {
                        uVar12 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar16) {
                          (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + 0xf);
                          plVar16 = (long *)plVar9[0xf];
                          uVar11 = 5;
                        }
                        uVar12 = 6;
                        for (plVar2 = plVar9 + 0x12; plVar4 != plVar2; plVar2 = plVar2 + 3) {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar16) {
                            (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar2);
                            plVar16 = (long *)*plVar2;
                            uVar11 = uVar12;
                          }
                          uVar12 = uVar12 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar9 + uVar11 * 3,plVar9 + uVar12 * 3);
            plVar9[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
    }
    lVar8 = *(long *)(param_1 + 0x1d8);
  }
  local_88 = (long *)FUN_0220a428(lVar8,param_2);
  local_90 = 2;
  do {
    lVar8 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x158);
    if (lVar8 == 0) {
      uVar12 = *(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4;
      FUN_013d2fe0(param_1 + 0xe8,&local_90);
      goto LAB_02209a88;
    }
    uVar12 = *(ulong *)(*(long *)(param_1 + 0x160) + -8);
    *(long *)(param_1 + 0x160) = lVar8 + *(long *)(param_1 + 0x158) + -8;
    uVar11 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x120) + uVar11) =
         *(ulong *)(*(long *)(param_1 + 0x120) + uVar11) &
         (1L << (uVar12 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_1 + 0xf0) - *(long *)(param_1 + 0xe8) >> 4) <= uVar12);
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar12 * 0x10);
  *puVar3 = 2;
  puVar3[1] = local_88;
  if (*(ulong *)(param_1 + 400) <= uVar12) {
LAB_02209a88:
    *(ulong *)(param_1 + 400) = uVar12 + 1;
  }
  return uVar12;
}


