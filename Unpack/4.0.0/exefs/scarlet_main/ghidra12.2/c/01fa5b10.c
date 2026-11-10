/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa5b10; name: FUN_01fa5b10
 */


long * FUN_01fa5b10(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *local_90;
  ulong local_88;
  long local_78;
  long *local_70;
  long *plStack_68;
  
  local_78 = param_3;
  plVar6 = (long *)FUN_01fa5ff0(param_1,param_2,&local_78);
  if ((plVar6 != param_2) && (plVar6 + 4 != param_2)) {
    plVar8 = plVar6 + 4;
    plVar15 = plVar6;
    while( true ) {
      plVar10 = plVar8;
      lVar11 = 0;
      if (*(long *)(param_3 + 8) != 0) {
        lVar12 = *(long *)(*(long *)(param_3 + 8) + 0x10);
        lVar11 = 0;
        if (lVar12 != 0) {
          lVar11 = lVar12 + -0x28;
        }
      }
      if (((((long *)*plVar10)[2] != lVar11) && (lVar11 = *(long *)*plVar10, lVar11 != 0)) &&
         (*(short *)(lVar11 + 0x1a) != 0)) {
        lVar11 = *plVar10;
        *plVar10 = 0;
        lVar12 = *plVar6;
        *plVar6 = lVar11;
        if (lVar12 != 0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar11 = FUN_00c4e600();
          iVar4 = *(int *)(lVar11 + 0x12c8);
          iVar1 = iVar4 + 1;
          *(int *)(lVar11 + 0x12c8) = iVar1;
          if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
            *(int *)(lVar11 + 0x12cc) = iVar1;
          }
          FUN_018cec38(lVar12);
          plVar8 = (long *)plVar6[1];
          lVar11 = plVar6[2];
          lVar14 = plVar6[3];
          uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar7 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,lVar11,lVar14);
          }
          else {
            FUN_00c48fe8(plVar8,lVar12,lVar11,lVar14);
          }
          lVar11 = FUN_00c4e600();
          iVar1 = *(int *)(lVar11 + 0x12c8) + -1;
          *(int *)(lVar11 + 0x12c8) = iVar1;
          if (iVar1 == 0) {
            plVar8 = (long *)FUN_00c4e600();
            if (plVar8[600] != 0) {
              local_70 = plVar8 + plVar8[600] * 3;
              plStack_68 = plVar8;
              FUN_00c4ea30(&plStack_68,&local_70);
              plVar13 = (long *)*plVar8;
              plVar3 = plVar8;
              if (plVar8[600] != 0) {
                plVar3 = plVar8 + plVar8[600] * 3;
              }
              if (plVar3 == plVar8) {
                local_88 = 0;
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
                  local_88 = 0;
                  uVar7 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  bVar5 = (long *)*plVar2 != plVar13;
                  if (bVar5) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar8,plVar8 + 3);
                    plVar13 = (long *)plVar8[3];
                  }
                  local_88 = (ulong)bVar5;
                  plVar2 = plVar8 + 6;
                  if (plVar3 == plVar2) {
                    uVar7 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + local_88 * 3,plVar8 + 6);
                      plVar13 = (long *)plVar8[6];
                      local_88 = 2;
                    }
                    plVar2 = plVar8 + 9;
                    if (plVar3 == plVar2) {
                      uVar7 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + local_88 * 3,plVar8 + 9);
                        plVar13 = (long *)plVar8[9];
                        local_88 = 3;
                      }
                      plVar2 = plVar8 + 0xc;
                      if (plVar3 == plVar2) {
                        uVar7 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))
                                    (plVar13,plVar8 + local_88 * 3,plVar8 + 0xc);
                          plVar13 = (long *)plVar8[0xc];
                          local_88 = 4;
                        }
                        plVar2 = plVar8 + 0xf;
                        if (plVar3 == plVar2) {
                          uVar7 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar13) {
                            (**(code **)(*plVar13 + 0x100))
                                      (plVar13,plVar8 + local_88 * 3,plVar8 + 0xf);
                            plVar13 = (long *)plVar8[0xf];
                            local_88 = 5;
                          }
                          uVar7 = 6;
                          for (local_90 = plVar8 + 0x12; plVar3 != local_90; local_90 = local_90 + 3
                              ) {
                            (**(code **)(*(long *)*local_90 + 0xd0))();
                            if ((long *)*local_90 != plVar13) {
                              (**(code **)(*plVar13 + 0x100))
                                        (plVar13,plVar8 + local_88 * 3,local_90);
                              plVar13 = (long *)*local_90;
                              local_88 = uVar7;
                            }
                            uVar7 = uVar7 + 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar8 + local_88 * 3,plVar8 + uVar7 * 3);
              plVar8[600] = 0;
            }
            *(undefined4 *)(lVar11 + 0x12cc) = 0;
          }
        }
        lVar11 = plVar15[5];
        lVar12 = plVar15[7];
        plVar6[2] = plVar15[6];
        plVar6[3] = lVar12;
        plVar6[1] = lVar11;
        plVar6 = plVar6 + 4;
      }
      if (plVar10 + 4 == param_2) break;
      plVar8 = plVar10 + 4;
      param_3 = local_78;
      plVar15 = plVar10;
    }
  }
  return plVar6;
}


