/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011396a4; name: FUN_011396a4
 */


void FUN_011396a4(undefined8 param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char acStack_b0 [128];
  char *local_18;
  
  puVar2 = (undefined8 *)PTR_PTR_047d4508;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x40) + 1;
  }
  lVar6 = 0;
  if (*param_3 != 0) {
    lVar6 = *(long *)(*param_3 + 0x40);
  }
  pcVar3 = acStack_b0 + (0x80 - (lVar6 + lVar5 + 0xfU & 0xfffffffffffffff0));
  local_18 = pcVar3;
  *pcVar3 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x38);
  }
  pcVar3 = strcat(pcVar3,(char *)*puVar1);
  if (*param_3 != 0) {
    puVar2 = (undefined8 *)(*param_3 + 0x38);
  }
  strcat(pcVar3,(char *)*puVar2);
  FUN_00cf9768(param_1,&local_18);
  return;
}


