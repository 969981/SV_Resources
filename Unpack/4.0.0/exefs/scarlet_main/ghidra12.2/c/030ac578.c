/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030ac578; name: FUN_030ac578
 */


void FUN_030ac578(long param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_PTR_047d1a50;
  if (param_2 != param_3) {
    do {
      lVar7 = (long)*(int *)(param_1 + 0x28) + -1;
      iVar4 = *param_2;
      iVar6 = (int)lVar7;
      *(int *)(param_1 + 0x28) = iVar6;
      if (iVar6 != iVar4) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar7 * 0x20);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 0x20);
        uVar8 = puVar1[1];
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        uVar8 = puVar1[3];
        puVar2[2] = puVar1[2];
        puVar2[3] = uVar8;
      }
      iVar4 = *(int *)(param_1 + 0x250);
      lVar7 = (long)iVar4;
      if ((int)(*(uint *)(param_1 + 0x254) & 0x7fffffff) <= iVar4) {
        FUN_030ae1bc(param_1 + 0x248,puVar3,lVar7 + 1);
        iVar4 = *(int *)(param_1 + 0x250);
      }
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x248) + (long)iVar4 * 0xa0);
      param_2 = param_2 + 1;
      *(int *)(param_1 + 0x250) = (int)(lVar7 + 1);
      *puVar5 = 3;
      *(undefined8 *)(puVar5 + 0x24) = 0;
      *(undefined8 *)(puVar5 + 0x26) = 0x8000000000000000;
      puVar5[4] = param_4;
    } while (param_3 != param_2);
  }
  return;
}


