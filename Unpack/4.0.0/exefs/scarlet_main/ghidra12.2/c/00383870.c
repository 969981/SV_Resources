/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00383870; name: FUN_00383870
 */


void FUN_00383870(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1734) == 0x10) {
    lVar2 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar2) = *(undefined1 *)(param_1 + 0x1730);
    lVar2 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2 + 1;
    iVar1 = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar2) = *(undefined1 *)(param_1 + 0x1731);
    *(undefined2 *)(param_1 + 0x1730) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1734) < 8) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar2) = *(undefined1 *)(param_1 + 0x1730);
    *(ushort *)(param_1 + 0x1730) = (ushort)*(byte *)(param_1 + 0x1731);
    iVar1 = *(int *)(param_1 + 0x1734) + -8;
  }
  *(int *)(param_1 + 0x1734) = iVar1;
  return;
}


