/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01aae0cc; name: FUN_01aae0cc
 */


undefined4 FUN_01aae0cc(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x244);
  if ((uVar1 & 0xff) == 0 || 10 < uVar1 >> 8) {
    return 0;
  }
  return *(undefined4 *)(&DAT_03d6b680 + (long)(char)(uVar1 >> 8) * 4);
}


