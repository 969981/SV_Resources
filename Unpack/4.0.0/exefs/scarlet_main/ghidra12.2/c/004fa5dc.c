/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fa5dc; name: FUN_004fa5dc
 */


void FUN_004fa5dc(long *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      FUN_004fa5dc(param_1,*(long *)(param_2 + 0x38) + lVar10);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x90;
    } while (lVar11 < *(int *)(param_2 + 0x74));
  }
  *(long *)param_1[1] = param_2;
  lVar15 = param_1[5];
  lVar13 = *(long *)param_1[3];
  lVar11 = ((long *)param_1[3])[1];
  lVar10 = lVar13 << 0x20;
  lVar12 = *(long *)param_1[4];
  uVar4 = *(undefined4 *)(lVar15 + (lVar10 + 0x100000000 >> 0x1e));
  puVar1 = (undefined4 *)(lVar15 + (lVar10 >> 0x1e));
  uVar5 = *(undefined4 *)(lVar15 + (lVar10 + 0x200000000 >> 0x1e));
  uVar6 = *(undefined4 *)(lVar15 + (lVar10 + 0x300000000 >> 0x1e));
  uVar2 = *puVar1;
  uVar7 = *(undefined4 *)(lVar15 + (lVar10 + 0x400000000 >> 0x1e));
  lVar10 = FUN_004a4448();
  plVar8 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x50);
  if (plVar8 != (long *)0x0) {
    lVar14 = *param_1;
    *plVar8 = param_2;
    plVar8[1] = lVar12;
    plVar8[2] = (long)(puVar1 + 5);
    plVar8[3] = lVar15 + (lVar13 >> 0x20) * 4;
    *(undefined4 *)(plVar8 + 4) = uVar2;
    *(undefined4 *)((long)plVar8 + 0x24) = uVar4;
    *(undefined4 *)(plVar8 + 5) = uVar5;
    *(undefined4 *)((long)plVar8 + 0x2c) = uVar6;
    *(int *)(plVar8 + 6) = (int)lVar11;
    *(undefined4 *)((long)plVar8 + 0x34) = uVar7;
    lVar11 = param_2;
    if (lVar10 == 0) {
      lVar10 = FUN_004a4448();
      lVar11 = *plVar8;
    }
    plVar8[7] = lVar10;
    plVar8[8] = lVar14;
    *(int *)(plVar8 + 9) = *(int *)(lVar11 + 0x68) + -1;
  }
  lVar11 = param_1[1];
  *(long **)(lVar11 + 8) = plVar8;
  uVar3 = *(uint *)(param_2 + 0x78);
  if (0 < (int)uVar3) {
    plVar8 = (long *)param_1[2];
    if (uVar3 == 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      lVar11 = 0x50;
      do {
        *plVar8 = *(long *)(param_2 + 0x40) + lVar11 + -0x50;
        lVar12 = param_1[2];
        param_1[2] = lVar12 + 8;
        lVar10 = *(long *)(param_2 + 0x40) + lVar11;
        lVar11 = lVar11 + 0xa0;
        *(long *)(lVar12 + 8) = lVar10;
        uVar9 = uVar9 + 2;
        plVar8 = (long *)(param_1[2] + 8);
        param_1[2] = (long)plVar8;
      } while (((ulong)uVar3 & 0xfffffffe) != uVar9);
    }
    if ((uVar3 & 1) != 0) {
      *plVar8 = *(long *)(param_2 + 0x40) + uVar9 * 0x50;
      param_1[2] = param_1[2] + 8;
    }
    lVar11 = param_1[1];
  }
  param_1[3] = param_1[3] + 0xc;
  param_1[4] = param_1[4] + 8;
  param_1[1] = lVar11 + 0x10;
  return;
}


