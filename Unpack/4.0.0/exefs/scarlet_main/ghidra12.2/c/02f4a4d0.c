/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f4a4d0; name: FUN_02f4a4d0
 */


void FUN_02f4a4d0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  
  do {
    lVar5 = *(long *)(param_1 + (long)((int)(param_2 + param_3) >> 1) * 8);
    uVar4 = (ulong)param_3;
    iVar10 = param_2;
    do {
      uVar1 = *(uint *)(lVar5 + 0x2c);
      plVar2 = (long *)(param_1 + (long)iVar10 * 8);
      do {
        iVar11 = iVar10;
        plVar6 = plVar2;
        iVar10 = iVar11 + 1;
        plVar2 = plVar6 + 1;
      } while (*(uint *)(*plVar6 + 0x2c) < uVar1);
      iVar3 = (int)uVar4;
      lVar7 = 0;
      iVar8 = iVar3 + 1;
      do {
        lVar9 = *(long *)(param_1 + (long)iVar3 * 8 + lVar7 * 8);
        lVar7 = lVar7 + -1;
        iVar8 = iVar8 + -1;
      } while (uVar1 < *(uint *)(lVar9 + 0x2c));
      uVar4 = lVar7 + uVar4 + 1;
      if ((int)uVar4 < iVar11) {
        uVar4 = uVar4 & 0xffffffff;
        iVar10 = iVar11;
      }
      else {
        if (iVar11 != iVar8) {
          *(long *)(param_1 + (long)iVar3 * 8 + lVar7 * 8 + 8) = *plVar6;
          *plVar6 = lVar9;
        }
        uVar4 = (ulong)(uint)(iVar3 + (int)lVar7);
      }
    } while (iVar10 <= (int)uVar4);
    if (param_2 < (int)uVar4) {
      FUN_02f4a4d0(param_1);
    }
    param_2 = iVar10;
  } while (iVar10 < (int)param_3);
  return;
}


