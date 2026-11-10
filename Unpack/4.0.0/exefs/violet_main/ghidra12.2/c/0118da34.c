/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118da34; name: FUN_0118da34
 */


void FUN_0118da34(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *local_60;
  long *plStack_58;
  
  lVar6 = *param_1;
  *param_1 = 0;
  if (lVar6 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar3 = FUN_00c4e600();
    iVar2 = *(int *)(lVar3 + 0x12c8);
    iVar1 = iVar2 + 1;
    *(int *)(lVar3 + 0x12c8) = iVar1;
    if (*(int *)(lVar3 + 0x12cc) <= iVar2) {
      *(int *)(lVar3 + 0x12cc) = iVar1;
    }
    plVar10 = *(long **)(lVar6 + 0x20);
    if (plVar10 != (long *)0x0) {
      if (*(long **)(lVar6 + 0x28) == plVar10) {
        plVar8 = plVar10;
      }
      else {
        plVar8 = *(long **)(lVar6 + 0x28);
        do {
          plVar9 = plVar8 + -4;
          lVar3 = *plVar9;
          *plVar9 = 0;
          if (lVar3 != 0) {
            FUN_010476cc(plVar8 + -3);
          }
          plVar8 = plVar9;
        } while (plVar10 != plVar9);
        plVar8 = *(long **)(lVar6 + 0x20);
      }
      plVar9 = *(long **)(lVar6 + 0x38);
      *(long **)(lVar6 + 0x28) = plVar10;
      lVar3 = *(long *)(lVar6 + 0x30) - (long)plVar8;
      uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar4 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,lVar3,8);
      }
      else {
        FUN_00c48fe8(plVar9,plVar8,lVar3,8);
      }
    }
    if (*(long **)(lVar6 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar6 + 0x18) + 0x20))();
    }
    plVar10 = (long *)param_1[1];
    lVar3 = param_1[2];
    lVar7 = param_1[3];
    uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar6,lVar3,lVar7);
    }
    else {
      FUN_00c48fe8(plVar10,lVar6,lVar3,lVar7);
    }
    lVar6 = FUN_00c4e600();
    iVar1 = *(int *)(lVar6 + 0x12c8) + -1;
    *(int *)(lVar6 + 0x12c8) = iVar1;
    if (iVar1 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_60 = plVar10 + plVar10[600] * 3;
        plStack_58 = plVar10;
        FUN_00c4ea30(&plStack_58,&local_60);
        plVar9 = (long *)*plVar10;
        plVar8 = plVar10;
        if (plVar10[600] != 0) {
          plVar8 = plVar10 + plVar10[600] * 3;
        }
        if (plVar8 == plVar10) {
          lVar7 = 0;
          lVar3 = 0;
        }
        else {
          lVar3 = 0;
          lVar7 = 0;
          plVar11 = plVar10;
          do {
            (**(code **)(*(long *)*plVar11 + 0xd0))();
            if ((long *)*plVar11 != plVar9) {
              (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + lVar7 * 3,plVar11);
              plVar9 = (long *)*plVar11;
              lVar7 = lVar3;
            }
            plVar11 = plVar11 + 3;
            lVar3 = lVar3 + 1;
          } while (plVar8 != plVar11);
        }
        (**(code **)(*plVar9 + 0x100))(plVar9,plVar10 + lVar7 * 3,plVar10 + lVar3 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar6 + 0x12cc) = 0;
    }
  }
  return;
}


