/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01692a74; name: FUN_01692a74
 */


int FUN_01692a74(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar4 = *(long *)(param_1 + 0x30);
  uVar1 = -((*(int *)(param_1 + 0x20) - (int)lVar4) + *(int *)(param_1 + 0x28));
  uVar5 = (ulong)uVar1 & 3;
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < uVar5) {
    FUN_0157184c(param_1,uVar5);
    puVar2 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar2;
  }
  else {
    puVar2 = (undefined1 *)(lVar4 - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar2;
    if ((uVar1 & 3) == 0) goto LAB_01692acc;
  }
  *puVar2 = 0;
  if ((uVar5 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar5 != 2)) {
    uVar3 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar3) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar5 != uVar3);
  }
LAB_01692acc:
  lVar4 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < 4) {
    FUN_0157184c(param_1,4);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar4 + -4;
  *(undefined4 *)(lVar4 + -4) = param_2;
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
}


