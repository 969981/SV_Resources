/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01736830; name: FUN_01736830
 */


bool FUN_01736830(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_01736874(param_3 + 0x30,param_1,param_2);
  *(undefined1 (*) [16])(param_3 + 0x191f0) = auVar1;
  return (auVar1._0_8_ & 0xff) != 0;
}


