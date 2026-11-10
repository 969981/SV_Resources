/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d3f1dc; name: FUN_00d3f1dc
 */


void FUN_00d3f1dc(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar15;
  undefined8 *puVar14;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  puVar4 = (undefined8 *)*param_1;
  if ((undefined8 *)param_1[1] != puVar4) {
    puVar14 = (undefined8 *)param_1[1];
    do {
      puVar15 = puVar14 + -4;
      puVar11 = (undefined8 *)*puVar15;
      *puVar15 = 0;
      if (puVar11 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar8 = FUN_00c4e600();
        iVar6 = *(int *)(lVar8 + 0x12c8);
        iVar1 = iVar6 + 1;
        *(int *)(lVar8 + 0x12c8) = iVar1;
        if (*(int *)(lVar8 + 0x12cc) <= iVar6) {
          *(int *)(lVar8 + 0x12cc) = iVar1;
        }
        (**(code **)*puVar11)(puVar11);
        plVar10 = (long *)puVar14[-3];
        uVar5 = puVar14[-2];
        uVar12 = puVar14[-1];
        uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
        if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar10 + 0x18))(plVar10,puVar11,uVar5,uVar12);
        }
        else {
          FUN_00c48fe8(plVar10,puVar11,uVar5,uVar12);
        }
        lVar8 = FUN_00c4e600();
        iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar1;
        if (iVar1 == 0) {
          plVar10 = (long *)FUN_00c4e600();
          if (plVar10[600] != 0) {
            local_70 = plVar10 + plVar10[600] * 3;
            local_68 = plVar10;
            FUN_00c4ea30(&local_68,&local_70);
            plVar13 = (long *)*plVar10;
            plVar3 = plVar10;
            if (plVar10[600] != 0) {
              plVar3 = plVar10 + plVar10[600] * 3;
            }
            if (plVar3 == plVar10) {
              local_78 = 0;
              uVar9 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar10 + 0xd0))();
              if ((long *)*plVar10 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar10,plVar10);
                plVar13 = (long *)*plVar10;
              }
              plVar2 = plVar10 + 3;
              if (plVar3 == plVar2) {
                local_78 = 0;
                uVar9 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar7 = (long *)*plVar2 != plVar13;
                if (bVar7) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar10,plVar10 + 3);
                  plVar13 = (long *)plVar10[3];
                }
                local_78 = (ulong)bVar7;
                plVar2 = plVar10 + 6;
                if (plVar3 == plVar2) {
                  uVar9 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + local_78 * 3,plVar10 + 6);
                    plVar13 = (long *)plVar10[6];
                    local_78 = 2;
                  }
                  plVar2 = plVar10 + 9;
                  if (plVar3 == plVar2) {
                    uVar9 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + local_78 * 3,plVar10 + 9);
                      plVar13 = (long *)plVar10[9];
                      local_78 = 3;
                    }
                    plVar2 = plVar10 + 0xc;
                    if (plVar3 == plVar2) {
                      uVar9 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))
                                  (plVar13,plVar10 + local_78 * 3,plVar10 + 0xc);
                        plVar13 = (long *)plVar10[0xc];
                        local_78 = 4;
                      }
                      plVar2 = plVar10 + 0xf;
                      if (plVar3 == plVar2) {
                        uVar9 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))
                                    (plVar13,plVar10 + local_78 * 3,plVar10 + 0xf);
                          plVar13 = (long *)plVar10[0xf];
                          local_78 = 5;
                        }
                        local_80 = plVar10 + 0x12;
                        uVar9 = 6;
                        if (plVar3 != local_80) {
                          do {
                            (**(code **)(*(long *)*local_80 + 0xd0))();
                            if ((long *)*local_80 != plVar13) {
                              (**(code **)(*plVar13 + 0x100))
                                        (plVar13,plVar10 + local_78 * 3,local_80);
                              plVar13 = (long *)*local_80;
                              local_78 = uVar9;
                            }
                            local_80 = local_80 + 3;
                            uVar9 = uVar9 + 1;
                          } while (plVar3 != local_80);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar10 + local_78 * 3,plVar10 + uVar9 * 3);
            plVar10[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
      puVar14 = puVar15;
    } while (puVar15 != puVar4);
  }
  param_1[1] = puVar4;
  return;
}


