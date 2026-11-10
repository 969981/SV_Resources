/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c85a0; name: FUN_034c85a0
 */


void FUN_034c85a0(long *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 1);
  uVar1 = uVar2 - 1 & param_2 & 0x3fffffff;
  puVar4 = (uint *)(lVar3 + (ulong)uVar1 * 8);
  iVar5 = 1 - uVar1;
  lVar9 = (long)(int)uVar2 - (ulong)uVar1;
  do {
    if (lVar9 == 0) {
      return;
    }
    uVar1 = *puVar4;
    if (-1 < (int)uVar1) {
      return;
    }
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + 2;
    lVar9 = lVar9 + -1;
  } while (((uVar1 >> 0x1e & 1) != 0) || ((uVar1 & 0x3fffffff) != (param_2 & 0x3fffffff)));
  if (iVar5 == 1) {
    return;
  }
  do {
    iVar7 = -iVar5;
    if (*(int *)(lVar3 + (long)iVar7 * 8 + 4) == param_3) {
      puVar4 = (uint *)(lVar3 + (long)iVar7 * 8);
      *puVar4 = *puVar4 | 0x40000000;
      uVar1 = iVar7 + 1;
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
      if ((int)uVar2 <= (int)uVar1) {
        return;
      }
      uVar6 = iVar7 + 1;
      uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      do {
        lVar3 = *param_1;
        uVar1 = *(uint *)(lVar3 + uVar8);
        if (-1 < (int)uVar1) {
          return;
        }
        if (uVar6 == (uVar1 & uVar2 - 1)) {
          *(undefined8 *)puVar4 = *(undefined8 *)(lVar3 + uVar8);
          *(undefined4 *)(lVar3 + uVar8) = 0;
          puVar4 = (uint *)(lVar3 + uVar8);
        }
        uVar6 = uVar6 + 1;
        uVar8 = uVar8 + 8;
      } while (uVar2 != uVar6);
      return;
    }
    lVar9 = (long)iVar7 + 1;
    puVar4 = (uint *)(lVar3 + lVar9 * 8);
    lVar9 = (int)uVar2 - lVar9;
    do {
      if (lVar9 == 0) {
        return;
      }
      uVar1 = *puVar4;
      if (-1 < (int)uVar1) {
        return;
      }
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 2;
      lVar9 = lVar9 + -1;
    } while ((uVar1 & 0x40000000) != 0 || ((uVar1 ^ param_2) & 0x3fffffff) != 0);
    if (iVar5 == 1) {
      return;
    }
  } while( true );
}


