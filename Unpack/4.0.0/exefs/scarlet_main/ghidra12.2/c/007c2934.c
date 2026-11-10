/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c2934; name: FUN_007c2934
 */


void FUN_007c2934(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = *(ushort *)(param_1 + 0xd0);
  if ((uVar2 & 1) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + 0x90;
    FUN_007c9e3c(lVar5);
    uVar2 = *(ushort *)(param_1 + 0xd0);
  }
  lVar6 = param_1 + 0x70;
  uVar2 = uVar2 | 2;
  *(ushort *)(param_1 + 0xd0) = uVar2;
  if (*(long *)(param_1 + 0x78) != lVar6) {
    uVar4 = *(uint *)(param_1 + 0x84);
    lVar3 = (long)(int)uVar4;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) - lVar3);
    do {
      while (puVar1[1] != 0) {
        (**(code **)*puVar1)();
        uVar4 = *(uint *)(param_1 + 0x84);
        lVar3 = (long)(int)uVar4;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x78) - lVar3);
        if (puVar1 == (undefined8 *)(lVar6 - lVar3)) goto LAB_007c29e4;
      }
      puVar1 = (undefined8 *)
               (*(long *)((long)puVar1 + (long)(int)uVar4 + 8) +
               ((long)-((ulong)uVar4 << 0x20) >> 0x20));
    } while (puVar1 != (undefined8 *)(-(int)lVar3 + lVar6));
LAB_007c29e4:
    uVar2 = *(ushort *)(param_1 + 0xd0);
  }
  *(ushort *)(param_1 + 0xd0) = uVar2 & 0xfffd;
  FUN_007c3efc(param_1);
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 != 0) {
    FUN_007c9e3c(PTR_DAT_047d1068);
    if ((*(byte *)(lVar6 + 0xd0) & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar6 + 0x90;
      FUN_007c9e3c(lVar3);
    }
    FUN_007bfd58(*(int *)(lVar6 + 0x5c) + param_1);
    *(int *)(lVar6 + 0x58) = *(int *)(lVar6 + 0x58) + -1;
    if (lVar3 != 0) {
      FUN_007c9e44(lVar3);
    }
    FUN_007c9e44(PTR_DAT_047d1068);
  }
  if (lVar5 == 0) {
    return;
  }
  FUN_007c9e44(lVar5);
  return;
}


