/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01248824; name: FUN_01248824
 */


void FUN_01248824(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  (**(code **)(*plVar1 + 0x5e0))();
  FUN_0157acc4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),param_2);
  lVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_0124eb70(param_1,lVar2);
  return;
}


