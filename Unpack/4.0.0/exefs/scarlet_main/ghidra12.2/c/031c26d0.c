/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c26d0; name: FUN_031c26d0
 */


void FUN_031c26d0(long param_1,int param_2,uint param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  
  do {
    uVar4 = *(ulong *)(param_1 + (long)((int)(param_2 + param_3) >> 1) * 8);
    uVar3 = (ulong)param_3;
    iVar9 = param_2;
    do {
      puVar1 = (ulong *)(param_1 + (long)iVar9 * 8);
      do {
        iVar10 = iVar9;
        puVar5 = puVar1;
        iVar9 = iVar10 + 1;
        puVar1 = puVar5 + 1;
      } while (*puVar5 < uVar4);
      iVar2 = (int)uVar3;
      lVar6 = 0;
      iVar7 = iVar2 + 1;
      do {
        uVar8 = *(ulong *)(param_1 + (long)iVar2 * 8 + lVar6 * 8);
        lVar6 = lVar6 + -1;
        iVar7 = iVar7 + -1;
      } while (uVar4 < uVar8);
      uVar3 = lVar6 + uVar3 + 1;
      if ((int)uVar3 < iVar10) {
        uVar3 = uVar3 & 0xffffffff;
        iVar9 = iVar10;
      }
      else {
        if (iVar10 != iVar7) {
          *(ulong *)(param_1 + (long)iVar2 * 8 + lVar6 * 8 + 8) = *puVar5;
          *puVar5 = uVar8;
        }
        uVar3 = (ulong)(uint)(iVar2 + (int)lVar6);
      }
    } while (iVar9 <= (int)uVar3);
    if (param_2 < (int)uVar3) {
      FUN_031c26d0(param_1);
    }
    param_2 = iVar9;
  } while (iVar9 < (int)param_3);
  return;
}


