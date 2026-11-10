/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d2016c; name: FUN_01d2016c
 */


void FUN_01d2016c(undefined8 *param_1)

{
  long local_8;
  
  local_8 = FUN_0126a9c0();
  if (local_8 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_01e5e4e8(param_1,local_8,&local_8);
  }
  return;
}


