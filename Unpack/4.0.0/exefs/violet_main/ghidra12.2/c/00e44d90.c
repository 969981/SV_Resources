/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e44d90; name: FUN_00e44d90
 */


void FUN_00e44d90(long param_1)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  FUN_010ed948(&local_88,**(undefined8 **)(param_1 + 0x2b0));
  lVar5 = local_88;
  local_88 = 0;
  lVar6 = *(long *)(param_1 + 0x2d0);
  *(long *)(param_1 + 0x2d0) = lVar5;
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0x2e8) = local_70;
    *(undefined8 *)(param_1 + 0x2e0) = local_78;
    *(long **)(param_1 + 0x2d8) = local_80;
    local_88 = 0;
  }
  else {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar3 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar3 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar3) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    FUN_01672468(lVar6);
    plVar10 = *(long **)(param_1 + 0x2d8);
    uVar7 = *(undefined8 *)(param_1 + 0x2e0);
    uVar8 = *(undefined8 *)(param_1 + 0x2e8);
    uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar6,uVar7,uVar8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar6,uVar7,uVar8);
    }
    lVar5 = FUN_00c4e600();
    iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_68 = plVar10 + plVar10[600] * 3;
        local_48 = plVar10;
        FUN_00c4ea30(&local_48,&local_68);
        plVar9 = (long *)*plVar10;
        plVar2 = plVar10;
        if (plVar10[600] != 0) {
          plVar2 = plVar10 + plVar10[600] * 3;
        }
        if (plVar2 == plVar10) {
          lVar12 = 0;
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          lVar12 = 0;
          plVar11 = plVar10;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + lVar12 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar12 = lVar6;
            }
            plVar11 = plVar11 + 3;
            lVar6 = lVar6 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + lVar12 * 3,plVar10 + lVar6 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar5 + 0x12cc) = 0;
    }
    lVar5 = local_88;
    *(undefined8 *)(param_1 + 0x2e8) = local_70;
    *(undefined8 *)(param_1 + 0x2e0) = local_78;
    *(long **)(param_1 + 0x2d8) = local_80;
    local_88 = 0;
    if (lVar5 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar6 = FUN_00c4e600();
      iVar3 = *(int *)(lVar6 + 0x12c8);
      iVar1 = iVar3 + 1;
      *(int *)(lVar6 + 0x12c8) = iVar1;
      if (*(int *)(lVar6 + 0x12cc) <= iVar3) {
        *(int *)(lVar6 + 0x12cc) = iVar1;
      }
      FUN_01672468(lVar5);
      uVar4 = (**(code **)(*local_80 + 0xf8))(local_80);
      if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*local_80 + 0x18))(local_80,lVar5,local_78,local_70);
      }
      else {
        FUN_00c48fe8(local_80,lVar5,local_78,local_70);
      }
      lVar5 = FUN_00c4e600();
      iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
      *(int *)(lVar5 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_68 = plVar10 + plVar10[600] * 3;
          local_48 = plVar10;
          FUN_00c4ea30(&local_48,&local_68);
          plVar9 = (long *)*plVar10;
          plVar2 = plVar10;
          if (plVar10[600] != 0) {
            plVar2 = plVar10 + plVar10[600] * 3;
          }
          if (plVar2 == plVar10) {
            lVar12 = 0;
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            lVar12 = 0;
            plVar11 = plVar10;
            do {
              (**(code **)(*(long *)*plVar11 + 0xd0))();
              if ((long *)*plVar11 != plVar9) {
                (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + lVar12 * 3,plVar11);
                plVar9 = (long *)*plVar11;
                lVar12 = lVar6;
              }
              plVar11 = plVar11 + 3;
              lVar6 = lVar6 + 1;
            } while (plVar2 != plVar11);
          }
          (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + lVar12 * 3,plVar10 + lVar6 * 3);
          plVar10[600] = 0;
        }
        *(undefined4 *)(lVar5 + 0x12cc) = 0;
      }
    }
  }
  lVar5 = **(long **)(param_1 + 0x2b0);
  FUN_018cacc4(**(undefined8 **)(lVar5 + 0x110));
  *(undefined1 *)(**(long **)(lVar5 + 0x130) + 0x1c0) = 1;
  *(undefined1 *)(lVar5 + 0x10c) = 1;
  return;
}


