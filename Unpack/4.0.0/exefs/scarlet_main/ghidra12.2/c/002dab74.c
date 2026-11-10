/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002dab74; name: FUN_002dab74
 */


void FUN_002dab74(long param_1,undefined1 param_2,undefined1 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  uVar3 = FUN_002da6c4(param_1,param_2,param_3,param_4 & 1);
  lVar4 = *(long *)(param_1 + 0x58);
  uVar6 = uVar3 >> 0x20;
  iVar5 = (int)(uVar3 >> 0x20);
  if (param_5 != 0) {
    if (iVar5 != 0) {
      do {
        while ((uVar6 & 1) == 0) {
          lVar7 = (uVar6 >> 1) * 8;
          uVar2 = *(uint *)(lVar4 + lVar7);
          uVar6 = (ulong)(uVar2 >> 4);
          *(uint *)(lVar4 + lVar7) = uVar2 & 8 | param_5 << 4 | uVar2 & 7;
          if (uVar2 >> 4 == 0) {
            return;
          }
        }
        lVar7 = lVar4 + (uVar6 >> 1) * 8;
        uVar2 = *(uint *)(lVar7 + 4);
        uVar6 = (ulong)uVar2;
        *(int *)(lVar7 + 4) = param_5;
      } while (uVar2 != 0);
    }
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xa4);
  if (uVar2 == 0) {
    *(int *)(param_1 + 0xa4) = iVar5;
    return;
  }
  if (iVar5 != 0) {
    uVar1 = uVar2;
    do {
      while (uVar8 = uVar1, (uVar8 & 1) == 0) {
        uVar1 = *(uint *)(lVar4 + (ulong)(uVar8 >> 1) * 8) >> 4;
        if (uVar1 == 0) goto LAB_002dac34;
      }
      uVar1 = *(uint *)(lVar4 + (ulong)(uVar8 >> 1) * 8 + 4);
    } while (uVar1 != 0);
LAB_002dac34:
    if ((uVar8 & 1) != 0) {
      *(int *)(lVar4 + (ulong)(uVar8 >> 1) * 8 + 4) = iVar5;
      *(uint *)(param_1 + 0xa4) = uVar2;
      return;
    }
    lVar7 = (ulong)(uVar8 >> 1) * 8;
    uVar1 = *(uint *)(lVar4 + lVar7);
    *(uint *)(lVar4 + lVar7) = uVar1 & 8 | iVar5 << 4 | uVar1 & 7;
  }
  *(uint *)(param_1 + 0xa4) = uVar2;
  return;
}


