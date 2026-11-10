/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eae2a4; name: FUN_00eae2a4
 */


void FUN_00eae2a4(float param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 local_90;
  long local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  local_90 = *(undefined8 *)(param_2 + 8);
  if (*(long *)(param_2 + 0x180) == 0) {
    FUN_00eb3a30(&local_88,local_90,&local_90);
    lVar11 = local_88;
    local_88 = 0;
    lVar10 = *(long *)(param_2 + 0x180);
    *(long *)(param_2 + 0x180) = lVar11;
    if (lVar10 == 0) {
      *(undefined8 *)(param_2 + 400) = local_78;
      *(undefined8 *)(param_2 + 0x198) = local_70;
      *(long **)(param_2 + 0x188) = local_80;
    }
    else {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar5 = *(int *)(lVar11 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
        *(int *)(lVar11 + 0x12cc) = iVar1;
      }
      FUN_00eea34c(lVar10);
      plVar8 = *(long **)(param_2 + 0x188);
      uVar4 = *(undefined8 *)(param_2 + 400);
      uVar12 = *(undefined8 *)(param_2 + 0x198);
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,uVar4,uVar12);
      }
      else {
        FUN_00c48fe8(plVar8,lVar10,uVar4,uVar12);
      }
      lVar11 = FUN_00c4e600();
      iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_68 = plVar8 + plVar8[600] * 3;
          local_48 = plVar8;
          FUN_00c4ea30(&local_48,&local_68);
          plVar13 = (long *)*plVar8;
          plVar3 = plVar8;
          if (plVar8[600] != 0) {
            plVar3 = plVar8 + plVar8[600] * 3;
          }
          if (plVar3 == plVar8) {
            uVar14 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
              plVar13 = (long *)*plVar8;
            }
            plVar2 = plVar8 + 3;
            if (plVar3 == plVar2) {
              uVar14 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar13;
              if (bVar6) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
                plVar13 = (long *)plVar8[3];
              }
              uVar14 = (ulong)bVar6;
              plVar2 = plVar8 + 6;
              if (plVar3 == plVar2) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 6);
                  plVar13 = (long *)plVar8[6];
                  uVar14 = 2;
                }
                plVar2 = plVar8 + 9;
                if (plVar3 == plVar2) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 9);
                    plVar13 = (long *)plVar8[9];
                    uVar14 = 3;
                  }
                  plVar2 = plVar8 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xc);
                      plVar13 = (long *)plVar8[0xc];
                      uVar14 = 4;
                    }
                    plVar2 = plVar8 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xf);
                        plVar13 = (long *)plVar8[0xf];
                        uVar14 = 5;
                      }
                      uVar7 = 6;
                      for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar2);
                          plVar13 = (long *)*plVar2;
                          uVar14 = uVar7;
                        }
                        uVar7 = uVar7 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + uVar7 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
      lVar11 = local_88;
      *(long **)(param_2 + 0x188) = local_80;
      *(undefined8 *)(param_2 + 400) = local_78;
      *(undefined8 *)(param_2 + 0x198) = local_70;
      local_88 = 0;
      if (lVar11 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar10 = FUN_00c4e600();
        iVar5 = *(int *)(lVar10 + 0x12c8);
        iVar1 = iVar5 + 1;
        *(int *)(lVar10 + 0x12c8) = iVar1;
        if (*(int *)(lVar10 + 0x12cc) <= iVar5) {
          *(int *)(lVar10 + 0x12cc) = iVar1;
        }
        FUN_00eea34c(lVar11);
        uVar7 = (**(code **)(*local_80 + 0xf8))(local_80);
        if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*local_80 + 0x18))(local_80,lVar11,local_78,local_70);
        }
        else {
          FUN_00c48fe8(local_80,lVar11,local_78,local_70);
        }
        lVar11 = FUN_00c4e600();
        iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
        *(int *)(lVar11 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar8 = (long *)FUN_00c4e600();
          if (plVar8[600] != 0) {
            local_68 = plVar8 + plVar8[600] * 3;
            local_48 = plVar8;
            FUN_00c4ea30(&local_48,&local_68);
            plVar13 = (long *)*plVar8;
            plVar3 = plVar8;
            if (plVar8[600] != 0) {
              plVar3 = plVar8 + plVar8[600] * 3;
            }
            if (plVar3 == plVar8) {
              uVar14 = 0;
              uVar7 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar8 + 0xd0))();
              if ((long *)*plVar8 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8);
                plVar13 = (long *)*plVar8;
              }
              plVar2 = plVar8 + 3;
              if (plVar3 == plVar2) {
                uVar14 = 0;
                uVar7 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar6 = (long *)*plVar2 != plVar13;
                if (bVar6) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
                  plVar13 = (long *)plVar8[3];
                }
                uVar14 = (ulong)bVar6;
                plVar2 = plVar8 + 6;
                if (plVar3 == plVar2) {
                  uVar7 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 6);
                    plVar13 = (long *)plVar8[6];
                    uVar14 = 2;
                  }
                  plVar2 = plVar8 + 9;
                  if (plVar3 == plVar2) {
                    uVar7 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 9);
                      plVar13 = (long *)plVar8[9];
                      uVar14 = 3;
                    }
                    plVar2 = plVar8 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar7 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xc);
                        plVar13 = (long *)plVar8[0xc];
                        uVar14 = 4;
                      }
                      plVar2 = plVar8 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar7 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + 0xf);
                          plVar13 = (long *)plVar8[0xf];
                          uVar14 = 5;
                        }
                        uVar7 = 6;
                        for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar13) {
                            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar2);
                            plVar13 = (long *)*plVar2;
                            uVar14 = uVar7;
                          }
                          uVar7 = uVar7 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + uVar14 * 3,plVar8 + uVar7 * 3);
            plVar8[600] = 0;
          }
          *(undefined4 *)(lVar11 + 0x12cc) = 0;
        }
      }
    }
    pfVar9 = (float *)(*(long *)(param_2 + 0x180) + 0x40);
    if (*pfVar9 == param_1) goto LAB_00eae368;
  }
  else {
    pfVar9 = (float *)(*(long *)(param_2 + 0x180) + 0x40);
    if (*pfVar9 == param_1) {
      return;
    }
  }
  *pfVar9 = param_1;
LAB_00eae368:
  lVar11 = *(long *)(param_2 + 0x208);
  lVar10 = *(long *)(param_2 + 0x210);
  if (((lVar11 != lVar10) && (*(undefined1 *)(lVar11 + 0x10) = 1, lVar11 + 0x18 != lVar10)) &&
     (*(undefined1 *)(lVar11 + 0x28) = 1, lVar11 + 0x30 != lVar10)) {
    *(undefined1 *)(lVar11 + 0x40) = 1;
    for (lVar11 = lVar11 + 0x48; lVar11 != lVar10; lVar11 = lVar11 + 0x18) {
      *(undefined1 *)(lVar11 + 0x10) = 1;
    }
  }
  return;
}


