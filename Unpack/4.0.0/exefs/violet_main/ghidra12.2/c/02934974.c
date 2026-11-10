/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02934974; name: FUN_02934974
 */


void FUN_02934974(long param_1,long *param_2,undefined4 param_3)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar5 + 0x38);
  uVar4 = *(uint *)(lVar6 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar10 = *(long *)(lVar6 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar4;
    } while (uVar4 != 0x60);
  }
  lVar6 = *(long *)(lVar5 + 0x58);
  uVar4 = *(uint *)(lVar6 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar4 + 1;
    lVar6 = *(long *)(lVar5 + 0x58);
    uVar4 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar4 * 0x20 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar5 + 0x38);
  uVar1 = *(uint *)(lVar6 + 0xc08);
  uVar7 = (ulong)uVar1;
  uVar4 = uVar1;
  if (uVar1 < 0x61) {
    uVar4 = 0x60;
  }
  uVar9 = uVar7 << 5 | 8;
  lVar10 = -1;
  do {
    lVar11 = lVar10;
    if ((uVar7 - uVar4) + lVar11 == -1) goto LAB_02934ac0;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_02934a84;
    uVar9 = uVar9 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar2 != 4);
  if (uVar1 + (int)(lVar11 + 1) < 0x60) {
LAB_02934a84:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar1 + (int)lVar11 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 4;
      *(undefined4 *)(lVar10 + 0xc) = uVar3;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x28) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar5 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02934ac0:
  uVar4 = (uint)uVar7;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar6 + uVar7 * 0x20 + 8);
  do {
    uVar9 = uVar7;
    if (uVar4 == uVar9) goto LAB_02934b3c;
    lVar10 = *plVar8;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_02934b08;
    plVar8 = plVar8 + 4;
    uVar7 = uVar9 + 1;
  } while (*(short *)(lVar10 + 8) != 3);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02934b08:
    lVar6 = *(long *)(lVar6 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 3;
      *(undefined4 *)(lVar6 + 0xc) = param_3;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x20) = lVar6;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02934b3c:
  FUN_0107b310(lVar5,0xd6,8,1);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar5 + 0x58);
  if (*(uint *)(lVar6 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar6 + (ulong)*(uint *)(lVar6 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar6 + 0x408) = *(int *)(lVar6 + 0x408) + -1;
    lVar6 = *(long *)(lVar5 + 0x58);
    uVar7 = (ulong)*(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar6 + uVar7 * 0x20 + 8);
  lVar5 = *(long *)(lVar5 + 0x38);
  uVar4 = *(uint *)(lVar5 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar4 & 0xffff;
      plVar8 = (long *)(lVar5 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar7 == 0) {
        return;
      }
      uVar7 = uVar7 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar5 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar7 + 1;
  }
  return;
}


