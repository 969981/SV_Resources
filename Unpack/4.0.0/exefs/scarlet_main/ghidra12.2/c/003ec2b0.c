/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ec2b0; name: FUN_003ec2b0
 */


undefined4 FUN_003ec2b0(long param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  
  iVar8 = (int)((long)param_3 + -1);
  if ((int)param_4 < 0) {
    piVar9 = (int *)(param_2 + ((long)iVar8 - (long)(int)param_4) * 4);
    uVar10 = param_4;
    do {
      if (*piVar9 != 0) {
        return 0xffffffff;
      }
      piVar9 = piVar9 + -1;
      bVar3 = uVar10 != 0xffffffff;
      uVar10 = uVar10 + 1;
    } while (bVar3);
  }
  if (0 < (int)param_4) {
    uVar7 = (ulong)param_4;
    do {
      if (*(int *)(param_1 + (long)iVar8 * 4 + uVar7 * 4) != 0) {
        return 1;
      }
      bVar3 = 1 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar3);
  }
  if (param_3 != 0) {
    lVar6 = ((long)param_3 + -1) * 4;
    uVar10 = *(uint *)(param_1 + lVar6);
    uVar1 = *(uint *)(param_2 + lVar6);
    bVar4 = uVar1 <= uVar10;
    bVar3 = uVar10 == uVar1;
    if (!bVar3) {
LAB_003ec35c:
      uVar5 = 0xffffffff;
      if (bVar4 && !bVar3) {
        uVar5 = 1;
      }
      return uVar5;
    }
    if (1 < param_3) {
      uVar7 = (ulong)(param_3 - 1);
      do {
        uVar2 = (int)uVar7 - 1;
        uVar7 = (ulong)uVar2;
        uVar10 = *(uint *)(param_1 + uVar7 * 4);
        uVar1 = *(uint *)(param_2 + uVar7 * 4);
        bVar4 = uVar1 <= uVar10;
        bVar3 = uVar10 == uVar1;
        if (!bVar3) goto LAB_003ec35c;
      } while (0 < (int)uVar2);
    }
  }
  return 0;
}


