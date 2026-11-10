/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045b0f0; name: FUN_0045b0f0
 */


tm * FUN_0045b0f0(time_t *param_1,tm *param_2)

{
  tm *ptVar1;
  tm *ptVar2;
  
  ptVar2 = gmtime_r(param_1,param_2);
  ptVar1 = (tm *)0x0;
  if (ptVar2 != (tm *)0x0) {
    ptVar1 = param_2;
  }
  return ptVar1;
}


