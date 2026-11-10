/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012594b0; name: FUN_012594b0
 */


void FUN_012594b0(char *param_1,long *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  size_t sVar4;
  
  sVar4 = strlen(param_1);
  uVar3 = s__field_streaming__03c5e02d._8_8_;
  pcVar1 = param_1 + sVar4;
  *(undefined8 *)pcVar1 = s__field_streaming__03c5e02d._0_8_;
  *(undefined8 *)(pcVar1 + 8) = uVar3;
  pcVar1[0x10] = '_';
  pcVar1[0x11] = '\0';
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar2 = (undefined8 *)(*param_2 + 0x38);
  }
  strcat(param_1,(char *)*puVar2);
  return;
}


