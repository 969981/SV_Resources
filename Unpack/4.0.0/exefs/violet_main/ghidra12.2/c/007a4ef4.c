/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a4ef4; name: FUN_007a4ef4
 */


void FUN_007a4ef4(long *param_1,long param_2,long param_3)

{
  FUN_00792e30();
  *param_1 = (long)(PTR_DAT_047d0b28 + 0x10);
  FUN_0078ca60(param_1 + 0xb);
  param_1[0x11] = param_3;
  param_1[0x12] = param_2;
  return;
}


