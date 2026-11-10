/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d8480; name: FUN_004d8480
 */


long FUN_004d8480(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar7 = 0;
    bVar2 = *(byte *)(param_1 + 8);
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar7 = 0;
    }
    else {
      bVar2 = **(byte **)(param_1 + 0x18);
      uVar6 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar6 = *(ulong *)(*(byte **)(param_1 + 0x18) + 8);
      }
      lVar7 = uVar6 + (((uint)LZCOUNT((uint)uVar6 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x20);
      lVar4 = FUN_00528970(lVar8 + 0x10);
      iVar3 = *(int *)(lVar8 + 0x38);
      lVar4 = lVar4 + (long)iVar3 * 2;
      puVar9 = (undefined8 *)0x0;
      if (*(long *)(lVar8 + 0x40) != 0) {
        puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x40) + 8);
      }
      if (iVar3 != 0) {
        lVar10 = (long)iVar3 << 3;
        do {
          lVar5 = FUN_004e2d80(*puVar9);
          lVar4 = lVar5 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          lVar10 = lVar10 + -8;
          puVar9 = puVar9 + 1;
        } while (lVar10 != 0);
      }
      if ((*(byte *)(lVar8 + 0x28) & 1) != 0) {
        lVar4 = lVar4 + 2;
      }
      if ((*(byte *)(lVar8 + 8) & 1) == 0) {
        *(int *)(lVar8 + 0x2c) = (int)lVar4;
      }
      else {
        lVar4 = FUN_0051d510((byte *)(lVar8 + 8),lVar4,lVar8 + 0x2c);
      }
      lVar7 = lVar7 + lVar4 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 8);
    }
    else {
      if ((int)*(uint *)(param_1 + 0x28) < 0) {
        uVar6 = 0xb;
      }
      else {
        uVar6 = (ulong)((((uint)LZCOUNT(*(uint *)(param_1 + 0x28) | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1)
        ;
      }
      lVar7 = uVar6 + lVar7;
      bVar2 = *(byte *)(param_1 + 8);
    }
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_1 + 0x14) = (int)lVar7;
    return lVar7;
  }
  lVar7 = FUN_0051d510(param_1 + 8,lVar7,param_1 + 0x14);
  return lVar7;
}


