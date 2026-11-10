/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01461ad8; name: FUN_01461ad8
 */


uint FUN_01461ad8(long param_1,undefined1 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0298c730(*(undefined8 *)(param_1 + 0x20));
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x34,param_2);
  return uVar1 & 1;
}


