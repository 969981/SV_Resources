/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00316970; name: FUN_00316970
 */


bool FUN_00316970(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 - 1 & 0xff;
  uVar2 = uVar1 + 4;
  if (param_1 - 1 >> 8 != 0xfe) {
    uVar2 = uVar1;
  }
  *param_2 = uVar2;
  if (uVar2 < 7) {
    return *(ushort *)(PTR_DAT_047ccb20 + (ulong)uVar2 * 2) == param_1;
  }
  return false;
}


