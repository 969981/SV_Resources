/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057ee0c; name: FUN_0057ee0c
 */


long FUN_0057ee0c(undefined *param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) {
LAB_0057ee78:
      lVar5 = 0;
      goto joined_r0x0057ee68;
    }
  }
  else if (*(long *)(pbVar4 + 8) == 0) goto LAB_0057ee78;
  uVar3 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar3 = *(ulong *)(pbVar4 + 8);
  }
  lVar5 = uVar3 + (((uint)LZCOUNT((uint)uVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
joined_r0x0057ee68:
  if ((param_1 != PTR_DAT_047ce250) && (lVar6 = *(long *)(param_1 + 0x18), lVar6 != 0)) {
    if (*(int *)(lVar6 + 0x1c) == 2) {
      lVar2 = FUN_00514094(*(undefined8 *)(lVar6 + 0x10));
      lVar2 = lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
    else if (*(int *)(lVar6 + 0x1c) == 1) {
      lVar2 = 2;
    }
    else {
      lVar2 = 0;
    }
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      uVar3 = *(ulong *)(lVar6 + 8) & 0xfffffffffffffffe;
      bVar1 = *(byte *)(uVar3 + 8);
      if ((bVar1 & 1) == 0) {
        uVar3 = (ulong)(bVar1 >> 1);
      }
      else {
        uVar3 = *(ulong *)(uVar3 + 0x10);
      }
      lVar2 = uVar3 + lVar2;
    }
    *(uint *)(lVar6 + 0x18) = (uint)lVar2;
    lVar5 = lVar5 + lVar2 + (ulong)(((uint)LZCOUNT((uint)lVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar3 + 8);
    if ((bVar1 & 1) == 0) {
      uVar3 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar3 + 0x10);
    }
    lVar5 = uVar3 + lVar5;
  }
  *(int *)(param_1 + 0x20) = (int)lVar5;
  return lVar5;
}


