/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01abdd44; name: FUN_01abdd44
 */


bool FUN_01abdd44(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  
  uVar4 = FUN_01abe184();
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar8 + 0xc08);
  if (uVar7 < 0x60) {
    do {
      lVar11 = *(long *)(lVar8 + (ulong)uVar7 * 0x20 + 8);
      if (*(short *)(lVar11 + 8) == 0) {
        if (uVar7 < 0x5f) {
          *(undefined2 *)(lVar11 + 8) = 1;
          *(int *)(lVar8 + 0xc08) = *(int *)(lVar8 + 0xc08) + 1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      *(uint *)(lVar8 + 0xc08) = uVar7;
    } while (uVar7 != 0x60);
  }
  lVar8 = *(long *)(lVar6 + 0x58);
  uVar7 = *(uint *)(lVar8 + 0x408);
  if (uVar7 < 0x1f) {
    *(uint *)(lVar8 + 0x408) = uVar7 + 1;
    lVar8 = *(long *)(lVar6 + 0x58);
    uVar7 = *(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar8 + (ulong)uVar7 * 0x20 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar6 = *(long *)(lVar8 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  uVar13 = (ulong)uVar7;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar10 = (long *)(lVar6 + uVar13 * 0x20 + 8);
  do {
    uVar12 = uVar13;
    if (uVar7 == uVar12) goto LAB_01abde88;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_01abde58;
    plVar10 = plVar10 + 4;
    uVar13 = uVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 2);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_01abde58:
    lVar6 = *(long *)(lVar6 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 2;
      *(undefined4 *)(lVar6 + 0xc) = uVar5;
      *(undefined1 *)(lVar6 + 10) = 4;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(long *)(*(long *)(lVar8 + 0x78) + 0x18) = lVar6;
    }
  }
LAB_01abde88:
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x38);
  uVar1 = *(uint *)(lVar8 + 0xc08);
  uVar13 = (ulong)uVar1;
  uVar7 = uVar1;
  if (uVar1 < 0x61) {
    uVar7 = 0x60;
  }
  uVar12 = uVar13 << 5 | 8;
  lVar11 = -1;
  do {
    lVar9 = lVar11;
    if ((uVar13 - uVar7) + lVar9 == -1) goto LAB_01abdf2c;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar12) + 8);
    if (sVar2 == 0) goto LAB_01abdeec;
    uVar12 = uVar12 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar2 != 0x60);
  if (uVar1 + (int)(lVar9 + 1) < 0x60) {
LAB_01abdeec:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar1 + (int)lVar9 + 1) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x60;
      *(uint *)(lVar11 + 0xc) = uVar4 & 1;
      *(undefined1 *)(lVar11 + 10) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x308) = lVar11;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_01abdf2c:
  uVar4 = (uint)uVar13;
  uVar7 = uVar4;
  if (uVar4 < 0x61) {
    uVar7 = 0x60;
  }
  uVar12 = uVar13 << 5 | 8;
  lVar11 = 0;
  do {
    lVar9 = lVar11;
    if ((uVar13 - uVar7) + lVar9 == 0) goto LAB_01abdfc0;
    sVar2 = *(short *)(*(long *)(lVar8 + uVar12) + 8);
    if (sVar2 == 0) goto LAB_01abdf80;
    uVar12 = uVar12 + 0x20;
    lVar11 = lVar9 + 1;
  } while (sVar2 != 0x50);
  if ((uVar4 + (int)(lVar9 + 1)) - 1 < 0x60) {
LAB_01abdf80:
    lVar11 = *(long *)(lVar8 + (ulong)(uVar4 + (int)lVar9) * 0x20 + 8);
    if (lVar11 != 0) {
      *(undefined2 *)(lVar11 + 8) = 0x50;
      *(undefined8 *)(lVar11 + 0xc) = 0;
      *(undefined8 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x1c) = 0;
      *(undefined1 *)(lVar11 + 10) = 1;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x288) = lVar11;
      lVar6 = *(long *)(param_1 + 0x10);
      lVar8 = *(long *)(lVar6 + 0x38);
      uVar13 = (ulong)*(uint *)(lVar8 + 0xc08);
    }
  }
