/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


