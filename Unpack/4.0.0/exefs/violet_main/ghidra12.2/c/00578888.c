/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00578888; name: FUN_00578888
 */


long FUN_00578888(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar5 = (long)*(int *)(param_1 + 0x18);
  puVar6 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar5 = 0;
    pbVar3 = *(byte **)(param_1 + 0x28);
    bVar1 = *pbVar3;
  }
  else {
    lVar7 = lVar5 << 3;
    do {
      lVar2 = FUN_0057aad0(*puVar6);
      lVar5 = lVar2 + lVar5 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar7 = lVar7 + -8;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
    pbVar3 = *(byte **)(param_1 + 0x28);
    bVar1 = *pbVar3;
  }
  if ((bVar1 & 1) == 0) {
    uVar4 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar4 != 0) {
    uVar4 = (ulong)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      uVar4 = *(ulong *)(pbVar3 + 8);
    }
    lVar5 = lVar5 + uVar4 + (ulong)(((uint)LZCOUNT((uint)uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar4 + 8);
    if ((bVar1 & 1) == 0) {
      uVar4 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar4 + 0x10);
    }
    lVar5 = uVar4 + lVar5;
  }
  *(int *)(param_1 + 0x30) = (int)lVar5;
  return lVar5;
}


