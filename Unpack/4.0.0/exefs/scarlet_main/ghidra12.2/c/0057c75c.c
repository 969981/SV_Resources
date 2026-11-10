/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057c75c; name: FUN_0057c75c
 */


void FUN_0057c75c(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 3) {
LAB_0057c788:
    uVar6 = *(ulong *)(*(long *)(param_1 + 0x10) + 8);
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar6 = uVar6 & 0xfffffffffffffffe;
      bVar1 = *(byte *)(uVar6 + 8);
      if ((bVar1 & 1) == 0) {
        uVar4 = (uint)(bVar1 >> 1);
      }
      else {
        uVar4 = (uint)*(undefined8 *)(uVar6 + 0x10);
      }
    }
    *(uint *)(*(long *)(param_1 + 0x10) + 0x10) = uVar4;
    iVar2 = uVar4 + (((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        iVar2 = 0;
        goto LAB_0057c850;
      }
      goto LAB_0057c788;
    }
    lVar8 = *(long *)(param_1 + 0x10);
    lVar7 = (long)*(int *)(lVar8 + 0x18);
    puVar9 = (undefined8 *)0x0;
    if (*(long *)(lVar8 + 0x20) != 0) {
      puVar9 = (undefined8 *)(*(long *)(lVar8 + 0x20) + 8);
    }
    if (*(int *)(lVar8 + 0x18) == 0) {
      uVar4 = 0;
      uVar6 = *(ulong *)(lVar8 + 8);
    }
    else {
      lVar10 = lVar7 << 3;
      do {
        lVar3 = FUN_002690b8(*puVar9);
        lVar7 = lVar3 + lVar7 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
        uVar4 = (uint)lVar7;
        lVar10 = lVar10 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar10 != 0);
      uVar6 = *(ulong *)(lVar8 + 8);
    }
    if ((uVar6 & 1) != 0) {
      bVar1 = *(byte *)((uVar6 & 0xfffffffffffffffe) + 8);
      if ((bVar1 & 1) == 0) {
        uVar5 = (uint)(bVar1 >> 1);
      }
      else {
        uVar5 = (uint)*(undefined8 *)((uVar6 & 0xfffffffffffffffe) + 0x10);
      }
      uVar4 = uVar5 + uVar4;
    }
    *(uint *)(lVar8 + 0x28) = uVar4;
    iVar2 = uVar4 + (((uint)LZCOUNT(uVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
  }
  iVar2 = iVar2 + 1;
LAB_0057c850:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar6 + 8);
    if ((bVar1 & 1) == 0) {
      uVar4 = (uint)(bVar1 >> 1);
    }
    else {
      uVar4 = (uint)*(undefined8 *)(uVar6 + 0x10);
    }
    iVar2 = uVar4 + iVar2;
  }
  *(int *)(param_1 + 0x18) = iVar2;
  return;
}


