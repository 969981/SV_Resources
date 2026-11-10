/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b8c88; name: FUN_028b8c88
 */


void FUN_028b8c88(long param_1,ushort param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (((param_3 & 0xffff) != (param_4 & 0xffff)) || (*(char *)(param_1 + 0x50) != '\0')) {
    uVar1 = FUN_028b8d30(param_1,param_3);
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


