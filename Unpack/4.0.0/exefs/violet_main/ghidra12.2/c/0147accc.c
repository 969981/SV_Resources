/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147accc; name: FUN_0147accc
 */


void FUN_0147accc(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8);
  uVar1 = FUN_010f9128(*(undefined4 *)(lVar2 + 0x36c),*(undefined1 *)(lVar2 + 0x370),
                       *(undefined1 *)(param_1 + 0x11c));
  FUN_0147ad4c(param_3,*(undefined1 *)(param_1 + 0x11c),*(undefined8 *)(param_1 + 0x208),param_2);
  FUN_0147ad64(param_3,uVar1);
  FUN_0147ad80(param_4,param_3);
  return;
}


