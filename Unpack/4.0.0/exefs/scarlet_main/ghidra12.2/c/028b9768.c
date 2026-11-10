/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028b9768; name: FUN_028b9768
 */


void FUN_028b9768(double param_1,double param_2,long param_3,ushort param_4)

{
  ulong uVar1;
  ulong *puVar2;
  
  if ((param_1 != param_2) || (*(char *)(param_3 + 0x50) != '\0')) {
    uVar1 = FUN_028b9808(param_3);
    puVar2 = *(ulong **)(param_3 + 0x38);
    if ((ulong)(*(long *)(param_3 + 0x30) - (long)puVar2) < 8) {
      FUN_0157184c(param_3,8);
      puVar2 = *(ulong **)(param_3 + 0x38);
    }
    *puVar2 = uVar1 & 0xffffffff | (ulong)param_4 << 0x20;
    *(long *)(param_3 + 0x38) = *(long *)(param_3 + 0x38) + 8;
    *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
    if (param_4 <= *(ushort *)(param_3 + 0x44)) {
      param_4 = *(ushort *)(param_3 + 0x44);
    }
    *(ushort *)(param_3 + 0x44) = param_4;
  }
  return;
}


