/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0049d920; name: FUN_0049d920
 */


void FUN_0049d920(char *param_1)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(&DAT_047f43f0);
  __dest = strncpy(&DAT_047f4410,&DAT_047f43f0,0x40);
  strncat(__dest,param_1,0x3f - sVar1);
  return;
}


