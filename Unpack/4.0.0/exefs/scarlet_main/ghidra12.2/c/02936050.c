/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02936050; name: FUN_02936050
 */


void FUN_02936050(long param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar5 = *(uint *)(lVar6 + 0xc08);
  if (uVar5 < 0x60) {
    do {
      lVar10 = *(long *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
      if (*(short *)(lVar10 + 8) == 0) {
        if (uVar5 < 0x5f) {
          *(undefined2 *)(lVar10 + 8) = 1;
          *(int *)(lVar6 + 0xc08) = *(int *)(lVar6 + 0xc08) + 1;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      *(uint *)(lVar6 + 0xc08) = uVar5;
    } while (uVar5 != 0x60);
  }
  lVar6 = *(long *)(lVar3 + 0x58);
  uVar5 = *(uint *)(lVar6 + 0x408);
  if (uVar5 < 0x1f) {
    *(uint *)(lVar6 + 0x408) = uVar5 + 1;
    lVar6 = *(long *)(lVar3 + 0x58);
    uVar5 = *(uint *)(lVar6 + 0x408);
  }
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(lVar6 + (ulong)uVar5 * 0x20 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar3 + 0x38);
  uVar4 = *(uint *)(lVar6 + 0xc08);
  uVar7 = (ulong)uVar4;
  uVar5 = uVar4;
  if (uVar4 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar10 = -1;
  do {
    lVar11 = lVar10;
    if ((uVar7 - uVar5) + lVar11 == -1) goto LAB_02936190;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_02936150;
    uVar8 = uVar8 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar2 != 2);
  if (uVar4 + (int)(lVar11 + 1) < 0x60) {
LAB_02936150:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar4 + (int)lVar11 + 1) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 2;
      *(undefined4 *)(lVar10 + 0xc) = param_2;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x18) = lVar10;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02936190:
  uVar4 = (uint)uVar7;
  uVar5 = uVar4;
  if (uVar4 < 0x61) {
    uVar5 = 0x60;
  }
  uVar8 = uVar7 << 5 | 8;
  lVar10 = 0;
  do {
    lVar11 = lVar10;
    if ((uVar7 - uVar5) + lVar11 == 0) goto LAB_02936224;
    sVar2 = *(short *)(*(long *)(lVar6 + uVar8) + 8);
    if (sVar2 == 0) goto LAB_029361e8;
    uVar8 = uVar8 + 0x20;
    lVar10 = lVar11 + 1;
  } while (sVar2 != 0x66);
  if ((uVar4 + (int)(lVar11 + 1)) - 1 < 0x60) {
LAB_029361e8:
    lVar10 = *(long *)(lVar6 + (ulong)(uVar4 + (int)lVar11) * 0x20 + 8);
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 8) = 0x66;
      *(uint *)(lVar10 + 0xc) = param_3 & 0xff;
      *(undefined1 *)(lVar10 + 10) = 4;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x338) = lVar10;
      lVar3 = *(long *)(param_1 + 0x10);
      lVar6 = *(long *)(lVar3 + 0x38);
      uVar7 = (ulong)*(uint *)(lVar6 + 0xc08);
    }
  }
LAB_02936224:
  uVar5 = (uint)uVar7;
  if (uVar5 < 0x61) {
    uVar5 = 0x60;
  }
  plVar9 = (long *)(lVar6 + uVar7 * 0x20 + 8);
  do {
    uVar8 = uVar7;
    if (uVar5 == uVar8) goto LAB_029362a0;
    lVar10 = *plVar9;
    if (*(short *)(lVar10 + 8) == 0) goto LAB_0293626c;
    plVar9 = plVar9 + 4;
    uVar7 = uVar8 + 1;
  } while (*(short *)(lVar10 + 8) != 0x27);
  if ((int)(uVar8 + 1) - 1U < 0x60) {
LAB_0293626c:
    lVar6 = *(long *)(lVar6 + (uVar8 & 0xffffffff) * 0x20 + 8);
    if (lVar6 != 0) {
      *(undefined2 *)(lVar6 + 8) = 0x27;
      *(undefined1 *)(lVar6 + 10) = 0;
      *(undefined8 *)(lVar6 + 0xc) = 0;
      *(undefined8 *)(lVar6 + 0x14) = 0;
      *(undefined4 *)(lVar6 + 0x1c) = 0;
      *(long *)(*(long *)(lVar3 + 0x78) + 0x140) = lVar6;
      lVar3 = *(long *)(param_1 + 0x10);
    }
  }
LAB_029362a0:
  FUN_0107b310(lVar3,0xd9,8,1);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(*(long *)(lVar6 + 0x78) + 0x140);
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0xc), 0 < iVar1)) {
    FUN_029363e0(param_4,iVar1);
    FUN_02936430(param_4,iVar1);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  lVar3 = *(long *)(lVar6 + 0x58);
  if (*(uint *)(lVar3 + 0x408) == 0) {
    uVar7 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar3 + (ulong)*(uint *)(lVar3 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar3 + 0x408) = *(int *)(lVar3 + 0x408) + -1;
    lVar3 = *(long *)(lVar6 + 0x58);
    uVar7 = (ulong)*(uint *)(lVar3 + 0x408);
  }
  *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar3 + uVar7 * 0x20 + 8);
  lVar3 = *(long *)(lVar6 + 0x38);
  uVar5 = *(uint *)(lVar3 + 0xc08);
  if (uVar5 != 0) {
    if ((uVar5 & 0xffff) < 0x60) {
      uVar7 = (ulong)uVar5 & 0xffff;
      plVar9 = (long *)(lVar3 + uVar7 * 0x20 + 8);
      do {
        uVar7 = uVar7 + 1;
        if (*(short *)(*plVar9 + 8) == 0) break;
        *(undefined2 *)(*plVar9 + 8) = 0;
        plVar9 = plVar9 + 4;
      } while (((uint)uVar7 & 0xffff) != 0x60);
      uVar5 = *(uint *)(lVar3 + 0xc08);
    }
    *(uint *)(lVar3 + 0xc08) = uVar5 - 1;
    *(undefined2 *)(*(long *)(lVar3 + (ulong)(uVar5 - 1) * 0x20 + 8) + 8) = 0;
    uVar7 = (ulong)*(uint *)(lVar3 + 0xc08);
    do {
      if (uVar7 == 0) {
        return;
      }
      uVar7 = uVar7 - 1;
      *(int *)(lVar3 + 0xc08) = (int)uVar7;
    } while (*(short *)(*(long *)(lVar3 + (uVar7 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar3 + 0xc08) = (int)uVar7 + 1;
  }
  return;
}


