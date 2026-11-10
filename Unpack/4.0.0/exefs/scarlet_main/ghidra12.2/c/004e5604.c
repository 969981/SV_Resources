/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e5604; name: FUN_004e5604
 */


void FUN_004e5604(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  uVar6 = *(ulong *)(param_2 + 8);
  if ((uVar6 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar3 = FUN_00264e54();
    }
    else {
      lVar3 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0051496c(lVar3,(uVar6 & 0xfffffffffffffffe) + 8);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    FUN_00531134(param_1 + 0x18,iVar2 + *(int *)(param_2 + 0x18));
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *(int *)(param_2 + 0x18);
    memcpy((void *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4),*(void **)(param_2 + 0x20),
           (long)*(int *)(param_2 + 0x18) << 2);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      puVar7 = *(undefined **)(param_1 + 0x30);
      if (puVar7 == PTR_DAT_047cba80) {
        FUN_001fcdc8((undefined8 *)(param_1 + 0x30),puVar4);
      }
      else {
        FUN_001fcec0(puVar7,uVar5);
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  }
  return;
}


