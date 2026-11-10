/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01247f80; name: FUN_01247f80
 */


undefined4 FUN_01247f80(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = FUN_014813f4(param_1,*param_2);
  local_28 = *(undefined1 *)((long)param_2 + 0x1d);
  FUN_01461214(param_1);
  uVar1 = FUN_01247fd8();
  FUN_01247fe0(uVar1,local_38,&local_30);
  return local_38[0];
}


