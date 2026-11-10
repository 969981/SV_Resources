/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a89c3c; name: FUN_00a89c3c
 */


void FUN_00a89c3c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *local_60;
  long *plStack_58;
  
  puVar8 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar5 = FUN_00c4e600();
    iVar4 = *(int *)(lVar5 + 0x12c8);
    iVar1 = iVar4 + 1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (*(int *)(lVar5 + 0x12cc) <= iVar4) {
      *(int *)(lVar5 + 0x12cc) = iVar1;
    }
    (**(code **)*puVar8)(puVar8);
    plVar7 = (long *)param_1[1];
    uVar3 = param_1[2];
    uVar9 = param_1[3];
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,uVar3,uVar9);
    }
    else {
      FUN_00c48fe8(plVar7,puVar8,uVar3,uVar9);
    }
    lVar5 = FUN_00c4e600();
    iVar1 = *(int *)(lVar5 + 0x12c8) + -1;
    *(int *)(lVar5 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar7 = (long *)FUN_00c4e600();
      if (plVar7[600] != 0) {
        local_60 = plVar7 + plVar7[600] * 3;
        plStack_58 = plVar7;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar10 = (long *)*plVar7;
        plVar2 = plVar7;
        if (plVar7[600] != 0) {
          plVar2 = plVar7 + plVar7[600] * 3;
        }
        if (plVar2 == plVar7) {
          lVar13 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          lVar13 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar10) {
              (**(code **)(*plVar10 + 0x100))(plVar10,plVar7 + lVar13 * 3,plVar11);
              plVar10 = (long *)*plVar11;
              lVar13 = lVar12;
            }
            plVar11 = plVar11 + 3;
            lVar12 = lVar12 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar10 + 0x100))(plVar10,plVar7 + lVar13 * 3,plVar7 + lVar12 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar5 + 0x12cc) = 0;
    }
  }
  return;
}


