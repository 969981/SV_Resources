/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045acb0; name: FUN_0045acb0
 */


long FUN_0045acb0(char *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (param_2 != 0) {
    pcVar1 = param_1 + param_2;
    do {
      if (*pcVar2 == '\0') goto LAB_0045acd8;
      param_2 = param_2 + -1;
      pcVar2 = pcVar2 + 1;
    } while (param_2 != 0);
    pcVar2 = pcVar1;
  }
LAB_0045acd8:
  return (long)pcVar2 - (long)param_1;
}


