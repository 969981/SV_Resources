/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f13a8; name: FUN_008f13a8
 */


uint FUN_008f13a8(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 1);
  uVar2 = (uint)param_1;
  return uVar2 & 0x20 |
         uVar2 >> 3 & 2 | uVar1 & 4 | uVar2 & 1 | (uVar1 & 1) << 3 | (uVar2 >> 2 & 1) << 4;
}


