/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030b5a10; name: FUN_030b5a10
 */


void FUN_030b5a10(long param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  
  do {
    puVar4 = (undefined4 *)(param_1 + (long)(param_2 + param_3 >> 1) * 0xc);
    local_70 = *puVar4;
    uStack_6c = puVar4[1];
    local_68 = puVar4[2];
    iVar7 = param_3;
    iVar6 = param_2;
    do {
      puVar2 = (undefined8 *)(param_1 + (long)iVar6 * 0xc);
      do {
        iVar10 = iVar6;
        puVar9 = puVar2;
        uVar3 = (*param_4)(puVar9,&local_70);
        puVar2 = (undefined8 *)((long)puVar9 + 0xc);
        iVar6 = iVar10 + 1;
      } while ((uVar3 & 1) != 0);
      puVar2 = (undefined8 *)(param_1 + (long)iVar7 * 0xc);
      iVar7 = iVar7 + 1;
      do {
        iVar8 = iVar7;
        puVar11 = puVar2;
        uVar3 = (*param_4)(&local_70,puVar11);
        iVar7 = iVar8 + -1;
        puVar2 = (undefined8 *)((long)puVar11 + -0xc);
      } while ((uVar3 & 1) != 0);
      iVar6 = iVar10;
      if (iVar10 <= iVar7) {
        if (iVar10 != iVar7) {
          uVar5 = *puVar11;
          *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
          *(undefined4 *)((long)puVar11 + 4) = *(undefined4 *)((long)puVar9 + 4);
          uVar1 = *(undefined4 *)(puVar11 + 1);
          *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 1);
          *puVar9 = uVar5;
          *(undefined4 *)(puVar9 + 1) = uVar1;
        }
        iVar7 = iVar8 + -2;
        iVar6 = iVar10 + 1;
      }
    } while (iVar6 <= iVar7);
    if (param_2 < iVar7) {
      FUN_030b5a10(param_1,param_2,iVar7,param_4);
    }
    param_2 = iVar6;
  } while (iVar6 < param_3);
  return;
}


