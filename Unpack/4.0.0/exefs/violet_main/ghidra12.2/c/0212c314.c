/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212c314; name: FUN_0212c314
 */


void FUN_0212c314(char *param_1,long *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  size_t sVar3;
  
  sVar3 = strlen(param_1);
  pcVar1 = param_1 + sVar3;
  pcVar1[0] = 'I';
  pcVar1[1] = 's';
  pcVar1[2] = '\0';
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar2 = (undefined8 *)(*param_2 + 0x38);
  }
  strcat(param_1,(char *)*puVar2);
  return;
}


