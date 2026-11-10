/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00521a38; name: FUN_00521a38
 */


bool FUN_00521a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 auVar1 [12];
  
  auVar1 = FUN_00524ad8();
  *param_4 = auVar1._0_8_;
  *(undefined8 *)(auVar1._0_8_ + 0x10) = param_3;
  return (auVar1._8_4_ & 0xff) != 0;
}


