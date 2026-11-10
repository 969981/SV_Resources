/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02936450; name: FUN_02936450
 */


void FUN_02936450(long param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar5 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar9 = *(long *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar9 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar9 + 8) = 1;
          *(int *)(lVar5 + 0xc08) = *(int *)(lVar5 + 0xc08) + 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(lVar5 + 0xc08) = uVar4;
    } while (uVar4 != 0x60);
  }
  lVar5 = *(long *)(lVar3 + 0x58);
  uVar4 = *(uint *)(lVar5 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar5 + 0x408) = uVar4 + 1;
    lVar5 = *(long *)(lVar3 + 0x58);
    uVar4 = *(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x38);
  uVar1 = *(uint *)(lVar5 + 0xc08);
  uVar6 = (ulong)uVar1;
  uVar4 = uVar1;
  if (uVar1 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar6 << 5 | 8;
  lVar9 = -1;
  do {
    lVar10 = lVar9;
    if ((uVar6 - uVar4) + lVar10 == -1) goto LAB_02936588;
    sVar2 = *(short *)(*(long *)(lVar5 + uVar7) + 8);
    if (sVar2 == 0) goto LAB_02936548;
    uVar7 = uVar7 + 0x20;
    lVar9 = lVar10 + 1;
  } while (sVar2 != 2);
  if (uVar1 + (int)(lVar10 + 1) < 0x60) {
LAB_02936548:
    lVar9 = *(long *)(lVar5 + (ulong)(uVar1 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 2;
      *(undefined4 *)(lVar9 + 0xc) = param_2;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x18) = lVar9;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar3 + 0x38);
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02936588:
  uVar4 = (uint)uVar6;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar5 + uVar6 * 0x20 + 8);
  do {
    uVar7 = uVar6;
    if (uVar4 == uVar7) goto LAB_02936608;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_029365d4;
    plVar8 = plVar8 + 4;
    uVar6 = uVar7 + 1;
  } while (*(short *)(lVar9 + 8) != 0x66);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_029365d4:
    lVar5 = *(long *)(lVar5 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x66;
      *(uint *)(lVar5 + 0xc) = param_3 & 0xff;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x338) = lVar5;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02936608:
  FUN_0107b310(lVar3,0xda,8,1);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar3 + 0x58);
    uVar6 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar5 + uVar6 * 0x20 + 8);
  lVar3 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar4 & 0xffff;
      plVar8 = (long *)(lVar3 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar6 == 0) {
        return;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar3 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar6 + 1;
  }
  return;
}


