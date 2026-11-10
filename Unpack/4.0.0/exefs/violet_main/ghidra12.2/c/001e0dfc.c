/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e0dfc; name: FUN_001e0dfc
 */


undefined1  [16] FUN_001e0dfc(void)

{
  undefined1 auVar1 [16];
  timeval local_20;
  
  gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  auVar1._12_4_ = 0;
  auVar1._0_12_ = local_20._0_12_;
  return auVar1;
}


