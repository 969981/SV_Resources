/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019433d0; name: FUN_019433d0
 */


void FUN_019433d0(undefined8 *param_1,long *param_2)

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
  undefined8 uVar10;
  void *pvVar11;
  long *plVar12;
  ulong uVar13;
  long *local_60;
  long *plStack_58;
  
  FUN_00c4e600();
  FUN_00c4e600();
  lVar7 = FUN_00c4e600();
  iVar5 = *(int *)(lVar7 + 0x12c8);
  iVar1 = iVar5 + 1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (*(int *)(lVar7 + 0x12cc) <= iVar5) {
    *(int *)(lVar7 + 0x12cc) = iVar1;
  }
  pvVar11 = (void *)param_2[0xb];
  if (pvVar11 != (void *)0x0) {
    FUN_01f2d540(pvVar11,*(undefined8 *)((long)pvVar11 + 8));
    operator_delete(pvVar11);
  }
  pvVar11 = (void *)param_2[5];
  if (pvVar11 != (void *)0x0) {
    plVar8 = (long *)*param_2;
    if (plVar8 == (long *)0x0) {
      operator_delete__(pvVar11);
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8,pvVar11,param_2[4]);
    }
  }
  param_2[5] = 0;
  if (((char)param_2[1] != '\0') && ((long *)*param_2 != (long *)0x0)) {
    (**(code **)(*(long *)*param_2 + 8))();
  }
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  plVar8 = (long *)*param_1;
  uVar4 = param_1[1];
  uVar10 = param_1[2];
  uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar8 + 0x18))(plVar8,param_2,uVar4,uVar10);
  }
  else {
    FUN_00c48fe8(plVar8,param_2,uVar4,uVar10);
  }
  lVar7 = FUN_00c4e600();
  iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
  *(int *)(lVar7 + 0x12c8) = iVar1;
  if (iVar1 == 0) {
    plVar8 = (long *)FUN_00c4e600();
    if (plVar8[600] != 0) {
      local_60 = plVar8 + plVar8[600] * 3;
      plStack_58 = plVar8;
      FUN_00c4ea30(&plStack_58,&local_60);
      plVar12 = (long *)*plVar8;
      plVar3 = plVar8;
      if (plVar8[600] != 0) {
        plVar3 = plVar8 + plVar8[600] * 3;
      }
      if (plVar3 == plVar8) {
        uVar13 = 0;
        uVar9 = 0;
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
          uVar9 = 1;
        }
        else {
          (**(code **)(*(long *)*plVar2 + 0xd0))();
          bVar6 = (long *)*plVar2 != plVar12;
          if (bVar6) {
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar8,plVar8 + 3);
            plVar12 = (long *)plVar8[3];
          }
          uVar13 = (ulong)bVar6;
          plVar2 = plVar8 + 6;
          if (plVar3 == plVar2) {
            uVar9 = 2;
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
              uVar9 = 3;
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
                uVar9 = 4;
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
                  uVar9 = 5;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + 0xf);
                    plVar12 = (long *)plVar8[0xf];
                    uVar13 = 5;
                  }
                  uVar9 = 6;
                  for (plVar2 = plVar8 + 0x12; plVar3 != plVar2; plVar2 = plVar2 + 3) {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar2);
                      plVar12 = (long *)*plVar2;
                      uVar13 = uVar9;
                    }
                    uVar9 = uVar9 + 1;
                  }
                }
              }
            }
          }
        }
      }
      (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + uVar13 * 3,plVar8 + uVar9 * 3);
      plVar8[600] = 0;
    }
    *(undefined4 *)(lVar7 + 0x12cc) = 0;
  }
  return;
}


