/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029345f8; name: FUN_029345f8
 */


bool FUN_029345f8(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar8 = *(long *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar8 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar8 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar6 = *(long *)(lVar4 + 0x58);
  uVar5 = *(uint *)(lVar6 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar5 + 1;
    lVar6 = *(long *)(lVar4 + 0x58);
    uVar5 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  uVar10 = (ulong)uVar5;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar4 + uVar10 * 0x20 + 8);
  do {
    uVar9 = uVar10;
    if (uVar5 == uVar9) goto LAB_0293472c;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_029346fc;
    plVar7 = plVar7 + 4;
    uVar10 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 2);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_029346fc:
    lVar4 = *(long *)(lVar4 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 2;
      *(undefined4 *)(lVar4 + 0xc) = uVar3;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x18) = lVar4;
    }
  }
LAB_0293472c:
  lVar4 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar4 + 0x38);
  uVar1 = *(uint *)(lVar6 + 0xc08);
  uVar10 = (ulong)uVar1;
  uVar5 = uVar1;
  if (uVar1 < 0x61) {
    uVar5 = 0x60;
  }
  uVar9 = uVar10 << 5 | 8;
  lVar8 = -1;
  do {
    lVar11 = lVar8;
    if ((uVar10 - uVar5) + lVar11 == -1) goto LAB_029347d0;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar9) + 8);
    if (sVar2 == 0) goto LAB_02934790;
    uVar9 = uVar9 + 0x20;
    lVar8 = lVar11 + 1;
  } while (sVar2 != 0x30);
  if (uVar1 + (int)(lVar11 + 1) < 0x60) {
LAB_02934790:
    lVar8 = *(long *)(lVar6 + (ulong)(uVar1 + (int)lVar11 + 1) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x30;
      *(uint *)(lVar8 + 0xc) = param_3 & 0xffff;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x188) = lVar8;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar4 + 0x38);
      uVar10 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_029347d0:
  uVar5 = (uint)uVar10;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar7 = (long *)(lVar6 + uVar10 * 0x20 + 8);
  do {
    uVar9 = uVar10;
    if (uVar5 == uVar9) goto LAB_02934850;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_02934818;
    plVar7 = plVar7 + 4;
    uVar10 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 0x48);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02934818:
    lVar6 = *(long *)(lVar6 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x48;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 10) = 1;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x248) = lVar6;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_02934850:
  FUN_0107b310(lVar4,0xba,8,1);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar6 + 0x78) + 0x248);
  if (lVar4 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(lVar4 + 0xc);
  }
  lVar4 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar4 + 0x408) == 0) {
    uVar10 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar4 + 0x408) = *(int *)(lVar4 + 0x408) + -1;
    lVar4 = *(long *)(lVar6 + 0x58);
    uVar10 = (ulong)*(uint *)(lVar4 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar4 + uVar10 * 0x20 + 8);
  lVar4 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar4 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar10 = (ulong)uVar5 & 0xffff;
      plVar7 = (long *)(lVar4 + uVar10 * 0x20 + 8);
      do {
        uVar10 = uVar10 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
      } while (((uint)uVar10 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar10 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar10 == 0) goto LAB_0293494c;
      uVar10 = uVar10 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar10;
    } while (*(short *)(*(long *)(lVar4 + (uVar10 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar10 + 1;
  }
LAB_0293494c:
  return iVar12 != 0;
}


