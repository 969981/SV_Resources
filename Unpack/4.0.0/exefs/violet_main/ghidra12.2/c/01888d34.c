/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01888d34; name: FUN_01888d34
 */


void FUN_01888d34(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  char acStack_30 [8];
  char *local_28;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40) + 1;
  }
  pcVar2 = acStack_30 + -(*(long *)(param_3 + 0x10) + lVar4 + 0xfU & 0xfffffffffffffff0);
  local_28 = pcVar2;
  *pcVar2 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x38);
  }
  pcVar2 = strcat(pcVar2,(char *)*puVar1);
  strcat(pcVar2,*(char **)(param_3 + 8));
  FUN_00cf9768(param_1,&local_28);
  return;
}


