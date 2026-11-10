/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060be4c; name: FUN_0060be4c
 */


long FUN_0060be4c(undefined *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar7 = (long)*(int *)(param_1 + 0x18);
  puVar8 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar7 = 0;
  }
  else {
    lVar9 = lVar7 << 3;
    do {
      lVar4 = FUN_006101ec(*puVar8);
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x30);
  lVar7 = lVar7 + iVar3;
  puVar8 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  if (iVar3 != 0) {
    lVar9 = (long)iVar3 << 3;
    do {
      lVar4 = FUN_0060f19c(*puVar8);
      lVar7 = lVar4 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar9 = lVar9 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
  }
  pbVar6 = *(byte **)(param_1 + 0x40);
  bVar2 = *pbVar6;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_0060bf20:
      uVar5 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar6 + 8);
      }
      lVar7 = lVar7 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) goto LAB_0060bf20;
  pbVar6 = *(byte **)(param_1 + 0x48);
  bVar2 = *pbVar6;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_0060bfa8;
  }
  else if (*(long *)(pbVar6 + 8) == 0) goto LAB_0060bfa8;
  uVar5 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar5 = *(ulong *)(pbVar6 + 8);
  }
  lVar7 = lVar7 + uVar5 + (ulong)(((uint)LZCOUNT((uint)uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
LAB_0060bfa8:
  if (param_1 != PTR_DAT_047ced30) {
    if (*(long *)(param_1 + 0x50) != 0) {
      lVar9 = FUN_0060cf38();
      lVar7 = lVar7 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar9 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      lVar9 = FUN_0060e4b0();
      lVar7 = lVar7 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar9 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar9 = FUN_0026488c();
      lVar7 = lVar7 + lVar9 + (ulong)(((uint)LZCOUNT((uint)lVar9 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      uVar5 = 0xb;
    }
    else {
      uVar5 = (ulong)((((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1);
    }
    lVar7 = uVar5 + lVar7;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar2 = *(byte *)(uVar5 + 8);
    if ((bVar2 & 1) == 0) {
      uVar5 = (ulong)(bVar2 >> 1);
    }
    else {
      uVar5 = *(ulong *)(uVar5 + 0x10);
    }
    lVar7 = uVar5 + lVar7;
  }
  *(int *)(param_1 + 0x6c) = (int)lVar7;
  return lVar7;
}


