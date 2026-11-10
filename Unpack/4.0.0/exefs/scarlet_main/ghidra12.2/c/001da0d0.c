/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001da0d0; name: FUN_001da0d0
 */


undefined8 FUN_001da0d0(time_t param_1,void *param_2)

{
  tm *__src;
  undefined8 uVar1;
  time_t local_8;
  
  local_8 = param_1;
  __src = gmtime(&local_8);
  if (__src == (tm *)0x0) {
    uVar1 = 0x2b;
  }
  else {
    memcpy(param_2,__src,0x38);
    uVar1 = 0;
  }
  return uVar1;
}


