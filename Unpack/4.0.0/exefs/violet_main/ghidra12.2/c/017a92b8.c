/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017a92b8; name: FUN_017a92b8
 */


void FUN_017a92b8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *local_60;
  long *plStack_58;
  
  puVar13 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (puVar13 != (undefined8 *)0x0) {
    plVar11 = (long *)puVar13[1];
    uVar4 = puVar13[2];
    uVar6 = *(undefined2 *)(puVar13 + 3);
    uVar7 = *(undefined2 *)((long)puVar13 + 0x1a);
    FUN_00c4e600();
    FUN_00c4e600();
    lVar9 = FUN_00c4e600();
    iVar5 = *(int *)(lVar9 + 0x12c8);
    iVar1 = iVar5 + 1;
    *(int *)(lVar9 + 0x12c8) = iVar1;
    if (*(int *)(lVar9 + 0x12cc) <= iVar5) {
      *(int *)(lVar9 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar13)(puVar13);
    uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar4,uVar6,uVar7);
    }
    else {
      FUN_00c48fe8(plVar11,uVar4,uVar6,uVar7);
    }
    lVar9 = FUN_00c4e600();
    iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar11 = (long *)FUN_00c4e600();
      if (plVar11[600] != 0) {
        local_60 = plVar11 + plVar11[600] * 3;
        plStack_58 = plVar11;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar12 = (long *)*plVar11;
        plVar3 = plVar11;
        if (plVar11[600] != 0) {
          plVar3 = plVar11 + plVar11[600] * 3;
        }
        if (plVar3 == plVar11) {
          uVar14 = 0;
          uVar10 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar11 + 0xd0))();
          if ((long *)*plVar11 != plVar12) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11);
            plVar12 = (long *)*plVar11;
          }
          plVar2 = plVar11 + 3;
          if (plVar3 == plVar2) {
            uVar14 = 0;
            uVar10 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar8 = (long *)*plVar2 != plVar12;
            if (bVar8) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar11,plVar11 + 3);
              plVar12 = (long *)plVar11[3];
            }
            uVar14 = (ulong)bVar8;
            plVar2 = plVar11 + 6;
            if (plVar3 == plVar2) {
              uVar10 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + 6);
                plVar12 = (long *)plVar11[6];
                uVar14 = 2;
              }
              plVar2 = plVar11 + 9;
              if (plVar3 == plVar2) {
                uVar10 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + 9);
                  plVar12 = (long *)plVar11[9];
                  uVar14 = 3;
                }
                plVar2 = plVar11 + 0xc;
                if (plVar3 == plVar2) {
                  uVar10 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + 0xc);
                    plVar12 = (long *)plVar11[0xc];
                    uVar14 = 4;
                  }
                  plVar2 = plVar11 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar10 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + 0xf);
                      plVar12 = (long *)plVar11[0xf];
                      uVar14 = 5;
                    }
                    uVar10 = 6;
                    for (plVar2 = plVar11 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar2);
                        plVar12 = (long *)*plVar2;
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
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar11 + uVar14 * 3,plVar11 + uVar10 * 3);
        plVar11[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  return;
}


