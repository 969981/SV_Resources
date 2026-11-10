/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fb421c; name: FUN_02fb421c
 */


void FUN_02fb421c(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if (*(int *)(param_1 + 0x184) < *(int *)(param_1 + 0x40)) {
    *(undefined1 *)(param_1 + 0x120) = 1;
    return;
  }
  lVar10 = *(long *)(param_1 + 0x38);
  iVar6 = *(int *)(param_1 + 0x40) + -1;
  piVar8 = (int *)(lVar10 + (long)iVar6 * 0x70);
  uVar3 = *(uint *)(param_1 + 0x10);
  bVar4 = *(byte *)(piVar8 + 0x18);
  iVar7 = *piVar8;
  iVar2 = piVar8[1];
  plVar1 = (long *)(param_1 + 8);
  if ((int)uVar3 < 1) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar9 = 0;
    uVar12 = 1;
    lVar11 = 8;
    uVar15 = 0xffffffff;
    uVar13 = 0xffffffff;
    do {
      uVar14 = uVar13;
      if ((uVar12 != 0) && (uVar14 = (uint)uVar9, *(int *)(*plVar1 + lVar11) != iVar7)) {
        uVar14 = uVar13;
      }
      if ((long)(int)uVar15 < (long)uVar9) {
        uVar12 = (uint)uVar9;
        if (*(int *)(*plVar1 + lVar11) != iVar2) {
          uVar12 = uVar15;
        }
        uVar15 = uVar12;
      }
      uVar9 = uVar9 + 1;
      if (uVar3 <= uVar9) break;
      uVar12 = uVar14 >> 0x1f;
      lVar11 = lVar11 + 0x10;
      uVar13 = uVar14;
    } while ((int)(uVar15 | uVar14) < 0);
    if (-1 < (int)uVar14) goto LAB_02fb43b0;
  }
  *(undefined1 *)(param_1 + 0x120) = 1;
  uVar12 = uVar3;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) <= (int)uVar3) {
    FUN_02fb9380(plVar1,(long)(int)uVar3 + 1);
    uVar12 = *(uint *)(param_1 + 0x10);
  }
  piVar8 = (int *)(*(long *)(param_1 + 8) + (long)(int)uVar12 * 0x10);
  *piVar8 = param_2;
  piVar8[1] = param_4;
  piVar8[2] = iVar7;
  *(undefined2 *)(piVar8 + 3) = 0xffff;
  *(byte *)((long)piVar8 + 0xe) = bVar4;
  *(bool *)((long)piVar8 + 0xf) = param_2 == 0;
  *(int *)(param_1 + 0x10) = (int)((long)(int)uVar3 + 1);
  lVar11 = (long)*(int *)(param_1 + 0x20) + 1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= *(int *)(param_1 + 0x20)) {
    FUN_02fb94dc(param_1 + 0x18,lVar11);
  }
  *(int *)(param_1 + 0x20) = (int)lVar11;
  uVar14 = uVar3;
LAB_02fb43b0:
  if ((int)uVar15 < 0) {
    *(undefined1 *)(param_1 + 0x120) = 1;
    iVar7 = *(int *)(param_1 + 0x10);
    uVar9 = (long)iVar7 + 1;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) <= iVar7) {
      FUN_02fb9380(plVar1,uVar9);
      iVar7 = *(int *)(param_1 + 0x10);
    }
    piVar8 = (int *)(*(long *)(param_1 + 8) + (long)iVar7 * 0x10);
    piVar8[2] = iVar2;
    *piVar8 = param_3;
    piVar8[1] = param_5;
    *(undefined2 *)(piVar8 + 3) = 0xffff;
    *(byte *)((long)piVar8 + 0xe) = bVar4 ^ 1;
    *(bool *)((long)piVar8 + 0xf) = param_3 == 0;
    lVar11 = (long)*(int *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x10) = (int)uVar9;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) <= *(int *)(param_1 + 0x20)) {
      FUN_02fb94dc(param_1 + 0x18,lVar11);
      uVar9 = (ulong)*(uint *)(param_1 + 0x10);
    }
    uVar15 = (uint)(short)((short)uVar9 + -1);
    *(int *)(param_1 + 0x20) = (int)lVar11;
  }
  if (*(int *)(param_1 + 0x114) == 0x7fffffff) {
    if (param_2 != 0) {
      param_3 = param_2;
    }
    *(int *)(param_1 + 0x114) = param_3;
  }
  lVar10 = lVar10 + (long)iVar6 * 0x70;
  *(short *)(lVar10 + 0xc) = (short)uVar14;
  *(short *)(lVar10 + 0xe) = (short)uVar15;
  lVar11 = *plVar1 + (long)(int)uVar14 * 0x10;
  uVar5 = *(undefined2 *)(lVar11 + 0xc);
  *(short *)(lVar11 + 0xc) = (short)iVar6;
  *(undefined2 *)(lVar10 + 0x10) = uVar5;
  lVar11 = *plVar1 + (long)(int)uVar15 * 0x10;
  uVar5 = *(undefined2 *)(lVar11 + 0xc);
  *(short *)(lVar11 + 0xc) = (short)iVar6;
  *(undefined2 *)(lVar10 + 0x12) = uVar5;
  return;
}


