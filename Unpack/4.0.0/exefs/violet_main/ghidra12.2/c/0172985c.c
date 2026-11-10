/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172985c; name: FUN_0172985c
 */


void FUN_0172985c(char *param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  size_t sVar4;
  
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x38);
  }
  pcVar3 = strcat(param_1,(char *)*puVar1);
  if (*param_3 != 0) {
    puVar2 = (undefined8 *)(*param_3 + 0x38);
  }
  pcVar3 = strcat(pcVar3,(char *)*puVar2);
  sVar4 = strlen(pcVar3);
  builtin_strncpy(param_1 + sVar4,".bin",5);
  return;
}


