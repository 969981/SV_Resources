/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


