/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01238f20; name: FUN_01238f20
 */


void FUN_01238f20(int *param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  
  if (*param_1 == 8) {
    uVar4 = (ulong)param_2[0xb];
    bVar2 = *(byte *)(param_1 + 1);
    if (uVar4 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar4 = 0;
      }
      else {
        pbVar6 = param_2;
        uVar5 = uVar4;
        do {
          if (*pbVar6 == bVar2) goto LAB_01238f90;
          uVar5 = uVar5 - 1;
          pbVar6 = pbVar6 + 1;
        } while (uVar5 != 0);
      }
      param_2[uVar4] = bVar2;
      param_2[0xb] = param_2[0xb] + 1;
      bVar2 = *(byte *)(param_1 + 1);
    }
LAB_01238f90:
    bVar2 = FUN_0123a588(1,param_3,bVar2,1);
    uVar4 = (ulong)param_2[0xb];
    if (10 < uVar4) {
      return;
    }
    if (param_2[0xb] == 0) goto LAB_012393e8;
    pbVar6 = param_2;
    uVar5 = uVar4;
    do {
      if (*pbVar6 == bVar2) {
        return;
      }
      uVar5 = uVar5 - 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar5 != 0);
    goto LAB_01238fd0;
  }
  switch(*param_1) {
  case 1:
  case 5:
    bVar2 = FUN_0123a588(1,param_3,(char)param_1[1],1);
    uVar4 = (ulong)param_2[0xb];
    if (10 < uVar4) {
      return;
    }
    if (param_2[0xb] == 0) {
LAB_012393e8:
      uVar4 = 0;
    }
    else {
      pbVar6 = param_2;
      uVar5 = uVar4;
      do {
        if (*pbVar6 == bVar2) {
          return;
        }
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
    break;
  case 2:
  case 7:
    bVar2 = FUN_0123aecc(1,param_3,(char)param_1[1],0);
    uVar4 = (ulong)param_2[0xb];
    if (uVar4 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar4 = 0;
      }
      else {
        pbVar6 = param_2;
        uVar5 = uVar4;
        do {
          if (*pbVar6 == bVar2) goto LAB_01239070;
          uVar5 = uVar5 - 1;
          pbVar6 = pbVar6 + 1;
        } while (uVar5 != 0);
      }
      param_2[uVar4] = bVar2;
      param_2[0xb] = param_2[0xb] + 1;
    }
LAB_01239070:
    bVar2 = FUN_0123aecc(1,param_3,(char)param_1[1],1);
    uVar4 = (ulong)param_2[0xb];
    if (10 < uVar4) {
      return;
    }
    if (param_2[0xb] == 0) goto LAB_012393e8;
    pbVar6 = param_2;
    uVar5 = uVar4;
    do {
      if (*pbVar6 == bVar2) {
        return;
      }
      uVar5 = uVar5 - 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar5 != 0);
    break;
  case 3:
    bVar2 = FUN_0123aecc(1,param_3,(char)param_1[1],0);
    uVar4 = (ulong)param_2[0xb];
    if (uVar4 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar4 = 0;
      }
      else {
        pbVar6 = param_2;
        uVar5 = uVar4;
        do {
          if (*pbVar6 == bVar2) goto LAB_012392f4;
          uVar5 = uVar5 - 1;
          pbVar6 = pbVar6 + 1;
        } while (uVar5 != 0);
      }
      param_2[uVar4] = bVar2;
      param_2[0xb] = param_2[0xb] + 1;
    }
LAB_012392f4:
    bVar2 = FUN_0123aecc(1,param_3,(char)param_1[1],1);
    uVar4 = (ulong)param_2[0xb];
    if (uVar4 < 0xb) {
      if (param_2[0xb] == 0) {
        uVar4 = 0;
      }
      else {
        pbVar6 = param_2;
        uVar5 = uVar4;
        do {
          if (*pbVar6 == bVar2) goto LAB_012393a0;
          uVar5 = uVar5 - 1;
          pbVar6 = pbVar6 + 1;
        } while (uVar5 != 0);
      }
      param_2[uVar4] = bVar2;
      param_2[0xb] = param_2[0xb] + 1;
    }
LAB_012393a0:
    bVar2 = FUN_0123a588(1,param_3,(char)param_1[1],1);
    uVar4 = (ulong)param_2[0xb];
    if (10 < uVar4) {
      return;
    }
    if (param_2[0xb] == 0) goto LAB_012393e8;
    pbVar6 = param_2;
    uVar5 = uVar4;
    do {
      if (*pbVar6 == bVar2) {
        return;
      }
      uVar5 = uVar5 - 1;
      pbVar6 = pbVar6 + 1;
    } while (uVar5 != 0);
    break;
  case 4:
    bVar1 = *(byte *)(param_1 + 1);
    bVar3 = FUN_0123a588(1,param_3,bVar1,1);
    uVar4 = (ulong)param_2[0xb];
    bVar2 = bVar1;
    if (bVar1 <= bVar3) {
      bVar2 = bVar3;
      bVar3 = bVar1;
    }
    if (10 < uVar4) {
      return;
    }
    if (param_2[0xb] == 0) {
      uVar4 = 0;
    }
    else {
      pbVar6 = param_2;
      uVar5 = uVar4;
      do {
        if (*pbVar6 == bVar3) goto LAB_01239350;
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar4] = bVar3;
    uVar4 = (ulong)(param_2[0xb] + 1);
    param_2[0xb] = (byte)(param_2[0xb] + 1);
LAB_01239350:
    if (10 < ((uint)uVar4 & 0xff)) {
      return;
    }
    if ((uVar4 & 0xff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 & 0xff;
      pbVar6 = param_2;
      uVar5 = uVar4;
      do {
        if (*pbVar6 == bVar2) {
          return;
        }
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar4] = bVar2;
    goto LAB_01238fd4;
  case 6:
  case 9:
    uVar4 = (ulong)param_2[0xb];
    if (10 < uVar4) {
      return;
    }
    if (param_2[0xb] == 0) {
      uVar4 = 0;
    }
    else {
      pbVar6 = param_2;
      uVar5 = uVar4;
      do {
        if (*pbVar6 == 0) goto LAB_01239144;
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar4] = 0;
    uVar4 = (ulong)(param_2[0xb] + 1);
    param_2[0xb] = (byte)(param_2[0xb] + 1);
LAB_01239144:
    if (10 < ((uint)uVar4 & 0xff)) {
      return;
    }
    if ((uVar4 & 0xff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar4 & 0xff;
      pbVar6 = param_2;
      uVar7 = uVar5;
      do {
        if (*pbVar6 == 1) goto LAB_01239190;
        uVar7 = uVar7 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
    }
    param_2[uVar5] = 1;
    uVar4 = (ulong)(param_2[0xb] + 1);
    param_2[0xb] = (byte)(param_2[0xb] + 1);
LAB_01239190:
    if (10 < ((uint)uVar4 & 0xff)) {
      return;
    }
    if ((uVar4 & 0xff) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar4 & 0xff;
      pbVar6 = param_2;
      uVar7 = uVar5;
      do {
        if (*pbVar6 == 2) goto LAB_012391dc;
        uVar7 = uVar7 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0);
    }
    param_2[uVar5] = 2;
    uVar4 = (ulong)(param_2[0xb] + 1);
    param_2[0xb] = (byte)(param_2[0xb] + 1);
LAB_012391dc:
    if (10 < ((uint)uVar4 & 0xff)) {
      return;
    }
    if ((uVar4 & 0xff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 & 0xff;
      pbVar6 = param_2;
      uVar5 = uVar4;
      do {
        if (*pbVar6 == 3) {
          return;
        }
        uVar5 = uVar5 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0);
    }
    param_2[uVar4] = 3;
    goto LAB_01238fd4;
  default:
    goto switchD_01239018_caseD_8;
  }
LAB_01238fd0:
  param_2[uVar4] = bVar2;
LAB_01238fd4:
  param_2[0xb] = param_2[0xb] + 1;
switchD_01239018_caseD_8:
  return;
}


