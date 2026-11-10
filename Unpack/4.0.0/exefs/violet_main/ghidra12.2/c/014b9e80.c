/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014b9e80; name: FUN_014b9e80
 */


void FUN_014b9e80(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *local_70;
  long *plStack_68;
  
  lVar9 = *param_1;
  *param_1 = 0;
  if (lVar9 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar4 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    lVar5 = *(long *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = 0;
    if (lVar5 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar4 = *(int *)(lVar10 + 0x12c8);
      iVar1 = iVar4 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar1;
      if (*(int *)(lVar10 + 0x12cc) <= iVar4) {
        *(int *)(lVar10 + 0x12cc) = iVar1;
      }
      FUN_01449c9c(lVar5);
      plVar7 = *(long **)(lVar9 + 0x30);
      uVar3 = *(undefined8 *)(lVar9 + 0x38);
      uVar13 = *(undefined8 *)(lVar9 + 0x40);
      uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,uVar3,uVar13);
      }
      else {
        FUN_00c48fe8(plVar7,lVar5,uVar3,uVar13);
      }
      lVar5 = FUN_00c4e600();
      iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
      *(int *)(lVar5 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar7 = (long *)FUN_00c4e600();
        if (plVar7[600] != 0) {
          local_70 = plVar7 + plVar7[600] * 3;
          plStack_68 = plVar7;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar11 = (long *)*plVar7;
          plVar2 = plVar7;
          if (plVar7[600] != 0) {
            plVar2 = plVar7 + plVar7[600] * 3;
          }
          if (plVar2 == plVar7) {
            lVar8 = 0;
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            lVar8 = 0;
            plVar12 = plVar7;
            do {
              (**(code **)(*(long *)*plVar12 + 0xd0))();
              if ((long *)*plVar12 != plVar11) {
                (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + lVar8 * 3,plVar12);
                plVar11 = (long *)*plVar12;
                lVar8 = lVar10;
              }
              plVar12 = plVar12 + 3;
              lVar10 = lVar10 + 1;
            } while (plVar2 != plVar12);
          }
          (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + lVar8 * 3,plVar7 + lVar10 * 3);
          plVar7[600] = 0;
        }
        *(undefined4 *)(lVar5 + 0x12cc) = 0;
      }
    }
    if (*(long **)(lVar9 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + 0x18) + 0x20))();
    }
    plVar7 = (long *)param_1[1];
    lVar5 = param_1[2];
    lVar10 = param_1[3];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar5,lVar10);
    }
    else {
      FUN_00c48fe8(plVar7,lVar9,lVar5,lVar10);
    }
    lVar9 = FUN_00c4e600();
    iVar1 = *(int *)(lVar9 + 0x12c8) + -1;
    *(int *)(lVar9 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_70 = plVar7 + plVar7[600] * 3;
        plStack_68 = plVar7;
        FUN_00c4ea30(&plStack_68,&local_70);
        plVar11 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar10 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          lVar10 = 0;
          plVar12 = plVar7;
          do {
            (**(code **)(*(long *)*plVar12 + 0xd0))();
            if ((long *)*plVar12 != plVar11) {
              (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + lVar10 * 3,plVar12);
              plVar11 = (long *)*plVar12;
              lVar10 = lVar5;
            }
            plVar12 = plVar12 + 3;
            lVar5 = lVar5 + 1;
          } while (plVar2 != plVar12);
        }
        (**(code **)(*plVar11 + 0x100))(plVar11,plVar7 + lVar10 * 3,plVar7 + lVar5 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar9 + 0x12cc) = 0;
    }
  }
  return;
}


