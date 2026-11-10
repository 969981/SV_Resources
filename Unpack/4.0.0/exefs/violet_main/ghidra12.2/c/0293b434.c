/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293b434; name: FUN_0293b434
 */


bool FUN_0293b434(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar2 + 0x38);
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
  lVar5 = *(long *)(lVar2 + 0x58);
  uVar4 = *(uint *)(lVar5 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar5 + 0x408) = uVar4 + 1;
    lVar5 = *(long *)(lVar2 + 0x58);
    uVar4 = *(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar5 + (ulong)uVar4 * 0x20 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar2 + 0x38);
  uVar3 = *(uint *)(lVar5 + 0xc08);
  uVar6 = (ulong)uVar3;
  uVar4 = uVar3;
  if (uVar3 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar6 << 5 | 8;
  lVar9 = -1;
  do {
    lVar10 = lVar9;
    if ((uVar6 - uVar4) + lVar10 == -1) goto LAB_0293b570;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_0293b530;
    uVar7 = uVar7 + 0x20;
    lVar9 = lVar10 + 1;
  } while (sVar1 != 2);
  if (uVar3 + (int)(lVar10 + 1) < 0x60) {
LAB_0293b530:
    lVar9 = *(long *)(lVar5 + (ulong)(uVar3 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 2;
      *(undefined4 *)(lVar9 + 0xc) = param_2;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x18) = lVar9;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar2 + 0x38);
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0293b570:
  uVar3 = (uint)uVar6;
  uVar4 = uVar3;
  if (uVar3 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar6 << 5 | 8;
  lVar9 = 0;
  do {
    lVar10 = lVar9;
    if ((uVar6 - uVar4) + lVar10 == 0) goto LAB_0293b604;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_0293b5c8;
    uVar7 = uVar7 + 0x20;
    lVar9 = lVar10 + 1;
  } while (sVar1 != 0x10);
  if ((uVar3 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_0293b5c8:
    lVar9 = *(long *)(lVar5 + (ulong)(uVar3 + (int)lVar10) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x10;
      *(uint *)(lVar9 + 0xc) = param_3 & 0xffff;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x88) = lVar9;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar2 + 0x38);
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0293b604:
  uVar3 = (uint)uVar6;
  uVar4 = uVar3;
  if (uVar3 < 0x61) {
    uVar4 = 0x60;
  }
  uVar7 = uVar6 << 5 | 8;
  lVar9 = 0;
  do {
    lVar10 = lVar9;
    if ((uVar6 - uVar4) + lVar10 == 0) goto LAB_0293b698;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar7) + 8);
    if (sVar1 == 0) goto LAB_0293b65c;
    uVar7 = uVar7 + 0x20;
    lVar9 = lVar10 + 1;
  } while (sVar1 != 0x6c);
  if ((uVar3 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_0293b65c:
    lVar9 = *(long *)(lVar5 + (ulong)(uVar3 + (int)lVar10) * 0x20 + 8);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 8) = 0x6c;
      *(uint *)(lVar9 + 0xc) = param_4 & 0xff;
      *(undefined1 *)(lVar9 + 10) = 4;
      *(undefined8 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x368) = lVar9;
      lVar2 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar2 + 0x38);
      uVar6 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_0293b698:
  uVar4 = (uint)uVar6;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar8 = (long *)(lVar5 + uVar6 * 0x20 + 8);
  do {
    uVar7 = uVar6;
    if (uVar4 == uVar7) goto LAB_0293b718;
    lVar9 = *plVar8;
    if (*(short *)(lVar9 + 8) == 0) goto LAB_0293b6e0;
    plVar8 = plVar8 + 4;
    uVar6 = uVar7 + 1;
  } while (*(short *)(lVar9 + 8) != 0x48);
  if ((int)(uVar7 + 1) - 1U < 0x60) {
LAB_0293b6e0:
    lVar5 = *(long *)(lVar5 + (uVar7 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x48;
      *(undefined8 *)(lVar5 + 0xc) = 0;
      *(undefined8 *)(lVar5 + 0x14) = 0;
      *(undefined4 *)(lVar5 + 0x1c) = 0;
      *(undefined1 *)(lVar5 + 10) = 1;
      *(long *)(*(long *)(lVar2 + 0x78) + 0x248) = lVar5;
      lVar2 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0293b718:
  FUN_0107b310(lVar2,0xde,8,1);
  lVar5 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(*(long *)(lVar5 + 0x78) + 0x248);
  if (lVar2 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(lVar2 + 0xc);
  }
  lVar2 = *(long *)(lVar5 + 0x58);
  if (*(uint *)(lVar2 + 0x408) == 0) {
    uVar6 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar2 + (ulong)*(uint *)(lVar2 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar2 + 0x408) = *(int *)(lVar2 + 0x408) + -1;
    lVar2 = *(long *)(lVar5 + 0x58);
    uVar6 = (ulong)*(uint *)(lVar2 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar2 + uVar6 * 0x20 + 8);
  lVar2 = *(long *)(lVar5 + 0x38);
  uVar4 = *(uint *)(lVar2 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar6 = (ulong)uVar4 & 0xffff;
      plVar8 = (long *)(lVar2 + uVar6 * 0x20 + 8);
      do {
        uVar6 = uVar6 + 1;
        if (*(short *)(*plVar8 + 8) == 0) break;
        *(undefined2 *)(*plVar8 + 8) = 0;
        plVar8 = plVar8 + 4;
      } while (((uint)uVar6 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar2 + 0xc08);
    }
    *(uint *)(lVar2 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar2 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar6 = (ulong)*(uint *)(lVar2 + 0xc08);
    do {
      if (uVar6 == 0) goto LAB_0293b814;
      uVar6 = uVar6 - 1;
      *(int *)(lVar2 + 0xc08) = (int)uVar6;
    } while (*(short *)(*(long *)(lVar2 + (uVar6 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar2 + 0xc08) = (int)uVar6 + 1;
  }
LAB_0293b814:
  return iVar11 == 0;
}


