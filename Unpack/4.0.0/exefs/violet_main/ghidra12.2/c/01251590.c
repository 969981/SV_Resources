/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01251590; name: FUN_01251590
 */


void FUN_01251590(long param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar5 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar8 = *(long *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar8 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar8 + 8) = 1;
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
  uVar9 = uVar6 << 5 | 8;
  lVar8 = -1;
  do {
    lVar10 = lVar8;
    if ((uVar6 - uVar4) + lVar10 == -1) goto LAB_012516cc;
    sVar2 = *(short *)(*(long *)(lVar5 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_0125168c;
    uVar9 = uVar9 + 0x20;
    lVar8 = lVar10 + 1;
  } while (sVar2 != 0x3e);
  if (uVar1 + (int)(lVar10 + 1) < 0x60) {
LAB_0125168c:
    lVar8 = *(long *)(lVar5 + (ulong)(uVar1 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x3e;
      *(uint *)(lVar8 + 0xc) = param_2 & 0xff;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x1f8) = lVar8;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar3 + 0x38);
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_012516cc:
  uVar4 = (uint)uVar6;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar7 = (long *)(lVar5 + uVar6 * 0x20 + 8);
  do {
    uVar9 = uVar6;
    if (uVar4 == uVar9) goto LAB_0125174c;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_01251714;
    plVar7 = plVar7 + 4;
    uVar6 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 0x48);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_01251714:
    lVar5 = *(long *)(lVar5 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x48;
      *(undefined8 *)(lVar5 + 0xc) = 0;
      *(undefined8 *)(lVar5 + 0x14) = 0;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      *(undefined1 *)(lVar5 + 10) = 1;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x248) = lVar5;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0125174c:
  FUN_0107b310(lVar3,0xa1,8,1);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(*(long *)(lVar5 + 0x78) + 0x248);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0xc) == 0)) {
    FUN_0107b310(lVar5,0xa2,8,1);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  lVar3 = *(long *)(lVar5 + 0x58);
  if (*(uint *)(lVar3 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar3 + 0x408) = *(int *)(lVar3 + 0x408) + -1;
    lVar3 = *(long *)(lVar5 + 0x58);
    uVar6 = (ulong)*(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar3 + uVar6 * 0x20 + 8);
  lVar3 = *(long *)(lVar5 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar4 & 0xffff;
      plVar7 = (long *)(lVar3 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
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


