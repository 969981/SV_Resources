/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ee8b0; name: FUN_008ee8b0
 */


void FUN_008ee8b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_G3d-13_3_13-Release");
  if ((*(long *)(param_1 + 0xa8) != 0) && (*(long *)(param_1 + 0xb0) != 0)) {
    param_4 = (param_4 - param_1) + *(long *)(*(long *)(param_1 + 0xb0) + 8);
  }
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar2 = 0;
    do {
      FUN_008eea8c(*(long *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
      lVar2 = lVar2 + 0x78;
    } while ((ulong)uVar1 * 0x78 != lVar2);
  }
  return;
}


