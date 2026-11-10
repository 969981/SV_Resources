/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015c8088; name: FUN_015c8088
 */


void FUN_015c8088(float param_1,float param_2,long param_3,ushort param_4)

{
  ulong uVar1;
  ulong *puVar2;
  
  if ((param_1 != param_2) || (*(char *)(param_3 + 0x50) != '\0')) {
    uVar1 = FUN_015c812c(param_3);
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


