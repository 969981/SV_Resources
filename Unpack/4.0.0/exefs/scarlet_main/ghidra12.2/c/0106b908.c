/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106b908; name: FUN_0106b908
 */


void FUN_0106b908(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar8 = FUN_00c4e600();
  iVar5 = *(int *)(lVar8 + 0x12c8);
  iVar1 = iVar5 + 1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (*(int *)(lVar8 + 0x12cc) <= iVar5) {
    *(int *)(lVar8 + 0x12cc) = iVar1;
  }
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    lVar13 = *param_2;
    lVar8 = lVar13 + (long)iVar1 * 0x40;
    if ((*(ulong *)(lVar8 + -8) & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar8 + -8) - 1,0);
    }
    if (lVar8 + -0x40 != lVar13) {
      if ((*(ulong *)(lVar8 + -0x48) & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar8 + -0x48) - 1,0);
      }
      if (lVar8 + -0x80 != lVar13) {
        if ((*(ulong *)(lVar8 + -0x88) & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(lVar8 + -0x88) - 1,0);
        }
        puVar6 = PTR_DAT_047d1a08;
        if (lVar8 + -0xc0 != lVar13) {
          lVar8 = (long)iVar1 << 6;
          do {
            uVar9 = *(ulong *)(lVar13 + -200 + lVar8);
            if ((uVar9 & 1) != 0) {
              (**(code **)(puVar6 + 8))(0,uVar9 - 1,0);
            }
            lVar8 = lVar8 + -0x40;
          } while (lVar8 != 0xc0);
        }
      }
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*param_2,(ulong)*(uint *)((long)param_2 + 0xc) << 6);
  }
  *param_2 = 0;
  *(undefined4 *)((long)param_2 + 0xc) = 0x80000000;
  plVar10 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar11 = param_1[2];
  uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar10 + 0x18))(plVar10,param_2,uVar4,uVar11);
  }
  else {
    FUN_00c48fe8(plVar10,param_2,uVar4,uVar11);
  }
  lVar8 = FUN_00c4e600();
  iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar10 = (long *)FUN_00c4e600();
    if (plVar10[600] != 0) {
      local_60 = plVar10 + plVar10[600] * 3;
      plStack_58 = plVar10;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar12 = (long *)*plVar10;
      plVar3 = plVar10;
      if (plVar10[600] != 0) {
        plVar3 = plVar10 + plVar10[600] * 3;
      }
      if (plVar3 == plVar10) {
        uVar14 = 0;
        uVar9 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar10 + 0xd0))();
        if ((long *)*plVar10 != plVar12) {
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10);
          plVar12 = (long *)*plVar10;
        }
        plVar2 = plVar10 + 3;
        if (plVar3 == plVar2) {
          uVar14 = 0;
          uVar9 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar7 = (long *)*plVar2 != plVar12;
          if (bVar7) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar10,plVar10 + 3);
            plVar12 = (long *)plVar10[3];
          }
          uVar14 = (ulong)bVar7;
          plVar2 = plVar10 + 6;
          if (plVar3 == plVar2) {
            uVar9 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar12) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + 6);
              plVar12 = (long *)plVar10[6];
              uVar14 = 2;
            }
            plVar2 = plVar10 + 9;
            if (plVar3 == plVar2) {
              uVar9 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + 9);
                plVar12 = (long *)plVar10[9];
                uVar14 = 3;
              }
              plVar2 = plVar10 + 0xc;
              if (plVar3 == plVar2) {
                uVar9 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + 0xc);
                  plVar12 = (long *)plVar10[0xc];
                  uVar14 = 4;
                }
                plVar2 = plVar10 + 0xf;
                if (plVar3 == plVar2) {
                  uVar9 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + 0xf);
                    plVar12 = (long *)plVar10[0xf];
                    uVar14 = 5;
                  }
                  uVar9 = 6;
                  for (plVar2 = plVar10 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar2);
                      plVar12 = (long *)*plVar2;
                      uVar14 = uVar9;
                    }
                    uVar9 = uVar9 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar10 + uVar14 * 3,plVar10 + uVar9 * 3);
      plVar10[600] = 0;
    }
    *(undefined4 *)(lVar8 + 0x12cc) = 0;
  }
  return;
}


