/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025a950; name: FUN_0025a950
 */


long FUN_0025a950(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == param_2) {
    return *(long *)(param_3 + 0x10);
  }
  uVar1 = FUN_0025a950();
  *(undefined8 *)(param_3 + 0x10) = uVar1;
  return param_3;
}


