/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00224e5c; name: FUN_00224e5c
 */


undefined8 FUN_00224e5c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_00224f3c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x20);
  if (lVar5 == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    if (lVar5 == 0) {
      return 1;
    }
    lVar2 = *(long *)(lVar5 + 0x28) - *(long *)(lVar5 + 0x20);
    if (lVar2 == 0) {
      return 1;
    }
    uVar1 = 0;
    if (*(char *)(param_1 + 0x20) != '\0') {
      uVar1 = (lVar2 >> 3) - 1;
    }
    *(ulong *)(param_1 + 0x18) = uVar1;
    if ((ulong)(*(long *)(lVar5 + 0x28) - *(long *)(lVar5 + 0x20) >> 3) <= uVar1) goto LAB_00224f3c;
    plVar4 = *(long **)(*(long *)(lVar5 + 0x20) + uVar1 * 8);
  }
  else {
    lVar2 = *(long *)(lVar5 + 0x20);
    lVar3 = *(long *)(lVar5 + 0x28) - lVar2;
    if (lVar3 == 0) {
      return 1;
    }
    uVar1 = lVar3 >> 3;
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (uVar1 == 0) goto LAB_00224f3c;
    }
    else {
      if (*(char *)(lVar5 + 0x38) == '\0') {
        uVar6 = uVar1 - 1;
        *(ulong *)(param_1 + 0x18) = uVar6;
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x40);
        *(ulong *)(param_1 + 0x18) = uVar6;
      }
      if (uVar1 <= uVar6) goto LAB_00224f3c;
    }
    plVar4 = *(long **)(lVar2 + uVar6 * 8);
  }
  (**(code **)(*plVar4 + 0x10))();
  return 0;
}


