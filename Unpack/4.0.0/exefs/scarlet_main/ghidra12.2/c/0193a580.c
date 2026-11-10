/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0193a580; name: thunk_FUN_0014fca0
 */


void thunk_FUN_0014fca0(long param_1,long param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_110 [192];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar4 = *(int *)(param_1 + 0xc);
  if (3 < iVar4) {
    iVar3 = *(int *)(param_1 + 8);
    iVar7 = 0;
    iVar5 = 0;
    do {
      if (3 < iVar3) {
        uVar6 = 0;
        lVar8 = param_2;
        do {
          FUN_0014fd90(auStack_110,param_1,uVar6 & 0xffffffff,iVar5);
          FUN_00150120(auStack_110,&uStack_38);
          puVar1 = (undefined4 *)(lVar8 + iVar7 * *(int *)(param_1 + 8));
          lVar8 = lVar8 + 8;
          *puVar1 = uStack_38;
          puVar1[1] = uStack_34;
          iVar3 = *(int *)(param_1 + 8);
          iVar4 = iVar3 + 3;
          if (-1 < iVar3) {
            iVar4 = iVar3;
          }
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(iVar4 >> 2));
        iVar4 = *(int *)(param_1 + 0xc);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar7 = iVar7 + 2;
    } while (iVar5 < iVar2 >> 2);
  }
  return;
}


