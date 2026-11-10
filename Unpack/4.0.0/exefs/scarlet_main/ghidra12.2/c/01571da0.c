/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01571da0; name: FUN_01571da0
 */


int FUN_01571da0(long param_1,void *param_2,ulong param_3)

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
  uVar1 = -((int)param_3 + 1 + (*(int *)(param_1 + 0x20) - (int)lVar4) + *(int *)(param_1 + 0x28));
  uVar5 = (ulong)uVar1 & 3;
  if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < uVar5) {
    FUN_0157184c(param_1,uVar5);
    puVar2 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar2;
  }
  else {
    puVar2 = (undefined1 *)(lVar4 - uVar5);
    *(undefined1 **)(param_1 + 0x30) = puVar2;
    if ((uVar1 & 3) == 0) goto LAB_01571e04;
  }
  *puVar2 = 0;
  if ((uVar5 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar5 != 2)) {
    uVar3 = 2;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar3) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar5 != uVar3);
  }
LAB_01571e04:
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == *(long *)(param_1 + 0x38)) {
    FUN_0157184c(param_1,1);
    lVar4 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x30) = lVar4 + -1;
  *(undefined1 *)(lVar4 + -1) = 0;
  if (param_3 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    if ((ulong)(lVar4 - *(long *)(param_1 + 0x38)) < param_3) {
      FUN_0157184c(param_1,param_3);
      lVar4 = *(long *)(param_1 + 0x30);
    }
    *(void **)(param_1 + 0x30) = (void *)(lVar4 - param_3);
    memcpy((void *)(lVar4 - param_3),param_2,param_3);
  }
  FUN_015713f8(param_1,param_3 & 0xffffffff);
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
}


