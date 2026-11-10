/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052f020; name: FUN_0052f020
 */


ulong * FUN_0052f020(ulong param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_38;
  
  uVar1 = param_1 >> 3;
  if ((int)uVar1 == 0) {
switchD_0052f064_caseD_4:
    return (undefined8 *)0x0;
  }
  uVar5 = (uint)param_1;
  switch(param_1 & 7) {
  case 0:
    param_3 = (ulong *)FUN_0052f200(param_3,&local_38);
    if ((param_3 != (ulong *)0x0) && (lVar7 = *param_2, lVar7 != 0)) {
      if (0x7f < (uVar5 & 0xfffffff8)) {
        uVar1 = (ulong)(uVar5 & 0xfffffff8);
        do {
          FUN_002cdcec(lVar7,(uint)uVar1 | 0xffffff80);
          uVar6 = uVar1 >> 0xe;
          uVar1 = uVar1 >> 7;
        } while (uVar6 != 0);
      }
      FUN_002cdcec(lVar7);
      lVar7 = *param_2;
      uVar1 = local_38;
      if (0x7f < local_38) {
        do {
          FUN_002cdcec(lVar7,(uint)uVar1 | 0xffffff80);
          local_38 = uVar1 >> 7;
          uVar6 = uVar1 >> 0xe;
          uVar1 = local_38;
        } while (uVar6 != 0);
      }
      FUN_002cdcec(lVar7,local_38 & 0xffffffff);
    }
    break;
  case 1:
    uVar1 = *param_3;
    lVar7 = *param_2;
    if (lVar7 == 0) {
      return param_3 + 1;
    }
    uVar5 = uVar5 & 0xfffffff8 | 1;
    if (0x7f < uVar5) {
      uVar6 = (ulong)uVar5;
      do {
        FUN_002cdcec(lVar7,(uint)uVar6 | 0xffffff80);
        uVar3 = uVar6 >> 0xe;
        uVar6 = uVar6 >> 7;
      } while (uVar3 != 0);
    }
    FUN_002cdcec(lVar7);
    lVar7 = *param_2;
    uVar2 = 8;
    param_3 = param_3 + 1;
    local_38 = uVar1;
    goto LAB_0052f1ec;
  case 2:
    param_3 = (ulong *)FUN_00530ac0(param_2,uVar1,param_3);
    break;
  case 3:
    param_3 = (ulong *)FUN_00530d44(param_2,uVar1,param_3);
    break;
  case 4:
    break;
  case 5:
    uVar1 = *param_3;
    lVar7 = *param_2;
    if (lVar7 == 0) {
      return (ulong *)((long)param_3 + 4);
    }
    uVar5 = uVar5 & 0xfffffff8 | 5;
    uVar6 = (ulong)uVar5;
    if (0x7f < uVar5) {
      uVar3 = (ulong)uVar5;
      do {
        FUN_002cdcec(lVar7,(uint)uVar3 | 0xffffff80);
        uVar6 = uVar3 >> 7;
        uVar4 = uVar3 >> 0xe;
        uVar3 = uVar6;
      } while (uVar4 != 0);
    }
    FUN_002cdcec(lVar7,uVar6);
    local_38 = CONCAT44(local_38._4_4_,(int)uVar1);
    lVar7 = *param_2;
    uVar2 = 4;
    param_3 = (ulong *)((long)param_3 + 4);
LAB_0052f1ec:
    FUN_0021d540(lVar7,&local_38,uVar2);
    break;
  default:
    goto switchD_0052f064_caseD_4;
  }
  return param_3;
}


