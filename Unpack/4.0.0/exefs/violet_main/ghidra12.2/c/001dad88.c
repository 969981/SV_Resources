/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001dad88; name: FUN_001dad88
 */


void FUN_001dad88(long param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x10f8) = 0;
  auVar1 = FUN_001e0dfc();
  *(undefined1 (*) [16])(param_1 + 0xff8) = auVar1;
  *(byte *)(param_1 + 0x10fc) = *(byte *)(param_1 + 0x10fc) & 0xfd;
  *(undefined8 *)(param_1 + 0x1038) = 0;
  *(undefined4 *)(param_1 + 0x1040) = 0;
  *(undefined8 *)(param_1 + 0x1050) = 0;
  *(undefined4 *)(param_1 + 0x1058) = 0;
  *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0x90;
  FUN_001dadf4(param_1,auVar1._0_8_,auVar1._8_8_);
  return;
}


