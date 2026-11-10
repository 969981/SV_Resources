/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01170cc4; name: FUN_01170cc4
 */


void FUN_01170cc4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_2 + 0x38);
  puVar1 = (undefined8 *)(**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,0x50,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar2 + 0xe8))();
  }
  *param_1 = puVar1;
  param_1[1] = puVar2;
  FUN_01170d50(puVar2,puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  return;
}


