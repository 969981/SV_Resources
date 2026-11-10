/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085ae8c; name: FUN_0085ae8c
 */


void FUN_0085ae8c(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  iVar3 = FUN_00853b38();
  lVar2 = param_2[1];
  lVar6 = (long)(int)lVar2 + (long)iVar3;
  iVar3 = (int)lVar6;
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x7fffffff) < iVar3) {
    FUN_02e8df28(param_2,PTR_PTR_047d1a50,lVar6);
  }
  lVar6 = *param_2;
  *(int *)(param_2 + 1) = iVar3;
  iVar3 = FUN_00853b38(param_1);
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      puVar4 = (undefined8 *)FUN_00853c80(param_1,uVar5 & 0xffffffff);
      uVar7 = *puVar4;
      puVar1 = (undefined8 *)(lVar6 + (long)(int)lVar2 * 0x10 + uVar5 * 0x10);
      puVar1[1] = puVar4[1];
      *puVar1 = uVar7;
      uVar5 = uVar5 + 1;
    } while (iVar3 != (int)uVar5);
  }
  return;
}


