/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


