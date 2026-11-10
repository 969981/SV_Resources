/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0189dfe4; name: FUN_0189dfe4
 */


void FUN_0189dfe4(char *param_1,undefined8 param_2,char *param_3,byte *param_4)

{
  char *__dest;
  byte *__src;
  
  __dest = strcat(param_1,param_3);
  __src = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    __src = param_4 + 1;
  }
  strcat(__dest,(char *)__src);
  return;
}


