/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018226b0; name: FUN_018226b0
 */


void FUN_018226b0(long param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),*param_2);
  FUN_0189372c(auStack_30);
  FUN_01822720(auStack_30,param_2[2],param_2[3],param_2[4]);
  (**(code **)(*plVar1 + 0x368))(plVar1,param_2[1],auStack_30);
  return;
}


