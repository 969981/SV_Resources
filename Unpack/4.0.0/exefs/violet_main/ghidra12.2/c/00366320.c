/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00366320; name: FUN_00366320
 */


ulong FUN_00366320(ulong param_1,int param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1 + 3;
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = SUB168(auVar2 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe;
  }
  return uVar1 + (SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2 | 1;
}


