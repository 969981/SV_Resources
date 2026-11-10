/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193f070; name: FUN_0193f070
 */


undefined1 FUN_0193f070(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_8 [8];
  
  uVar1 = FUN_0193f0a4(*(undefined8 *)(param_1 + 0x28));
  FUN_0193f0ac(uVar1,local_8,param_2);
  return local_8[0];
}


