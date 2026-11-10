/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016c8e58; name: FUN_016c8e58
 */


void FUN_016c8e58(byte *param_1,long param_2,long param_3,long *param_4)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  
  lVar2 = *param_4;
  bVar1 = *(byte *)(lVar2 + (ulong)*(uint *)(param_3 + 0xc));
  if (bVar1 - 3 < 2) {
    *(byte *)(lVar2 + (ulong)*(uint *)(param_3 + 0x10)) = bVar1;
    pbVar3 = (byte *)(param_2 + 8);
    *(byte *)(lVar2 + (ulong)*(uint *)(param_3 + 0xc)) = *pbVar3;
    FUN_016c8ec0(param_3,param_4,pbVar3);
    bVar1 = *pbVar3;
  }
  *param_1 = bVar1;
  return;
}


