/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f50af8; name: FUN_02f50af8
 */


void FUN_02f50af8(long param_1,long param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  long lVar8;
  undefined2 *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  
  if (param_2 != param_1) {
    uVar4 = *(uint *)(param_2 + 0x10);
    lVar12 = *(long *)(param_2 + 8);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < (int)uVar4) {
      FUN_02f5181c((long *)(param_1 + 8),(long)(int)uVar4);
    }
    uVar5 = *(uint *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 8);
    uVar3 = uVar5;
    if ((int)uVar4 <= (int)uVar5) {
      uVar3 = uVar4;
    }
    if ((lVar8 != lVar12) && (0 < (int)uVar3)) {
      if (uVar3 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          puVar1 = (undefined2 *)(lVar12 + uVar11 * 2);
          puVar2 = (undefined2 *)(lVar8 + uVar11 * 2);
          uVar11 = uVar11 + 2;
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
        } while (((ulong)uVar3 & 0xfffffffe) != uVar11);
      }
      if ((uVar3 & 1) != 0) {
        *(undefined2 *)(lVar8 + uVar11 * 2) = *(undefined2 *)(lVar12 + uVar11 * 2);
      }
      lVar8 = *(long *)(param_1 + 8);
    }
    if ((int)uVar5 < (int)uVar4) {
      puVar1 = (undefined2 *)(lVar12 + (long)(int)uVar3 * 2);
      puVar2 = (undefined2 *)(lVar8 + (long)(int)uVar3 * 2);
      uVar5 = uVar4 - uVar3 & 3;
      if (2 < uVar4 + ~uVar3) {
        iVar10 = -(uVar4 - uVar3 & 0xfffffffc);
        puVar7 = puVar1;
        puVar9 = puVar2;
        do {
          *puVar9 = *puVar7;
          puVar9[1] = puVar7[1];
          puVar9[2] = puVar7[2];
          puVar1 = puVar7 + 4;
          puVar2 = puVar9 + 4;
          iVar10 = iVar10 + 4;
          puVar9[3] = puVar7[3];
          puVar7 = puVar1;
          puVar9 = puVar2;
        } while (iVar10 != 0);
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    *(uint *)(param_1 + 0x10) = uVar4;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  return;
}


