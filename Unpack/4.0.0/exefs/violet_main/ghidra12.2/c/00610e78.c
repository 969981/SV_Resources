/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00610e78; name: FUN_00610e78
 */


ulong FUN_00610e78(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long *local_38;
  uint *puStack_30;
  ulong local_28;
  
  puStack_30 = *(uint **)(param_1 + 0x20);
  local_28 = *(ulong *)(puStack_30 + 6);
  uVar5 = *(ulong *)(puStack_30 + 2);
  uVar6 = (ulong)*puStack_30;
  if (local_28 < uVar5) {
    do {
      local_38 = *(long **)(*(long *)(puStack_30 + 8) + local_28 * 8);
      if (local_38 != (long *)0x0) {
        if (local_38 == *(long **)(*(long *)(puStack_30 + 8) + (local_28 ^ 1) * 8)) {
          local_38 = *(long **)(*local_38 + 0x20);
        }
        goto joined_r0x00610eec;
      }
      local_28 = local_28 + 1;
    } while (uVar5 != local_28);
    local_38 = (long *)0x0;
    local_28 = uVar5;
  }
  else {
    local_38 = (long *)0x0;
  }
joined_r0x00610eec:
  while (local_38 != (long *)0x0) {
    pbVar4 = (byte *)local_38[1];
    uVar1 = (uint)(*pbVar4 >> 1);
    if ((*pbVar4 & 1) != 0) {
      uVar1 = *(uint *)(pbVar4 + 8);
    }
    lVar3 = FUN_004eb4b4(pbVar4 + 0x18);
    lVar3 = lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
            (long)(int)(uVar1 + (((uint)LZCOUNT(uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 2);
    uVar6 = lVar3 + uVar6 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    FUN_005e0c70(&local_38);
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
    uVar6 = uVar5 + uVar6;
  }
  *(int *)(param_1 + 0x28) = (int)uVar6;
  return uVar6;
}


