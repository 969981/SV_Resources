/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb0538; name: FUN_01fb0538
 */


byte FUN_01fb0538(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  undefined1 *local_18;
  
  pbVar3 = *(byte **)(param_2 + 8);
  local_18 = &DAT_cbf29ce484222645;
  bVar1 = *pbVar3;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_18 = (undefined1 *)(((ulong)local_18 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar3;
  }
  lVar2 = FUN_01fb05c8(param_1 + 0x28,&local_18);
  if (lVar2 == 0) {
    bVar1 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(lVar2 + 0x18) + 8);
    if (lVar2 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = *(byte *)(lVar2 + 0x1e8) & 1;
    }
  }
  return bVar1;
}


