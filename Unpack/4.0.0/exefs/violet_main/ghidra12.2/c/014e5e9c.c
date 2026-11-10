/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014e5e9c; name: FUN_014e5e9c
 */


void FUN_014e5e9c(undefined8 param_1,long *param_2,char *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char acStack_40 [8];
  char *local_38;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x40) + 1;
  }
  sVar2 = strlen(param_3);
  pcVar3 = acStack_40 + -(sVar2 + lVar5 + 0xf & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x38);
  }
  pcVar3 = strcat(pcVar3,(char *)*puVar1);
  strcat(pcVar3,param_3);
  FUN_00cf9768(param_1,&local_38);
  return;
}


