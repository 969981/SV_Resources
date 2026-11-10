/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353c7f0; name: mktime
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

time_t mktime(tm *__tp)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_mktime_047c9cf0)();
  return tVar1;
}


