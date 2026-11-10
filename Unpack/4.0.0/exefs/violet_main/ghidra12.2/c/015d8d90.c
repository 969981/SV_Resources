/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d8d90; name: FUN_015d8d90
 */


void FUN_015d8d90(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8);
  uVar1 = FUN_010f9128(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),
                       *(undefined1 *)(param_1 + 0x11c));
  uVar1 = FUN_015d8df0(*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x36c),uVar1);
  FUN_015d9120(param_1,param_2,uVar1);
  return;
}


