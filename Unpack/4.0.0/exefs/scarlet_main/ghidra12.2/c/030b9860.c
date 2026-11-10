/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b9860; name: FUN_030b9860
 */


void FUN_030b9860(int *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_PTR_047d1a50;
  iVar4 = 0x20000;
  if (param_4 != 0) {
    iVar4 = 0x8000;
  }
  iVar1 = 0x90200;
  if (param_4 != 0) {
    iVar1 = 0x24200;
  }
  iVar2 = *param_1;
  if (*param_1 < 1) {
    iVar2 = iVar4;
  }
  iVar4 = param_1[1];
  if (param_1[1] < 1) {
    iVar4 = iVar1;
  }
  if ((int)(*(uint *)((long)param_2 + 0x24) & 0x7fffffff) < iVar2) {
    FUN_030b4a20(param_2 + 3,PTR_PTR_047d1a50 + 0x20,(long)iVar2);
  }
  if (*(int *)(param_2 + 4) != iVar2) {
    *(int *)(param_2 + 4) = iVar2;
  }
  if ((int)(*(uint *)((long)param_2 + 0x34) & 0x7fffffff) < iVar4) {
    FUN_030b4a20(param_2 + 5,puVar3 + 0x20,(long)iVar4);
  }
  if (*(int *)(param_2 + 6) != iVar4) {
    *(int *)(param_2 + 6) = iVar4;
  }
  *param_2 = param_2[3];
  param_2[1] = param_2[5];
  *(uint *)(param_2 + 2) = *(uint *)((long)param_2 + 0x24) & 0x7fffffff;
  *(uint *)((long)param_2 + 0x14) = *(uint *)((long)param_2 + 0x34) & 0x7fffffff;
  *param_3 = param_2[3];
  param_3[1] = param_2[1];
  return;
}


