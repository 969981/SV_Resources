/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2a00c; name: FUN_01a2a00c
 */


void FUN_01a2a00c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *local_28;
  
  uVar1 = FUN_01a2a07c();
  if ((uVar1 & 1) == 0) {
    FUN_01a2a0c0(param_2);
  }
  else {
    FUN_0291c2bc(&local_28,param_2);
  }
  FUN_00d0bff0(param_1,&local_28,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


