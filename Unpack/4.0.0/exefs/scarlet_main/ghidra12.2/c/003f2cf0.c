/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f2cf0; name: FUN_003f2cf0
 */


uint FUN_003f2cf0(long *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if ((int)param_1[1] == 0) {
    return 0;
  }
  iVar5 = FUN_003eb210(param_2);
  uVar2 = 0x20 - iVar5;
  iVar6 = FUN_003f2120(param_1,param_1,uVar2);
  if (iVar6 == 0) {
    return 0xffffffff;
  }
  uVar8 = *(uint *)(param_1 + 1);
  if ((int)uVar8 < 1) {
    uVar7 = 0;
  }
  else {
    param_2 = param_2 << (ulong)(-iVar5 & 0x1f);
    lVar9 = *param_1;
    uVar7 = 0;
    uVar4 = (ulong)uVar8;
    do {
      lVar10 = (uVar4 - 1) * 4;
      iVar5 = *(int *)(lVar9 + lVar10);
      iVar6 = FUN_003ee400(uVar7,iVar5,param_2);
      lVar9 = *param_1;
      uVar7 = iVar5 - iVar6 * param_2;
      *(int *)(lVar9 + lVar10) = iVar6;
      bVar1 = 1 < (long)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
    uVar8 = *(uint *)(param_1 + 1);
    uVar3 = uVar8 - 1;
    if (0 < (int)uVar8) {
      if (*(int *)(*param_1 + (ulong)uVar3 * 4) != 0) {
        return uVar7 >> (ulong)(uVar2 & 0x1f);
      }
      *(uint *)(param_1 + 1) = uVar3;
      uVar7 = uVar7 >> (ulong)(uVar2 & 0x1f);
      goto joined_r0x003f2dc8;
    }
  }
  uVar7 = uVar7 >> (ulong)(uVar2 & 0x1f);
  uVar3 = uVar8;
joined_r0x003f2dc8:
  if (uVar3 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar7;
}


