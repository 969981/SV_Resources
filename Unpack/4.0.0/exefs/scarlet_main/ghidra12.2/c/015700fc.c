/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015700fc; name: FUN_015700fc
 */


void FUN_015700fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *local_28;
  
  uVar1 = FUN_0157016c();
  if ((uVar1 & 1) == 0) {
    FUN_015701b0(param_2);
  }
  else {
    FUN_015738f0(&local_28,param_2);
  }
  FUN_00d0bff0(param_1,&local_28,0);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


