/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d55dc; name: FUN_004d55dc
 */


long FUN_004d55dc(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 3) == 0) {
    lVar7 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      bVar3 = **(byte **)(param_1 + 0x18);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(*(byte **)(param_1 + 0x18) + 8);
      }
      lVar7 = uVar1 + (((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar2 >> 1 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      lVar5 = FUN_00528970(lVar8 + 0x10);
      iVar4 = *(int *)(lVar8 + 0x30);
      lVar5 = lVar5 + (long)iVar4 * 2;
      puVar9 = (undefined8 *)0x0;
      if (*(long *)(lVar8 + 0x38) != 0) {
        puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x38) + 8);
      }
      if (iVar4 != 0) {
        lVar10 = (long)iVar4 << 3;
        do {
          lVar6 = FUN_004e2d80(*puVar9);
          lVar5 = lVar6 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar10 = lVar10 + -8;
          puVar9 = puVar9 + 1;
        } while (lVar10 != 0);
      }
      if ((*(byte *)(lVar8 + 8) & 1) == 0) {
        *(int *)(lVar8 + 0x40) = (int)lVar5;
      }
      else {
        lVar5 = FUN_0051d510((byte *)(lVar8 + 8),lVar5,lVar8 + 0x40);
      }
      lVar7 = lVar7 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar7;
    return lVar7;
  }
  lVar7 = FUN_0051d510((byte *)(param_1 + 8),lVar7,param_1 + 0x14);
  return lVar7;
}


