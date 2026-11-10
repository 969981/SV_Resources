/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02935034; name: FUN_02935034
 */


void FUN_02935034(long param_1,long *param_2,long *param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar4 + 0x38);
  uVar3 = *(uint *)(lVar5 + 0xc08);
  if (uVar3 < 0x60) {
    do {
      lVar8 = *(long *)(lVar5 + (ulong)uVar3 * 0x20 + 8);
      if (*(short *)(lVar8 + 8) == 0) {
        if (uVar3 < 0x5f) {
          *(undefined2 *)(lVar8 + 8) = 1;
          *(int *)(lVar5 + 0xc08) = *(int *)(lVar5 + 0xc08) + 1;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      *(uint *)(lVar5 + 0xc08) = uVar3;
    } while (uVar3 != 0x60);
  }
  lVar5 = *(long *)(lVar4 + 0x58);
  uVar3 = *(uint *)(lVar5 + 0x408);
  if (uVar3 < 0x1f) {
    *(uint *)(lVar5 + 0x408) = uVar3 + 1;
    lVar5 = *(long *)(lVar4 + 0x58);
    uVar3 = *(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar5 + (ulong)uVar3 * 0x20 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  local_40 = param_5;
  uStack_38 = param_6;
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  lVar4 = *(long *)(lVar5 + 0x38);
  uVar3 = *(uint *)(lVar4 + 0xc08);
  uVar11 = (ulong)uVar3;
  if (uVar3 < 0x61) {
    uVar3 = 0x60;
  }
  plVar7 = (long *)(lVar4 + uVar11 * 0x20 + 8);
  do {
    uVar9 = uVar11;
    if (uVar3 == uVar9) goto LAB_02935170;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_02935144;
    plVar7 = plVar7 + 4;
    uVar11 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 4);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02935144:
    lVar4 = *(long *)(lVar4 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 8) = 4;
      *(undefined4 *)(lVar4 + 0xc) = uVar2;
      *(undefined1 *)(lVar4 + 10) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(long *)(*(long *)(lVar5 + 0x78) + 0x28) = lVar4;
    }
  }
LAB_02935170:
  if (param_3 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar4 + 0x38);
  uVar6 = *(uint *)(lVar5 + 0xc08);
  uVar11 = (ulong)uVar6;
  uVar3 = uVar6;
  if (uVar6 < 0x61) {
    uVar3 = 0x60;
  }
  uVar9 = uVar11 << 5 | 8;
  lVar8 = -1;
  do {
    lVar10 = lVar8;
    if ((uVar11 - uVar3) + lVar10 == -1) goto LAB_02935228;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar9) + 8);
    if (sVar1 == 0) goto LAB_029351e8;
    uVar9 = uVar9 + 0x20;
    lVar8 = lVar10 + 1;
  } while (sVar1 != 3);
  if (uVar6 + (int)(lVar10 + 1) < 0x60) {
LAB_029351e8:
    lVar8 = *(long *)(lVar5 + (ulong)(uVar6 + (int)lVar10 + 1) * 0x20 + 8);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0xc) = uVar2;
      *(undefined2 *)(lVar8 + 8) = 3;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x20) = lVar8;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar4 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_02935228:
  uVar6 = (uint)uVar11;
  uVar3 = uVar6;
  if (uVar6 < 0x61) {
    uVar3 = 0x60;
  }
  uVar9 = uVar11 << 5 | 8;
  lVar8 = 0;
  do {
    lVar10 = lVar8;
    if ((uVar11 - uVar3) + lVar10 == 0) goto LAB_029352bc;
    sVar1 = *(short *)(*(long *)(lVar5 + uVar9) + 8);
    if (sVar1 == 0) goto LAB_02935280;
    uVar9 = uVar9 + 0x20;
    lVar8 = lVar10 + 1;
  } while (sVar1 != 0x1e);
  if ((uVar6 + (int)(lVar10 + 1)) - 1 < 0x60) {
LAB_02935280:
    lVar8 = *(long *)(lVar5 + (ulong)(uVar6 + (int)lVar10) * 0x20 + 8);
    if (lVar8 != 0) {
      *(uint *)(lVar8 + 0xc) = param_4 & 0xffff;
      *(undefined2 *)(lVar8 + 8) = 0x1e;
      *(undefined1 *)(lVar8 + 10) = 4;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0xf8) = lVar8;
      lVar4 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(lVar4 + 0x38);
      uVar11 = (ulong)*(uint *)(lVar5 + 0xc08);
    }
  }
