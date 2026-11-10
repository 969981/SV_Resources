/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004cef2c; name: FUN_004cef2c
 */


void FUN_004cef2c(long param_1,long param_2)

{
  ulong *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_2 + 8);
  puVar1 = (ulong *)(param_1 + 8);
  if ((uVar6 & 1) != 0) {
    if ((*puVar1 & 1) == 0) {
      lVar4 = FUN_00264e54(puVar1);
    }
    else {
      lVar4 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar4,(uVar6 & 0xfffffffffffffffe) + 8);
  }
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((uVar3 & 7) != 0) {
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (lVar4 == 0) {
        puVar5 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar4 = FUN_004e653c(puVar5);
        *(long *)(param_1 + 0x18) = lVar4;
      }
      puVar2 = PTR_DAT_047cd788;
      if (*(undefined **)(param_2 + 0x18) != (undefined *)0x0) {
        puVar2 = *(undefined **)(param_2 + 0x18);
      }
      FUN_004cf010(lVar4,puVar2);
    }
    if ((uVar3 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar3;
  }
  return;
}


