/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068c80c; name: FUN_0068c80c
 */


void FUN_0068c80c(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar6 = (long)*(int *)(param_1 + 0x18);
  puVar7 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar7 = (undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar2 = 0;
  }
  else {
    lVar8 = lVar6 << 3;
    do {
      lVar3 = FUN_002690b8(*puVar7);
      lVar6 = lVar3 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      iVar2 = (int)lVar6;
      lVar8 = lVar8 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    iVar2 = iVar2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    bVar1 = *(byte *)(uVar5 + 8);
    if ((bVar1 & 1) == 0) {
      uVar4 = (uint)(bVar1 >> 1);
    }
    else {
      uVar4 = (uint)*(undefined8 *)(uVar5 + 0x10);
    }
    iVar2 = uVar4 + iVar2;
  }
  *(int *)(param_1 + 0x2c) = iVar2;
  return;
}


