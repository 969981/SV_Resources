/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff2020; name: FUN_00ff2020
 */


void FUN_00ff2020(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  FUN_00ff2448(&local_88,param_2,**(undefined4 **)(*(long *)(param_1 + 0x70) + 0x10));
  uVar9 = local_88;
  local_88 = 0;
  lVar11 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  if (lVar11 == 0) {
    *(undefined8 *)(param_1 + 0x60) = uStack_78;
    *(undefined8 *)(param_1 + 0x68) = local_70;
    *(undefined8 *)(param_1 + 0x58) = local_80;
  }
  else {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar6 = FUN_00c4e600();
    iVar4 = *(int *)(lVar6 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (*(int *)(lVar6 + 0x12cc) <= iVar4) {
      *(int *)(lVar6 + 0x12cc) = iVar1;
    }
    plVar8 = *(long **)(param_1 + 0x58);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    uVar7 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,uVar9,uVar10);
    }
    else {
      FUN_00c48fe8(plVar8,lVar11,uVar9,uVar10);
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
        plVar12 = (long *)*plVar8;
        plVar3 = plVar8;
        if (plVar8[600] != 0) {
          plVar3 = plVar8 + plVar8[600] * 3;
        }
        if (plVar3 == plVar8) {
          uVar13 = 0;
          uVar7 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar8 + 0xd0))();
          if ((long *)*plVar8 != plVar12) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar8,plVar8);
            plVar12 = (long *)*plVar8;
          }
          plVar2 = plVar8 + 3;
          if (plVar3 == plVar2) {
            uVar13 = 0;
            uVar7 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar5 = (long *)*plVar2 != plVar12;
            if (bVar5) {
              (**(code **)(*plVar12 + 0x100))(plVar12,plVar8,plVar8 + 3);
              plVar12 = (long *)plVar8[3];
            }
            uVar13 = (ulong)bVar5;
            plVar2 = plVar8 + 6;
            if (plVar3 == plVar2) {
              uVar7 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + 6);
                plVar12 = (long *)plVar8[6];
                uVar13 = 2;
              }
              plVar2 = plVar8 + 9;
              if (plVar3 == plVar2) {
                uVar7 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + 9);
                  plVar12 = (long *)plVar8[9];
                  uVar13 = 3;
                }
                plVar2 = plVar8 + 0xc;
                if (plVar3 == plVar2) {
                  uVar7 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + 0xc);
                    plVar12 = (long *)plVar8[0xc];
                    uVar13 = 4;
                  }
                  plVar2 = plVar8 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar7 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + 0xf);
                      plVar12 = (long *)plVar8[0xf];
                      uVar13 = 5;
                    }
                    uVar7 = 6;
                    for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar2);
                        plVar12 = (long *)*plVar2;
                        uVar13 = uVar7;
                      }
                      uVar7 = uVar7 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + uVar7 * 3);
        plVar8[600] = 0;
      }
      *(undefined4 *)(lVar11 + 0x12cc) = 0;
    }
    *(undefined8 *)(param_1 + 0x58) = local_80;
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x60) = uStack_78;
    *(undefined8 *)(param_1 + 0x68) = local_70;
  }
  lVar11 = *(long *)(param_1 + 0x70);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar11 + 8) = uVar9;
  *(undefined8 *)(lVar11 + 0x10) = uVar10;
  *(undefined2 *)(lVar11 + 0x18) = 1;
  return;
}


