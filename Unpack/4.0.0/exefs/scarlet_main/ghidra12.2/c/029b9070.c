/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b9070; name: FUN_029b9070
 */


void FUN_029b9070(long *param_1,undefined8 param_2,float *param_3)

{
  ulong uVar1;
  long *plVar2;
  float local_18;
  float local_14;
  
  uVar1 = FUN_029b90dc(*param_1,&local_14,param_2);
  if ((uVar1 & 1) != 0) {
    local_18 = local_14 + *param_3;
    plVar2 = (long *)(*(long *)(*param_1 + 0x38) + 0x30);
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2,&local_18);
  }
  return;
}


