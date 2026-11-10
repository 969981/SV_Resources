/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fd84c4; name: FUN_00fd84c4
 */


ulong FUN_00fd84c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_a0;
  long local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  long *local_68;
  
  lVar6 = *(long *)(param_2 + 0x1f8);
  if (lVar6 == 0) {
    local_a0 = *(undefined8 *)(param_2 + 8);
    FUN_00fd8ee0(&local_98,local_a0,&local_a0);
    lVar6 = local_98;
    local_98 = 0;
    lVar10 = *(long *)(param_2 + 0x1f8);
    *(long *)(param_2 + 0x1f8) = lVar6;
    if (lVar10 == 0) {
      *(undefined8 *)(param_2 + 0x210) = local_80;
      *(undefined8 *)(param_2 + 0x208) = local_88;
      *(long **)(param_2 + 0x200) = local_90;
      local_98 = 0;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar4 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      lVar6 = *(long *)(lVar10 + 0xf8);
      if (lVar6 != 0) {
        plVar15 = *(long **)(lVar10 + 0x110);
        *(long *)(lVar10 + 0x100) = lVar6;
        lVar12 = *(long *)(lVar10 + 0x108) - lVar6;
        uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar6,lVar12,8);
        }
        else {
          FUN_00c48fe8(plVar15,lVar6,lVar12,8);
        }
      }
      lVar6 = *(long *)(lVar10 + 0xc0);
      if (lVar6 != 0) {
        plVar15 = *(long **)(lVar10 + 0xd8);
        *(long *)(lVar10 + 200) = lVar6;
        lVar12 = *(long *)(lVar10 + 0xd0) - lVar6;
        uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar6,lVar12,8);
        }
        else {
          FUN_00c48fe8(plVar15,lVar6,lVar12,8);
        }
      }
      FUN_010920f8(lVar10 + 8);
      plVar15 = *(long **)(param_2 + 0x200);
      uVar11 = *(undefined8 *)(param_2 + 0x208);
      uVar13 = *(undefined8 *)(param_2 + 0x210);
      uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,uVar11,uVar13);
      }
      else {
        FUN_00c48fe8(plVar15,lVar10,uVar11,uVar13);
      }
      lVar6 = FUN_00c4e600();
      iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar15 = (long *)FUN_00c4e600();
        if (plVar15[600] != 0) {
          local_78 = plVar15 + plVar15[600] * 3;
          local_68 = plVar15;
          FUN_00c4ea30(&local_68,&local_78);
          plVar14 = (long *)*plVar15;
          plVar3 = plVar15;
          if (plVar15[600] != 0) {
            plVar3 = plVar15 + plVar15[600] * 3;
          }
          if (plVar3 == plVar15) {
            uVar8 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar15 + 0xd0))();
            if ((long *)*plVar15 != plVar14) {
              (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
              plVar14 = (long *)*plVar15;
            }
            plVar16 = plVar15 + 3;
            if (plVar3 == plVar16) {
              uVar8 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar16 + 0xd0))();
              bVar5 = (long *)*plVar16 != plVar14;
              if (bVar5) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
                plVar14 = (long *)plVar15[3];
              }
              uVar8 = (ulong)bVar5;
              plVar16 = plVar15 + 6;
              if (plVar3 == plVar16) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar16 + 0xd0))();
                if ((long *)*plVar16 != plVar14) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + 6);
                  plVar14 = (long *)plVar15[6];
                  uVar8 = 2;
                }
                plVar16 = plVar15 + 9;
                if (plVar3 == plVar16) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar16 + 0xd0))();
                  if ((long *)*plVar16 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + 9);
                    plVar14 = (long *)plVar15[9];
                    uVar8 = 3;
                  }
                  plVar16 = plVar15 + 0xc;
                  if (plVar3 == plVar16) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar16 + 0xd0))();
                    if ((long *)*plVar16 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + 0xc);
                      plVar14 = (long *)plVar15[0xc];
                      uVar8 = 4;
                    }
                    plVar16 = plVar15 + 0xf;
                    if (plVar3 == plVar16) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar16 + 0xd0))();
                      if ((long *)*plVar16 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + 0xf);
                        plVar14 = (long *)plVar15[0xf];
                        uVar8 = 5;
                      }
                      uVar9 = 6;
                      for (plVar16 = plVar15 + 0x12; plVar3 != plVar16; plVar16 = plVar16 + 3) {
                        (**(code **)(*(long *)*plVar16 + 0xd0))();
                        if ((long *)*plVar16 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar16);
                          plVar14 = (long *)*plVar16;
                          uVar8 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + uVar9 * 3);
          plVar15[600] = 0;
        }
        *(undefined4 *)(lVar6 + 0x12cc) = 0;
      }
      lVar6 = local_98;
      *(undefined8 *)(param_2 + 0x210) = local_80;
      *(undefined8 *)(param_2 + 0x208) = local_88;
      *(long **)(param_2 + 0x200) = local_90;
      local_98 = 0;
      if (lVar6 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar10 = FUN_00c4e600();
        iVar4 = *(int *)(lVar10 + 0x12c8);
        iVar1 = iVar4 + 1;
        *(int *)(lVar10 + 0x12c8) = iVar1;
        if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
          *(int *)(lVar10 + 0x12cc) = iVar1;
        }
        lVar10 = *(long *)(lVar6 + 0xf8);
        if (lVar10 != 0) {
          plVar15 = *(long **)(lVar6 + 0x110);
          *(long *)(lVar6 + 0x100) = lVar10;
          lVar12 = *(long *)(lVar6 + 0x108) - lVar10;
          uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,lVar12,8);
          }
          else {
            FUN_00c48fe8(plVar15,lVar10,lVar12,8);
          }
        }
        lVar10 = *(long *)(lVar6 + 0xc0);
        if (lVar10 != 0) {
          plVar15 = *(long **)(lVar6 + 0xd8);
          *(long *)(lVar6 + 200) = lVar10;
          lVar12 = *(long *)(lVar6 + 0xd0) - lVar10;
          uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar10,lVar12,8);
          }
          else {
            FUN_00c48fe8(plVar15,lVar10,lVar12,8);
          }
        }
        FUN_010920f8(lVar6 + 8);
        uVar9 = (**(code **)(*local_90 + 0xf8))(local_90);
        if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*local_90 + 0x18))(local_90,lVar6,local_88,local_80);
        }
        else {
          FUN_00c48fe8(local_90,lVar6,local_88,local_80);
        }
        lVar6 = FUN_00c4e600();
        iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
        *(int *)(lVar6 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar15 = (long *)FUN_00c4e600();
          if (plVar15[600] != 0) {
            local_78 = plVar15 + plVar15[600] * 3;
            local_68 = plVar15;
            FUN_00c4ea30(&local_68,&local_78);
            plVar14 = (long *)*plVar15;
            plVar3 = plVar15;
            if (plVar15[600] != 0) {
              plVar3 = plVar15 + plVar15[600] * 3;
            }
            if (plVar3 == plVar15) {
              uVar8 = 0;
              uVar9 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != plVar14) {
                (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15);
                plVar14 = (long *)*plVar15;
              }
              plVar16 = plVar15 + 3;
              if (plVar3 == plVar16) {
                uVar8 = 0;
                uVar9 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar16 + 0xd0))();
                bVar5 = (long *)*plVar16 != plVar14;
                if (bVar5) {
                  (**(code **)(*plVar14 + 0x100))(plVar14,plVar15,plVar15 + 3);
                  plVar14 = (long *)plVar15[3];
                }
                uVar8 = (ulong)bVar5;
                plVar16 = plVar15 + 6;
                if (plVar3 == plVar16) {
                  uVar9 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar16 + 0xd0))();
                  if ((long *)*plVar16 != plVar14) {
                    (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + 6);
                    plVar14 = (long *)plVar15[6];
                    uVar8 = 2;
                  }
                  plVar16 = plVar15 + 9;
                  if (plVar3 == plVar16) {
                    uVar9 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar16 + 0xd0))();
                    if ((long *)*plVar16 != plVar14) {
                      (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + 9);
                      plVar14 = (long *)plVar15[9];
                      uVar8 = 3;
                    }
                    plVar16 = plVar15 + 0xc;
                    if (plVar3 == plVar16) {
                      uVar9 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar16 + 0xd0))();
                      if ((long *)*plVar16 != plVar14) {
                        (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + 0xc);
                        plVar14 = (long *)plVar15[0xc];
                        uVar8 = 4;
                      }
                      plVar16 = plVar15 + 0xf;
                      if (plVar3 == plVar16) {
                        uVar9 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar16 + 0xd0))();
                        if ((long *)*plVar16 != plVar14) {
                          (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + 0xf)
                          ;
                          plVar14 = (long *)plVar15[0xf];
                          uVar8 = 5;
                        }
                        uVar9 = 6;
                        for (plVar16 = plVar15 + 0x12; plVar3 != plVar16; plVar16 = plVar16 + 3) {
                          (**(code **)(*(long *)*plVar16 + 0xd0))();
                          if ((long *)*plVar16 != plVar14) {
                            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar16);
                            plVar14 = (long *)*plVar16;
                            uVar8 = uVar9;
                          }
                          uVar9 = uVar9 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar14 + 0x100))(plVar14,plVar15 + uVar8 * 3,plVar15 + uVar9 * 3);
            plVar15[600] = 0;
          }
          *(undefined4 *)(lVar6 + 0x12cc) = 0;
        }
      }
    }
    lVar6 = *(long *)(param_2 + 0x1f8);
  }
  local_90 = (long *)FUN_00fd9068(param_1,lVar6,param_3,param_4);
  local_98 = 3;
  do {
    lVar6 = *(long *)(param_2 + 0x160) - *(long *)(param_2 + 0x158);
    if (lVar6 == 0) {
      uVar9 = *(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4;
      FUN_01002624(param_2 + 0xe8,&local_98);
      goto LAB_00fd85cc;
    }
    uVar9 = *(ulong *)(*(long *)(param_2 + 0x160) + -8);
    *(long *)(param_2 + 0x160) = lVar6 + *(long *)(param_2 + 0x158) + -8;
    uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0x120) + uVar8) =
         *(ulong *)(*(long *)(param_2 + 0x120) + uVar8) &
         (1L << (uVar9 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 4) <= uVar9);
  puVar2 = (undefined8 *)(*(long *)(param_2 + 0xe8) + uVar9 * 0x10);
  *puVar2 = 3;
  puVar2[1] = local_90;
  if (*(ulong *)(param_2 + 400) <= uVar9) {
LAB_00fd85cc:
    *(ulong *)(param_2 + 400) = uVar9 + 1;
  }
  return uVar9;
}


