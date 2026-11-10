/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a8c98; name: FUN_018a8c98
 */


void FUN_018a8c98(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar12 = *(long *)(param_1 + 0x10);
  while (lVar12 != param_2) {
    *(long *)(param_1 + 0x10) = lVar12 + -0x20;
    lVar10 = *(long *)(lVar12 + -0x20);
    *(undefined8 *)(lVar12 + -0x20) = 0;
    if (lVar10 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar5 = *(int *)(lVar7 + 0x12c8);
      iVar1 = iVar5 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
        *(int *)(lVar7 + 0x12cc) = iVar1;
      }
      FUN_01449c9c(lVar10);
      plVar9 = *(long **)(lVar12 + -0x18);
      uVar4 = *(undefined8 *)(lVar12 + -0x10);
      uVar13 = *(undefined8 *)(lVar12 + -8);
      uVar8 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar8 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,uVar4,uVar13);
      }
      else {
        FUN_00c48fe8(plVar9,lVar10,uVar4,uVar13);
      }
      lVar12 = FUN_00c4e600();
      iVar1 = *(int *)(lVar12 + 0x12c8) + -1;
      *(int *)(lVar12 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar9 = (long *)FUN_00c4e600();
        if (plVar9[600] != 0) {
          local_70 = plVar9 + plVar9[600] * 3;
          local_68 = plVar9;
          FUN_00c4ea30(&local_68,&local_70);
          plVar11 = (long *)*plVar9;
          plVar3 = plVar9;
          if (plVar9[600] != 0) {
            plVar3 = plVar9 + plVar9[600] * 3;
          }
          if (plVar3 == plVar9) {
            uVar14 = 0;
            uVar8 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar9 + 0xd0))();
            if ((long *)*plVar9 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar9,plVar9);
              plVar11 = (long *)*plVar9;
            }
            plVar2 = plVar9 + 3;
            if (plVar3 == plVar2) {
              uVar14 = 0;
              uVar8 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              bVar6 = (long *)*plVar2 != plVar11;
              if (bVar6) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar9,plVar9 + 3);
                plVar11 = (long *)plVar9[3];
              }
              uVar14 = (ulong)bVar6;
              plVar2 = plVar9 + 6;
              if (plVar3 == plVar2) {
                uVar8 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar11) {
                  (**(code **)(*plVar11 + 0x100))(plVar11,plVar9 + uVar14 * 3,plVar9 + 6);
                  plVar11 = (long *)plVar9[6];
                  uVar14 = 2;
                }
                plVar2 = plVar9 + 9;
                if (plVar3 == plVar2) {
                  uVar8 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar11) {
                    (**(code **)(*plVar11 + 0x100))(plVar11,plVar9 + uVar14 * 3,plVar9 + 9);
                    plVar11 = (long *)plVar9[9];
                    uVar14 = 3;
                  }
                  plVar2 = plVar9 + 0xc;
                  if (plVar3 == plVar2) {
                    uVar8 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar11) {
                      (**(code **)(*plVar11 + 0x100))(plVar11,plVar9 + uVar14 * 3,plVar9 + 0xc);
                      plVar11 = (long *)plVar9[0xc];
                      uVar14 = 4;
                    }
                    plVar2 = plVar9 + 0xf;
                    if (plVar3 == plVar2) {
                      uVar8 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar11) {
                        (**(code **)(*plVar11 + 0x100))(plVar11,plVar9 + uVar14 * 3,plVar9 + 0xf);
                        plVar11 = (long *)plVar9[0xf];
                        uVar14 = 5;
                      }
                      uVar8 = 6;
                      for (local_78 = plVar9 + 0x12; plVar3 != local_78; local_78 = local_78 + 3) {
                        (**(code **)(*(long *)*local_78 + 0xd0))();
                        if ((long *)*local_78 != plVar11) {
                          (**(code **)(*plVar11 + 0x100))(plVar11,plVar9 + uVar14 * 3,local_78);
                          plVar11 = (long *)*local_78;
                          uVar14 = uVar8;
                        }
                        uVar8 = uVar8 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar9 + uVar14 * 3,plVar9 + uVar8 * 3);
          plVar9[600] = 0;
        }
        *(undefined4 *)(lVar12 + 0x12cc) = 0;
      }
    }
    lVar12 = *(long *)(param_1 + 0x10);
  }
  return;
}


