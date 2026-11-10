/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00797238; name: FUN_00797238
 */


long FUN_00797238(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x5f8);
  uVar1 = uVar2 + param_2;
  if (uVar1 < 0x5c1) {
    *(uint *)(param_1 + 0x5f8) = uVar1;
    *(byte *)(param_1 + 0x14) = param_2;
    return param_1 + (ulong)uVar2 + 0x30;
  }
  return 0;
}


