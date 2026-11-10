/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030084ec; name: FUN_030084ec
 */


void FUN_030084ec(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x148) & 0xffffff;
  if (((((uint)uVar4 != 0xffffff) && ((uint)uVar4 < *(uint *)(*(long *)(param_1 + 0x138) + 0x40)))
      && (lVar5 = *(long *)(*(long *)(param_1 + 0x138) + 0x38),
         (*(byte *)(lVar5 + uVar4 * 0xc0 + 0x54) & 3) != 0)) &&
     ((*(uint *)(lVar5 + uVar4 * 0xc0 + 0x50) == *(uint *)(param_1 + 0x148) &&
      ((*(byte *)(lVar5 + uVar4 * 0xc0 + 0x88) & 1) != 0)))) {
    FUN_03008668(param_1,*(undefined4 *)(param_1 + 0x15d4),param_2);
  }
  if (*(long *)(param_1 + 0x1660) != 0) {
    *(undefined1 *)(param_1 + 0x1668) = 1;
    iVar1 = *(int *)(param_1 + 0x15d4) + param_2;
    if ((int)(*(uint *)(param_1 + 0x1644) & 0x7fffffff) < iVar1) {
      FUN_02eaf0f8(param_1 + 0x1638,PTR_PTR_047d1a50,(long)iVar1);
    }
    if (*(int *)(param_1 + 0x1640) != iVar1) {
      *(int *)(param_1 + 0x1640) = iVar1;
    }
    iVar3 = *(int *)(param_1 + 0x15d4);
    if (iVar3 < iVar1) {
      uVar4 = (ulong)iVar3;
      uVar6 = ~uVar4;
      if ((iVar1 - iVar3 & 1U) != 0) {
        *(int *)(*(long *)(param_1 + 0x1638) + uVar4 * 0x10 + 0xc) = iVar3;
        *(int *)(*(long *)(param_1 + 0x1648) + uVar4 * 4) = iVar3;
        uVar4 = uVar4 + 1;
      }
      if (uVar6 + (long)iVar1 != 0) {
        lVar5 = uVar4 << 2;
        do {
          iVar3 = (int)uVar4;
          *(int *)(*(long *)(param_1 + 0x1638) + lVar5 * 4 + 0xc) = iVar3;
          *(int *)(*(long *)(param_1 + 0x1648) + lVar5) = iVar3;
          uVar4 = uVar4 + 2;
          *(int *)(*(long *)(param_1 + 0x1638) + lVar5 * 4 + 0x1c) = iVar3 + 1;
          lVar2 = *(long *)(param_1 + 0x1648) + lVar5;
          lVar5 = lVar5 + 8;
          *(int *)(lVar2 + 4) = iVar3 + 1;
        } while (uVar4 != (long)iVar1);
      }
    }
  }
  *(int *)(param_1 + 0x15d4) = *(int *)(param_1 + 0x15d4) + param_2;
  return;
}


