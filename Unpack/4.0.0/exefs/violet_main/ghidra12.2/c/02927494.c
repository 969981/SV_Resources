/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02927494; name: FUN_02927494
 */


void FUN_02927494(long param_1)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  uVar1 = FUN_017e4fe4();
  FUN_0123bab8(&local_38,uVar1,0x33);
  *(undefined1 *)(param_1 + 0x88) = local_28;
  *(undefined8 *)(param_1 + 0x78) = local_38;
  *(undefined8 *)(param_1 + 0x80) = uStack_30;
  return;
}


