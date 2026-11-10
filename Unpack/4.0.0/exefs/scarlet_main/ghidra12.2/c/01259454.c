/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01259454; name: FUN_01259454
 */


void FUN_01259454(char *param_1,long *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  
  sVar5 = strlen(param_1);
  uVar4 = s_streaming_field__03c6b25e._8_8_;
  uVar3 = s_streaming_field__03c6b25e._0_8_;
  pcVar1 = param_1 + sVar5;
  pcVar1[0x10] = '\0';
  *(undefined8 *)pcVar1 = uVar3;
  *(undefined8 *)(pcVar1 + 8) = uVar4;
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar2 = (undefined8 *)(*param_2 + 0x38);
  }
  strcat(param_1,(char *)*puVar2);
  return;
}


