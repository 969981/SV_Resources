/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01249414; name: FUN_01249414
 */


void FUN_01249414(long param_1,undefined4 param_2,uint param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x30))
  ;
  (**(code **)(*plVar1 + 0x550))(plVar1,param_3,1);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x37,param_2,param_3 & 0xff,1);
  return;
}


