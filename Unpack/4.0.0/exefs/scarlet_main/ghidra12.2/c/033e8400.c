/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033e8400; name: FUN_033e8400
 */


undefined8 FUN_033e8400(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x50),0,
           (ulong)*(uint *)(param_1 + 0x40) * (ulong)*(byte *)(param_1 + 0x30) * 4);
  }
  if ((*(long *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 4) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 8) = 0;
    **(undefined4 **)(param_1 + 0x48) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0xc) = 0;
    if (1 < *(uint *)(param_1 + 0x3c)) {
      lVar2 = 0;
      uVar3 = 1;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar2 + 0x14) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar2 + 0x18) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar2 + 0x10) = 0;
        lVar1 = *(long *)(param_1 + 0x48) + lVar2;
        lVar2 = lVar2 + 0x10;
        *(undefined4 *)(lVar1 + 0x1c) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x3c));
    }
  }
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return 1;
}


