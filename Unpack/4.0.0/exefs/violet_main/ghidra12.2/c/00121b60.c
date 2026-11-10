/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00121b60; name: FUN_00121b60
 */


undefined8 FUN_00121b60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100);
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x100) = param_2;
  return uVar1;
}


