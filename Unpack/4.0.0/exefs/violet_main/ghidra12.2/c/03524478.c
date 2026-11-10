/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03524478; name: FUN_03524478
 */


undefined4
FUN_03524478(long param_1,uint param_2,undefined4 param_3,int *param_4,uint param_5,uint *param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  
  piVar7 = *(int **)(param_1 + 0x130);
  uVar6 = *(uint *)(param_1 + 0x138);
  piVar1 = piVar7 + (ulong)uVar6 * 4;
  iVar2 = piVar7[1];
  uVar3 = piVar1[-3] - iVar2;
  if (uVar3 < param_2) {
LAB_0352474c:
    return 2;
  }
  switch(param_3) {
  case 0:
    *param_4 = 0;
    *param_6 = param_2;
    return 1;
  case 1:
    if ((*(byte *)(param_1 + 0x124) >> 2 & 1) == 0) {
      do {
        lVar8 = *(long *)(param_1 + 0x98);
        if (lVar8 == 0) break;
        param_1 = lVar8;
      } while ((*(byte *)(lVar8 + 0x124) >> 2 & 1) == 0);
    }
    iVar2 = *(int *)(param_1 + 0x11c);
    param_2 = (param_5 & 1) + param_2;
    uVar6 = *(uint *)(param_1 + 0x120);
    *param_6 = uVar6;
    if (iVar2 == 0) {
      uVar6 = param_2 + 1;
    }
    else {
      if (param_2 <= uVar6) goto LAB_035246e8;
      do {
        uVar6 = uVar6 + iVar2;
      } while (uVar6 < param_2);
    }
    *param_6 = uVar6;
    goto LAB_035246e8;
  case 2:
    if ((*(byte *)(param_1 + 0x124) >> 2 & 1) == 0) {
      do {
        lVar8 = *(long *)(param_1 + 0x98);
        if (lVar8 == 0) break;
        param_1 = lVar8;
      } while ((*(byte *)(lVar8 + 0x124) >> 2 & 1) == 0);
    }
    iVar2 = *(int *)(param_1 + 0x118);
    param_2 = (param_5 & 1) + param_2;
    *param_6 = 0;
    if (iVar2 == 0) {
LAB_035246cc:
      uVar6 = param_2 + 1;
    }
    else {
      uVar6 = 0;
      if (param_2 == 0) goto LAB_035246e8;
      do {
        uVar6 = uVar6 + iVar2;
      } while (uVar6 < param_2);
    }
    break;
  case 3:
    if ((*(byte *)(param_1 + 0x124) >> 2 & 1) == 0) {
      do {
        lVar8 = *(long *)(param_1 + 0x98);
        if (lVar8 == 0) break;
        param_1 = lVar8;
      } while ((*(byte *)(lVar8 + 0x124) >> 2 & 1) == 0);
    }
    iVar2 = *(int *)(param_1 + 0x114);
    param_2 = (param_5 & 1) + param_2;
    *param_6 = 0;
    if (iVar2 == 0) goto LAB_035246cc;
    uVar6 = 0;
    if (param_2 == 0) goto LAB_035246e8;
    do {
      uVar6 = uVar6 + iVar2;
    } while (uVar6 < param_2);
    break;
  case 4:
    piVar5 = piVar7 + 4;
    if ((param_5 & 1) == 0) {
      piVar5 = piVar7;
    }
    if (piVar5 != piVar1) {
      iVar9 = *param_4;
      if (iVar9 == 0) {
        do {
          if (iVar2 + param_2 <= (uint)piVar5[1]) {
            iVar9 = *piVar5;
            goto LAB_03524638;
          }
          piVar5 = piVar5 + 4;
        } while (piVar1 != piVar5);
      }
      else {
        do {
          if ((iVar2 + param_2 <= (uint)piVar5[1]) && (*piVar5 == iVar9)) goto LAB_03524638;
          piVar5 = piVar5 + 4;
        } while (piVar1 != piVar5);
      }
    }
    *param_4 = piVar1[-4];
    lVar8 = *(long *)(param_1 + 0x130);
    piVar5 = (int *)(lVar8 + (ulong)*(uint *)(param_1 + 0x138) * 0x10 + -0x10);
    goto LAB_03524738;
  case 5:
    if (uVar6 == 2) {
      return 2;
    }
    iVar9 = *param_4;
    if (iVar9 == 0) {
      uVar10 = 1;
      while ((uint)piVar7[uVar10 * 4 + 1] <= iVar2 + param_2) {
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
        if (uVar6 - 2 < uVar3) {
          return 2;
        }
      }
      iVar9 = piVar7[uVar10 * 4];
    }
    else {
      uVar10 = 1;
      while (((uint)piVar7[uVar10 * 4 + 1] <= iVar2 + param_2 || (piVar7[uVar10 * 4] != iVar9))) {
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
        if (uVar6 - 2 < uVar3) {
          return 2;
        }
      }
    }
    *param_4 = iVar9;
    lVar8 = *(long *)(param_1 + 0x130);
    piVar5 = (int *)(lVar8 + uVar10 * 0x10);
LAB_03524738:
    *param_6 = piVar5[1] - *(int *)(lVar8 + 4);
    return 1;
  case 6:
    if (param_2 != 0) {
      return 2;
    }
    if ((param_5 & 1) == 0) {
      *param_4 = *piVar7;
      *param_6 = 0;
      return 1;
    }
    return 2;
  case 7:
    *param_6 = uVar3;
    *param_4 = *(int *)(*(long *)(param_1 + 0x130) + (ulong)*(uint *)(param_1 + 0x138) * 0x10 +
                       -0x10);
    return 1;
  default:
    goto LAB_0352474c;
  }
  *param_6 = uVar6;
LAB_035246e8:
  uVar4 = 1;
  if (uVar3 < uVar6) {
    uVar4 = 2;
  }
  *param_4 = 0;
  return uVar4;
LAB_03524638:
  *param_4 = iVar9;
  lVar8 = *(long *)(param_1 + 0x130);
  goto LAB_03524738;
}


