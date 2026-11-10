/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


