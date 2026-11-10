/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01247774; name: FUN_01247774
 */


void FUN_01247774(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined2 *)(param_1 + 0x18) = 0;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),0);
  if ((uVar2 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
    uVar1 = FUN_010f9128(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),0);
    if (uVar1 != 0) {
      bVar6 = 0;
      do {
        if (((bVar6 < *(byte *)(lVar7 + 0x58)) &&
            (plVar3 = *(long **)(lVar7 + (ulong)bVar6 * 8 + 0x28), plVar3 != (long *)0x0)) &&
           (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
          uVar4 = 0;
          goto LAB_01247a1c;
        }
        bVar6 = bVar6 + 1;
      } while (bVar6 < uVar1);
    }
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),1);
  if ((uVar2 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
    uVar1 = FUN_010f9128(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),1);
    if (uVar1 != 0) {
      bVar6 = 0;
      do {
        if (((bVar6 < *(byte *)(lVar7 + 0x90)) &&
            (plVar3 = *(long **)(lVar7 + (ulong)bVar6 * 8 + 0x60), plVar3 != (long *)0x0)) &&
           (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
          uVar4 = 1;
          goto LAB_01247a1c;
        }
        bVar6 = bVar6 + 1;
      } while (bVar6 < uVar1);
    }
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),2);
  if ((uVar2 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
    uVar1 = FUN_010f9128(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),2);
    if (uVar1 != 0) {
      bVar6 = 0;
      do {
        if (((bVar6 < *(byte *)(lVar7 + 200)) &&
            (plVar3 = *(long **)(lVar7 + (ulong)bVar6 * 8 + 0x98), plVar3 != (long *)0x0)) &&
           (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
          uVar4 = 2;
          goto LAB_01247a1c;
        }
        bVar6 = bVar6 + 1;
      } while (bVar6 < uVar1);
    }
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),3);
  if ((uVar2 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
    uVar1 = FUN_010f9128(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),3);
    if (uVar1 != 0) {
      bVar6 = 0;
      do {
        if (((bVar6 < *(byte *)(lVar7 + 0x100)) &&
            (plVar3 = *(long **)(lVar7 + (ulong)bVar6 * 8 + 0xd0), plVar3 != (long *)0x0)) &&
           (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
          uVar4 = 3;
          goto LAB_01247a1c;
        }
        bVar6 = bVar6 + 1;
      } while (bVar6 < uVar1);
    }
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar2 = FUN_00f7e2a0(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),4);
  if ((uVar2 & 1) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
    uVar1 = FUN_010f9128(*(undefined4 *)(lVar5 + 0x36c),*(undefined1 *)(lVar5 + 0x370),4);
    if (uVar1 != 0) {
      bVar6 = 0;
      do {
        if (((bVar6 < *(byte *)(lVar7 + 0x138)) &&
            (plVar3 = *(long **)(lVar7 + (ulong)bVar6 * 8 + 0x108), plVar3 != (long *)0x0)) &&
           (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
          uVar4 = 4;
LAB_01247a1c:
          *(undefined1 *)(param_1 + 0x18) = uVar4;
          *(byte *)(param_1 + 0x19) = bVar6;
          *(undefined1 *)(param_1 + 0x1a) = 0;
          return;
        }
        bVar6 = bVar6 + 1;
      } while (bVar6 < uVar1);
    }
  }
  return;
}


