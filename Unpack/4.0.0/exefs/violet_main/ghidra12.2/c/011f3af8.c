/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011f3af8; name: FUN_011f3af8
 */


void FUN_011f3af8(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  lVar14 = *param_1;
  if (lVar14 != 0) {
    lVar12 = param_1[1];
    lVar15 = lVar14;
    if (lVar12 != lVar14) {
      do {
        puVar10 = *(undefined8 **)(lVar12 + -0x20);
        lVar15 = lVar12 + -0x28;
        *(undefined8 *)(lVar12 + -0x20) = 0;
        if (puVar10 != (undefined8 *)0x0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar7 = FUN_00c4e600();
          iVar5 = *(int *)(lVar7 + 0x12c8);
          iVar1 = iVar5 + 1;
          *(int *)(lVar7 + 0x12c8) = iVar1;
          if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
            *(int *)(lVar7 + 0x12cc) = iVar1;
          }
          (**(code **)*puVar10)(puVar10);
          plVar8 = *(long **)(lVar12 + -0x18);
          uVar4 = *(undefined8 *)(lVar12 + -0x10);
          uVar13 = *(undefined8 *)(lVar12 + -8);
          uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,puVar10,uVar4,uVar13);
          }
          else {
            FUN_00c48fe8(plVar8,puVar10,uVar4,uVar13);
          }
          lVar12 = FUN_00c4e600();
          iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
          *(int *)(lVar12 + 0x12c8) = iVar1;
          if (iVar1 == 0) {
            plVar8 = (long *)FUN_00c4e600();
            if (plVar8[600] != 0) {
              local_70 = plVar8 + plVar8[600] * 3;
              local_68 = plVar8;
              FUN_00c4ea30(&local_68,&local_70);
              plVar11 = (long *)*plVar8;
              plVar3 = plVar8;
              if (plVar8[600] != 0) {
                plVar3 = plVar8 + plVar8[600] * 3;
              }
              if (plVar3 == plVar8) {
                local_78 = 0;
                uVar9 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar8 + 0xd0))();
                if ((long *)*plVar8 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8);
                  plVar11 = (long *)*plVar8;
                }
                plVar2 = plVar8 + 3;
                if (plVar3 == plVar2) {
                  local_78 = 0;
                  uVar9 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  bVar6 = (long *)*plVar2 != plVar11;
                  if (bVar6) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar8,plVar8 + 3);
                    plVar11 = (long *)plVar8[3];
                  }
                  local_78 = (ulong)bVar6;
                  plVar2 = plVar8 + 6;
                  if (plVar3 == plVar2) {
                    uVar9 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + local_78 * 3,plVar8 + 6);
                      plVar11 = (long *)plVar8[6];
                      local_78 = 2;
                    }
                    plVar2 = plVar8 + 9;
                    if (plVar3 == plVar2) {
                      uVar9 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + local_78 * 3,plVar8 + 9);
                        plVar11 = (long *)plVar8[9];
                        local_78 = 3;
                      }
                      plVar2 = plVar8 + 0xc;
                      if (plVar3 == plVar2) {
                        uVar9 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar11) {
                          (**(code **)(*plVar11 + 0x100))
                                    (plVar11,plVar8 + local_78 * 3,plVar8 + 0xc);
                          plVar11 = (long *)plVar8[0xc];
                          local_78 = 4;
                        }
                        plVar2 = plVar8 + 0xf;
                        if (plVar3 == plVar2) {
                          uVar9 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar11) {
                            (**(code **)(*plVar11 + 0x100))
                                      (plVar11,plVar8 + local_78 * 3,plVar8 + 0xf);
                            plVar11 = (long *)plVar8[0xf];
                            local_78 = 5;
                          }
                          uVar9 = 6;
                          for (local_80 = plVar8 + 0x12; plVar3 != local_80; local_80 = local_80 + 3
                              ) {
                            (**(code **)(*(long *)*local_80 + 0xd0))();
                            if ((long *)*local_80 != plVar11) {
                              (**(code **)(*plVar11 + 0x100))
                                        (plVar11,plVar8 + local_78 * 3,local_80);
                              plVar11 = (long *)*local_80;
                              local_78 = uVar9;
                            }
                            uVar9 = uVar9 + 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar8 + local_78 * 3,plVar8 + uVar9 * 3);
              plVar8[600] = 0;
            }
            *(undefined4 *)(lVar12 + 0x12cc) = 0;
          }
        }
        lVar12 = lVar15;
      } while (lVar15 != lVar14);
      lVar15 = *param_1;
    }
    lVar12 = param_1[2];
    plVar8 = (long *)param_1[3];
    param_1[1] = lVar14;
    uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar9 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar15,lVar12 - lVar15,8);
    }
    else {
      FUN_00c48fe8(plVar8,lVar15,lVar12 - lVar15,8);
    }
  }
  return;
}


