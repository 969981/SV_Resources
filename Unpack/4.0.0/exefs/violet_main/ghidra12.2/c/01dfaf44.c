/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfaf44; name: FUN_01dfaf44
 */


void FUN_01dfaf44(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar1 = *(undefined8 **)(param_1 + 0x328);
  if (puVar1 == *(undefined8 **)(param_1 + 0x330)) {
    *(undefined8 *)(param_1 + 0x360) = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x360) = *puVar1;
    *(undefined8 **)(param_1 + 0x330) = puVar1;
  }
  local_18 = param_2;
  uStack_14 = param_3;
  FUN_010e5df0(param_1 + 0x328,&local_18);
  return;
}


