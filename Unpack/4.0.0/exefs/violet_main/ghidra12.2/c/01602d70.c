/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01602d70; name: FUN_01602d70
 */


void FUN_01602d70(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_01602ea4();
  lVar5 = *param_2;
  *param_2 = 0;
  lVar7 = *param_1;
  *param_1 = lVar5;
  if (lVar7 != 0) {
    lVar5 = param_1[1];
    plVar1 = (long *)param_1[2];
    uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar7,lVar5 << 3,8);
        goto LAB_01602ddc;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar5 << 3,8);
  }
LAB_01602ddc:
  param_1[1] = param_2[1];
  param_2[1] = 0;
  lVar5 = param_2[2];
  lVar7 = param_2[3];
  lVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar7;
  lVar5 = param_2[7];
  lVar7 = param_2[8];
  lVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar4;
  param_1[7] = lVar5;
  param_1[8] = lVar7;
  lVar7 = param_2[0xb];
  param_1[0xb] = lVar7;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  lVar5 = param_2[6];
  param_1[6] = lVar5;
  if (lVar7 != 0) {
    uVar6 = param_1[1];
    uVar3 = *(ulong *)(lVar5 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar3 = uVar6 - 1 & uVar3;
    }
    else if (uVar6 <= uVar3) {
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = uVar3 / uVar6;
      }
      uVar3 = uVar3 - uVar2 * uVar6;
    }
    *(long **)(*param_1 + uVar3 * 8) = param_1 + 6;
    param_2[6] = 0;
    param_2[0xb] = 0;
  }
  return;
}


