/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d2590; name: FUN_021d2590
 */


undefined8 FUN_021d2590(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  lVar1 = FUN_021d25f8(param_1 + 0x1a0);
  if (param_1 + 0x1a8 == lVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x1d0);
    local_18 = uVar2;
    FUN_021d2678(param_1 + 0x1a0,param_2,param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
  }
  return uVar2;
}


