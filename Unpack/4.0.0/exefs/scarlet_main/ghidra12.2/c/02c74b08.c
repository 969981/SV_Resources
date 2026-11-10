/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c74b08; name: FUN_02c74b08
 */


void FUN_02c74b08(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *local_60;
  long *plStack_58;
  
  FUN_028a19b0(param_1 + 0x48,0);
  lVar8 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
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
    FUN_00db239c(lVar8);
    plVar7 = *(long **)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,uVar3,uVar9);
    }
    else {
      FUN_00c48fe8(plVar7,lVar8,uVar3,uVar9);
    }
    lVar8 = FUN_00c4e600();
    iVar1 = *(int *)(lVar8 + 0x12c8) + -1;
    *(int *)(lVar8 + 0x12c8) = iVar1;
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
          lVar12 = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          lVar12 = 0;
          plVar11 = plVar7;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar10) {
              (**(code **)(*plVar10 + 0x100))(plVar10,plVar7 + lVar12 * 3,plVar11);
              plVar10 = (long *)*plVar11;
              lVar12 = lVar5;
            }
            plVar11 = plVar11 + 3;
            lVar5 = lVar5 + 1;
          } while (plVar2 != plVar11);
        }
        (**(code **)(*plVar10 + 0x100))(plVar10,plVar7 + lVar12 * 3,plVar7 + lVar5 * 3);
        plVar7[600] = 0;
      }
      *(undefined4 *)(lVar8 + 0x12cc) = 0;
    }
  }
  return;
}


