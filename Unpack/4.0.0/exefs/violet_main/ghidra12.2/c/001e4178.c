/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e4178; name: FUN_001e4178
 */


char * FUN_001e4178(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  
  pcVar1 = strstr(param_1,"//");
  pcVar2 = param_1;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1 + 2;
  }
  pcVar1 = strchr(pcVar2,0x3f);
  pcVar2 = strchr(pcVar2,0x2f);
  if (pcVar2 == (char *)0x0) {
    sVar3 = strlen(param_1);
    pcVar2 = param_1 + sVar3;
  }
  if (pcVar1 == (char *)0x0) {
    sVar3 = strlen(param_1);
    pcVar1 = param_1 + sVar3;
  }
  if (pcVar1 <= pcVar2) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}


