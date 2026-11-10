/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040a030; name: FUN_0040a030
 */


int FUN_0040a030(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  
  iVar3 = FUN_003eb480();
  if (iVar3 == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    if ((int)uVar2 < 1) {
      iVar3 = 0;
    }
    else {
      lVar5 = *param_1;
      iVar3 = 0;
      iVar6 = uVar2 << 5;
      uVar4 = (ulong)uVar2;
      do {
        uVar7 = uVar4 - 1;
        uVar2 = *(uint *)(lVar5 + uVar7 * 4);
        if (uVar2 != 0) {
          uVar8 = 0x80000000;
          iVar9 = 0x1e;
          uVar2 = uVar2 & 0x80000000;
          while( true ) {
            if (uVar2 != 0) {
              if (iVar3 < param_3) {
                *(int *)(param_2 + (long)iVar3 * 4) = iVar6 + iVar9 + -0x1f;
              }
              iVar3 = iVar3 + 1;
            }
            if ((*(uint *)(lVar5 + uVar7 * 4) & uVar8 >> 1) != 0) {
              if (iVar3 < param_3) {
                *(int *)(param_2 + (long)iVar3 * 4) = iVar6 + iVar9 + -0x20;
              }
              iVar3 = iVar3 + 1;
            }
            if (iVar9 == 0) break;
            uVar8 = uVar8 >> 2;
            iVar9 = iVar9 + -2;
            uVar2 = *(uint *)(lVar5 + uVar7 * 4) & uVar8;
          }
        }
        iVar6 = iVar6 + -0x20;
        bVar1 = 1 < (long)uVar4;
        uVar4 = uVar7;
      } while (bVar1);
    }
    if (iVar3 < param_3) {
      *(undefined4 *)(param_2 + (long)iVar3 * 4) = 0xffffffff;
      return iVar3 + 1;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


