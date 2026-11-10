/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b8e04; name: FUN_028b8e04
 */


void FUN_028b8e04(long param_1,ushort param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong *puVar2;
  
  if ((param_3 != param_4) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar1 = FUN_028b8ea8(param_1,param_3);
    puVar2 = *(ulong **)(param_1 + 0x38);
    if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar2) < 8) {
      FUN_0157184c(param_1,8);
      puVar2 = *(ulong **)(param_1 + 0x38);
    }
    *puVar2 = uVar1 & 0xffffffff | (ulong)param_2 << 0x20;
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    if (param_2 <= *(ushort *)(param_1 + 0x44)) {
      param_2 = *(ushort *)(param_1 + 0x44);
    }
    *(ushort *)(param_1 + 0x44) = param_2;
  }
  return;
}


