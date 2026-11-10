/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02980f28; name: FUN_02980f28
 */


void FUN_02980f28(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined2 local_18;
  
  local_28 = param_2;
  uStack_20 = param_3;
  local_18 = param_4;
  uVar1 = FUN_02980f5c(*(undefined8 *)(param_1 + 0x78));
  FUN_02980f64(uVar1,auStack_30,&local_28);
  return;
}


