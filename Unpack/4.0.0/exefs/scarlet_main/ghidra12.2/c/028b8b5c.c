/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b8b5c; name: FUN_028b8b5c
 */


void FUN_028b8b5c(ushort param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  
  if (param_1 == 0xffff) {
    if (*(long *)(param_2 + 0x48) == 0) {
      *(undefined8 *)(param_2 + 0x48) = 1;
    }
    lVar3 = *(long *)(param_2 + 0x30);
    if (lVar3 == *(long *)(param_2 + 0x38)) {
      FUN_0157184c(param_2,1);
      lVar3 = *(long *)(param_2 + 0x30);
    }
    *(long *)(param_2 + 0x30) = lVar3 + -1;
    *(undefined1 *)(lVar3 + -1) = param_3;
  }
  else if (*(char *)(param_2 + 0x50) != '\0') {
    if (*(long *)(param_2 + 0x48) == 0) {
      *(undefined8 *)(param_2 + 0x48) = 1;
    }
    lVar3 = *(long *)(param_2 + 0x30);
    if (lVar3 == *(long *)(param_2 + 0x38)) {
      FUN_0157184c(param_2,1);
      lVar3 = *(long *)(param_2 + 0x30);
    }
    *(long *)(param_2 + 0x30) = lVar3 + -1;
    *(undefined1 *)(lVar3 + -1) = param_3;
    lVar3 = *(long *)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x28);
    lVar1 = *(long *)(param_2 + 0x30);
    puVar4 = *(ulong **)(param_2 + 0x38);
    if ((ulong)(lVar1 - (long)puVar4) < 8) {
      FUN_0157184c(param_2,8);
      puVar4 = *(ulong **)(param_2 + 0x38);
    }
    *puVar4 = (lVar3 - lVar1) + lVar2 & 0xffffffffU | (ulong)param_1 << 0x20;
    *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
    if (param_1 <= *(ushort *)(param_2 + 0x44)) {
      param_1 = *(ushort *)(param_2 + 0x44);
    }
    *(ushort *)(param_2 + 0x44) = param_1;
  }
  return;
}


