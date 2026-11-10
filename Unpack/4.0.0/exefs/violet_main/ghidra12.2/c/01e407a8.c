/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e407a8; name: FUN_01e407a8
 */


void FUN_01e407a8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = FUN_01e407e4(param_1,*(undefined8 *)(param_2 + 0x18),param_2 + 0x10);
  FUN_01e409e0(param_1,param_2,uVar1);
  return;
}


