/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008efc1c; name: FUN_008efc1c
 */


void FUN_008efc1c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (((*(byte *)(param_1 + 4) >> 3 & 1) == 0) &&
     (bVar4 = *(byte *)(param_1 + 0x5b), (ulong)bVar4 != 0)) {
    lVar6 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x18) + lVar6;
      uVar5 = *(undefined8 *)(lVar1 + 8);
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      puVar3 = *(undefined4 **)(lVar1 + 0x18);
      FUN_008f07f4(uVar2);
      puVar3[1] = 8;
      FUN_008f0810(uVar2,param_2,puVar3,uVar5,*(undefined4 *)(lVar1 + 0x20),*puVar3);
      FUN_008eff90(uVar2,"g3d_index");
      lVar6 = lVar6 + 0x38;
    } while ((ulong)bVar4 * 0x38 != lVar6);
  }
  return;
}


