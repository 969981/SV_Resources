/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01736830; name: FUN_01736830
 */


bool FUN_01736830(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_01736874(param_3 + 0x30,param_1,param_2);
  *(undefined1 (*) [16])(param_3 + 0x191f0) = auVar1;
  return (auVar1._0_8_ & 0xff) != 0;
}


