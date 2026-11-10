/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b33b4; name: FUN_019b33b4
 */


void FUN_019b33b4(long param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  
  *(undefined4 *)(param_1 + 0x1d0) = *param_2;
  *(undefined4 *)(param_1 + 0x1d4) = param_2[1];
  FUN_019b3640(param_2,param_1 + 0x40);
  uVar7 = (ulong)*(uint *)(param_1 + 0x40);
  uVar1 = *(int *)(param_1 + 0x44) + 0x1fU & 0xffffffe0;
  uVar2 = *(int *)(param_1 + 0x4c) + 0x1fU & 0xffffffe0;
  if ((int)*(uint *)(param_1 + 0x40) < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    uVar3 = uVar1 * *(int *)(param_1 + 0x48) + 0xfff & 0xfffff000;
    uVar4 = uVar2 * *(int *)(param_1 + 0x50) + 0xfff & 0xfffff000;
    puVar9 = (uint *)(param_1 + 0x194);
    piVar10 = (int *)(param_1 + 0xa0);
    do {
      if (piVar10[-0x10] != 0) {
        puVar9[-0x13] = uVar11;
        uVar11 = uVar11 + uVar3;
        puVar9[-4] = uVar3;
      }
      if (piVar10[-0xc] != 0) {
        puVar9[-0x12] = uVar11;
        uVar11 = uVar11 + uVar4;
        puVar9[-3] = uVar4;
      }
      if (piVar10[-8] != 0) {
        puVar9[-0x11] = uVar11;
        uVar11 = uVar11 + uVar4;
        puVar9[-2] = uVar4;
      }
      if (piVar10[-4] != 0) {
        puVar9[-0x10] = uVar11;
        uVar11 = uVar11 + uVar3;
        puVar9[-1] = uVar3;
      }
      if (*piVar10 != 0) {
        puVar9[-0xf] = uVar11;
        uVar11 = uVar11 + uVar3;
        *puVar9 = uVar3;
      }
      uVar7 = uVar7 - 1;
      puVar9 = puVar9 + 5;
      piVar10 = piVar10 + 0x14;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_019b3610(0x9007);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar6 + 8 + ((ulong)(uint)-(int)(lVar6 + 8) & 0xfff);
    *(long *)(lVar8 + -8) = lVar6;
  }
  *(long *)(param_1 + 0x1c0) = lVar8;
  lVar6 = FUN_019b3610((ulong)uVar11 + 0x1007);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar6 + 8 + ((ulong)(uint)-(int)(lVar6 + 8) & 0xfff);
    *(long *)(lVar8 + -8) = lVar6;
  }
  *(long *)(param_1 + 0x1c8) = lVar8;
  memset(*(void **)(param_1 + 0x1c0),0,0x8000);
  memset(*(void **)(param_1 + 0x1c8),0,(long)(int)uVar11);
  uVar7 = (ulong)*(uint *)(param_1 + 0x40);
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    puVar9 = (uint *)(param_1 + 0xa4);
    piVar10 = (int *)(param_1 + 0x158);
    do {
      if (puVar9[-0x11] != 0) {
        lVar6 = *(long *)(param_1 + 0x1c8);
        iVar5 = piVar10[-4];
        puVar9[-0x10] = uVar1;
        *(long *)(puVar9 + -0x13) = lVar6 + iVar5;
      }
      if (puVar9[-0xd] != 0) {
        lVar6 = *(long *)(param_1 + 0x1c8);
        iVar5 = piVar10[-3];
        puVar9[-0xc] = uVar2;
        *(long *)(puVar9 + -0xf) = lVar6 + iVar5;
      }
      if (puVar9[-9] != 0) {
        lVar6 = *(long *)(param_1 + 0x1c8);
        iVar5 = piVar10[-2];
        puVar9[-8] = uVar2;
        *(long *)(puVar9 + -0xb) = lVar6 + iVar5;
      }
      if (puVar9[-5] != 0) {
        lVar6 = *(long *)(param_1 + 0x1c8);
        iVar5 = piVar10[-1];
        puVar9[-4] = uVar1;
        *(long *)(puVar9 + -7) = lVar6 + iVar5;
      }
      if (puVar9[-1] != 0) {
        lVar6 = *(long *)(param_1 + 0x1c8);
        iVar5 = *piVar10;
        *puVar9 = uVar1;
        *(long *)(puVar9 + -3) = lVar6 + iVar5;
      }
      uVar7 = uVar7 - 1;
      puVar9 = puVar9 + 0x14;
      piVar10 = piVar10 + 5;
    } while (uVar7 != 0);
  }
  FUN_019b3620(param_2,param_1 + 0x40);
  return;
}


