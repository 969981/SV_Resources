/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


