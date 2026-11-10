/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197ad90; name: FUN_0197ad90
 */


void FUN_0197ad90(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *local_68;
  long *local_48;
  
  lVar8 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar8 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar4 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    FUN_01a0c248(lVar8);
    plVar7 = *(long **)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,uVar3,uVar10);
    }
    else {
      FUN_00c48fe8(plVar7,lVar8,uVar3,uVar10);
    }
    lVar8 = FUN_00c4e600();
    iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_68 = plVar7 + plVar7[600] * 3;
        local_48 = plVar7;
        FUN_00c4ea30(&local_48,&local_68);
        plVar9 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar12 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          lVar12 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar12 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar12 = lVar5;
            }
            plVar11 = plVar11 + 3;
            lVar5 = lVar5 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar12 * 3,plVar7 + lVar5 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  plVar7 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar7 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar8 = FUN_00c4e600();
    iVar4 = *(int *)(lVar8 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (*(int *)(lVar8 + 0x12cc) <= iVar4) {
      *(int *)(lVar8 + 0x12cc) = iVar1;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
    plVar2 = *(long **)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar7,uVar3,uVar10);
    }
    else {
      FUN_00c48fe8(plVar2,plVar7,uVar3,uVar10);
    }
    lVar8 = FUN_00c4e600();
    iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_68 = plVar7 + plVar7[600] * 3;
        local_48 = plVar7;
        FUN_00c4ea30(&local_48,&local_68);
        plVar9 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar12 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          lVar12 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar12 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar12 = lVar5;
            }
            plVar11 = plVar11 + 3;
            lVar5 = lVar5 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar7 + lVar12 * 3,plVar7 + lVar5 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  return;
}


