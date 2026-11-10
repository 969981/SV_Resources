/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00faaf70; name: FUN_00faaf70
 */


void FUN_00faaf70(undefined8 param_1,undefined8 *param_2,char *param_3,long *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  char *__dest;
  long lVar4;
  char *pcVar5;
  char acStack_c0 [128];
  char *local_28;
  
  pcVar5 = (char *)*param_2;
  sVar2 = strlen(pcVar5);
  sVar3 = strlen(param_3);
  lVar4 = 0;
  if (*param_4 != 0) {
    lVar4 = *(long *)(*param_4 + 0x40);
  }
  __dest = acStack_c0 + (0x80 - (sVar2 + sVar3 + lVar4 + 0x10 & 0xfffffffffffffff0));
  local_28 = __dest;
  *__dest = '\0';
  pcVar5 = strcat(__dest,pcVar5);
  pcVar5 = strcat(pcVar5,param_3);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_4 != 0) {
    puVar1 = (undefined8 *)(*param_4 + 0x38);
  }
  strcat(pcVar5,(char *)*puVar1);
  FUN_00cf9768(param_1,&local_28);
  return;
}


