/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106de7c; name: FUN_0106de7c
 */


undefined8 FUN_0106de7c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  uVar4 = 0;
  if (((param_2 == 0) &&
      (lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x310), *(char *)(lVar6 + 0x8c) == '\0')) &&
     (lVar6 = FUN_0106fc68(lVar6), uVar4 = 0, lVar6 != 0)) {
    plVar5 = (long *)FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 8) + 0x310));
    uVar2 = (**(code **)(*plVar5 + 0x108))();
    plVar5 = (long *)FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 8) + 0x310));
    uVar3 = (**(code **)(*plVar5 + 0x110))();
    uVar1 = 0;
    if ((uVar3 & 0xffff) != 0) {
      uVar1 = ((uVar2 & 0xffff) * 100) / (uVar3 & 0xffff);
    }
    if (*(ushort *)(param_1 + 0x54) < uVar1) {
      uVar4 = 0;
    }
    else {
      if (*(uint *)(param_1 + 0x7c) < 4) {
        lVar6 = param_1 + (ulong)*(uint *)(param_1 + 0x7c) * 8;
        *(undefined1 *)(lVar6 + 0x5c) = 5;
        *(undefined4 *)(lVar6 + 0x60) = 0;
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}


