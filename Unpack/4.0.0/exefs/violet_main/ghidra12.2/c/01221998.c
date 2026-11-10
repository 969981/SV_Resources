/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01221998; name: FUN_01221998
 */


void FUN_01221998(undefined8 param_1,char *param_2,long *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  char acStack_b0 [128];
  char *local_18;
  
  sVar2 = strlen(param_2);
  lVar4 = 0;
  if (*param_3 != 0) {
    lVar4 = *(long *)(*param_3 + 0x40);
  }
  pcVar3 = acStack_b0 + (0x80 - (sVar2 + lVar4 + 0x10 & 0xfffffffffffffff0));
  local_18 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,param_2);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_3 != 0) {
    puVar1 = (undefined8 *)(*param_3 + 0x38);
  }
  strcat(pcVar3,(char *)*puVar1);
  FUN_00cf9768(param_1,&local_18);
  return;
}