LAB_01abdfc0:
  uVar7 = (uint)uVar13;
  if (uVar7 < 0x61) {
    uVar7 = 0x60;
  }
  plVar10 = (long *)(lVar8 + uVar13 * 0x20 + 8);
  do {
    uVar12 = uVar13;
    if (uVar7 == uVar12) goto LAB_01abe040;
    lVar11 = *plVar10;
    if (*(short *)(lVar11 + 8) == 0) goto LAB_01abe008;
    plVar10 = plVar10 + 4;
    uVar13 = uVar12 + 1;
  } while (*(short *)(lVar11 + 8) != 0x7b);
  if ((int)(uVar12 + 1) - 1U < 0x60) {
LAB_01abe008:
    lVar8 = *(long *)(lVar8 + (uVar12 & 0xffffffff) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined2 *)(lVar8 + 8) = 0x7b;
      *(undefined8 *)(lVar8 + 0xc) = 0;
      *(undefined8 *)(lVar8 + 0x14) = 0;
      *(undefined4 *)(lVar8 + 0x1c) = 0;
      *(undefined1 *)(lVar8 + 10) = 1;
      *(long *)(*(long *)(lVar6 + 0x78) + 0x3e0) = lVar8;
      lVar6 = *(long *)(param_1 + 0x10);
    }
  }
LAB_01abe040:
  FUN_0107b310(lVar6,0x94,8,1);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x78);
  lVar8 = *(long *)(lVar6 + 0x288);
  if (lVar8 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(lVar8 + 0xc);
  }
  lVar6 = *(long *)(lVar6 + 0x3e0);
  bVar3 = false;
  if (lVar6 != 0) {
    bVar3 = *(int *)(lVar6 + 0xc) != 0;
  }
  *(bool *)param_4 = bVar3;
  lVar6 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar8 + 0x408) == 0) {
    uVar13 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar8 + (ulong)*(uint *)(lVar8 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar8 + 0x408) = *(int *)(lVar8 + 0x408) + -1;
    lVar8 = *(long *)(lVar6 + 0x58);
    uVar13 = (ulong)*(uint *)(lVar8 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar8 + uVar13 * 0x20 + 8);
  lVar6 = *(long *)(lVar6 + 0x38);
  uVar7 = *(uint *)(lVar6 + 0xc08);
  if (uVar7 != 0) {
    if ((uVar7 & 0xffff) < 0x60) {
      uVar13 = (ulong)uVar7 & 0xffff;
      plVar10 = (long *)(lVar6 + uVar13 * 0x20 + 8);
      do {
        uVar13 = uVar13 + 1;
        if (*(short *)(*plVar10 + 8) == 0) break;
        *(undefined2 *)(*plVar10 + 8) = 0;
        plVar10 = plVar10 + 4;
      } while (((uint)uVar13 & 0xffff) != 0x60);
      uVar7 = *(uint *)(lVar6 + 0xc08);
    }
    *(uint *)(lVar6 + 0xc08) = uVar7 - 1;
    *(undefined2 *)(*(long *)(lVar6 + (ulong)(uVar7 - 1) * 0x20 + 8) + 8) = 0;
    uVar13 = (ulong)*(uint *)(lVar6 + 0xc08);
    do {
      if (uVar13 == 0) goto LAB_01abe158;
      uVar13 = uVar13 - 1;
      *(int *)(lVar6 + 0xc08) = (int)uVar13;
    } while (*(short *)(*(long *)(lVar6 + (uVar13 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar6 + 0xc08) = (int)uVar13 + 1;
  }
LAB_01abe158:
  return iVar14 != 0;
}


