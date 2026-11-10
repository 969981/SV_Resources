/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010ef99c; name: FUN_010ef99c
 */


void FUN_010ef99c(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1[0xb] != 0) {
    FUN_010f0260(param_1,param_1[6]);
    uVar2 = param_1[1];
    param_1[6] = 0;
    if (uVar2 != 0) {
      uVar6 = uVar2 & 3;
      if (uVar2 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar5 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar5 * 8 + 0x10) = 0;
          lVar4 = uVar5 * 8;
          uVar5 = uVar5 + 4;
          *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
        } while ((uVar2 & 0xfffffffffffffffc) != uVar5);
      }
      if (uVar6 != 0) {
        lVar4 = uVar5 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar4) = 0;
          uVar6 = uVar6 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar6 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  lVar4 = *param_2;
  *param_2 = 0;
  lVar7 = *param_1;
  *param_1 = lVar4;
  if (lVar7 != 0) {
    lVar4 = param_1[1];
    plVar1 = (long *)param_1[2];
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar7,lVar4 << 3,8);
        goto LAB_010efa0c;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar7,lVar4 << 3,8);
  }
LAB_010efa0c:
  param_1[1] = param_2[1];
  param_2[1] = 0;
  lVar4 = param_2[2];
  lVar7 = param_2[3];
  lVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar3;
  param_1[2] = lVar4;
  param_1[3] = lVar7;
  lVar4 = param_2[7];
  lVar7 = param_2[8];
  lVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar3;
  param_1[7] = lVar4;
  param_1[8] = lVar7;
  lVar7 = param_2[0xb];
  param_1[0xb] = lVar7;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  lVar4 = param_2[6];
  param_1[6] = lVar4;
  if (lVar7 != 0) {
    uVar6 = param_1[1];
    uVar2 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar2 = uVar6 - 1 & uVar2;
    }
    else if (uVar6 <= uVar2) {
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar2 / uVar6;
      }
      uVar2 = uVar2 - uVar5 * uVar6;
    }
    *(long **)(*param_1 + uVar2 * 8) = param_1 + 6;
    param_2[6] = 0;
    param_2[0xb] = 0;
  }
  return;
}