LAB_029352bc:
  uVar3 = (uint)uVar11;
  if (uVar3 < 0x61) {
    uVar3 = 0x60;
  }
  plVar7 = (long *)(lVar5 + uVar11 * 0x20 + 8);
  do {
    uVar9 = uVar11;
    if (uVar3 == uVar9) goto LAB_0293533c;
    lVar8 = *plVar7;
    if (*(short *)(lVar8 + 8) == 0) goto LAB_02935304;
    plVar7 = plVar7 + 4;
    uVar11 = uVar9 + 1;
  } while (*(short *)(lVar8 + 8) != 0x1f);
  if ((int)(uVar9 + 1) - 1U < 0x60) {
LAB_02935304:
    lVar5 = *(long *)(lVar5 + (uVar9 & 0xffffffff) * 0x20 + 8);
    if (lVar5 != 0) {
      *(undefined2 *)(lVar5 + 8) = 0x1f;
      *(undefined8 *)(lVar5 + 0xc) = 0;
      *(undefined4 *)(lVar5 + 0x14) = 0;
      *(undefined8 **)(lVar5 + 0x18) = &local_40;
      *(undefined1 *)(lVar5 + 10) = 0;
      *(long *)(*(long *)(lVar4 + 0x78) + 0x100) = lVar5;
      lVar4 = *(long *)(param_1 + 0x10);
    }
  }
LAB_0293533c:
  FUN_0107b310(lVar4,0x88,8,1);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar4 + 0x58);
  if (*(uint *)(lVar5 + 0x408) == 0) {
    uVar11 = 0;
  }
  else {
    memset((void *)(*(long *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x408) * 0x20 + 8) + 8),0,0x430);
    *(int *)(lVar5 + 0x408) = *(int *)(lVar5 + 0x408) + -1;
    lVar5 = *(long *)(lVar4 + 0x58);
    uVar11 = (ulong)*(uint *)(lVar5 + 0x408);
  }
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar5 + uVar11 * 0x20 + 8);
  lVar4 = *(long *)(lVar4 + 0x38);
  uVar3 = *(uint *)(lVar4 + 0xc08);
  if (uVar3 != 0) {
    if ((uVar3 & 0xffff) < 0x60) {
      uVar11 = (ulong)uVar3 & 0xffff;
      plVar7 = (long *)(lVar4 + uVar11 * 0x20 + 8);
      do {
        uVar11 = uVar11 + 1;
        if (*(short *)(*plVar7 + 8) == 0) break;
        *(undefined2 *)(*plVar7 + 8) = 0;
        plVar7 = plVar7 + 4;
      } while (((uint)uVar11 & 0xffff) != 0x60);
      uVar3 = *(uint *)(lVar4 + 0xc08);
    }
    *(uint *)(lVar4 + 0xc08) = uVar3 - 1;
    *(undefined2 *)(*(long *)(lVar4 + (ulong)(uVar3 - 1) * 0x20 + 8) + 8) = 0;
    uVar11 = (ulong)*(uint *)(lVar4 + 0xc08);
    do {
      if (uVar11 == 0) {
        return;
      }
      uVar11 = uVar11 - 1;
      *(int *)(lVar4 + 0xc08) = (int)uVar11;
    } while (*(short *)(*(long *)(lVar4 + (uVar11 & 0xffffffff) * 0x20 + 8) + 8) != 1);
    *(int *)(lVar4 + 0xc08) = (int)uVar11 + 1;
  }
  return;
}


