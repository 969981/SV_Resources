/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02982f00; name: FUN_02982f00
 */


uint FUN_02982f00(long param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_0298c980(*(undefined8 *)(param_1 + 0x20));
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x1a,param_2,param_4,param_3);
  return uVar1 & 1;
}


