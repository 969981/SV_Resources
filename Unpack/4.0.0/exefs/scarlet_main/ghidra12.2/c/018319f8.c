/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018319f8; name: FUN_018319f8
 */


void FUN_018319f8(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
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
  puVar6 = PTR_DAT_047d1a08;
  if ((int)param_2[1] != 0) {
    lVar11 = *param_2;
    lVar8 = (long)(int)param_2[1] << 6;
    do {
      uVar10 = *(ulong *)(lVar11 + -8 + lVar8);
      if ((uVar10 & 1) != 0) {
        (**(code **)(puVar6 + 8))(0,uVar10 - 1,0);
      }
      lVar8 = lVar8 + -0x40;
    } while (lVar8 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*param_2,(ulong)*(uint *)((long)param_2 + 0xc) << 6);
  }
  *param_2 = 0;
  *(undefined4 *)((long)param_2 + 0xc) = 0x80000000;
  plVar9 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar12 = param_1[2];
  uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,param_2,uVar4,uVar12);
  }
  else {
    FUN_00c48fe8(plVar9,param_2,uVar4,uVar12);
  }
  lVar8 = FUN_00c4e600();
  iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
  *(int *)(lVar8 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar9 = (long *)FUN_00c4e600();
    if (plVar9[600] != 0) {
      local_60 = plVar9 + plVar9[600] * 3;
      plStack_58 = plVar9;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar13 = (long *)*plVar9;
      plVar3 = plVar9;
      if (plVar9[600] != 0) {
        plVar3 = plVar9 + plVar9[600] * 3;
      }
      if (plVar3 == plVar9) {
        uVar14 = 0;
        uVar10 = 0;
      }
      else {
        (**(code **)(*(long *)*plVar9 + 0xd0))();
        if ((long *)*plVar9 != plVar13) {
          (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9);
          plVar13 = (long *)*plVar9;
        }
        plVar2 = plVar9 + 3;
        if (plVar3 == plVar2) {
          uVar14 = 0;
          uVar10 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar7 = (long *)*plVar2 != plVar13;
          if (bVar7) {
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar9,plVar9 + 3);
            plVar13 = (long *)plVar9[3];
          }
          uVar14 = (ulong)bVar7;
          plVar2 = plVar9 + 6;
          if (plVar3 == plVar2) {
            uVar10 = 2;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            if ((long *)*plVar2 != plVar13) {
              (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 6);
              plVar13 = (long *)plVar9[6];
              uVar14 = 2;
            }
            plVar2 = plVar9 + 9;
            if (plVar3 == plVar2) {
              uVar10 = 3;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 9);
                plVar13 = (long *)plVar9[9];
                uVar14 = 3;
              }
              plVar2 = plVar9 + 0xc;
              if (plVar3 == plVar2) {
                uVar10 = 4;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xc);
                  plVar13 = (long *)plVar9[0xc];
                  uVar14 = 4;
                }
                plVar2 = plVar9 + 0xf;
                if (plVar3 == plVar2) {
                  uVar10 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + 0xf);
                    plVar13 = (long *)plVar9[0xf];
                    uVar14 = 5;
                  }
                  uVar10 = 6;
                  for (plVar2 = plVar9 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar2);
                      plVar13 = (long *)*plVar2;
                      uVar14 = uVar10;
                    }
                    uVar10 = uVar10 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar13 + 0x100))(plVar13,plVar9 + uVar14 * 3,plVar9 + uVar10 * 3);
      plVar9[600] = 0;
    }
    *(undefined4 *)(lVar8 + 0x12cc) = 0;
  }
  return;
}


