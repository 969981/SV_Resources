/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157190c; name: FUN_0157190c
 */


void FUN_0157190c(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  if (*(ulong *)(param_1 + 0x48) < 4) {
    *(undefined8 *)(param_1 + 0x48) = 4;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = -((int)(param_3 * param_2) +
           (*(int *)(param_1 + 0x20) - (int)lVar1) + *(int *)(param_1 + 0x28));
  uVar5 = (ulong)uVar2 & 3;
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < uVar5) {
    FUN_0157184c(param_1,uVar5);
    puVar3 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
  }
  else {
    puVar3 = (undefined1 *)(lVar1 - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
    if ((uVar2 & 3) == 0) goto LAB_01571974;
  }
  *puVar3 = 0;
  if ((uVar5 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar5 != 2)) {
    uVar4 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar4) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
LAB_01571974:
  if (*(ulong *)(param_1 + 0x48) < param_3) {
    *(ulong *)(param_1 + 0x48) = param_3;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  uVar5 = param_3 - 1 &
          -(param_3 * param_2 +
           (ulong)(uint)((*(int *)(param_1 + 0x20) - (int)lVar1) + *(int *)(param_1 + 0x28)));
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < uVar5) {
    FUN_0157184c(param_1,uVar5);
    puVar3 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
  }
  else {
    puVar3 = (undefined1 *)(lVar1 - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar3;
    if (uVar5 == 0) {
      return;
    }
  }
  *puVar3 = 0;
  if ((uVar5 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar5 != 2)) {
    uVar4 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar4) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}


