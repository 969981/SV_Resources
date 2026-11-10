/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0219ab7c; name: FUN_0219ab7c
 */


void FUN_0219ab7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *local_18;
  
  uVar1 = FUN_0219ac84();
  if ((uVar1 & 1) == 0) {
    FUN_0219ad30(&local_18,param_2,param_3);
  }
  else {
    FUN_0219acc8(param_2,param_3);
  }
  FUN_00d0bff0(param_1,&local_18,0);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


