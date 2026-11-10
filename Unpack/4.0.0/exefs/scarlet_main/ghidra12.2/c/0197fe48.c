/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197fe48; name: FUN_0197fe48
 */


void FUN_0197fe48(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  FUN_0197fe98(*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4 & 1);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x57,param_2 & 0xffffffff,(uint)param_3 & 0xffff,
               param_4 & 1);
  return;
}


