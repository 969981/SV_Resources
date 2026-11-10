/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb06d4; name: FUN_01fb06d4
 */


void FUN_01fb06d4(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long local_38;
  undefined1 auStack_30 [16];
  undefined1 *local_8;
  
  pbVar3 = *(byte **)(param_2 + 8);
  local_8 = &DAT_cbf29ce484222645;
  bVar1 = *pbVar3;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    local_8 = (undefined1 *)(((ulong)local_8 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar3;
  }
  lVar2 = FUN_01fb05c8(param_1 + 0x28,&local_8);
  if (lVar2 == 0) {
    return;
  }
  FUN_01fb0848(&local_38,param_1 + 0x28,lVar2);
  lVar2 = local_38;
  local_38 = 0;
  if (lVar2 != 0) {
    FUN_01fb0798(auStack_30);
  }
  return;
}


