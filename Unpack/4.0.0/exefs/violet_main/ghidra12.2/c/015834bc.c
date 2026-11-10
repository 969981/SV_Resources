/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015834bc; name: FUN_015834bc
 */


bool FUN_015834bc(long param_1,long *param_2,uint param_3,uint param_4)

{
  short sVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar6 + 0xc08);
  if (uVar4 < 0x60) {
    do {
      lVar8 = *(long *)(lVar6 + (ulong)uVar4 * 0x20 + 8);
      if (*(short *)(lVar8 + 8) == 0) {
        if (uVar4 < 0x5f) {
          *(undefined2 *)(lVar8 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar4;
    } while (uVar4 != 0x60);
  }
  lVar6 = *(long *)(lVar3 + 0x58);
  uVar4 = *(uint *)(lVar6 + 0x408);
  if (uVar4 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar4 + 1;
    lVar6 = *(long *)(lVar3 + 0x58);
    uVar4 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar4 * 0x20 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar3 = *(long *)(lVar6 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  uVar11 = (ulong)uVar4;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar7 = (long *)(lVar3 + uVar11 * 0x20 + 8);
  do {
    uVar9 = uVar11;
    if (uVar4 == uVar9) goto LAB_015835f4;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_015835c4;
    plVar7 = plVar7 + 4;
    uVar11 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 2);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_015835c4:
    lVar3 = *(long *)(lVar3 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar3 != 0) {
      *(undefined2 *)(lVar3 + 8) = 2;
      *(undefined4 *)(lVar3 + 0xc) = uVar2;
      *(undefined1 *)(lVar3 + 10) = 4;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x18) = lVar3;
    }
  }
LAB_015835f4:
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  uVar11 = (ulong)uVar5;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar9 = uVar11 << 5 | 8;
  lVar8 = -1;
  do {
    lVar10 = lVar8;
    if ((uVar11 - uVar4) + lVar10 == -1) goto LAB_01583698;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar9) + 8);
    if (sVar1 == 0) goto LAB_01583658;
    uVar9 = uVar9 + 0x20;
    lVar8 = lVar10 + 1;
  } while (sVar1 != 0x25);
  if (uVar5 + (int)(lVar10 + 1) < 0x60) {
LAB_01583658:
    lVar8 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x25;
      *(uint *)(lVar8 + 0xc) = param_4 & 0xff;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x130) = lVar8;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_01583698:
  uVar5 = (uint)uVar11;
  uVar4 = uVar5;
  if (uVar5 < 0x61) {
    uVar4 = 0x60;
  }
  uVar9 = uVar11 << 5 | 8;
  lVar8 = 0;
  do {
    lVar10 = lVar8;
    if ((uVar11 - uVar4) + lVar10 == 0) goto LAB_0158372c;
    sVar1 = *(short *)(*(long *)(lVar6 + uVar9) + 8);
    if (sVar1 == 0) goto LAB_015836f0;
    uVar9 = uVar9 + 0x20;
    lVar8 = lVar10 + 1;
  } while (sVar1 != 0x12);
  if ((uVar5 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_015836f0:
    lVar8 = *(long *)(lVar6 + (ulong)(uVar5 + (int)lVar10) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x12;
      *(uint *)(lVar8 + 0xc) = param_3 & 0xffff;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x98) = lVar8;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_0158372c:
  uVar4 = (uint)uVar11;
  if (uVar4 < 0x61) {
    uVar4 = 0x60;
  }
  plVar7 = (long *)(lVar6 + uVar11 * 0x20 + 8);
  do {
    uVar9 = uVar11;
    if (uVar4 == uVar9) goto LAB_015837ac;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_01583774;
    plVar7 = plVar7 + 4;
    uVar11 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 0x48);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_01583774:
    lVar6 = *(long *)(lVar6 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x48;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0;
      *(undefined1 *)(lVar6 + 10) = 1;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x248) = lVar6;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_015837ac:
  FUN_0107b310(lVar3,0x1f,8,1);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(*(long *)(lVar6 + 0x78) + 0x248);
  if (lVar3 == 0) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(int *)(lVar3 + 0xc);
  }
  lVar3 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar3 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar3 + 0x408) = *(int *)(lVar3 + 0x408) + -1;
    lVar3 = *(long *)(lVar6 + 0x58);
    uVar11 = (ulong)*(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar3 + uVar11 * 0x20 + 8);
  lVar3 = *(long *)(lVar6 + 0x38);
  uVar4 = *(uint *)(lVar3 + 0xc08);
  if (uVar4 != 0) {
    if ((uVar4 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar4 & 0xffff;
      plVar7 = (long *)(lVar3 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar4 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar4 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar4 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar11 == 0) goto LAB_015838a8;
      uVar11 = uVar11 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar3 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar11 + 1;
  }
LAB_015838a8:
  return iVar12 != 0;
}


