/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ced08; name: FUN_004ced08
 */


long FUN_004ced08(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar5 = 0;
    bVar2 = *(byte *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x18);
      lVar5 = FUN_00528970(lVar7 + 0x10);
      iVar3 = *(int *)(lVar7 + 0x30);
      lVar5 = lVar5 + (long)iVar3 * 2;
      puVar8 = (undefined8 *)0x0;
      if (*(long *)(lVar7 + 0x38) != 0) {
        puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + 8);
      }
      if (iVar3 != 0) {
        lVar9 = (long)iVar3 << 3;
        do {
          lVar4 = FUN_004e2d80(*puVar8);
          lVar5 = lVar4 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar9 = lVar9 + -8;
          puVar8 = puVar8 + 1;
        } while (lVar9 != 0);
      }
      if ((*(byte *)(lVar7 + 8) & 1) == 0) {
        *(int *)(lVar7 + 0x40) = (int)lVar5;
      }
      else {
        lVar5 = FUN_0051d510((byte *)(lVar7 + 8),lVar5,lVar7 + 0x40);
      }
      lVar5 = lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x20) < 0) {
        uVar6 = 0xb;
      }
      else {
        uVar6 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x20) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
        ;
      }
      lVar5 = uVar6 + lVar5;
    }
    if ((uVar1 >> 2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 8);
    }
    else {
      if ((int)*(uint *)(param_1 + 0x24) < 0) {
        uVar6 = 0xb;
      }
      else {
        uVar6 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x24) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
        ;
      }
      lVar5 = uVar6 + lVar5;
      bVar2 = *(byte *)(param_1 + 8);
    }
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar5;
    return lVar5;
  }
  lVar5 = FUN_0051d510(param_1 + 8,lVar5,param_1 + 0x14);
  return lVar5;
}


