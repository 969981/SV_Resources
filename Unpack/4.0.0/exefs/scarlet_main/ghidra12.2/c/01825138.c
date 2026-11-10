/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01825138; name: FUN_01825138
 */


void FUN_01825138(long param_1,undefined8 *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_2 = *(undefined8 *)param_3;
  param_2[1] = *(undefined8 *)param_4;
  iVar1 = *param_3;
  if (*param_3 <= *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  iVar2 = param_3[1];
  if (param_3[1] <= *(int *)(param_1 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  param_2[2] = CONCAT44(iVar2,iVar1);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x14);
  iVar4 = *param_4;
  iVar6 = param_4[1];
  *(int *)(param_2 + 4) = iVar1 + -1;
  *(int *)((long)param_2 + 0x24) = iVar2;
  if (iVar3 <= iVar4) {
    iVar4 = iVar3;
  }
  if (iVar5 <= iVar6) {
    iVar6 = iVar5;
  }
  param_2[3] = CONCAT44(iVar6,iVar4);
  return;
}


