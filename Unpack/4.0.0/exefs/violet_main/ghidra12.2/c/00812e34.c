/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00812e34; name: FUN_00812e34
 */


void FUN_00812e34(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047d18d8 + 0x10);
  FUN_00812ea4();
  if ((*(byte *)(param_1 + 0x106) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x108]);
  }
  if ((*(byte *)(param_1 + 0x103) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x105]);
  }
  FUN_0284e3d4(param_1 + 0xff);
  FUN_0284e3d4(param_1 + 0xfb);
  FUN_0078cb10(param_1 + 0xe0);
  FUN_007ec33c(param_1);
  return;
}


