/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0245ae40; name: FUN_0245ae40
 */


undefined8 FUN_0245ae40(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  
  pbVar3 = (byte *)FUN_00c646d0(param_1,1,0);
  if (((DAT_04849258 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04849258), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04849258);
  }
  puVar4 = &DAT_cbf29ce484222645;
  bVar1 = *pbVar3;
  while (bVar1 != 0) {
    pbVar3 = pbVar3 + 1;
    puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar3;
  }
  FUN_00c5d960(param_1,puVar4);
  return 1;
}


