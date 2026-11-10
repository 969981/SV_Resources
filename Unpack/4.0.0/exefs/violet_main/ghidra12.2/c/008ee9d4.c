/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ee9d4; name: FUN_008ee9d4
 */


void FUN_008ee9d4(long param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x6c);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_008eef3c(*(long *)(param_1 + 0x38) + lVar2,param_2);
      lVar2 = lVar2 + 0xa8;
    } while ((ulong)uVar1 * 0xa8 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x6a);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_008efc1c(*(long *)(param_1 + 0x28) + lVar2,param_2);
      lVar2 = lVar2 + 0x60;
    } while ((ulong)uVar1 * 0x60 != lVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0x68);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_008ef9b4(*(long *)(param_1 + 0x20) + lVar2,param_2);
      lVar2 = lVar2 + 0x58;
    } while ((ulong)uVar1 * 0x58 != lVar2);
  }
  return;
}


