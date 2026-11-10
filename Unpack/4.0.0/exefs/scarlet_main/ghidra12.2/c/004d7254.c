/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004d7254; name: FUN_004d7254
 */


long FUN_004d7254(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  lVar8 = (long)*(int *)(param_1 + 0x20);
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    lVar8 = 0;
  }
  else {
    lVar10 = lVar8 << 3;
    do {
      lVar4 = FUN_004d8480(*puVar7);
      lVar8 = lVar4 + lVar8 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar10 = lVar10 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar10 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  lVar8 = lVar8 + iVar3;
  plVar9 = (long *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar9 = (long *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar3 != 0) {
    lVar10 = (long)iVar3 << 3;
    do {
      lVar4 = *plVar9;
      uVar1 = *(uint *)(lVar4 + 0x10);
      if ((uVar1 & 3) == 0) {
        uVar5 = 0;
      }
      else {
        if ((uVar1 & 1) == 0) {
          uVar5 = 0;
        }
        else if ((int)*(uint *)(lVar4 + 0x18) < 0) {
          uVar5 = 0xb;
        }
        else {
          uVar5 = (ulong)((((uint)LZCOUNT(*(uint *)(lVar4 + 0x18) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
          ;
        }
        if ((uVar1 >> 1 & 1) != 0) {
          if ((int)*(uint *)(lVar4 + 0x1c) < 0) {
            uVar6 = 0xb;
          }
          else {
            uVar6 = (ulong)((((uint)LZCOUNT(*(uint *)(lVar4 + 0x1c) | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                           1);
          }
          uVar5 = uVar6 + uVar5;
        }
      }
      if ((*(byte *)(lVar4 + 8) & 1) == 0) {
        *(int *)(lVar4 + 0x14) = (int)uVar5;
      }
      else {
        uVar5 = FUN_0051d510((byte *)(lVar4 + 8),uVar5,lVar4 + 0x14);
      }
      lVar8 = uVar5 + lVar8 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      plVar9 = plVar9 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x50);
  lVar8 = lVar8 + uVar5;
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    puVar7 = *(undefined8 **)(param_1 + 0x58);
    do {
      puVar7 = puVar7 + 1;
      bVar2 = *(byte *)*puVar7;
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)((byte *)*puVar7 + 8);
      }
      uVar5 = uVar5 - 1;
      lVar8 = uVar6 + lVar8 + (ulong)(((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar5 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      bVar2 = **(byte **)(param_1 + 0x60);
      uVar5 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar5 = *(ulong *)(*(byte **)(param_1 + 0x60) + 8);
      }
      lVar8 = lVar8 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar10 = FUN_004df834(*(undefined8 *)(param_1 + 0x68));
      lVar8 = lVar8 + lVar10 + (ulong)(((uint)LZCOUNT((uint)lVar10 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1
      ;
    }
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar8;
    return lVar8;
  }
  lVar8 = FUN_0051d510((byte *)(param_1 + 8),lVar8,param_1 + 0x14);
  return lVar8;
}


