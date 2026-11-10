/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298426c; name: FUN_0298426c
 */


uint FUN_0298426c(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0298ce48(*(undefined8 *)(param_1 + 0x20));
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x10,param_2);
  return uVar1 & 1;
}


