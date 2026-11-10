/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e55cd8; name: FUN_00e55cd8
 */


void FUN_00e55cd8(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  long lVar3;
  char *pcVar4;
  char acStack_b0 [128];
  char *local_18;
  
  pcVar4 = (char *)*param_2;
  sVar2 = strlen(pcVar4);
  lVar3 = 0;
  if (*param_3 != 0) {
    lVar3 = *(long *)(*param_3 + 0x40);
  }
  __dest = acStack_b0 + (0x80 - (sVar2 + lVar3 + 0x10 & 0xfffffffffffffff0));
  local_18 = __dest;
  *__dest = '\0';
  pcVar4 = strcat(__dest,pcVar4);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_3 != 0) {
    puVar1 = (undefined8 *)(*param_3 + 0x38);
  }
  strcat(pcVar4,(char *)*puVar1);
  FUN_00cf9768(param_1,&local_18);
  return;
}


