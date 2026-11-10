/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0231c35c; name: FUN_0231c35c
 */


void FUN_0231c35c(undefined1 *param_1)

{
  undefined1 auStack_48 [32];
  long *local_28;
  
  *param_1 = 1;
  FUN_0231c284(auStack_48);
  FUN_0231c4a4(param_1 + 8,auStack_48);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


