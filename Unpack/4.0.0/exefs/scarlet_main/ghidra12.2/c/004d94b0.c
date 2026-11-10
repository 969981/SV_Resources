/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d94b0; name: FUN_004d94b0
 */


long FUN_004d94b0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = (long)*(int *)(param_1 + 0x20);
  puVar8 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar7 = 0;
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  else {
    lVar9 = lVar7 << 3;
    do {
      lVar5 = FUN_004da888(*puVar8);
      lVar7 = lVar5 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      bVar3 = **(byte **)(param_1 + 0x30);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x30) + 8);
      }
      lVar7 = lVar7 + uVar1 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      lVar9 = FUN_00528970(lVar5 + 0x10);
      iVar4 = *(int *)(lVar5 + 0x38);
      lVar9 = lVar9 + (long)iVar4 * 2;
      puVar8 = (undefined8 *)0x0;
      if (*(long *)(lVar5 + 0x40) != 0) {
        puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x40) + 8);
      }
      if (iVar4 != 0) {
        lVar10 = (long)iVar4 << 3;
        do {
          lVar6 = FUN_004e2d80(*puVar8);
          lVar9 = lVar6 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar10 = lVar10 + -8;
          puVar8 = puVar8 + 1;
        } while (lVar10 != 0);
      }
      if ((*(byte *)(lVar5 + 0x28) & 1) != 0) {
        lVar9 = lVar9 + 3;
      }
      if ((*(byte *)(lVar5 + 8) & 1) == 0) {
        *(int *)(lVar5 + 0x2c) = (int)lVar9;
      }
      else {
        lVar9 = FUN_0051d510((byte *)(lVar5 + 8),lVar9,lVar5 + 0x2c);
      }
      lVar7 = lVar7 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar9 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar7;
    return lVar7;
  }
  lVar7 = FUN_0051d510((byte *)(param_1 + 8),lVar7,param_1 + 0x14);
  return lVar7;
}


