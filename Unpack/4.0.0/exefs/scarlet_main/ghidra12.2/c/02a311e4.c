/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a311e4; name: FUN_02a311e4
 */


void FUN_02a311e4(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *local_70;
  long *plStack_68;
  
  lVar10 = param_1[1];
  lVar7 = param_1[2];
  while (lVar7 != lVar10) {
    param_1[2] = lVar7 + -0x20;
    lVar9 = *(long *)(lVar7 + -0x20);
    *(undefined8 *)(lVar7 + -0x20) = 0;
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
      plVar8 = *(long **)(lVar7 + -0x18);
      uVar3 = *(undefined8 *)(lVar7 + -0x10);
      uVar11 = *(undefined8 *)(lVar7 + -8);
      uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,uVar3,uVar11);
      }
      else {
        FUN_00c48fe8(plVar8,lVar9,uVar3,uVar11);
      }
      lVar7 = FUN_00c4e600();
      iVar1 = *(int *)(lVar7 + 0x12c8) + -1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (iVar1 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_70 = plVar8 + plVar8[600] * 3;
          plStack_68 = plVar8;
          FUN_00c4ea30(&plStack_68,&local_70);
          plVar12 = (long *)*plVar8;
          plVar2 = plVar8;
          if (plVar8[600] != 0) {
            plVar2 = plVar8 + plVar8[600] * 3;
          }
          if (plVar2 == plVar8) {
            lVar5 = 0;
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            lVar5 = 0;
            plVar13 = plVar8;
            do {
              (**(code **)(*(long *)*plVar13 + 0xd0))();
              if ((long *)*plVar13 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + lVar5 * 3,plVar13);
                plVar12 = (long *)*plVar13;
                lVar5 = lVar9;
              }
              plVar13 = plVar13 + 3;
              lVar9 = lVar9 + 1;
            } while (plVar2 != plVar13);
          }
          (**(code **)(*plVar12 + 0x100))(plVar12,plVar8 + lVar5 * 3,plVar8 + lVar9 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)(lVar7 + 0x12cc) = 0;
      }
    }
    lVar7 = param_1[2];
  }
  lVar10 = *param_1;
  if (lVar10 != 0) {
    lVar7 = param_1[3];
    plVar8 = *(long **)param_1[4];
    uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar7 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar8,lVar10,lVar7 - lVar10,8);
    }
  }
  return;
}


