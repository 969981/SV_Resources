/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d8d48; name: FUN_031d8d48
 */


undefined8 FUN_031d8d48(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1,uVar1,param_2);
  return uVar1;
}


