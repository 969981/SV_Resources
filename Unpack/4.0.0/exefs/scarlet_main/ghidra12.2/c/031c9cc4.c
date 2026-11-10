/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c9cc4; name: FUN_031c9cc4
 */


long * FUN_031c9cc4(long *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  
  iVar5 = (int)param_1[1];
  if (1 < iVar5) {
    uVar6 = iVar5 - 1;
    uVar7 = (ulong)uVar6;
    iVar8 = 0;
    do {
      bVar3 = *(byte *)(*param_1 + (long)(iVar5 + iVar8 + -2));
      if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
        if (iVar8 == 0) {
          return param_1;
        }
        uVar6 = -iVar8;
        break;
      }
      iVar8 = iVar8 + -1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    uVar1 = iVar5 + ~uVar6 & ((int)(iVar5 + ~uVar6) >> 0x1f ^ 0xffffffffU);
    uVar6 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
    uVar4 = uVar6 - 1;
    uVar2 = uVar1;
    if ((int)uVar4 <= (int)uVar1) {
      uVar2 = uVar4;
    }
    if ((int)param_1[0x12] != 0) {
      uVar2 = uVar1;
    }
    iVar8 = uVar2 + 1;
    if ((int)uVar6 <= (int)uVar2) {
      FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,iVar8);
      iVar5 = (int)param_1[1];
    }
    if ((iVar5 <= (int)uVar2) || (iVar8 < iVar5)) {
      *(int *)(param_1 + 1) = iVar8;
    }
    *(undefined1 *)(*param_1 + (long)(int)uVar2) = 0;
  }
  return param_1;
}


