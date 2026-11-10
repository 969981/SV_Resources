/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0180d020; name: FUN_0180d020
 */


void FUN_0180d020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *local_c0 [4];
  long *local_a0;
  long *local_90 [4];
  long *local_70;
  long *local_60 [4];
  long *local_40;
  
  FUN_0105016c(local_60,param_2);
  FUN_0105016c(local_90,param_3);
  FUN_0105016c(local_c0,param_4);
  FUN_0180d11c(param_1,local_60,local_90,local_c0);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_c0[0] != (long *)0x0) {
    (**(code **)(*local_c0[0] + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_90[0] != (long *)0x0) {
    (**(code **)(*local_90[0] + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  return;
}


