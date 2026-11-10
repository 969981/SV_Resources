/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021db4c8; name: FUN_021db4c8
 */


void FUN_021db4c8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  *param_1 = &PTR_FUN_045a6b20;
  param_1[4] = &PTR_LAB_045a6c68;
  param_1[5] = &DAT_045a6d90;
  param_1[6] = &PTR_LAB_045a6de8;
  param_1[7] = &PTR_LAB_045a6e10;
  puVar13 = param_1 + 0x169;
  puVar12 = puVar13;
  if (param_1[0x16d] != 0) {
    puVar12 = puVar13 + param_1[0x16d];
  }
  if ((puVar12 != puVar13) &&
     ((**(code **)(*(long *)param_1[0x169] + 8))((long *)param_1[0x169],param_1),
     puVar12 != param_1 + 0x16a)) {
    (**(code **)(*(long *)param_1[0x16a] + 8))((long *)param_1[0x16a],param_1);
    for (puVar13 = param_1 + 0x16b; puVar12 != puVar13; puVar13 = puVar13 + 1) {
      (**(code **)(*(long *)*puVar13 + 8))((long *)*puVar13,param_1);
    }
  }
  pcVar10 = (code *)param_1[0x159];
  if (pcVar10 != (code *)0x0) {
    param_1[0x15b] = 0;
    param_1[0x15a] = 0;
    param_1[0x159] = 0;
    param_1[0x158] = 0;
    (*pcVar10)(param_1 + 0x15c);
  }
  pcVar10 = (code *)param_1[0x149];
  if (pcVar10 != (code *)0x0) {
    param_1[0x14b] = 0;
    param_1[0x14a] = 0;
    param_1[0x149] = 0;
    param_1[0x148] = 0;
    (*pcVar10)(param_1 + 0x14c);
  }
  plVar8 = param_1 + 0x128;
  do {
    plVar18 = plVar8 + -4;
    lVar11 = *plVar18;
    *plVar18 = 0;
    if (lVar11 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar4 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      pcVar10 = *(code **)(lVar11 + 0x98);
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar11 + 0xa0) = 0;
        *(undefined8 *)(lVar11 + 0xa8) = 0;
        *(undefined8 *)(lVar11 + 0x90) = 0;
        *(undefined8 *)(lVar11 + 0x98) = 0;
        (*pcVar10)(lVar11 + 0xb0);
      }
      pcVar10 = *(code **)(lVar11 + 0x18);
      if (pcVar10 != (code *)0x0) {
        *(undefined8 *)(lVar11 + 0x20) = 0;
        *(undefined8 *)(lVar11 + 0x28) = 0;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (*pcVar10)(lVar11 + 0x30);
      }
      plVar16 = (long *)plVar8[-3];
      lVar6 = plVar8[-2];
      lVar14 = plVar8[-1];
      uVar7 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,lVar11,lVar6,lVar14);
      }
      else {
        FUN_00c48fe8(plVar16,lVar11,lVar6,lVar14);
      }
      lVar11 = FUN_00c4e600();
      iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_70 = plVar8 + plVar8[600] * 3;
          local_68 = plVar8;
          FUN_00c4ea30(&local_68,&local_70);
          plVar17 = (long *)*plVar8;
          plVar16 = plVar8;
          if (plVar8[600] != 0) {
            plVar16 = plVar8 + plVar8[600] * 3;
          }
          if (plVar16 == plVar8) {
            local_78 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar17) {
              (**(code **)(*plVar17 + 0x100))(plVar17,plVar8,plVar8);
              plVar17 = (long *)*plVar8;
            }
            plVar2 = plVar8 + 3;
            if (plVar16 == plVar2) {
              local_78 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar5 = (long *)*plVar2 != plVar17;
              if (bVar5) {
                (**(code **)(*plVar17 + 0x100))(plVar17,plVar8,plVar8 + 3);
                plVar17 = (long *)plVar8[3];
              }
              local_78 = (ulong)bVar5;
              plVar2 = plVar8 + 6;
              if (plVar16 == plVar2) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar17) {
                  (**(code **)(*plVar17 + 0x100))(plVar17,plVar8 + local_78 * 3,plVar8 + 6);
                  plVar17 = (long *)plVar8[6];
                  local_78 = 2;
                }
                plVar2 = plVar8 + 9;
                if (plVar16 == plVar2) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar17) {
                    (**(code **)(*plVar17 + 0x100))(plVar17,plVar8 + local_78 * 3,plVar8 + 9);
                    plVar17 = (long *)plVar8[9];
                    local_78 = 3;
                  }
                  plVar2 = plVar8 + 0xc;
                  if (plVar16 == plVar2) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar17) {
                      (**(code **)(*plVar17 + 0x100))(plVar17,plVar8 + local_78 * 3,plVar8 + 0xc);
                      plVar17 = (long *)plVar8[0xc];
                      local_78 = 4;
                    }
                    plVar2 = plVar8 + 0xf;
                    if (plVar16 == plVar2) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar17) {
                        (**(code **)(*plVar17 + 0x100))(plVar17,plVar8 + local_78 * 3,plVar8 + 0xf);
                        plVar17 = (long *)plVar8[0xf];
                        local_78 = 5;
                      }
                      local_80 = plVar8 + 0x12;
                      if (plVar16 == local_80) {
                        uVar7 = 6;
                      }
                      else {
                        uVar7 = 6;
                        do {
                          (**(code **)(*(long *)*local_80 + 0xd0))();
                          if ((long *)*local_80 != plVar17) {
                            (**(code **)(*plVar17 + 0x100))(plVar17,plVar8 + local_78 * 3,local_80);
                            plVar17 = (long *)*local_80;
                            local_78 = uVar7;
                          }
                          local_80 = local_80 + 3;
                          uVar7 = uVar7 + 1;
                        } while (plVar16 != local_80);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar17 + 0x100))(plVar17,plVar8 + local_78 * 3,plVar8 + uVar7 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
    }
    plVar8 = plVar18;
  } while (plVar18 != param_1 + 0xa8);
  puVar13 = param_1 + 0xa4;
  do {
    puVar19 = puVar13 + -4;
    puVar12 = (undefined8 *)*puVar19;
    *puVar19 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar4 = *(int *)(lVar11 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
        *(int *)(lVar11 + 0x12cc) = iVar1;
      }
      (**(code **)*puVar12)(puVar12);
      plVar8 = (long *)puVar13[-3];
      uVar3 = puVar13[-2];
      uVar15 = puVar13[-1];
      uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar12,uVar3,uVar15);
      }
      else {
        FUN_00c48fe8(plVar8,puVar12,uVar3,uVar15);
      }
      lVar11 = FUN_00c4e600();
      iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
      *(int *)(lVar11 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_70 = plVar8 + plVar8[600] * 3;
          local_68 = plVar8;
          FUN_00c4ea30(&local_68,&local_70);
          plVar16 = (long *)*plVar8;
          plVar18 = plVar8;
          if (plVar8[600] != 0) {
            plVar18 = plVar8 + plVar8[600] * 3;
          }
          if (plVar18 == plVar8) {
            local_78 = 0;
            uVar7 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar8 + 0xd0))();
            if ((long *)*plVar8 != plVar16) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar8,plVar8);
              plVar16 = (long *)*plVar8;
            }
            plVar17 = plVar8 + 3;
            if (plVar18 == plVar17) {
              local_78 = 0;
              uVar7 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar17 + 0xd0))();
              bVar5 = (long *)*plVar17 != plVar16;
              if (bVar5) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar8,plVar8 + 3);
                plVar16 = (long *)plVar8[3];
              }
              local_78 = (ulong)bVar5;
              plVar17 = plVar8 + 6;
              if (plVar18 == plVar17) {
                uVar7 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar17 + 0xd0))();
                if ((long *)*plVar17 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + local_78 * 3,plVar8 + 6);
                  plVar16 = (long *)plVar8[6];
                  local_78 = 2;
                }
                plVar17 = plVar8 + 9;
                if (plVar18 == plVar17) {
                  uVar7 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar17 + 0xd0))();
                  if ((long *)*plVar17 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + local_78 * 3,plVar8 + 9);
                    plVar16 = (long *)plVar8[9];
                    local_78 = 3;
                  }
                  plVar17 = plVar8 + 0xc;
                  if (plVar18 == plVar17) {
                    uVar7 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar17 + 0xd0))();
                    if ((long *)*plVar17 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + local_78 * 3,plVar8 + 0xc);
                      plVar16 = (long *)plVar8[0xc];
                      local_78 = 4;
                    }
                    plVar17 = plVar8 + 0xf;
                    if (plVar18 == plVar17) {
                      uVar7 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar17 + 0xd0))();
                      if ((long *)*plVar17 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + local_78 * 3,plVar8 + 0xf);
                        plVar16 = (long *)plVar8[0xf];
                        local_78 = 5;
                      }
                      local_80 = plVar8 + 0x12;
                      if (plVar18 == local_80) {
                        uVar7 = 6;
                      }
                      else {
                        uVar7 = 6;
                        do {
                          (**(code **)(*(long *)*local_80 + 0xd0))();
                          if ((long *)*local_80 != plVar16) {
                            (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + local_78 * 3,local_80);
                            plVar16 = (long *)*local_80;
                            local_78 = uVar7;
                          }
                          local_80 = local_80 + 3;
                          uVar7 = uVar7 + 1;
                        } while (plVar18 != local_80);
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar16 + 0x100))(plVar16,plVar8 + local_78 * 3,plVar8 + uVar7 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar11 + 0x12cc) = 0;
      }
    }
    puVar13 = puVar19;
  } while (puVar19 != param_1 + 0x24);
  FUN_00e6bfa4(param_1);
  return;
}


