/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01244bd8; name: FUN_01244bd8
 */


void FUN_01244bd8(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar1 + 0x38);
  uVar2 = *(uint *)(lVar3 + 0xc08);
  if (uVar2 < 0x60) {
    do {
      lVar5 = *(long *)(lVar3 + (ulong)uVar2 * 0x20 + 8);
      if (*(short *)(lVar5 + 8) == 0) {
        if (uVar2 < 0x5f) {
          *(undefined2 *)(lVar5 + 8) = 1;
          *(int *)(lVar3 + 0xc08) = *(int *)(lVar3 + 0xc08) + 1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(lVar3 + 0xc08) = uVar2;
    } while (uVar2 != 0x60);
  }
  lVar3 = *(long *)(lVar1 + 0x58);
  uVar2 = *(uint *)(lVar3 + 0x408);
  if (uVar2 < 0x1f) {
    *(uint *)(lVar3 + 0x408) = uVar2 + 1;
    lVar3 = *(long *)(lVar1 + 0x58);
    uVar2 = *(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar3 + (ulong)uVar2 * 0x20 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar1 + 0x38);
  uVar2 = *(uint *)(lVar3 + 0xc08);
  uVar6 = (ulong)uVar2;
  if (uVar2 < 0x61) {
    uVar2 = 0x60;
  }
  plVar4 = (long *)(lVar3 + uVar6 * 0x20 + 8);
  do {
    uVar7 = uVar6;
    if (uVar2 == uVar7) goto LAB_01244cf8;
    lVar5 = *plVar4;
    if (*(short *)(lVar5 + 8) == 0) goto LAB_01244cc4;
    plVar4 = plVar4 + 4;
    uVar6 = uVar7 + 1;
  } while (*(short *)(lVar5 + 8) != 2);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_01244cc4:
    lVar3 = *(long *)(lVar3 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar3 != 0) {
      *(undefined2 *)(lVar3 + 8) = 2;
      *(undefined4 *)(lVar3 + 0xc) = param_2;
      *(undefined1 *)(lVar3 + 10) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(long *)(*(long *)(lVar1 + 0x78) + 0x18) = lVar3;
      lVar1 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01244cf8:
  FUN_0107b310(lVar1,param_3,8,1);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar1 + 0x58);
  if (*(uint *)(lVar3 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar3 + 0x408) = *(int *)(lVar3 + 0x408) + -1;
    lVar3 = *(long *)(lVar1 + 0x58);
    uVar6 = (ulong)*(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar3 + uVar6 * 0x20 + 8);
  lVar1 = *(long *)(lVar1 + 0x38);
  uVar2 = *(uint *)(lVar1 + 0xc08);
  if (uVar2 != 0) {
    if ((uVar2 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar2 & 0xffff;
      plVar4 = (long *)(lVar1 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar4 + 8) == 0) break;
        *(undefined2 *)(*plVar4 + 8) = 0;
        plVar4 = plVar4 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar2 = *(uint *)(lVar1 + 0xc08);
    }
    *(uint *)(lVar1 + 0xc08) = uVar2 - 1;
    *(undefined2 *)(*(long *)(lVar1 + (ulong)(uVar2 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar1 + 0xc08);
    do {
      if (uVar6 == 0) {
        return;
      }
      uVar6 = uVar6 - 1;
      *(int *)(lVar1 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar1 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar1 + 0xc08) = (int)uVar6 + 1;
  }
  return;
}


