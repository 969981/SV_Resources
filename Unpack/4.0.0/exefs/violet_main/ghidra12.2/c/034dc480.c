/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034dc480; name: FUN_034dc480
 */


undefined8
FUN_034dc480(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  piVar6 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) || (*piVar6 == param_2)) {
    piVar5 = piVar6;
  }
  else {
    lVar8 = (ulong)uVar3 * 0x10;
    piVar4 = piVar6;
    do {
      lVar8 = lVar8 + -0x10;
      if (lVar8 == 0) {
        return 0x14;
      }
      piVar5 = piVar4 + 4;
      piVar1 = piVar4 + 4;
      piVar4 = piVar5;
    } while (*piVar1 != param_2);
  }
  if (piVar5 == piVar6 + (ulong)uVar3 * 4) {
    return 0x14;
  }
  lVar8 = *(long *)(piVar5 + 2);
  piVar4 = *(int **)(lVar8 + 0x10);
  uVar3 = *(uint *)(lVar8 + 0x18);
  piVar6 = piVar4;
  if (uVar3 == 0) {
LAB_034dc56c:
    if (piVar6 == piVar4 + (ulong)uVar3 * 3) goto LAB_034dc584;
  }
  else {
    lVar7 = (ulong)uVar3 * 0xc;
    do {
      if ((*piVar6 == param_3) && (piVar6[1] == param_4)) goto LAB_034dc56c;
      lVar7 = lVar7 + -0xc;
      piVar6 = piVar6 + 3;
    } while (lVar7 != 0);
LAB_034dc584:
    uVar9 = *(uint *)(lVar8 + 0x1c);
    if (uVar9 <= uVar3) {
      iVar2 = uVar9 + (uVar9 >> 1);
      if (uVar9 == 0) {
        iVar2 = 1;
      }
      uVar9 = iVar2 + uVar9;
      piVar4 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar4,(ulong)uVar9 * 0xc);
      if (piVar4 == (int *)0x0) {
        return 2;
      }
      *(int **)(lVar8 + 0x10) = piVar4;
      *(uint *)(lVar8 + 0x1c) = uVar9;
    }
    if (uVar9 <= uVar3) {
      return 2;
    }
    uVar3 = *(uint *)(lVar8 + 0x18);
    *(uint *)(lVar8 + 0x18) = uVar3 + 1;
    if (piVar4 == (int *)0x0) {
      return 2;
    }
    piVar6 = piVar4 + (ulong)uVar3 * 3;
    *(ulong *)piVar6 = CONCAT44(param_4,param_3);
  }
  piVar6[2] = param_5;
  if ((param_6 & 1) == 0) {
    return 1;
  }
  lVar8 = *(long *)(piVar5 + 2);
  piVar5 = *(int **)(lVar8 + 0x10);
  uVar3 = *(uint *)(lVar8 + 0x18);
  piVar6 = piVar5;
  if (uVar3 == 0) {
LAB_034dc650:
    if (piVar6 != piVar5 + (ulong)uVar3 * 3) goto LAB_034dc6d0;
  }
  else {
    lVar7 = (ulong)uVar3 * 0xc;
    do {
      if ((*piVar6 == param_4) && (piVar6[1] == param_3)) goto LAB_034dc650;
      lVar7 = lVar7 + -0xc;
      piVar6 = piVar6 + 3;
    } while (lVar7 != 0);
  }
  uVar9 = *(uint *)(lVar8 + 0x1c);
  if (uVar9 <= uVar3) {
    iVar2 = uVar9 + (uVar9 >> 1);
    if (uVar9 == 0) {
      iVar2 = 1;
    }
    uVar9 = iVar2 + uVar9;
    piVar5 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,piVar5,(ulong)uVar9 * 0xc);
    if (piVar5 == (int *)0x0) {
      return 2;
    }
    *(int **)(lVar8 + 0x10) = piVar5;
    *(uint *)(lVar8 + 0x1c) = uVar9;
  }
  if (uVar9 <= uVar3) {
    return 2;
  }
  uVar3 = *(uint *)(lVar8 + 0x18);
  *(uint *)(lVar8 + 0x18) = uVar3 + 1;
  if (piVar5 == (int *)0x0) {
    return 2;
  }
  piVar6 = piVar5 + (ulong)uVar3 * 3;
  *(ulong *)piVar6 = CONCAT44(param_3,param_4);
LAB_034dc6d0:
  piVar6[2] = param_5;
  return 1;
}


