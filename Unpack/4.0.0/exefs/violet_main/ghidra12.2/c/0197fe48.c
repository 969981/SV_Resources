/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0197fe48; name: FUN_0197fe48
 */


void FUN_0197fe48(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  FUN_0197fe98(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4 & 1);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x57,param_2 & 0xffffffff,(uint)param_3 & 0xffff,
               param_4 & 1);
  return;
}


