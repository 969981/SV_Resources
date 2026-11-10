/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c485fc; name: FUN_00c485fc
 */


void FUN_00c485fc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  FUN_00c4e600();
  FUN_00c4e600();
  lVar10 = FUN_00c4e600();
  iVar6 = *(int *)(lVar10 + 0x12c8);
  iVar1 = iVar6 + 1;
  *(int *)(lVar10 + 0x12c8) = iVar1;
  if (*(int *)(lVar10 + 0x12cc) <= iVar6) {
    *(int *)(lVar10 + 0x12cc) = iVar1;
  }
  FUN_00c48dbc(param_1 + 0x140,*(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 3);
  puVar17 = *(undefined8 **)(param_1 + 0x108);
  puVar16 = *(undefined8 **)(param_1 + 0x110);
  if (puVar17 != puVar16) {
    puVar2 = (undefined8 *)(param_1 + 0x108);
    do {
      if (puVar17 != puVar16) {
        do {
          puVar14 = (undefined8 *)*puVar17;
          plVar11 = (long *)puVar14[1];
          uVar5 = puVar14[2];
          uVar7 = *(undefined2 *)(puVar14 + 3);
          uVar8 = *(undefined2 *)((long)puVar14 + 0x1a);
          FUN_00c4e600();
          FUN_00c4e600();
          lVar10 = FUN_00c4e600();
          iVar6 = *(int *)(lVar10 + 0x12c8);
          iVar1 = iVar6 + 1;
          *(int *)(lVar10 + 0x12c8) = iVar1;
          if (*(int *)(lVar10 + 0x12cc) <= iVar6) {
            *(int *)(lVar10 + 0x12cc) = iVar1;
          }
          (**(code **)*puVar14)(puVar14);
          uVar15 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar15 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,uVar5,uVar7,uVar8);
          }
          else {
            FUN_00c48fe8(plVar11,uVar5,uVar7,uVar8);
          }
          lVar10 = FUN_00c4e600();
          iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
          *(int *)(lVar10 + 0x12c8) = iVar1;
          if (iVar1 == 0) {
            plVar11 = (long *)FUN_00c4e600();
            if (plVar11[600] != 0) {
              local_70 = plVar11 + plVar11[600] * 3;
              local_68 = plVar11;
              FUN_00c4ea30(&local_68,&local_70);
              plVar12 = (long *)*plVar11;
              plVar4 = plVar11;
              if (plVar11[600] != 0) {
                plVar4 = plVar11 + plVar11[600] * 3;
              }
              if (plVar4 == plVar11) {
                local_78 = 0;
                uVar15 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar11 + 0xd0))();
                if ((long *)*plVar11 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11);
                  plVar12 = (long *)*plVar11;
                }
                plVar3 = plVar11 + 3;
                if (plVar4 == plVar3) {
                  local_78 = 0;
                  uVar15 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  bVar9 = (long *)*plVar3 != plVar12;
                  if (bVar9) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11 + 3);
                    plVar12 = (long *)plVar11[3];
                  }
                  local_78 = (ulong)bVar9;
                  plVar3 = plVar11 + 6;
                  if (plVar4 == plVar3) {
                    uVar15 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + local_78 * 3,plVar11 + 6);
                      plVar12 = (long *)plVar11[6];
                      local_78 = 2;
                    }
                    plVar3 = plVar11 + 9;
                    if (plVar4 == plVar3) {
                      uVar15 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + local_78 * 3,plVar11 + 9);
                        plVar12 = (long *)plVar11[9];
                        local_78 = 3;
                      }
                      plVar3 = plVar11 + 0xc;
                      if (plVar4 == plVar3) {
                        uVar15 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar3 + 0xd0))();
                        if ((long *)*plVar3 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))
                                    (plVar12,plVar11 + local_78 * 3,plVar11 + 0xc);
                          plVar12 = (long *)plVar11[0xc];
                          local_78 = 4;
                        }
                        plVar3 = plVar11 + 0xf;
                        if (plVar4 == plVar3) {
                          uVar15 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar3 + 0xd0))();
                          if ((long *)*plVar3 != plVar12) {
                            (**(code **)(*plVar12 + 0x100))
                                      (plVar12,plVar11 + local_78 * 3,plVar11 + 0xf);
                            plVar12 = (long *)plVar11[0xf];
                            local_78 = 5;
                          }
                          uVar15 = 6;
                          for (local_80 = plVar11 + 0x12; plVar4 != local_80;
                              local_80 = local_80 + 3) {
                            (**(code **)(*(long *)*local_80 + 0xd0))();
                            if ((long *)*local_80 != plVar12) {
                              (**(code **)(*plVar12 + 0x100))
                                        (plVar12,plVar11 + local_78 * 3,local_80);
                              plVar12 = (long *)*local_80;
                              local_78 = uVar15;
                            }
                            uVar15 = uVar15 + 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + local_78 * 3,plVar11 + uVar15 * 3);
              plVar11[600] = 0;
            }
            *(undefined4 *)(lVar10 + 0x12cc) = 0;
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar16);
        puVar17 = (undefined8 *)*puVar2;
      }
      *(undefined8 **)(param_1 + 0x110) = puVar17;
      if (*(long *)(param_1 + 0x140) == *(long *)(param_1 + 0x148)) break;
      FUN_00c48dbc(puVar2,*(long *)(param_1 + 0x148) - *(long *)(param_1 + 0x140) >> 3);
      FUN_00c4b05c(puVar2,*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x140),
                   *(undefined8 *)(param_1 + 0x148));
      puVar17 = *(undefined8 **)(param_1 + 0x108);
      puVar16 = *(undefined8 **)(param_1 + 0x110);
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x140);
    } while (puVar17 != puVar16);
  }
  lVar10 = FUN_00c4e600();
  iVar1 = *(int *)(lVar10 + 0x12c8) + -1;
  *(int *)(lVar10 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar11 = (long *)FUN_00c4e600();
    if (plVar11[600] != 0) {
      local_70 = plVar11 + plVar11[600] * 3;
      local_68 = plVar11;
      FUN_00c4ea30(&local_68,&local_70);
      plVar12 = (long *)*plVar11;
      plVar4 = plVar11;
      if (plVar11[600] != 0) {
        plVar4 = plVar11 + plVar11[600] * 3;
      }
      if (plVar4 == plVar11) {
        uVar13 = 0;
        uVar15 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar11 + 0xd0))();
        if ((long *)*plVar11 != plVar12) {
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11);
          plVar12 = (long *)*plVar11;
        }
        plVar3 = plVar11 + 3;
        if (plVar4 == plVar3) {
          uVar13 = 0;
          uVar15 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar3 + 0xd0))();
          bVar9 = (long *)*plVar3 != plVar12;
          if (bVar9) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11 + 3);
            plVar12 = (long *)plVar11[3];
          }
          uVar13 = (ulong)bVar9;
          plVar3 = plVar11 + 6;
          if (plVar4 == plVar3) {
            uVar15 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            if ((long *)*plVar3 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + 6);
              plVar12 = (long *)plVar11[6];
              uVar13 = 2;
            }
            plVar3 = plVar11 + 9;
            if (plVar4 == plVar3) {
              uVar15 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + 9);
                plVar12 = (long *)plVar11[9];
                uVar13 = 3;
              }
              plVar3 = plVar11 + 0xc;
              if (plVar4 == plVar3) {
                uVar15 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + 0xc);
                  plVar12 = (long *)plVar11[0xc];
                  uVar13 = 4;
                }
                plVar3 = plVar11 + 0xf;
                if (plVar4 == plVar3) {
                  uVar15 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + 0xf);
                    plVar12 = (long *)plVar11[0xf];
                    uVar13 = 5;
                  }
                  uVar15 = 6;
                  for (plVar3 = plVar11 + 0x12; plVar4 != plVar3; plVar3 = plVar3 + 3) {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar3);
                      plVar12 = (long *)*plVar3;
                      uVar13 = uVar15;
                    }
                    uVar15 = uVar15 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar13 * 3,plVar11 + uVar15 * 3);
      plVar11[600] = 0;
    }
    *(undefined4 *)(lVar10 + 0x12cc) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return;
}


