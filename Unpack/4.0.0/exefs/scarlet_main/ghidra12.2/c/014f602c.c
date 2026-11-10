/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f602c; name: FUN_014f602c
 */


void FUN_014f602c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar1 + 8) = 0;
      lVar3 = *(long *)(param_1 + 0x60);
      lVar4 = *(long *)(lVar3 + lVar1);
      if (*(char *)(lVar4 + 0x54) != '\0') {
        **(undefined2 **)(lVar4 + 0x30) = 0;
        *(undefined2 *)(lVar4 + 0x52) = 0;
        lVar3 = *(long *)(param_1 + 0x60);
      }
      lVar3 = lVar3 + lVar1;
      lVar1 = lVar1 + 0x18;
      *(ushort *)(lVar3 + 0x12) = *(ushort *)(lVar3 + 0x12) & 0xfffe;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x58));
  }
  return;
}


