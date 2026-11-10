/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124e798; name: FUN_0124e798
 */


void FUN_0124e798(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x30));
  FUN_0124f4d0(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 8),uVar1);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x61,param_2);
  return;
}


