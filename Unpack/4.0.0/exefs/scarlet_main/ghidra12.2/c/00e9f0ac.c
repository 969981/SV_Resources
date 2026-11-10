/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9f0ac; name: FUN_00e9f0ac
 */


long * FUN_00e9f0ac(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_1 != param_2) {
    if (param_1[7] != param_2[7]) {
      if (param_1[0xb] != 0) {
        plVar7 = (long *)param_1[6];
        if (plVar7 != (long *)0x0) {
          plVar9 = (long *)*plVar7;
          if ((long *)plVar7[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[5] + 0x20))();
          }
          plVar8 = (long *)param_1[7];
          uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x38,8);
          }
          else {
            FUN_00c48fe8(plVar8,plVar7,0x38,8);
          }
          while (plVar9 != (long *)0x0) {
            plVar7 = (long *)*plVar9;
            if ((long *)plVar9[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar9[5] + 0x20))();
            }
            plVar8 = (long *)param_1[7];
            uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar8 + 0x18))(plVar8,plVar9,0x38,8);
              plVar9 = plVar7;
            }
            else {
              FUN_00c48fe8(plVar8,plVar9,0x38,8);
              plVar9 = plVar7;
            }
          }
        }
        uVar6 = param_1[1];
        param_1[6] = 0;
        if (uVar6 != 0) {
          uVar3 = uVar6 & 3;
          if (uVar6 - 1 < 3) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            do {
              *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
              *(undefined8 *)(*param_1 + uVar4 * 8 + 8) = 0;
              *(undefined8 *)(*param_1 + uVar4 * 8 + 0x10) = 0;
              lVar5 = uVar4 * 8;
              uVar4 = uVar4 + 4;
              *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
            } while ((uVar6 & 0xfffffffffffffffc) != uVar4);
          }
          if (uVar3 != 0) {
            lVar5 = uVar4 << 3;
            do {
              *(undefined8 *)(*param_1 + lVar5) = 0;
              uVar3 = uVar3 - 1;
              lVar5 = lVar5 + 8;
            } while (uVar3 != 0);
          }
        }
        param_1[0xb] = 0;
      }
      lVar5 = *param_1;
      *param_1 = 0;
      if (lVar5 != 0) {
        FUN_00e9f960(param_1 + 1);
      }
      param_1[1] = 0;
    }
    lVar5 = param_2[2];
    lVar1 = param_2[3];
    lVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar2;
    param_1[2] = lVar5;
    param_1[3] = lVar1;
    lVar5 = param_2[7];
    lVar1 = param_2[8];
    lVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[10] = lVar2;
    param_1[7] = lVar5;
    param_1[8] = lVar1;
    *(int *)(param_1 + 0xc) = (int)param_2[0xc];
    FUN_00e9f2f4(param_1,param_2[6],0);
  }
  return param_1;
}


