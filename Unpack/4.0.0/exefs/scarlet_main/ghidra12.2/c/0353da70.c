/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0353da70; name: strtoll
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

longlong strtoll(char *__nptr,char **__endptr,int __base)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_strtoll_047ca630)(__nptr,__endptr,__base);
  return lVar1;
}


