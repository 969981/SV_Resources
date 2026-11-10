/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0170adac; name: FUN_0170adac
 */


undefined2 FUN_0170adac(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 0xf8);
  *param_2 = puVar2[4];
  if (*(short *)(puVar2 + 2) == 1) {
    uVar1 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),*puVar2,
                         *(undefined1 *)(param_1 + 0x11c));
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  else if ((*(short *)(puVar2 + 2) == 0) &&
          (uVar1 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),*puVar2,
                                *(undefined1 *)(param_1 + 0x11c)), (uVar1 & 1) == 0)) {
    return 1;
  }
  return *(undefined2 *)(puVar2 + 2);
}


