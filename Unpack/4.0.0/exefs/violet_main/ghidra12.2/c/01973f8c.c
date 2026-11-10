/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01973f8c; name: FUN_01973f8c
 */


uint FUN_01973f8c(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_01973fd4(*(undefined8 *)(param_1 + 0x20));
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0xf,param_2);
  return uVar1 & 1;
}


