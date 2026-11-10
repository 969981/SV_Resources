/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02172994; name: FUN_02172994
 */


undefined2 FUN_02172994(long param_1,uint param_2)

{
  undefined2 uVar1;
  long lVar2;
  
  if (param_2 < *(ushort *)(*(long *)(param_1 + 0x68) + 2)) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      lVar2 = param_1 + 0x78;
      FUN_00e38c60(param_1,param_1 + 0x30,
                   *(int *)(*(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x60) * 4 + 0xc)
                   + (param_2 << 3 | 4),lVar2,8);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x70) + (ulong)param_2 * 8 + 4;
    }
    uVar1 = *(undefined2 *)(lVar2 + 6);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


