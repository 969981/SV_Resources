/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004df834; name: FUN_004df834
 */


long FUN_004df834(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar3 = FUN_00528970(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x38);
  lVar3 = lVar3 + (long)iVar2 * 2;
  puVar5 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x40) + 8);
  }
  if (iVar2 != 0) {
    lVar6 = (long)iVar2 << 3;
    do {
      lVar4 = FUN_004e2d80(*puVar5);
      lVar3 = lVar4 + lVar3 + (ulong)(((uint)LZCOUNT((uint)lVar4 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  lVar6 = lVar3;
  if ((uVar1 & 1) != 0) {
    lVar6 = lVar3 + 2;
  }
  if ((uVar1 & 2) != 0) {
    lVar6 = lVar6 + 2;
  }
  if ((uVar1 & 3) != 0) {
    lVar3 = lVar6;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x2c) = (int)lVar3;
    return lVar3;
  }
  lVar3 = FUN_0051d510((byte *)(param_1 + 8),lVar3,param_1 + 0x2c);
  return lVar3;
}


