/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ee122c; name: FUN_02ee122c
 */


undefined2 FUN_02ee122c(long param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  piVar1 = (int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x74) == 2) {
    lVar8 = (long)*piVar1;
  }
  else {
    iVar4 = *piVar1;
    iVar7 = 0;
    iVar9 = *(int *)(param_1 + 0x74) + -1;
    while( true ) {
      uVar2 = iVar9 + iVar7;
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 1;
      }
      uVar3 = (int)uVar2 >> 1;
      lVar5 = (long)((ulong)uVar2 << 0x20) >> 0x21;
      uVar2 = *(uint *)((long)piVar1 +
                       (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) +
                       (long)iVar4);
      lVar8 = lVar5 + 1;
      if ((uVar2 <= param_2) && (param_2 < *(uint *)((long)piVar1 + lVar8 * 8 + (long)iVar4)))
      break;
      iVar6 = (int)lVar8;
      if (param_2 <= uVar2) {
        iVar9 = uVar3 - 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
    }
    lVar8 = lVar5 * 8 + (long)iVar4;
  }
  return *(undefined2 *)((long)piVar1 + lVar8 + 4);
}


