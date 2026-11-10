/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0189df30; name: FUN_0189df30
 */


void FUN_0189df30(char *param_1,char *param_2,byte *param_3)

{
  char *__dest;
  byte *__src;
  
  __dest = strcat(param_1,param_2);
  __src = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    __src = param_3 + 1;
  }
  strcat(__dest,(char *)__src);
  return;
}


