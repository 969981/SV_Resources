/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014831ec; name: FUN_014831ec
 */


void FUN_014831ec(long param_1,undefined4 param_2,undefined4 param_3,long *param_4,long *param_5,
                 byte *param_6,int *param_7)

{
  short sVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  bVar2 = FUN_018710a4(param_2,param_3,param_7);
  *param_6 = bVar2;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar6 = *(uint *)(lVar8 + 0xc08);
  if (uVar6 < 0x60) {
    do {
      lVar10 = *(long *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar6 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar6 = uVar6 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar6;
    } while (uVar6 != 0x60);
  }
  lVar8 = *(long *)(lVar5 + 0x58);
  uVar6 = *(uint *)(lVar8 + 0x408);
  if (uVar6 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar6 + 1;
    lVar8 = *(long *)(lVar5 + 0x58);
    uVar6 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar5 + 0x78) = *(undefined8 *)(lVar8 + (ulong)uVar6 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_4 + 0x98))(param_4);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar13 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar6 == uVar11) goto LAB_01483344;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_01483314;
    plVar9 = plVar9 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 3);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_01483314:
    lVar5 = *(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 3;
      *(undefined4 *)(lVar5 + 0xc) = uVar3;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x20) = lVar5;
    }
  }
LAB_01483344:
  lVar8 = *(long *)(param_1 + 0x10);
  uVar3 = (**(code **)(*param_5 + 0x98))(param_5);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar13 = (ulong)uVar6;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar5 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar6 == uVar11) goto LAB_014833d4;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_014833a8;
    plVar9 = plVar9 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 4);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_014833a8:
    lVar5 = *(long *)(lVar5 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 4;
      *(undefined4 *)(lVar5 + 0xc) = uVar3;
      *(undefined1 *)(lVar5 + 10) = 4;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x28) = lVar5;
    }
  }
LAB_014833d4:
  lVar5 = *(long *)(param_1 + 0x10);
  bVar2 = *param_6;
  lVar8 = *(long *)(lVar5 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar7;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar10 = -1;
  do {
    lVar12 = lVar10;
    if ((uVar13 - uVar6) + lVar12 == -1) goto LAB_01483474;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_01483438;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar1 != 0x22);
  if (uVar7 + (int)(lVar12 + 1) < 0x60) {
LAB_01483438:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar12 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x22;
      *(uint *)(lVar10 + 0xc) = (uint)bVar2;
      *(undefined1 *)(lVar10 + 10) = 0;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x118) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_01483474:
  iVar4 = *param_7;
  uVar7 = (uint)uVar13;
  uVar6 = uVar7;
  if (uVar7 < 0x61) {
    uVar6 = 0x60;
  }
  uVar11 = uVar13 << 5 | 8;
  lVar10 = 0;
  do {
    lVar12 = lVar10;
    if ((uVar13 - uVar6) + lVar12 == 0) goto LAB_01483504;
    sVar1 = *(short *)(*(long *)(lVar8 + uVar11) + 8);
    if (sVar1 == 0) goto LAB_014834cc;
    uVar11 = uVar11 + 0x20;
    lVar10 = lVar12 + 1;
  } while (sVar1 != 0x23);
  if ((uVar7 + (int)(lVar12 + 1)) - 1 < 0x60) {
LAB_014834cc:
    lVar10 = *(long *)(lVar8 + (ulong)(uVar7 + (int)lVar12) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x23;
      *(int *)(lVar10 + 0xc) = iVar4;
      *(undefined1 *)(lVar10 + 10) = 0;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x120) = lVar10;
      lVar5 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar5 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_01483504:
  uVar6 = (uint)uVar13;
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  plVar9 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar11 = uVar13;
    if (uVar6 == uVar11) goto LAB_01483580;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_0148354c;
    plVar9 = plVar9 + 4;
    uVar13 = uVar11 + 1;
  } while (*(short *)(lVar10 + 8) != 0x38);
  if ((int)(uVar11 + 1) - 1U < 0x60) {
LAB_0148354c:
    lVar8 = *(long *)(lVar8 + (uVar11 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x38;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined4 *)(lVar8 + 0xc) = 1;
      *(undefined1 *)(lVar8 + 10) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x1c8) = lVar8;
      lVar5 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01483580:
  FUN_0107b310(lVar5,0x78,8,1);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x118);
  bVar2 = 0;
  if (lVar5 != 0) {
    bVar2 = (byte)*(undefined4 *)(lVar5 + 0xc);
  }
  *param_6 = bVar2;
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x120);
  iVar4 = 0;
  if (lVar5 != 0) {
    iVar4 = *(int *)(lVar5 + 0xc);
  }
  *param_7 = iVar4;
  lVar8 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(lVar8 + 0x78) + 0x1c8);
  if ((lVar5 != 0) && (uVar6 = (uint)*(byte *)(lVar5 + 0xc), 1 < uVar6)) {
    *param_7 = uVar6 * iVar4;
    lVar8 = *(long *)(param_1 + 0x10);
  }
  lVar5 = *(long *)(lVar8 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar8 + 0x58);
    uVar13 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar5 + uVar13 * 0x20 + 8);
  lVar5 = *(long *)(lVar8 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  if (uVar6 != 0) {
    if ((uVar6 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar6 & 0xffff;
      plVar9 = (long *)(lVar5 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar6 = *(uint *)(lVar5 + 0xc08);
    }
    *(uint *)(lVar5 + 0xc08) = uVar6 - 1;
    *(undefined2 *)(*(long *)(lVar5 + (ulong)(uVar6 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar5 + 0xc08);
    do {
      if (uVar13 == 0) {
        return;
      }
      uVar13 = uVar13 - 1;
      *(int *)(lVar5 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar5 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar5 + 0xc08) = (int)uVar13 + 1;
  }
  return;
}


