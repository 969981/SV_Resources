/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029858ec; name: FUN_029858ec
 */


undefined4 FUN_029858ec(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_2);
  local_28 = *(undefined1 *)((long)param_2 + 0x1d);
  uVar1 = FUN_01247fd8(*(undefined8 *)(param_1 + 0x78));
  FUN_01247fe0(uVar1,local_38,&local_30);
  return local_38[0];
}


