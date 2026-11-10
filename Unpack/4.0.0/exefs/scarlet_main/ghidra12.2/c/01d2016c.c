/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


